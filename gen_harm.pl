#!/usr/local/bin/perl
use strict;

my $fin;
my $code;
{
	local $/ = undef;
	open $fin, "harmonics_raw.txt" or die "Couldn't open file: $!";
	$code = <$fin>;
	close $fin;
}

$code =~ s/int/double/g;
$code =~ s/func\s+(\d+)\s+(\d+).*?double\s+f/inline double Y_$1_$2/gs;
$code =~ s/\(double\s+(c|s)t\)/(double st, double ct)/gs;
#$code =~ s/\.(\d+)e(\d+)(\W)/.$1d$2$3/gs;
$code =~ s/fabs//gs;

while ($code =~ /inline\s+double\s+?(Y_(\d+)_\w*?(\d+).*?})/gs)
{
	my $func = $1;
	my $n = $2;
	my $m = $3;
	my $c = () = $func =~ /sqrt/g;
	if ($c == 2)
	{
		$func =~ s/(\w+)\s+=\s+sqrt\((.*)\)/$1 = $2/;
		my $id1 = $1;
		$func =~ s/(\w+)\s+=\s+sqrt\((.*)\)/$1 = sqrt( ($2) * $id1 )/;
		
		$func =~ s/(return.*\W)$id1\s+\*/$1/g;
		$func =~ s/(return.*)\*\s+$id1(\W)/$1$2/g;
	}
	
	$func =~ s/(\s+)(\w+)\s+=\s+pow\((.*?),\s+0.2d1\);/$1double tmp_$2 = ($3);$1$2 = tmp_$2 * tmp_$2;/gs;
	
	# Get rid of the sin and cos
# 	$func =~ s/cos\(theta\)/theta/gs;
# 	$func =~ s/theta/costheta/gs;
# 	
# 	Either sin or cos, need to try both
# 	$func =~ s/(cos|sin)\(.*?phi\)/phi/gs;
# 	my $f = $1;
# 	$func =~ s/phi/$f${m}phi/gs;

		
	print "inline double $func\n\n";
	#print "$m  $n\n";
}
