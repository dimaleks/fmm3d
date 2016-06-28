inline double Y_0_0 (double st, double ct)
{
  return(1);
}

inline double Y_1_0 (double st, double ct)
{
  return(ct);
}

inline double Y_1_1 (double st, double ct)
{
  return(-0.7071067811865475d0 * st);
}

inline double Y_2_0 (double st, double ct)
{
  double t1;
  t1 = ct * ct;
  return(-0.5000000000000000d0 + 0.1500000000000000d1 * t1);
}

inline double Y_2_1 (double st, double ct)
{
  return(-0.1224744871391589d1 * ct * st);
}

inline double Y_2_2 (double st, double ct)
{
  double t1;
  t1 = st * st;
  return(0.6123724356957945d0 * t1);
}

inline double Y_3_0 (double st, double ct)
{
  double t1;
  t1 = ct * ct;
  return(ct * (0.2500000000000000d1 * t1 - 0.1500000000000000d1));
}

inline double Y_3_1 (double st, double ct)
{
  double t1;
  t1 = ct * ct;
  return(-0.4330127018922192d0 * (0.5d1 * t1 - 0.1d1) * st);
}

inline double Y_3_2 (double st, double ct)
{
  double t1;
  t1 = st * st;
  return(0.1369306393762915d1 * t1 * ct);
}

inline double Y_3_3 (double st, double ct)
{
  double t1;
  t1 = st * st;
  return(-0.5590169943749475d0 * t1 * st);
}

inline double Y_4_0 (double st, double ct)
{
  double t12705;
  t12705 = ct * ct;
  return(0.3750000000000000d0 + (-0.3750000000000000d1 + 0.4375000000000000d1 * t12705) * t12705);
}

inline double Y_4_1 (double st, double ct)
{
  double t1;
  t1 = ct * ct;
  return(-0.3913118960624632d1 * st * (t1 - 0.4285714285714286d0) * ct);
}

inline double Y_4_2 (double st, double ct)
{
  double t1;
  double t4;
  t1 = ct * ct;
  t4 = st * st;
  return(0.3952847075210474d0 * t4 * (0.7d1 * t1 - 0.1d1));
}

inline double Y_4_3 (double st, double ct)
{
  double t1;
  t1 = st * st;
  return(-0.1479019945774904d1 * ct * t1 * st);
}

inline double Y_4_4 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.5229125165837972d0 * t2);
}

inline double Y_5_0 (double st, double ct)
{
  double t12711;
  t12711 = ct * ct;
  return((0.1875000000000000d1 + (0.7875000000000000d1 * t12711 - 0.8750000000000000d1) * t12711) * ct);
}

inline double Y_5_1 (double st, double ct)
{
  double t12714;
  t12714 = ct * ct;
  return(-0.3423265984407288d0 * st * (0.1d1 + (-0.14d2 + 0.21d2 * t12714) * t12714));
}

inline double Y_5_2 (double st, double ct)
{
  double t1;
  double t5;
  t1 = ct * ct;
  t5 = st * st;
  return(0.1811422093273680d1 * t5 * (0.3d1 * t1 - 0.1d1) * ct);
}

inline double Y_5_3 (double st, double ct)
{
  double t1;
  double t3;
  t1 = st * st;
  t3 = ct * ct;
  return(-0.3697549864437260d0 * (0.9d1 * t3 - 0.1d1) * t1 * st);
}

inline double Y_5_4 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1568737549751392d1 * t2 * ct);
}

inline double Y_5_5 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.4960783708246108d0 * t2 * st);
}

inline double Y_6_0 (double st, double ct)
{
  double t12723;
  double t12724;
  t12723 = ct * ct;
  t12724 = t12723 * t12723;
  return(-0.1968750000000000d2 * t12724 - 0.3125000000000000d0 + (0.1443750000000000d2 * t12724 + 0.6562500000000000d1) * t12723);
}

inline double Y_6_1 (double st, double ct)
{
  double t12726;
  t12726 = ct * ct;
  return(-0.4050462936504912d0 * st * ct * (0.5d1 + (-0.30d2 + 0.33d2 * t12726) * t12726));
}

inline double Y_6_2 (double st, double ct)
{
  double t12728;
  double t5;
  t12728 = ct * ct;
  t5 = st * st;
  return(0.3202172114362375d0 * t5 * (0.1d1 + (-0.18d2 + 0.33d2 * t12728) * t12728));
}

inline double Y_6_3 (double st, double ct)
{
  double t1;
  double t4;
  t1 = st * st;
  t4 = ct * ct;
  return(-0.6404344228724750d0 * (0.11d2 * t4 - 0.3d1) * t1 * st * ct);
}

inline double Y_6_4 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = ct * ct;
  return(0.3507803800100570d0 * (0.11d2 * t3 - 0.1d1) * t2);
}

inline double Y_6_5 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1645305822636023d1 * ct * t2 * st);
}

inline double Y_6_6 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4749588797990831d0 * t1 * t2);
}

inline double Y_7_0 (double st, double ct)
{
  double t12740;
  t12740 = ct * ct;
  return((-0.2187500000000000d1 + (0.1968750000000000d2 + (0.2681250000000000d2 * t12740 - 0.4331250000000000d2) * t12740) * t12740) * ct);
}

inline double Y_7_1 (double st, double ct)
{
  double t12744;
  double t12745;
  t12744 = ct * ct;
  t12745 = t12744 * t12744;
  return(-0.5846339666834283e-1 * st * (-0.495d3 * t12745 - 0.5d1 + (0.429d3 * t12745 + 0.135d3) * t12744));
}

inline double Y_7_2 (double st, double ct)
{
  double t12747;
  double t6;
  t12747 = ct * ct;
  t6 = st * st;
  return(0.1432054904673700d0 * t6 * (0.15d2 + (-0.110d3 + 0.143d3 * t12747) * t12747) * ct);
}

inline double Y_7_3 (double st, double ct)
{
  double t1;
  double t12749;
  t12749 = ct * ct;
  t1 = st * st;
  return(-0.1012615734126228d0 * (0.3d1 + (-0.66d2 + 0.143d3 * t12749) * t12749) * t1 * st);
}

inline double Y_7_4 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  return(0.6716932893813962d0 * t6 * (0.13d2 * t1 - 0.3d1) * ct);
}

inline double Y_7_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = ct * ct;
  return(-0.3358466446906981d0 * (0.13d2 * t4 - 0.1d1) * t2 * st);
}

inline double Y_7_6 (double st, double ct)
{
  double t1;
  double t2;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1712488594852532d1 * t2 * t1 * ct);
}

inline double Y_7_7 (double st, double ct)
{
  double t1;
  double t3;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.4576818286211503d0 * t3 * t1 * st);
}

inline double Y_8_0 (double st, double ct)
{
  double t12765;
  double t12766;
  t12765 = ct * ct;
  t12766 = t12765 * t12765;
  return(0.2734375000000000d0 - 0.9843750000000000d1 * t12765 + (-0.9384375000000000d2 * t12765 + 0.5414062500000000d2 + 0.5027343750000000d2 * t12766) * t12766);
}

inline double Y_8_1 (double st, double ct)
{
  double t12769;
  double t12770;
  t12769 = ct * ct;
  t12770 = t12769 * t12769;
  return(-0.6629126073623883e-1 * st * ct * (-0.1001d4 * t12770 - 0.35d2 + (0.715d3 * t12770 + 0.385d3) * t12769));
}

inline double Y_8_2 (double st, double ct)
{
  double t1;
  double t12772;
  double t12775;
  double t5;
  t12772 = ct * ct;
  t1 = t12772 * t12772;
  t12775 = 0.143d3 * t1;
  t5 = st * st;
  return(0.2773162398327945d0 * t5 * (-0.1d1 - t12775 + (0.33d2 + t12775) * t12772));
}

inline double Y_8_3 (double st, double ct)
{
  double t1;
  double t12776;
  t12776 = ct * ct;
  t1 = st * st;
  return(-0.7509759275436197d0 * (0.3d1 + (-0.26d2 + 0.39d2 * t12776) * t12776) * ct * t1 * st);
}

inline double Y_8_4 (double st, double ct)
{
  double t1;
  double t12780;
  double t2;
  t12780 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2908517260779108d0 * (0.1d1 + (-0.26d2 + 0.65d2 * t12780) * t12780) * t2);
}

inline double Y_8_5 (double st, double ct)
{
  double t1;
  double t2;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t5 = ct * ct;
  return(-0.2097361623862228d1 * (0.5d1 * t5 - 0.1d1) * t2 * st * ct);
}

inline double Y_8_6 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = ct * ct;
  return(0.3236299246438747d0 * (0.15d2 * t4 - 0.1d1) * t2 * t1);
}

inline double Y_8_7 (double st, double ct)
{
  double t1;
  double t3;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.1772594100111472d1 * ct * t3 * t1 * st);
}

inline double Y_8_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4431485250278680d0 * t3);
}

inline double Y_9_0 (double st, double ct)
{
  double t12797;
  t12797 = ct * ct;
  return((0.2460937500000000d1 + (-0.3609375000000000d2 + (0.1407656250000000d3 + (0.9496093750000000d2 * t12797 - 0.2010937500000000d3) * t12797) * t12797) * t12797) * ct);
}

inline double Y_9_1 (double st, double ct)
{
  double t12802;
  double t12803;
  t12802 = ct * ct;
  t12803 = t12802 * t12802;
  return(-0.3705794133009819e-1 * st * (-0.308d3 * t12802 + 0.7d1 + (-0.4004d4 * t12802 + 0.2002d4 + 0.2431d4 * t12803) * t12803));
}

inline double Y_9_2 (double st, double ct)
{
  double t12806;
  double t12807;
  double t7;
  t12806 = ct * ct;
  t12807 = t12806 * t12806;
  t7 = st * st;
  return(0.3476343040826092d0 * t7 * (-0.273d3 * t12807 - 0.7d1 + (0.221d3 * t12807 + 0.91d2) * t12806) * ct);
}

inline double Y_9_3 (double st, double ct)
{
  double t1;
  double t12809;
  double t12810;
  t12809 = ct * ct;
  t12810 = t12809 * t12809;
  t1 = st * st;
  return(-0.2655100854369755d0 * (-0.195d3 * t12810 - 0.1d1 + (0.221d3 * t12810 + 0.39d2) * t12809) * t1 * st);
}

inline double Y_9_4 (double st, double ct)
{
  double t12814;
  double t6;
  double t7;
  t12814 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.2344921582177643d1 * t7 * (0.1d1 + (-0.10d2 + 0.17d2 * t12814) * t12814) * ct);
}

inline double Y_9_5 (double st, double ct)
{
  double t1;
  double t12818;
  double t2;
  t12818 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.2802717361664391d0 * (0.1d1 + (-0.30d2 + 0.85d2 * t12818) * t12818) * t2 * st);
}

inline double Y_9_6 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  return(0.7236585110568381d0 * t6 * t5 * (0.17d2 * t1 - 0.3d1) * ct);
}

inline double Y_9_7 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = ct * ct;
  return(-0.3133533271200220d0 * (0.17d2 * t5 - 0.1d1) * t3 * t1 * st);
}

inline double Y_9_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.1827148176526571d1 * t3 * ct);
}

inline double Y_9_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.4306629552848578d0 * t3 * st);
}

inline double Y_10_0 (double st, double ct)
{
  double t12837;
  double t12838;
  double t12840;
  t12837 = ct * ct;
  t12838 = t12837 * t12837;
  t12840 = t12838 * t12838;
  return(-0.2460937500000000d0 - 0.4273242187500000d3 * t12840 - 0.1173046875000000d3 * t12838 + (0.1804257812500000d3 * t12840 + 0.3519140625000000d3 * t12838 + 0.1353515625000000d2) * t12837);
}

inline double Y_10_1 (double st, double ct)
{
  double t12842;
  double t12843;
  t12842 = ct * ct;
  t12843 = t12842 * t12842;
  return(-0.4096909563164656e-1 * st * ct * (-0.1092d4 * t12842 + 0.63d2 + (-0.7956d4 * t12842 + 0.4914d4 + 0.4199d4 * t12843) * t12843));
}

inline double Y_10_2 (double st, double ct)
{
  double t1;
  double t12846;
  double t12847;
  t12846 = ct * ct;
  t12847 = t12846 * t12846;
  t1 = st * st;
  return(0.3548027758707998e-1 * (-0.364d3 * t12846 + 0.7d1 + (-0.6188d4 * t12846 + 0.2730d4 + 0.4199d4 * t12847) * t12847) * t1);
}

inline double Y_10_3 (double st, double ct)
{
  double t1;
  double t12850;
  double t12851;
  t12850 = ct * ct;
  t12851 = t12850 * t12850;
  t1 = st * st;
  return(-0.3618292555284191d0 * (-0.357d3 * t12851 - 0.7d1 + (0.323d3 * t12851 + 0.105d3) * t12850) * ct * t1 * st);
}

inline double Y_10_4 (double st, double ct)
{
  double t1;
  double t12855;
  double t12856;
  double t2;
  t12855 = ct * ct;
  t12856 = t12855 * t12855;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2558519202158252d0 * (-0.255d3 * t12856 - 0.1d1 + (0.323d3 * t12856 + 0.45d2) * t12855) * t2);
}

inline double Y_10_5 (double st, double ct)
{
  double t1;
  double t12860;
  double t2;
  t12860 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1618149623219373d0 * (0.15d2 + (-0.170d3 + 0.323d3 * t12860) * t12860) * ct * t2 * st);
}

inline double Y_10_6 (double st, double ct)
{
  double t1;
  double t12865;
  double t2;
  t12865 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.9045731388210477e-1 * (0.3d1 + (-0.102d3 + 0.323d3 * t12865) * t12865) * t2 * t1);
}

inline double Y_10_7 (double st, double ct)
{
  double t1;
  double t3;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t6 = ct * ct;
  return(-0.7459301194911375d0 * (0.19d2 * t6 - 0.3d1) * t3 * t1 * st * ct);
}

inline double Y_10_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = ct * ct;
  return(0.3045246960877619d0 * (0.19d2 * t4 - 0.1d1) * t3);
}

inline double Y_10_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.1877216300813271d1 * ct * t3 * st);
}

inline double Y_10_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4197583257089168d0 * t3 * t1);
}

inline double Y_11_0 (double st, double ct)
{
  double t12885;
  t12885 = ct * ct;
  return((-0.2707031250000000d1 + (0.5865234375000000d2 + (-0.3519140625000000d3 + (0.8546484375000000d3 + (0.3444492187500000d3 * t12885 - 0.9021289062500000d3) * t12885) * t12885) * t12885) * t12885) * ct);
}

inline double Y_11_1 (double st, double ct)
{
  double t12891;
  double t12892;
  double t12894;
  t12891 = ct * ct;
  t12892 = t12891 * t12891;
  t12894 = t12892 * t12892;
  return(-0.1121984891901959e-1 * st * (-0.62985d5 * t12894 - 0.13650d5 * t12892 - 0.21d2 + (0.29393d5 * t12894 + 0.46410d5 * t12892 + 0.1365d4) * t12891));
}

inline double Y_11_2 (double st, double ct)
{
  double t12896;
  double t12897;
  double t8;
  t12896 = ct * ct;
  t12897 = t12896 * t12896;
  t8 = st * st;
  return(0.1279259601079126d0 * t8 * (-0.420d3 * t12896 + 0.21d2 + (-0.3876d4 * t12896 + 0.2142d4 + 0.2261d4 * t12897) * t12897) * ct);
}

inline double Y_11_3 (double st, double ct)
{
  double t1;
  double t12900;
  double t12901;
  t12900 = ct * ct;
  t12901 = t12900 * t12900;
  t1 = st * st;
  return(-0.2393275567989600d0 * (-0.60d2 * t12900 + 0.1d1 + (-0.1292d4 * t12900 + 0.510d3 + 0.969d3 * t12901) * t12901) * t1 * st);
}

inline double Y_11_4 (double st, double ct)
{
  double t1;
  double t12906;
  double t12911;
  double t6;
  double t7;
  t12906 = ct * ct;
  t1 = t12906 * t12906;
  t12911 = 0.323d3 * t1;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.5243404059655569d0 * t7 * (-0.5d1 - t12911 + (0.85d2 + t12911) * t12906) * ct);
}

inline double Y_11_5 (double st, double ct)
{
  double t1;
  double t12912;
  double t12913;
  double t2;
  t12912 = ct * ct;
  t12913 = t12912 * t12912;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.4954551130455398e-1 * (-0.1615d4 * t12913 - 0.5d1 + (0.2261d4 * t12913 + 0.255d3) * t12912) * t2 * st);
}

inline double Y_11_6 (double st, double ct)
{
  double t12918;
  double t6;
  double t7;
  t12918 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.1667950453646724d0 * t7 * t6 * (0.15d2 + (-0.190d3 + 0.399d3 * t12918) * t12918) * ct);
}

inline double Y_11_7 (double st, double ct)
{
  double t1;
  double t12923;
  double t3;
  t12923 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2637261228917375d0 * (0.1d1 + (-0.38d2 + 0.133d3 * t12923) * t12923) * t3 * t1 * st);
}

inline double Y_11_8 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  return(0.2299111036913744d1 * t7 * (0.7d1 * t1 - 0.1d1) * ct);
}

inline double Y_11_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = ct * ct;
  return(-0.2968139585682866d0 * (0.21d2 * t5 - 0.1d1) * t3 * st);
}

inline double Y_11_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.1923574301149039d1 * t3 * t1 * ct);
}

inline double Y_11_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.4101074189682180d0 * t4 * t1 * st);
}

inline double Y_12_0 (double st, double ct)
{
  double t12945;
  double t12946;
  double t12947;
  double t12948;
  t12945 = ct * ct;
  t12946 = t12945 * t12945;
  t12948 = t12946 * t12946;
  t12947 = t12945 * t12946;
  return(0.2255859375000000d0 + 0.2029790039062500d4 * t12948 + 0.2199462890625000d3 * t12946 + (-0.9970898437500000d3 + 0.6601943359375000d3 * t12947) * t12947 + (-0.1894470703125000d4 * t12948 - 0.1759570312500000d2) * t12945);
}

inline double Y_12_1 (double st, double ct)
{
  double t12951;
  double t12952;
  double t12954;
  t12951 = ct * ct;
  t12952 = t12951 * t12951;
  t12954 = t12952 * t12952;
  return(-0.1219726171562187e-1 * ct * st * (-0.124355d6 * t12954 - 0.39270d5 * t12952 - 0.231d3 + (0.52003d5 * t12954 + 0.106590d6 * t12952 + 0.5775d4) * t12951));
}

inline double Y_12_2 (double st, double ct)
{
  double t1;
  double t12956;
  double t12957;
  double t12959;
  t12956 = ct * ct;
  t12957 = t12956 * t12956;
  t12959 = t12957 * t12957;
  t1 = st * st;
  return(0.7568201863280298e-1 * (-0.14535d5 * t12959 - 0.2550d4 * t12957 - 0.3d1 + (0.7429d4 * t12959 + 0.9690d4 * t12957 + 0.225d3) * t12956) * t1);
}

inline double Y_12_3 (double st, double ct)
{
  double t1;
  double t12961;
  double t12962;
  t12961 = ct * ct;
  t12962 = t12961 * t12961;
  t1 = st * st;
  return(-0.6179410945139209e-1 * (-0.1020d4 * t12961 + 0.45d2 + (-0.11628d5 * t12961 + 0.5814d4 + 0.7429d4 * t12962) * t12962) * t1 * st * ct);
}

inline double Y_12_4 (double st, double ct)
{
  double t1;
  double t12967;
  double t12968;
  double t2;
  t12967 = ct * ct;
  t12968 = t12967 * t12967;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4634558208854407e-1 * (-0.340d3 * t12967 + 0.5d1 + (-0.9044d4 * t12967 + 0.3230d4 + 0.7429d4 * t12968) * t12968) * t2);
}

inline double Y_12_5 (double st, double ct)
{
  double t1;
  double t12973;
  double t12974;
  double t2;
  t12973 = ct * ct;
  t12974 = t12973 * t12973;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.5404777193938090d0 * (-0.399d3 * t12974 - 0.5d1 + (0.437d3 * t12974 + 0.95d2) * t12973) * t2 * st * ct);
}

inline double Y_12_6 (double st, double ct)
{
  double t1;
  double t12979;
  double t12980;
  double t2;
  t12979 = ct * ct;
  t12980 = t12979 * t12979;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4814958217039473e-1 * (-0.1995d4 * t12980 - 0.5d1 + (0.3059d4 * t12980 + 0.285d3) * t12979) * t2 * t1);
}

inline double Y_12_7 (double st, double ct)
{
  double t1;
  double t12985;
  double t3;
  t12985 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.5140968566359161d0 * (0.5d1 + (-0.70d2 + 0.161d3 * t12985) * t12985) * ct * t3 * t1 * st);
}

inline double Y_12_8 (double st, double ct)
{
  double t1;
  double t12991;
  double t2;
  double t3;
  t12991 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2570484283179581d0 * (0.1d1 + (-0.42d2 + 0.161d3 * t12991) * t12991) * t3);
}

inline double Y_12_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t6 = ct * ct;
  return(-0.7852959200243153d0 * (0.23d2 * t6 - 0.3d1) * t3 * st * ct);
}

inline double Y_12_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = ct * ct;
  return(0.2899897369673395d0 * (0.23d2 * t5 - 0.1d1) * t3 * t1);
}

inline double Y_12_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1966806087832196d1 * ct * t4 * t1 * st);
}

inline double Y_12_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4014726115157063d0 * t3 * t2);
}

inline double Y_13_0 (double st, double ct)
{
  double t13013;
  t13013 = ct * ct;
  return((0.2932617187500000d1 + (-0.8797851562500000d2 + (0.7478173828125000d3 + (-0.2706386718750000d4 + (0.4736176757812500d4 + (0.1269604492187500d4 * t13013 - 0.3961166015625000d4) * t13013) * t13013) * t13013) * t13013) * t13013) * ct);
}

inline double Y_13_1 (double st, double ct)
{
  double t13020;
  double t13021;
  double t13022;
  double t13023;
  t13020 = ct * ct;
  t13021 = t13020 * t13020;
  t13023 = t13021 * t13021;
  t13022 = t13020 * t13021;
  return(-0.6587274200796895e-2 * st * (0.479655d6 * t13023 + 0.42075d5 * t13021 + 0.33d2 + (-0.213180d6 + 0.185725d6 * t13022) * t13022 + (-0.490314d6 * t13023 - 0.2970d4) * t13020));
}

inline double Y_13_2 (double st, double ct)
{
  double t13026;
  double t13027;
  double t13029;
  double t9;
  t13026 = ct * ct;
  t13027 = t13026 * t13026;
  t13029 = t13027 * t13027;
  t9 = st * st;
  return(0.2945918579882491e-1 * t9 * (-0.81719d5 * t13029 - 0.21318d5 * t13027 - 0.99d2 + (0.37145d5 * t13029 + 0.63954d5 * t13027 + 0.2805d4) * t13026) * ct);
}

inline double Y_13_3 (double st, double ct)
{
  double t1;
  double t13031;
  double t13032;
  double t13034;
  t13031 = ct * ct;
  t13032 = t13031 * t13031;
  t13034 = t13032 * t13032;
  t1 = st * st;
  return(-0.2442626648101711e-1 * (-0.66861d5 * t13034 - 0.9690d4 * t13032 - 0.9d1 + (0.37145d5 * t13034 + 0.40698d5 * t13032 + 0.765d3) * t13031) * t1 * st);
}

inline double Y_13_4 (double st, double ct)
{
  double t13038;
  double t13039;
  double t8;
  double t9;
  t13038 = ct * ct;
  t13039 = t13038 * t13038;
  t8 = st * st;
  t9 = t8 * t8;
  return(0.6369591007726704e-1 * t9 * (-0.1140d4 * t13038 + 0.45d2 + (-0.15732d5 * t13038 + 0.7182d4 + 0.10925d5 * t13039) * t13039) * ct);
}

inline double Y_13_5 (double st, double ct)
{
  double t1;
  double t13044;
  double t13045;
  double t2;
  t13044 = ct * ct;
  t13045 = t13044 * t13044;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.4503980994948408e-1 * (-0.380d3 * t13044 + 0.5d1 + (-0.12236d5 * t13044 + 0.3990d4 + 0.10925d5 * t13045) * t13045) * t2 * st);
}

inline double Y_13_6 (double st, double ct)
{
  double t13051;
  double t13052;
  double t7;
  double t8;
  t13051 = ct * ct;
  t13052 = t13051 * t13051;
  t7 = st * st;
  t8 = t7 * t7;
  return(0.5552880702873221d0 * t8 * t7 * (-0.483d3 * t13052 - 0.5d1 + (0.575d3 * t13052 + 0.105d3) * t13051) * ct);
}

inline double Y_13_7 (double st, double ct)
{
  double t1;
  double t13057;
  double t13058;
  double t3;
  t13057 = ct * ct;
  t13058 = t13057 * t13057;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2346520376016589d0 * (-0.483d3 * t13058 - 0.1d1 + (0.805d3 * t13058 + 0.63d2) * t13057) * t3 * t1 * st);
}

inline double Y_13_8 (double st, double ct)
{
  double t13064;
  double t6;
  double t7;
  double t8;
  t13064 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.8779875298138037d0 * t8 * (0.3d1 + (-0.46d2 + 0.115d3 * t13064) * t13064) * ct);
}

inline double Y_13_9 (double st, double ct)
{
  double t1;
  double t13069;
  double t2;
  double t3;
  t13069 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8371282635016108e-1 * (0.3d1 + (-0.138d3 + 0.575d3 * t13069) * t13069) * t3 * st);
}

inline double Y_13_10 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  return(0.8029452230314126d0 * t7 * t5 * (0.25d2 * t1 - 0.3d1) * ct);
}

inline double Y_13_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t6 = ct * ct;
  return(-0.2838840060634282d0 * (0.25d2 * t6 - 0.1d1) * t4 * t1 * st);
}

inline double Y_13_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2007363057578531d1 * t3 * t2 * ct);
}

inline double Y_13_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.3936762846714696d0 * t4 * t2 * st);
}

inline double Y_14_0 (double st, double ct)
{
  double t13093;
  double t13094;
  double t13095;
  double t13096;
  double t13098;
  t13093 = ct * ct;
  t13094 = t13093 * t13093;
  t13095 = t13093 * t13094;
  t13098 = t13095 * t13095;
  t13096 = t13094 * t13094;
  return(-0.8252429199218750d4 * t13098 - 0.7104265136718750d4 * t13096 + 0.2368088378906250d4 * t13095 - 0.3739086914062500d3 * t13094 - 0.2094726562500000d0 + (0.2448522949218750d4 * t13098 + 0.1089320654296875d5 * t13096 + 0.2199462890625000d2) * t13093);
}

inline double Y_14_1 (double st, double ct)
{
  double t13100;
  double t13101;
  double t13102;
  double t13103;
  t13100 = ct * ct;
  t13101 = t13100 * t13100;
  t13103 = t13101 * t13101;
  t13102 = t13100 * t13101;
  return(-0.7075867551850312e-2 * ct * st * (0.1062347d7 * t13103 + 0.138567d6 * t13101 + 0.429d3 + (-0.554268d6 + 0.334305d6 * t13102) * t13102 + (-0.965770d6 * t13103 - 0.14586d5) * t13100));
}

inline double Y_14_2 (double st, double ct)
{
  double t1;
  double t13106;
  double t13107;
  double t13108;
  double t13109;
  t13106 = ct * ct;
  t13107 = t13106 * t13106;
  t13109 = t13107 * t13107;
  t13108 = t13107 * t13106;
  t1 = st * st;
  return(0.6378100819147037e-2 * (0.735471d6 * t13109 + 0.53295d5 * t13107 + 0.33d2 + (-0.298452d6 + 0.334305d6 * t13108) * t13108 + (-0.817190d6 * t13109 - 0.3366d4) * t13106) * t1);
}

inline double Y_14_3 (double st, double ct)
{
  double t1;
  double t13112;
  double t13113;
  double t13115;
  t13112 = ct * ct;
  t13113 = t13112 * t13112;
  t13115 = t13113 * t13113;
  t1 = st * st;
  return(-0.3036583367331272e-1 * (-0.120175d6 * t13115 - 0.26334d5 * t13113 - 0.99d2 + (0.58995d5 * t13115 + 0.86526d5 * t13113 + 0.3135d4) * t13112) * t1 * st * ct);
}

inline double Y_14_4 (double st, double ct)
{
  double t1;
  double t13119;
  double t13120;
  double t13122;
  double t2;
  t13119 = ct * ct;
  t13120 = t13119 * t13119;
  t13122 = t13120 * t13120;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2136425772322245d0 * (-0.10925d5 * t13122 - 0.1330d4 * t13120 - 0.1d1 + (0.6555d4 * t13122 + 0.6118d4 * t13120 + 0.95d2) * t13119) * t2);
}

inline double Y_14_5 (double st, double ct)
{
  double t1;
  double t13126;
  double t13127;
  double t2;
  t13126 = ct * ct;
  t13127 = t13126 * t13126;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.5889719400182365d0 * (-0.140d3 * t13126 + 0.5d1 + (-0.2300d4 * t13126 + 0.966d3 + 0.1725d4 * t13127) * t13127) * ct * t2 * st);
}

inline double Y_14_6 (double st, double ct)
{
  double t1;
  double t13133;
  double t13134;
  double t2;
  t13133 = ct * ct;
  t13134 = t13133 * t13133;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2194968824534509d0 * (-0.84d2 * t13133 + 0.1d1 + (-0.3220d4 * t13133 + 0.966d3 + 0.3105d4 * t13134) * t13134) * t2 * t1);
}

inline double Y_14_7 (double st, double ct)
{
  double t1;
  double t13140;
  double t13141;
  double t3;
  t13140 = ct * ct;
  t13141 = t13140 * t13140;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.4064292512256359d0 * (-0.805d3 * t13141 - 0.7d1 + (0.1035d4 * t13141 + 0.161d3) * t13140) * t3 * t1 * st * ct);
}

inline double Y_14_8 (double st, double ct)
{
  double t1;
  double t13147;
  double t13148;
  double t2;
  double t3;
  t13147 = ct * ct;
  t13148 = t13147 * t13147;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2292570167224805d0 * (-0.575d3 * t13148 - 0.1d1 + (0.1035d4 * t13148 + 0.69d2) * t13147) * t3);
}

inline double Y_14_9 (double st, double ct)
{
  double t1;
  double t13153;
  double t2;
  double t3;
  t13153 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8977200504534839d0 * (0.3d1 + (-0.50d2 + 0.135d3 * t13153) * t13153) * t3 * st * ct);
}

inline double Y_14_10 (double st, double ct)
{
  double t1;
  double t13159;
  double t2;
  double t3;
  t13159 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2458507609790245d0 * (0.1d1 + (-0.50d2 + 0.225d3 * t13159) * t13159) * t3 * t1);
}

inline double Y_14_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t7;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t7 = ct * ct;
  return(-0.2458507609790245d1 * (0.9d1 * t7 - 0.1d1) * t4 * t1 * st * ct);
}

inline double Y_14_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = ct * ct;
  return(0.2783711704835219d0 * (0.27d2 * t5 - 0.1d1) * t3 * t2);
}

inline double Y_14_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2045601980357802d1 * ct * t4 * t2 * st);
}

inline double Y_14_14 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.3865824372462841d0 * t4 * t2 * t1);
}

inline double Y_15_0 (double st, double ct)
{
  double t13184;
  t13184 = ct * ct;
  return((-0.3142089843750000d1 + (0.1246362304687500d3 + (-0.1420853027343750d4 + (0.7104265136718750d4 + (-0.1815534423828125d5 + (0.2475728759765625d5 + (0.4733811035156250d4 * t13184 - 0.1713966064453125d5) * t13184) * t13184) * t13184) * t13184) * t13184) * t13184) * ct);
}

inline double Y_15_1 (double st, double ct)
{
  double t13192;
  double t13193;
  double t13194;
  double t13195;
  double t13197;
  t13192 = ct * ct;
  t13193 = t13192 * t13192;
  t13194 = t13192 * t13193;
  t13197 = t13194 * t13194;
  t13195 = t13193 * t13193;
  return(-0.4727762873788351e-3 * st * (-0.30421755d8 * t13197 - 0.22309287d8 * t13195 + 0.6789783d7 * t13194 - 0.969969d6 * t13193 - 0.429d3 + (0.9694845d7 * t13197 + 0.37182145d8 * t13195 + 0.51051d5) * t13192));
}

inline double Y_15_2 (double st, double ct)
{
  double t11;
  double t13199;
  double t13200;
  double t13201;
  double t13202;
  t13199 = ct * ct;
  t13200 = t13199 * t13199;
  t13202 = t13200 * t13200;
  t13201 = t13200 * t13199;
  t11 = st * st;
  return(0.7293637327289871e-2 * t11 * (0.1562275d7 * t13202 + 0.171171d6 * t13200 + 0.429d3 + (-0.749892d6 + 0.570285d6 * t13201) * t13201 + (-0.1533870d7 * t13202 - 0.16302d5) * t13199) * ct);
}

inline double Y_15_3 (double st, double ct)
{
  double t1;
  double t13205;
  double t13206;
  double t13207;
  double t13208;
  t13205 = ct * ct;
  t13206 = t13205 * t13205;
  t13208 = t13206 * t13206;
  t13207 = t13206 * t13205;
  t1 = st * st;
  return(-0.1859519952845989e-1 * (0.360525d6 * t13208 + 0.21945d5 * t13206 + 0.11d2 + (-0.134596d6 + 0.190095d6 * t13207) * t13207 + (-0.432630d6 * t13208 - 0.1254d4) * t13205) * t1 * st);
}

inline double Y_15_4 (double st, double ct)
{
  double t10;
  double t13213;
  double t13214;
  double t13216;
  double t9;
  t13213 = ct * ct;
  t13214 = t13213 * t13213;
  t13216 = t13214 * t13214;
  t9 = st * st;
  t10 = t9 * t9;
  return(0.2807813554613938d0 * t10 * (-0.18975d5 * t13216 - 0.3542d4 * t13214 - 0.11d2 + (0.10005d5 * t13216 + 0.12650d5 * t13214 + 0.385d3) * t13213) * ct);
}

inline double Y_15_5 (double st, double ct)
{
  double t1;
  double t13220;
  double t13221;
  double t13223;
  double t2;
  t13220 = ct * ct;
  t13221 = t13220 * t13220;
  t13223 = t13221 * t13221;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.2082330263577458d0 * (-0.15525d5 * t13223 - 0.1610d4 * t13221 - 0.1d1 + (0.10005d5 * t13223 + 0.8050d4 * t13221 + 0.105d3) * t13220) * t2 * st);
}

inline double Y_15_6 (double st, double ct)
{
  double t13228;
  double t13229;
  double t8;
  double t9;
  t13228 = ct * ct;
  t13229 = t13228 * t13228;
  t8 = st * st;
  t9 = t8 * t8;
  return(0.1436944398071090d0 * t9 * t8 * (-0.644d3 * t13228 + 0.21d2 + (-0.12420d5 * t13228 + 0.4830d4 + 0.10005d5 * t13229) * t13229) * ct);
}

inline double Y_15_7 (double st, double ct)
{
  double t1;
  double t13235;
  double t13236;
  double t3;
  t13235 = ct * ct;
  t13236 = t13235 * t13235;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.3063575750319379e-1 * (-0.644d3 * t13235 + 0.7d1 + (-0.28980d5 * t13235 + 0.8050d4 + 0.30015d5 * t13236) * t13236) * t3 * t1 * st);
}

inline double Y_15_8 (double st, double ct)
{
  double t13243;
  double t13244;
  double t7;
  double t8;
  double t9;
  t13243 = ct * ct;
  t13244 = t13243 * t13243;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.4155636333393323d0 * t9 * (-0.945d3 * t13244 - 0.7d1 + (0.1305d4 * t13244 + 0.175d3) * t13243) * ct);
}

inline double Y_15_9 (double st, double ct)
{
  double t1;
  double t13249;
  double t13250;
  double t2;
  double t3;
  t13249 = ct * ct;
  t13250 = t13249 * t13249;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.2244300126133710d0 * (-0.675d3 * t13250 - 0.1d1 + (0.1305d4 * t13250 + 0.75d2) * t13249) * t3 * st);
}

inline double Y_15_10 (double st, double ct)
{
  double t13256;
  double t6;
  double t7;
  double t8;
  t13256 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.5497390138691516d0 * t8 * t6 * (0.5d1 + (-0.90d2 + 0.261d3 * t13256) * t13256) * ct);
}

inline double Y_15_11 (double st, double ct)
{
  double t1;
  double t13262;
  double t3;
  double t4;
  t13262 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.2410765053199388d0 * (0.1d1 + (-0.54d2 + 0.261d3 * t13262) * t13262) * t4 * t1 * st);
}

inline double Y_15_12 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  return(0.8351135114505656d0 * t7 * t6 * (0.29d2 * t1 - 0.3d1) * ct);
}

inline double Y_15_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t6 = ct * ct;
  return(-0.2733550628644704d0 * (0.29d2 * t6 - 0.1d1) * t4 * t2 * st);
}

inline double Y_15_14 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.2081810136114972d1 * t4 * t2 * t1 * ct);
}

inline double Y_15_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.3800847906643568d0 * t5 * t3 * t1 * st);
}

inline double Y_16_0 (double st, double ct)
{
  double t13289;
  double t13290;
  double t13291;
  double t13292;
  double t13294;
  t13289 = ct * ct;
  t13290 = t13289 * t13289;
  t13291 = t13289 * t13290;
  t13294 = t13291 * t13291;
  t13292 = t13290 * t13290;
  return(0.1963806152343750d0 + 0.5570389709472656d5 * t13294 - 0.4972985595703125d4 * t13291 + 0.5920220947265625d3 * t13290 + (0.2042476226806641d5 + 0.9171758880615234d4 * t13292) * t13292 + (-0.3550358276367188d5 * t13294 - 0.4538836059570312d5 * t13292 - 0.2670776367187500d2) * t13289);
}

inline double Y_16_1 (double st, double ct)
{
  double t13297;
  double t13298;
  double t13299;
  double t13300;
  double t13302;
  t13297 = ct * ct;
  t13298 = t13297 * t13297;
  t13299 = t13297 * t13298;
  t13302 = t13299 * t13299;
  t13300 = t13298 * t13298;
  return(-0.5033087921896559e-3 * ct * st * (-0.59879925d8 * t13302 - 0.54679625d8 * t13300 + 0.19684665d8 * t13299 - 0.3594591d7 * t13298 - 0.6435d4 + (0.17678835d8 * t13302 + 0.80528175d8 * t13300 + 0.285285d6) * t13297));
}

inline double Y_16_2 (double st, double ct)
{
  double t1;
  double t13304;
  double t13305;
  double t13306;
  double t13307;
  double t13309;
  t13304 = ct * ct;
  t13305 = t13304 * t13304;
  t13306 = t13305 * t13304;
  t13309 = t13306 * t13306;
  t13307 = t13305 * t13305;
  t1 = st * st;
  return(0.1378367894364772e-2 * (-0.17298645d8 * t13309 - 0.10935925d8 * t13307 + 0.3062059d7 * t13306 - 0.399399d6 * t13305 - 0.143d3 + (0.5892945d7 * t13309 + 0.19684665d8 * t13307 + 0.19019d5) * t13304) * t1);
}

inline double Y_16_3 (double st, double ct)
{
  double t1;
  double t13311;
  double t13312;
  double t13313;
  double t13314;
  t13311 = ct * ct;
  t13312 = t13311 * t13311;
  t13314 = t13312 * t13312;
  t13313 = t13312 * t13311;
  t1 = st * st;
  return(-0.2248050003646145e-1 * (0.740025d6 * t13314 + 0.69069d5 * t13312 + 0.143d3 + (-0.328900d6 + 0.310155d6 * t13313) * t13313 + (-0.780390d6 * t13314 - 0.6006d4) * t13311) * t1 * st * ct);
}

inline double Y_16_4 (double st, double ct)
{
  double t1;
  double t13319;
  double t13320;
  double t13321;
  double t13322;
  double t2;
  t13319 = ct * ct;
  t13320 = t13319 * t13319;
  t13322 = t13320 * t13320;
  t13321 = t13320 * t13319;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1812435856045872e-1 * (0.512325d6 * t13322 + 0.26565d5 * t13320 + 0.11d2 + (-0.177100d6 + 0.310155d6 * t13321) * t13321 + (-0.660330d6 * t13322 - 0.1386d4) * t13319) * t2);
}

inline double Y_16_5 (double st, double ct)
{
  double t1;
  double t13327;
  double t13328;
  double t13330;
  double t2;
  t13327 = ct * ct;
  t13328 = t13327 * t13327;
  t13330 = t13328 * t13328;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1370072726386812e-1 * (-0.550275d6 * t13330 - 0.88550d5 * t13328 - 0.231d3 + (0.310155d6 * t13330 + 0.341550d6 * t13328 + 0.8855d4) * t13327) * t2 * st * ct);
}

inline double Y_16_6 (double st, double ct)
{
  double t1;
  double t13335;
  double t13336;
  double t13338;
  double t2;
  t13335 = ct * ct;
  t13336 = t13335 * t13335;
  t13338 = t13336 * t13336;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.9687877155468555e-2 * (-0.450225d6 * t13338 - 0.40250d5 * t13336 - 0.21d2 + (0.310155d6 * t13338 + 0.217350d6 * t13336 + 0.2415d4) * t13335) * t2 * t1);
}

inline double Y_16_7 (double st, double ct)
{
  double t1;
  double t13343;
  double t13344;
  double t3;
  t13343 = ct * ct;
  t13344 = t13343 * t13343;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.1469239315743810d0 * (-0.700d3 * t13343 + 0.21d2 + (-0.15660d5 * t13343 + 0.5670d4 + 0.13485d5 * t13344) * t13344) * t3 * t1 * st * ct);
}

inline double Y_16_8 (double st, double ct)
{
  double t1;
  double t13351;
  double t13352;
  double t2;
  double t3;
  t13351 = ct * ct;
  t13352 = t13351 * t13351;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2999072194673531e-1 * (-0.700d3 * t13351 + 0.7d1 + (-0.36540d5 * t13351 + 0.9450d4 + 0.40455d5 * t13352) * t13352) * t3);
}

inline double Y_16_9 (double st, double ct)
{
  double t1;
  double t13358;
  double t13359;
  double t2;
  double t3;
  t13358 = ct * ct;
  t13359 = t13358 * t13358;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8482657144486700e-1 * (-0.5481d4 * t13359 - 0.35d2 + (0.8091d4 * t13359 + 0.945d3) * t13358) * t3 * st * ct);
}

inline double Y_16_10 (double st, double ct)
{
  double t1;
  double t13365;
  double t13366;
  double t2;
  double t3;
  t13365 = ct * ct;
  t13366 = t13365 * t13365;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4401434668274822e-1 * (-0.3915d4 * t13366 - 0.5d1 + (0.8091d4 * t13366 + 0.405d3) * t13365) * t3 * t1);
}

inline double Y_16_11 (double st, double ct)
{
  double t1;
  double t13372;
  double t3;
  double t4;
  t13372 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1867370580532013d0 * (0.15d2 + (-0.290d3 + 0.899d3 * t13372) * t13372) * t4 * t1 * st * ct);
}

inline double Y_16_12 (double st, double ct)
{
  double t1;
  double t13379;
  double t2;
  double t3;
  t13379 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.7891080956457456e-1 * (0.3d1 + (-0.174d3 + 0.899d3 * t13379) * t13379) * t3 * t2);
}

inline double Y_16_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t7;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t7 = ct * ct;
  return(-0.8498954291392795d0 * (0.31d2 * t7 - 0.3d1) * t4 * t2 * st * ct);
}

inline double Y_16_14 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t6 = ct * ct;
  return(0.2687605329046360d0 * (0.31d2 * t6 - 0.1d1) * t4 * t2 * t1);
}

inline double Y_16_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.2116222552314715d1 * ct * t5 * t3 * t1 * st);
}

inline double Y_16_16 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.3740988293104096d0 * t4);
}

inline double Y_17_0 (double st, double ct)
{
  double t13405;
  t13405 = ct * ct;
  return((0.3338470458984375d1 + (-0.1691491699218750d3 + (0.2486492797851562d4 + (-0.1633980981445312d5 + (0.5673545074462891d5 + (-0.1114077941894531d6 + (0.1242625396728516d6 + (0.1780400253295898d5 * t13405 - 0.7337407104492188d5) * t13405) * t13405) * t13405) * t13405) * t13405) * t13405) * t13405) * ct);
}

inline double Y_17_1 (double st, double ct)
{
  double t13414;
  double t13415;
  double t13416;
  double t13417;
  double t13419;
  t13414 = ct * ct;
  t13415 = t13414 * t13414;
  t13416 = t13414 * t13415;
  t13419 = t13416 * t13416;
  t13417 = t13415 * t13415;
  return(-0.2669197949910873e-3 * st * (0.345972900d9 * t13419 - 0.24496472d8 * t13416 + 0.2662660d7 * t13415 + 0.715d3 + (0.109359250d9 + 0.64822395d8 * t13417) * t13417 + (-0.235717800d9 * t13419 - 0.262462200d9 * t13417 - 0.108680d6) * t13414));
}

inline double Y_17_2 (double st, double ct)
{
  double t11;
  double t13422;
  double t13423;
  double t13424;
  double t13425;
  double t13427;
  t13422 = ct * ct;
  t13423 = t13422 * t13422;
  t13424 = t13423 * t13422;
  t13427 = t13424 * t13424;
  t13425 = t13423 * t13423;
  t11 = st * st;
  return(0.4653905649586976e-2 * t11 * (-0.10855425d8 * t13427 - 0.8633625d7 * t13425 + 0.2877875d7 * t13424 - 0.483483d6 * t13423 - 0.715d3 + (0.3411705d7 * t13427 + 0.13656825d8 * t13425 + 0.35035d5) * t13422) * ct);
}

inline double Y_17_3 (double st, double ct)
{
  double t1;
  double t13429;
  double t13430;
  double t13431;
  double t13432;
  double t13434;
  t13429 = ct * ct;
  t13430 = t13429 * t13429;
  t13431 = t13430 * t13429;
  t13434 = t13431 * t13431;
  t13432 = t13430 * t13430;
  t1 = st * st;
  return(-0.1343466839786080e-2 * (-0.28224105d8 * t13434 - 0.15540525d8 * t13432 + 0.4029025d7 * t13431 - 0.483483d6 * t13430 - 0.143d3 + (0.10235115d8 * t13434 + 0.30045015d8 * t13432 + 0.21021d5) * t13429) * t1 * st);
}

inline double Y_17_4 (double st, double ct)
{
  double t11;
  double t12;
  double t13438;
  double t13439;
  double t13440;
  double t13441;
  t13438 = ct * ct;
  t13439 = t13438 * t13438;
  t13441 = t13439 * t13439;
  t13440 = t13439 * t13438;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.3290808243825335e-2 * t12 * (0.7153575d7 * t13441 + 0.575575d6 * t13439 + 0.1001d4 + (-0.2960100d7 + 0.3411705d7 * t13440) * t13440 + (-0.8064030d7 * t13441 - 0.46046d5) * t13438) * ct);
}

inline double Y_17_5 (double st, double ct)
{
  double t1;
  double t13446;
  double t13447;
  double t13448;
  double t13449;
  double t2;
  t13446 = ct * ct;
  t13447 = t13446 * t13446;
  t13449 = t13447 * t13447;
  t13448 = t13447 * t13446;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.2782630861577687e-1 * (0.450225d6 * t13449 + 0.20125d5 * t13447 + 0.7d1 + (-0.144900d6 + 0.310155d6 * t13448) * t13448 + (-0.620310d6 * t13449 - 0.966d3) * t13446) * t2 * st);
}

inline double Y_17_6 (double st, double ct)
{
  double t10;
  double t13455;
  double t13456;
  double t13458;
  double t9;
  t13455 = ct * ct;
  t13456 = t13455 * t13455;
  t13458 = t13456 * t13456;
  t9 = st * st;
  t10 = t9 * t9;
  return(0.1540951194431567d0 * t10 * t9 * (-0.67425d5 * t13458 - 0.9450d4 * t13456 - 0.21d2 + (0.40455d5 * t13458 + 0.39150d5 * t13456 + 0.875d3) * t13455) * ct);
}

inline double Y_17_7 (double st, double ct)
{
  double t1;
  double t13463;
  double t13464;
  double t13466;
  double t3;
  t13463 = ct * ct;
  t13464 = t13463 * t13463;
  t13466 = t13464 * t13464;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2845169700734477e-1 * (-0.202275d6 * t13466 - 0.15750d5 * t13464 - 0.7d1 + (0.148335d6 * t13466 + 0.91350d5 * t13464 + 0.875d3) * t13463) * t3 * t1 * st);
}

inline double Y_17_8 (double st, double ct)
{
  double t10;
  double t13472;
  double t13473;
  double t8;
  double t9;
  t13472 = ct * ct;
  t13473 = t13472 * t13472;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.8997216584020592e-1 * t10 * (-0.1260d4 * t13472 + 0.35d2 + (-0.32364d5 * t13472 + 0.10962d5 + 0.29667d5 * t13473) * t13473) * ct);
}

inline double Y_17_9 (double st, double ct)
{
  double t1;
  double t13479;
  double t13480;
  double t2;
  double t3;
  t13479 = ct * ct;
  t13480 = t13479 * t13479;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.5881664478197644e-2 * (-0.3780d4 * t13479 + 0.35d2 + (-0.226548d6 * t13479 + 0.54810d5 + 0.267003d6 * t13480) * t13480) * t3 * st);
}

inline double Y_17_10 (double st, double ct)
{
  double t13487;
  double t13488;
  double t7;
  double t8;
  double t9;
  t13487 = ct * ct;
  t13488 = t13487 * t13487;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.8644246085902379e-1 * t9 * t7 * (-0.6293d4 * t13488 - 0.35d2 + (0.9889d4 * t13488 + 0.1015d4) * t13487) * ct);
}

inline double Y_17_11 (double st, double ct)
{
  double t1;
  double t13494;
  double t13495;
  double t3;
  double t4;
  t13494 = ct * ct;
  t13495 = t13494 * t13494;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.4322123042951190e-1 * (-0.4495d4 * t13495 - 0.5d1 + (0.9889d4 * t13495 + 0.435d3) * t13494) * t4 * t1 * st);
}

inline double Y_17_12 (double st, double ct)
{
  double t13502;
  double t6;
  double t7;
  double t8;
  t13502 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.1900423953321784d0 * t8 * t7 * (0.15d2 + (-0.310d3 + 0.1023d4 * t13502) * t13502) * ct);
}

inline double Y_17_13 (double st, double ct)
{
  double t1;
  double t13508;
  double t2;
  double t4;
  t13508 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2327534490300584d0 * (0.1d1 + (-0.62d2 + 0.341d3 * t13508) * t13508) * t4 * t2 * st);
}

inline double Y_17_14 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  return(0.2591832717670666d1 * t8 * t6 * t5 * (0.11d2 * t1 - 0.1d1) * ct);
}

inline double Y_17_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t7;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  t7 = ct * ct;
  return(-0.2645278190393394d0 * (0.33d2 * t7 - 0.1d1) * t5 * t3 * t1 * st);
}

inline double Y_17_16 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2149034160970185d1 * ct * t4);
}

inline double Y_17_17 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(-0.3685563180293053d0 * t4 * st);
}

inline double Y_18_0 (double st, double ct)
{
  double t13535;
  double t13536;
  double t13537;
  double t13538;
  double t13540;
  double t13542;
  t13535 = ct * ct;
  t13536 = t13535 * t13535;
  t13538 = t13536 * t13536;
  t13542 = t13538 * t13538;
  t13537 = t13535 * t13536;
  t13540 = t13537 * t13537;
  return(-0.1854705810546875d0 - 0.1513340215301514d6 * t13542 - 0.2692355026245117d6 * t13540 - 0.5106190567016602d5 * t13538 + 0.9531555725097656d4 * t13537 - 0.8880331420898438d3 * t13536 + (0.3461889381408691d5 * t13542 + 0.2751527664184570d6 * t13540 + 0.1531857170104980d6 * t13538 + 0.3171546936035156d2) * t13535);
}

inline double Y_18_1 (double st, double ct)
{
  double t13544;
  double t13545;
  double t13546;
  double t13547;
  double t13549;
  t13544 = ct * ct;
  t13545 = t13544 * t13544;
  t13546 = t13544 * t13545;
  t13549 = t13546 * t13546;
  t13547 = t13545 * t13545;
  return(-0.2821844788956746e-3 * st * ct * (0.738168900d9 * t13549 - 0.78278200d8 * t13546 + 0.10958948d8 * t13545 + 0.12155d5 + (0.293543250d9 + 0.119409675d9 * t13547) * t13547 + (-0.463991880d9 * t13549 - 0.619109400d9 * t13547 - 0.680680d6) * t13544));
}

inline double Y_18_2 (double st, double ct)
{
  double t1;
  double t13552;
  double t13553;
  double t13554;
  double t13555;
  double t13557;
  t13552 = ct * ct;
  t13553 = t13552 * t13552;
  t13554 = t13553 * t13552;
  t13557 = t13554 * t13554;
  t13555 = t13553 * t13553;
  t1 = st * st;
  return(0.1300806174168349e-2 * (0.112896420d9 * t13557 - 0.6446440d7 * t13554 + 0.644644d6 * t13553 + 0.143d3 + (0.31081050d8 + 0.23881935d8 * t13555) * t13555 + (-0.81880920d8 * t13557 - 0.80120040d8 * t13555 - 0.24024d5) * t13552) * t1);
}

inline double Y_18_3 (double st, double ct)
{
  double t1;
  double t13560;
  double t13561;
  double t13562;
  double t13563;
  double t13565;
  t13560 = ct * ct;
  t13561 = t13560 * t13560;
  t13562 = t13561 * t13560;
  t13565 = t13562 * t13562;
  t13563 = t13561 * t13561;
  t1 = st * st;
  return(-0.2711642584172223d5 * (-0.3d1 * t13565 - 0.2096774193548387d1 * t13563 + 0.6507230255839822d0 * t13562 - 0.1012235817575083d0 * t13561 - 0.1257435798229917e-3 + (t13565 + 0.3545454545454545d1 * t13563 + 0.6748238783833890e-2) * t13560) * t1 * st * ct);
}

inline double Y_18_4 (double st, double ct)
{
  double t1;
  double t13569;
  double t13570;
  double t13571;
  double t13572;
  double t13574;
  double t2;
  t13569 = ct * ct;
  t13570 = t13569 * t13569;
  t13571 = t13570 * t13569;
  t13574 = t13571 * t13571;
  t13572 = t13570 * t13570;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1443836257265186e-1 * (-0.1950975d7 * t13572 + 0.470925d6 * t13571 - 0.52325d5 * t13570 - 0.13d2 - 0.4032015d7 * t13574 + (0.1550775d7 * t13574 + 0.2093d4 + 0.4032015d7 * t13572) * t13569) * t2);
}

inline double Y_18_5 (double st, double ct)
{
  double t1;
  double t13578;
  double t13579;
  double t13580;
  double t13581;
  double t2;
  t13578 = ct * ct;
  t13579 = t13578 * t13578;
  t13581 = t13579 * t13579;
  t13580 = t13579 * t13578;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.3701245048021059e-1 * (0.876525d6 * t13581 + 0.61425d5 * t13579 + 0.91d2 + (-0.339300d6 + 0.471975d6 * t13580) * t13580 + (-0.1051830d7 * t13581 - 0.4550d4) * t13578) * t2 * st * ct);
}

inline double Y_18_6 (double st, double ct)
{
  double t1;
  double t13587;
  double t13588;
  double t13589;
  double t13590;
  double t2;
  t13587 = ct * ct;
  t13588 = t13587 * t13587;
  t13590 = t13588 * t13588;
  t13589 = t13588 * t13587;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2724042597650177e-1 * (0.606825d6 * t13590 + 0.23625d5 * t13588 + 0.7d1 + (-0.182700d6 + 0.471975d6 * t13589) * t13589 + (-0.890010d6 * t13590 - 0.1050d4) * t13587) * t2 * t1);
}

inline double Y_18_7 (double st, double ct)
{
  double t1;
  double t13596;
  double t13597;
  double t13599;
  double t3;
  t13596 = ct * ct;
  t13597 = t13596 * t13596;
  t13599 = t13597 * t13597;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.4718180181112010d0 * (-0.29667d5 * t13599 - 0.3654d4 * t13597 - 0.7d1 + (0.18879d5 * t13599 + 0.16182d5 * t13597 + 0.315d3) * t13596) * t3 * t1 * st * ct);
}

inline double Y_18_8 (double st, double ct)
{
  double t1;
  double t13605;
  double t13606;
  double t13608;
  double t2;
  double t3;
  t13605 = ct * ct;
  t13606 = t13605 * t13605;
  t13608 = t13606 * t13606;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2789918427601547e-1 * (-0.267003d6 * t13608 - 0.18270d5 * t13606 - 0.7d1 + (0.207669d6 * t13608 + 0.113274d6 * t13606 + 0.945d3) * t13605) * t3);
}

inline double Y_18_9 (double st, double ct)
{
  double t1;
  double t13613;
  double t13614;
  double t2;
  double t3;
  t13613 = ct * ct;
  t13614 = t13613 * t13613;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.1018734170931141e-1 * (-0.12180d5 * t13613 + 0.315d3 + (-0.356004d6 * t13613 + 0.113274d6 + 0.346115d6 * t13614) * t13614) * t3 * st * ct);
}

inline double Y_18_10 (double st, double ct)
{
  double t1;
  double t13621;
  double t13622;
  double t2;
  double t3;
  t13621 = ct * ct;
  t13622 = t13621 * t13621;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4042975902551046e-1 * (-0.580d3 * t13621 + 0.5d1 + (-0.39556d5 * t13621 + 0.8990d4 + 0.49445d5 * t13622) * t13622) * t3 * t1);
}

inline double Y_18_11 (double st, double ct)
{
  double t1;
  double t13629;
  double t13630;
  double t3;
  double t4;
  t13629 = ct * ct;
  t13630 = t13629 * t13629;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.6158077429260824d0 * (-0.1023d4 * t13630 - 0.5d1 + (0.1705d4 * t13630 + 0.155d3) * t13629) * t4 * t1 * st * ct);
}

inline double Y_18_12 (double st, double ct)
{
  double t1;
  double t13637;
  double t13638;
  double t2;
  double t3;
  t13637 = ct * ct;
  t13638 = t13637 * t13637;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2124738572848199d0 * (-0.1023d4 * t13638 - 0.1d1 + (0.2387d4 * t13638 + 0.93d2) * t13637) * t3 * t2);
}

inline double Y_18_13 (double st, double ct)
{
  double t1;
  double t13644;
  double t2;
  double t4;
  t13644 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2897757071509815d1 * (0.1d1 + (-0.22d2 + 0.77d2 * t13644) * t13644) * t4 * t2 * st * ct);
}

inline double Y_18_14 (double st, double ct)
{
  double t1;
  double t13651;
  double t2;
  double t4;
  t13651 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.2290878112957608d0 * (0.1d1 + (-0.66d2 + 0.385d3 * t13651) * t13651) * t4 * t2 * t1);
}

inline double Y_18_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t8;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  t8 = ct * ct;
  return(-0.8773395223645203d0 * (0.35d2 * t8 - 0.3d1) * ct * t5 * t3 * t1 * st);
}

inline double Y_18_16 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  t5 = ct * ct;
  return(0.2606086717276675d0 * (0.35d2 * t5 - 0.1d1) * t4);
}

inline double Y_18_17 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(-0.2180408582026806d1 * ct * t4 * st);
}

inline double Y_18_18 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.3634014303378009d0 * t4 * t1);
}

inline double Y_19_0 (double st, double ct)
{
  double t13678;
  t13678 = ct * ct;
  return((-0.3523941040039062d1 + (0.2220082855224609d3 + (-0.4084952453613281d4 + (0.3404127044677734d5 + (-0.1531857170104980d6 + (0.4038532539367676d6 + (-0.6420231216430664d6 + (0.6053360861206055d6 + (0.6741574058532715d5 * t13678 - 0.3115700443267822d6) * t13678) * t13678) * t13678) * t13678) * t13678) * t13678) * t13678) * t13678) * ct);
}

inline double Y_19_1 (double st, double ct)
{
  double t13688;
  double t13689;
  double t13690;
  double t13691;
  double t13693;
  double t13695;
  t13688 = ct * ct;
  t13689 = t13688 * t13688;
  t13691 = t13689 * t13689;
  t13695 = t13691 * t13691;
  t13690 = t13688 * t13689;
  t13693 = t13690 * t13690;
  return(-0.7436213947150394e-4 * st * (-0.3653936055d10 * t13695 - 0.5757717420d10 * t13693 - 0.951080130d9 * t13691 + 0.164384220d9 * t13690 - 0.14090076d8 * t13689 - 0.2431d4 + (0.883631595d9 * t13695 + 0.6263890380d10 * t13693 + 0.3064591530d10 * t13691 + 0.459459d6) * t13688));
}

inline double Y_19_2 (double st, double ct)
{
  double t13;
  double t13697;
  double t13698;
  double t13699;
  double t13700;
  double t13702;
  t13697 = ct * ct;
  t13698 = t13697 * t13697;
  t13699 = t13698 * t13697;
  t13702 = t13699 * t13699;
  t13700 = t13698 * t13698;
  t13 = st * st;
  return(0.4819217436936572e-3 * t13 * (0.695987820d9 * t13702 - 0.60386040d8 * t13699 + 0.7827820d7 * t13698 + 0.7293d4 + (0.243221550d9 + 0.126233085d9 * t13700) * t13700 + (-0.463991880d9 * t13702 - 0.548354040d9 * t13700 - 0.447304d6) * t13697) * ct);
}

inline double Y_19_3 (double st, double ct)
{
  double t1;
  double t13705;
  double t13706;
  double t13707;
  double t13708;
  double t13710;
  t13705 = ct * ct;
  t13706 = t13705 * t13705;
  t13707 = t13706 * t13705;
  t13710 = t13707 * t13707;
  t13708 = t13706 * t13706;
  t1 = st * st;
  return(-0.4659961482532095e-2 * (0.48384180d8 * t13710 - 0.2260440d7 * t13707 + 0.209300d6 * t13706 + 0.39d2 + (0.11705850d8 + 0.11475735d8 * t13708) * t13708 + (-0.37218600d8 * t13710 - 0.32256120d8 * t13708 - 0.7176d4) * t13705) * t1 * st);
}

inline double Y_19_4 (double st, double ct)
{
  double t11;
  double t12;
  double t13715;
  double t13716;
  double t13717;
  double t13718;
  double t13720;
  t13715 = ct * ct;
  t13716 = t13715 * t13715;
  t13717 = t13716 * t13715;
  t13720 = t13717 * t13717;
  t13718 = t13716 * t13716;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.8939356070140198e-1 * t12 * (-0.1415925d7 * t13720 - 0.876525d6 * t13718 + 0.254475d6 * t13717 - 0.36855d5 * t13716 - 0.39d2 + (0.498945d6 * t13720 + 0.1577745d7 * t13718 + 0.2275d4) * t13715) * ct);
}

inline double Y_19_5 (double st, double ct)
{
  double t1;
  double t13724;
  double t13725;
  double t13726;
  double t13727;
  double t13729;
  double t2;
  t13724 = ct * ct;
  t13725 = t13724 * t13724;
  t13726 = t13725 * t13724;
  t13729 = t13726 * t13726;
  t13727 = t13725 * t13725;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1413436299844747e-1 * (-0.6135675d7 * t13729 - 0.2629575d7 * t13727 + 0.593775d6 * t13726 - 0.61425d5 * t13725 - 0.13d2 + (0.2494725d7 * t13729 + 0.5785065d7 * t13727 + 0.2275d4) * t13724) * t2 * st);
}

inline double Y_19_6 (double st, double ct)
{
  double t11;
  double t12;
  double t13734;
  double t13735;
  double t13736;
  double t13737;
  t13734 = ct * ct;
  t13735 = t13734 * t13734;
  t13737 = t13735 * t13735;
  t13736 = t13735 * t13734;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.3777567408606090e-1 * t12 * t11 * (0.1157013d7 * t13737 + 0.71253d5 * t13735 + 0.91d2 + (-0.420732d6 + 0.698523d6 * t13736) * t13736 + (-0.1472562d7 * t13737 - 0.4914d4) * t13734) * ct);
}

inline double Y_19_7 (double st, double ct)
{
  double t1;
  double t13743;
  double t13744;
  double t13745;
  double t13746;
  double t3;
  t13743 = ct * ct;
  t13744 = t13743 * t13743;
  t13746 = t13744 * t13744;
  t13745 = t13744 * t13743;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2671143531014660e-1 * (0.801009d6 * t13746 + 0.27405d5 * t13744 + 0.7d1 + (-0.226548d6 + 0.698523d6 * t13745) * t13745 + (-0.1246014d7 * t13746 - 0.1134d4) * t13743) * t3 * t1 * st);
}

inline double Y_19_8 (double st, double ct)
{
  double t10;
  double t11;
  double t13753;
  double t13754;
  double t13756;
  double t9;
  t13753 = ct * ct;
  t13754 = t13753 * t13753;
  t13756 = t13754 * t13754;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.5342287062029320e-1 * t11 * (-0.346115d6 * t13756 - 0.37758d5 * t13754 - 0.63d2 + (0.232841d6 * t13756 + 0.178002d6 * t13754 + 0.3045d4) * t13753) * ct);
}

inline double Y_19_9 (double st, double ct)
{
  double t1;
  double t13761;
  double t13762;
  double t13764;
  double t2;
  double t3;
  t13761 = ct * ct;
  t13762 = t13761 * t13761;
  t13764 = t13762 * t13762;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.2130835396206044e-1 * (-0.445005d6 * t13764 - 0.26970d5 * t13762 - 0.9d1 + (0.365893d6 * t13764 + 0.178002d6 * t13762 + 0.1305d4) * t13761) * t3 * st);
}

inline double Y_19_10 (double st, double ct)
{
  double t10;
  double t13770;
  double t13771;
  double t8;
  double t9;
  t13770 = ct * ct;
  t13771 = t13770 * t13770;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.7257363848836917e-1 * t10 * t8 * (-0.1860d4 * t13770 + 0.45d2 + (-0.61380d5 * t13770 + 0.18414d5 + 0.63085d5 * t13771) * t13771) * ct);
}

inline double Y_19_11 (double st, double ct)
{
  double t1;
  double t13778;
  double t13779;
  double t3;
  double t4;
  t13778 = ct * ct;
  t13779 = t13778 * t13778;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1987510944015246d0 * (-0.124d3 * t13778 + 0.1d1 + (-0.9548d4 * t13778 + 0.2046d4 + 0.12617d5 * t13779) * t13779) * t4 * t1 * st);
}

inline double Y_19_12 (double st, double ct)
{
  double t13787;
  double t13788;
  double t7;
  double t8;
  double t9;
  t13787 = ct * ct;
  t13788 = t13787 * t13787;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.3129935364572139d1 * t9 * t8 * (-0.231d3 * t13788 - 0.1d1 + (0.407d3 * t13788 + 0.33d2) * t13787) * ct);
}

inline double Y_19_13 (double st, double ct)
{
  double t1;
  double t13794;
  double t13795;
  double t2;
  double t4;
  t13794 = ct * ct;
  t13795 = t13794 * t13794;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2091276031602917d0 * (-0.1155d4 * t13795 - 0.1d1 + (0.2849d4 * t13795 + 0.99d2) * t13794) * t4 * t2 * st);
}

inline double Y_19_14 (double st, double ct)
{
  double t13802;
  double t6;
  double t7;
  double t9;
  t13802 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(0.9808954056771320d0 * t9 * t7 * t6 * (0.3d1 + (-0.70d2 + 0.259d3 * t13802) * t13802) * ct);
}

inline double Y_19_15 (double st, double ct)
{
  double t1;
  double t13809;
  double t3;
  double t5;
  t13809 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.7523124338755984e-1 * (0.3d1 + (-0.210d3 + 0.1295d4 * t13809) * t13809) * t5 * t3 * t1 * st);
}

inline double Y_19_16 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.8901480761251790d0 * t8 * (0.37d2 * t1 - 0.3d1) * ct);
}

inline double Y_19_17 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  t6 = ct * ct;
  return(-0.2569636156847498d0 * (0.37d2 * t6 - 0.1d1) * t4 * st);
}

inline double Y_19_18 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2210484603915554d1 * t4 * t1 * ct);
}

inline double Y_19_19 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t5 = t4 * t4;
  return(-0.3585879538348520d0 * t5 * t1 * st);
}

inline double Y_20_0 (double st, double ct)
{
  double t13837;
  double t13838;
  double t13839;
  double t13840;
  double t13841;
  double t13842;
  double t13844;
  t13837 = ct * ct;
  t13838 = t13837 * t13837;
  t13840 = t13838 * t13838;
  t13844 = t13840 * t13840;
  t13839 = t13837 * t13838;
  t13842 = t13839 * t13839;
  t13841 = t13837 * t13840;
  return(0.1761970520019531d0 + 0.1324172688388824d7 * t13844 + 0.1043287572669983d7 * t13842 + 0.1148892877578735d6 * t13840 - 0.1702063522338867d5 * t13839 + 0.1276547641754150d4 * t13838 + (-0.4442385793304443d6 + 0.1314606941413879d6 * t13841) * t13841 + (-0.6404495355606079d6 * t13844 - 0.1513340215301514d7 * t13842 - 0.3700138092041016d2) * t13837);
}

inline double Y_20_1 (double st, double ct)
{
  double t1;
  double t13847;
  double t13848;
  double t13849;
  double t13850;
  double t13854;
  double t13856;
  t13847 = ct * ct;
  t13848 = t13847 * t13847;
  t13849 = t13848 * t13847;
  t1 = t13849 * t13849;
  t13856 = 0.8058212058212058d1 * t1;
  t13850 = t13848 * t13848;
  t13854 = t13850 * t13850;
  return(-0.1282925010024453d6 * ct * st * (-0.4384615384615385d1 * t13854 - 0.1689625108979948d1 * t13850 + 0.3495776087544719d0 * t13849 - 0.3884195652827466e-1 * t13848 - 0.2814634531034396e-4 - t13856 + (t13854 + 0.4761670761670762d1 * t13850 + 0.1942097826413733e-2 + t13856) * t13847));
}

inline double Y_20_2 (double st, double ct)
{
  double t1;
  double t13857;
  double t13858;
  double t13859;
  double t13860;
  double t13862;
  double t13864;
  t13857 = ct * ct;
  t13858 = t13857 * t13857;
  t13860 = t13858 * t13858;
  t13864 = t13860 * t13860;
  t13859 = t13858 * t13857;
  t13862 = t13859 * t13859;
  t1 = st * st;
  return(0.7991768010728420e-3 * (-0.585262485d9 * t13864 - 0.822531060d9 * t13862 - 0.119399670d9 * t13860 + 0.19213740d8 * t13859 - 0.1524900d7 * t13858 - 0.221d3 + (0.149184555d9 * t13864 + 0.949074300d9 * t13862 + 0.411265530d9 * t13860 + 0.45747d5) * t13857) * t1);
}

inline double Y_20_3 (double st, double ct)
{
  double t1;
  double t13866;
  double t13867;
  double t13868;
  double t13869;
  double t13871;
  t13866 = ct * ct;
  t13867 = t13866 * t13866;
  t13868 = t13867 * t13866;
  t13871 = t13868 * t13868;
  t13869 = t13867 * t13867;
  t1 = st * st;
  return(-0.5420280779734475e-2 * (0.96282900d8 * t13871 - 0.6921720d7 * t13868 + 0.835380d6 * t13867 + 0.663d3 + (0.29801850d8 + 0.19458855d8 * t13869) * t13869 + (-0.67856520d8 * t13871 - 0.71524440d8 * t13869 - 0.44200d5) * t13866) * t1 * st * ct);
}

inline double Y_20_4 (double st, double ct)
{
  double t1;
  double t13876;
  double t13877;
  double t13878;
  double t13879;
  double t13881;
  double t2;
  t13876 = ct * ct;
  t13877 = t13876 * t13876;
  t13878 = t13877 * t13876;
  t13881 = t13878 * t13878;
  t13879 = t13877 * t13877;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1368553812555935e-1 * (0.24542700d8 * t13881 - 0.950040d6 * t13878 + 0.81900d5 * t13877 + 0.13d2 + (0.5259150d7 + 0.6486285d7 * t13879) * t13879 + (-0.19957800d8 * t13881 - 0.15426840d8 * t13879 - 0.2600d4) * t13876) * t2);
}

inline double Y_20_5 (double st, double ct)
{
  double t1;
  double t13886;
  double t13887;
  double t13888;
  double t13889;
  double t13891;
  double t2;
  t13886 = ct * ct;
  t13887 = t13886 * t13886;
  t13888 = t13887 * t13886;
  t13891 = t13888 * t13888;
  t13889 = t13887 * t13887;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.5474215250223738e-1 * (-0.3492615d7 * t13891 - 0.1928355d7 * t13889 + 0.525915d6 * t13888 - 0.71253d5 * t13887 - 0.65d2 + (0.1297257d7 * t13891 + 0.3681405d7 * t13889 + 0.4095d4) * t13886) * ct * t2 * st);
}

inline double Y_20_6 (double st, double ct)
{
  double t1;
  double t13896;
  double t13897;
  double t13898;
  double t13899;
  double t13901;
  double t2;
  t13896 = ct * ct;
  t13897 = t13896 * t13896;
  t13898 = t13897 * t13896;
  t13901 = t13898 * t13898;
  t13899 = t13897 * t13897;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1801784818532187d0 * (-0.698523d6 * t13901 - 0.267003d6 * t13899 + 0.56637d5 * t13898 - 0.5481d4 * t13897 - 0.1d1 + (0.299367d6 * t13901 + 0.623007d6 * t13899 + 0.189d3) * t13896) * t2 * t1);
}

inline double Y_20_7 (double st, double ct)
{
  double t1;
  double t13906;
  double t13907;
  double t13908;
  double t13909;
  double t3;
  t13906 = ct * ct;
  t13907 = t13906 * t13906;
  t13909 = t13907 * t13907;
  t13908 = t13907 * t13906;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.3884087314602047d5 * (0.1486486486486486d1 * t13909 + 0.8108108108108108e-1 * t13907 + 0.9019030153624147e-4 + (-0.5096525096525097d0 + t13908) * t13908 + (-0.2d1 * t13909 - 0.5231037489102005e-2) * t13906) * t3 * t1 * st * ct);
}

inline double Y_20_8 (double st, double ct)
{
  double t1;
  double t13916;
  double t13917;
  double t13918;
  double t13919;
  double t2;
  double t3;
  t13916 = ct * ct;
  t13917 = t13916 * t13916;
  t13919 = t13917 * t13917;
  t13918 = t13917 * t13916;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.6120358711483149e-1 * (0.445005d6 * t13919 + 0.13485d5 * t13917 + 0.3d1 + (-0.118668d6 + 0.432419d6 * t13918) * t13918 + (-0.731786d6 * t13919 - 0.522d3) * t13916) * t3);
}

inline double Y_20_9 (double st, double ct)
{
  double t1;
  double t13925;
  double t13926;
  double t13928;
  double t2;
  double t3;
  t13925 = ct * ct;
  t13926 = t13925 * t13925;
  t13928 = t13926 * t13926;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.3805793709525172d0 * (-0.63085d5 * t13928 - 0.6138d4 * t13926 - 0.9d1 + (0.44733d5 * t13928 + 0.30690d5 * t13926 + 0.465d3) * t13925) * t3 * st * ct);
}

inline double Y_20_10 (double st, double ct)
{
  double t1;
  double t13934;
  double t13935;
  double t13937;
  double t2;
  double t3;
  t13934 = ct * ct;
  t13935 = t13934 * t13934;
  t13937 = t13935 * t13935;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.6285061457599578e-1 * (-0.189255d6 * t13937 - 0.10230d5 * t13935 - 0.3d1 + (0.164021d6 * t13937 + 0.71610d5 * t13935 + 0.465d3) * t13934) * t3 * t1);
}

inline double Y_20_11 (double st, double ct)
{
  double t1;
  double t13943;
  double t13944;
  double t3;
  double t4;
  t13943 = ct * ct;
  t13944 = t13943 * t13943;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1106599260482274d1 * (-0.132d3 * t13943 + 0.3d1 + (-0.4884d4 * t13943 + 0.1386d4 + 0.5291d4 * t13944) * t13944) * t4 * t1 * st * ct);
}

inline double Y_20_12 (double st, double ct)
{
  double t1;
  double t13952;
  double t13953;
  double t2;
  double t3;
  t13952 = ct * ct;
  t13953 = t13952 * t13952;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.1956209602857587d0 * (-0.132d3 * t13952 + 0.1d1 + (-0.11396d5 * t13952 + 0.2310d4 + 0.15873d5 * t13953) * t13953) * t3 * t2);
}

inline double Y_20_13 (double st, double ct)
{
  double t1;
  double t13960;
  double t13961;
  double t2;
  double t4;
  t13960 = ct * ct;
  t13961 = t13960 * t13960;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.3178464388226539d1 * (-0.259d3 * t13961 - 0.1d1 + (0.481d3 * t13961 + 0.35d2) * t13960) * t4 * t2 * st * ct);
}

inline double Y_20_14 (double st, double ct)
{
  double t1;
  double t13968;
  double t13969;
  double t2;
  double t4;
  t13968 = ct * ct;
  t13969 = t13968 * t13968;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.2060292451626395d0 * (-0.1295d4 * t13969 - 0.1d1 + (0.3367d4 * t13969 + 0.105d3) * t13968) * t4 * t2 * t1);
}

inline double Y_20_15 (double st, double ct)
{
  double t1;
  double t13976;
  double t3;
  double t5;
  t13976 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.1990431608256557d0 * (0.15d2 + (-0.370d3 + 0.1443d4 * t13976) * t13976) * t5 * t3 * t1 * st * ct);
}

inline double Y_20_16 (double st, double ct)
{
  double t1;
  double t13984;
  double t2;
  double t3;
  double t4;
  t13984 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2225370190312947d0 * (0.1d1 + (-0.74d2 + 0.481d3 * t13984) * t13984) * t4);
}

inline double Y_20_17 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t7;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  t7 = ct * ct;
  return(-0.2707279681935643d1 * (0.13d2 * t7 - 0.1d1) * ct * t4 * st);
}

inline double Y_20_18 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  t6 = ct * ct;
  return(0.2535599738084324d0 * (0.39d2 * t6 - 0.1d1) * t4 * t1);
}

inline double Y_20_19 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t5 = t4 * t4;
  return(-0.2239381053948427d1 * ct * t5 * t1 * st);
}

inline double Y_20_20 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.3540772339752716d0 * t4 * t2);
}

inline double Y_21_0 (double st, double ct)
{
  double t14011;
  t14011 = ct * ct;
  return((0.3700138092041016d1 + (-0.2836772537231445d3 + (0.6382738208770752d4 + (-0.6565102157592773d5 + (0.3701988161087036d6 + (-0.1251945087203979d7 + (0.2648345376777649d7 + (-0.3531127169036865d7 + (0.2882022910022736d7 + (0.2566613552284241d6 * t14011 - 0.1314606941413879d7) * t14011) * t14011) * t14011) * t14011) * t14011) * t14011) * t14011) * t14011) * t14011) * ct);
}

inline double Y_21_1 (double st, double ct)
{
  double t14022;
  double t14023;
  double t14024;
  double t14025;
  double t14026;
  double t14027;
  double t14029;
  t14022 = ct * ct;
  t14023 = t14022 * t14022;
  t14025 = t14023 * t14023;
  t14029 = t14025 * t14025;
  t14024 = t14022 * t14023;
  t14027 = t14024 * t14024;
  t14026 = t14022 * t14025;
  return(-0.4099690486946999e-4 * (0.55599936075d11 * t14029 + 0.39070225350d11 * t14027 + 0.3780989550d10 * t14025 - 0.521515800d9 * t14024 + 0.36216375d8 * t14023 + 0.4199d4 + (-0.15628090140d11 + 0.6116566755d10 * t14026) * t14026 + (-0.28345065450d11 * t14029 - 0.60108039000d11 * t14027 - 0.965770d6) * t14022) * st);
}

inline double Y_21_2 (double st, double ct)
{
  double t13;
  double t14032;
  double t14033;
  double t14034;
  double t14035;
  double t14037;
  double t14039;
  t14032 = ct * ct;
  t14033 = t14032 * t14032;
  t14035 = t14033 * t14033;
  t14039 = t14035 * t14035;
  t14034 = t14033 * t14032;
  t14037 = t14034 * t14034;
  t13 = st * st;
  return(0.8792856510162842e-3 * t13 * (-0.1109154735d10 * t14039 - 0.1829375100d10 * t14037 - 0.339741090d9 * t14035 + 0.65756340d8 * t14034 - 0.6802380d7 * t14033 - 0.4199d4 + (0.265937685d9 * t14039 + 0.1933910820d10 * t14037 + 0.1019223270d10 * t14035 + 0.314925d6) * t14032) * ct);
}

inline double Y_21_3 (double st, double ct)
{
  double t12;
  double t14041;
  double t14042;
  double t14043;
  double t14044;
  double t14046;
  double t14048;
  t14041 = ct * ct;
  t14042 = t14041 * t14041;
  t14044 = t14042 * t14042;
  t14048 = t14044 * t14044;
  t14043 = t14042 * t14041;
  t14046 = t14043 * t14043;
  t12 = st * st;
  return(-0.7823501418157635e-3 * t12 * st * (-0.992401605d9 * t14048 - 0.1251677700d10 * t14046 - 0.160929990d9 * t14044 + 0.24226020d8 * t14043 - 0.1790100d7 * t14042 - 0.221d3 + (0.265937685d9 * t14048 + 0.1526771700d10 * t14046 + 0.590076630d9 * t14044 + 0.49725d5) * t14041));
}

inline double Y_21_4 (double st, double ct)
{
  double t13;
  double t14;
  double t14052;
  double t14053;
  double t14054;
  double t14055;
  double t14057;
  t14052 = ct * ct;
  t14053 = t14052 * t14052;
  t14054 = t14053 * t14052;
  t14057 = t14054 * t14054;
  t14055 = t14053 * t14053;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.3319230543241101e-2 * t14 * (0.237497820d9 * t14057 - 0.14304888d8 * t14054 + 0.1615068d7 * t14053 + 0.1105d4 + (0.65564070d8 + 0.53187537d8 * t14055) * t14055 + (-0.176426952d9 * t14057 - 0.166890360d9 * t14055 - 0.79560d5) * t14052) * ct);
}

inline double Y_21_5 (double st, double ct)
{
  double t12;
  double t13;
  double t14062;
  double t14063;
  double t14064;
  double t14065;
  double t14067;
  t14062 = ct * ct;
  t14063 = t14062 * t14062;
  t14064 = t14063 * t14062;
  t14067 = t14064 * t14064;
  t14065 = t14063 * t14063;
  t12 = st * st;
  t13 = t12 * t12;
  return(-0.3489141297812256e-1 * t13 * st * (0.13970460d8 * t14067 - 0.453096d6 * t14064 + 0.36540d5 * t14063 + 0.5d1 + (0.2670030d7 + 0.4091349d7 * t14065) * t14065 + (-0.11974680d8 * t14067 - 0.8306760d7 * t14065 - 0.1080d4) * t14062));
}

inline double Y_21_6 (double st, double ct)
{
  double t11;
  double t12;
  double t14073;
  double t14074;
  double t14075;
  double t14076;
  double t14078;
  t14073 = ct * ct;
  t14074 = t14073 * t14073;
  t14075 = t14074 * t14073;
  t14078 = t14075 * t14075;
  t14076 = t14074 * t14074;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.8057826670130188e-1 * t12 * t11 * (-0.1730575d7 * t14076 + 0.445005d6 * t14075 - 0.56637d5 * t14074 - 0.45d2 - 0.3492615d7 * t14078 + (0.1363783d7 * t14078 + 0.3045d4 + 0.3492615d7 * t14076) * t14073) * ct);
}

inline double Y_21_7 (double st, double ct)
{
  double t10;
  double t12;
  double t14083;
  double t14084;
  double t14085;
  double t14086;
  double t14088;
  t14083 = ct * ct;
  t14084 = t14083 * t14083;
  t14085 = t14084 * t14083;
  t14088 = t14085 * t14085;
  t14086 = t14084 * t14084;
  t10 = st * st;
  t12 = t10 * t10;
  return(-0.5897725226390013e-1 * t12 * t10 * st * (-0.3026933d7 * t14088 - 0.1038345d7 * t14086 + 0.207669d6 * t14085 - 0.18879d5 * t14084 - 0.3d1 + (0.1363783d7 * t14088 + 0.2561251d7 * t14086 + 0.609d3) * t14083));
}

inline double Y_21_8 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14094;
  double t14095;
  double t14096;
  double t14097;
  t14094 = ct * ct;
  t14095 = t14094 * t14094;
  t14097 = t14095 * t14095;
  t14096 = t14094 * t14095;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1188358704915096d1 * t13 * (0.63085d5 * t14097 + 0.3069d4 * t14095 + 0.3d1 + (-0.20460d5 + 0.47027d5 * t14096) * t14096 + (-0.89466d5 * t14097 - 0.186d3) * t14094) * ct);
}

inline double Y_21_9 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14103;
  double t14104;
  double t14105;
  double t14106;
  t14103 = ct * ct;
  t14104 = t14103 * t14103;
  t14106 = t14104 * t14104;
  t14105 = t14103 * t14104;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.6017488213420399e-1 * t12 * st * (0.567765d6 * t14106 + 0.15345d5 * t14104 + 0.3d1 + (-0.143220d6 + 0.611351d6 * t14105) * t14105 + (-0.984126d6 * t14106 - 0.558d3) * t14103));
}

inline double Y_21_10 (double st, double ct)
{
  double t10;
  double t11;
  double t14113;
  double t14114;
  double t14116;
  double t9;
  t14113 = ct * ct;
  t14114 = t14113 * t14113;
  t14116 = t14114 * t14114;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1160611095772356d1 * t11 * t9 * (-0.26455d5 * t14116 - 0.2310d4 * t14114 - 0.3d1 + (0.19721d5 * t14116 + 0.12210d5 * t14114 + 0.165d3) * t14113) * ct);
}

inline double Y_21_11 (double st, double ct)
{
  double t10;
  double t11;
  double t14122;
  double t14123;
  double t14125;
  double t8;
  t14122 = ct * ct;
  t14123 = t14122 * t14122;
  t14125 = t14123 * t14123;
  t8 = st * st;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.6186077925723404e-1 * t11 * t8 * st * (-0.238095d6 * t14125 - 0.11550d5 * t14123 - 0.3d1 + (0.216931d6 * t14125 + 0.85470d5 * t14123 + 0.495d3) * t14122));
}

inline double Y_21_12 (double st, double ct)
{
  double t10;
  double t14132;
  double t14133;
  double t8;
  double t9;
  t14132 = ct * ct;
  t14133 = t14132 * t14132;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.3745856204458228d0 * t10 * t9 * (-0.420d3 * t14132 + 0.9d1 + (-0.17316d5 * t14132 + 0.4662d4 + 0.19721d5 * t14133) * t14133) * ct);
}

inline double Y_21_13 (double st, double ct)
{
  double t10;
  double t14140;
  double t14141;
  double t7;
  double t8;
  t14140 = ct * ct;
  t14141 = t14140 * t14140;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.1927227117635623d0 * t10 * t8 * st * (-0.140d3 * t14140 + 0.1d1 + (-0.13468d5 * t14140 + 0.2590d4 + 0.19721d5 * t14141) * t14141));
}

inline double Y_21_14 (double st, double ct)
{
  double t10;
  double t14149;
  double t14150;
  double t7;
  double t8;
  t14149 = ct * ct;
  t14150 = t14149 * t14149;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(0.9213907950732632e-1 * t10 * t8 * t7 * (-0.10101d5 * t14150 - 0.35d2 + (0.19721d5 * t14150 + 0.1295d4) * t14149) * ct);
}

inline double Y_21_15 (double st, double ct)
{
  double t10;
  double t14157;
  double t14158;
  double t6;
  double t8;
  t14157 = ct * ct;
  t14158 = t14157 * t14157;
  t6 = st * st;
  t8 = t6 * t6;
  t10 = t8 * t8;
  return(-0.4062951506779886e-1 * t10 * t8 * t6 * st * (-0.7215d4 * t14158 - 0.5d1 + (0.19721d5 * t14158 + 0.555d3) * t14157));
}

inline double Y_21_16 (double st, double ct)
{
  double t14166;
  double t6;
  double t7;
  double t8;
  double t9;
  t14166 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.6053661402912106d0 * t9 * (0.5d1 + (-0.130d3 + 0.533d3 * t14166) * t14166) * ct);
}

inline double Y_21_17 (double st, double ct)
{
  double t14172;
  double t5;
  double t6;
  double t7;
  double t8;
  t14172 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(-0.2195893787010194d0 * t8 * st * (0.1d1 + (-0.78d2 + 0.533d3 * t14172) * t14172));
}

inline double Y_21_18 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.9142234869716093d0 * t8 * t5 * (0.41d2 * t1 - 0.3d1) * ct);
}

inline double Y_21_19 (double st, double ct)
{
  double t1;
  double t4;
  double t6;
  double t7;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t6 = t4 * t4;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(-0.2503704132076904d0 * t8 * t4 * st * (0.41d2 * t1 - 0.1d1));
}

inline double Y_21_20 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2267200518790244d1 * t4 * t2 * ct);
}

inline double Y_21_21 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t5 = t4 * t4;
  return(-0.3498366350851273d0 * t5 * t2 * st);
}

inline double Y_22_0 (double st, double ct)
{
  double t14201;
  double t14202;
  double t14203;
  double t14204;
  double t14205;
  double t14206;
  double t14208;
  double t14210;
  t14201 = ct * ct;
  t14202 = t14201 * t14201;
  t14204 = t14202 * t14202;
  t14205 = t14201 * t14204;
  t14210 = t14205 * t14205;
  t14208 = t14204 * t14204;
  t14203 = t14201 * t14202;
  t14206 = t14203 * t14203;
  return(-0.2694944229898453d7 * t14210 - 0.8165731578397751d7 * t14208 - 0.3442848989810944d7 * t14206 + 0.1147616329936981d7 * t14205 - 0.2379849532127380d6 * t14204 + 0.2872232193946838d5 * t14203 - 0.1772982835769653d4 * t14202 - 0.1681880950927734d0 + (0.5016562852191925d6 * t14210 + 0.6244382971715927d7 * t14208 + 0.6620863441944122d7 * t14206 + 0.4255158805847168d2) * t14201);
}

inline double Y_22_1 (double st, double ct)
{
  double t14212;
  double t14213;
  double t14214;
  double t14215;
  double t14216;
  double t14217;
  double t14219;
  t14212 = ct * ct;
  t14213 = t14212 * t14212;
  t14215 = t14213 * t14213;
  t14219 = t14215 * t14215;
  t14214 = t14212 * t14213;
  t14217 = t14214 * t14214;
  t14216 = t14212 * t14215;
  return(-0.4290474654846952e-4 * ct * (0.116461247175d12 * t14219 + 0.96042192750d11 * t14217 + 0.11890938150d11 * t14215 - 0.1972690200d10 * t14214 + 0.178562475d9 * t14213 + 0.88179d5 + (-0.42807377340d11 + 0.11435320455d11 * t14216) * t14216 + (-0.55846913850d11 * t14219 - 0.135373757400d12 * t14217 - 0.7348250d7) * t14212) * st);
}

inline double Y_22_2 (double st, double ct)
{
  double t14;
  double t14222;
  double t14223;
  double t14224;
  double t14225;
  double t14226;
  double t14227;
  double t14229;
  t14222 = ct * ct;
  t14223 = t14222 * t14222;
  t14225 = t14223 * t14223;
  t14229 = t14225 * t14225;
  t14224 = t14223 * t14222;
  t14227 = t14224 * t14224;
  t14226 = t14222 * t14225;
  t14 = st * st;
  return(0.4013371546268619e-4 * t14 * (0.94278152475d11 * t14229 + 0.59454690750d11 * t14227 + 0.5096116350d10 * t14225 - 0.657563400d9 * t14224 + 0.42514875d8 * t14223 + 0.4199d4 + (-0.22422911940d11 + 0.11435320455d11 * t14226) * t14226 + (-0.50528160150d11 * t14229 - 0.96695541000d11 * t14227 - 0.1049750d7) * t14222));
}

inline double Y_22_3 (double st, double ct)
{
  double t13;
  double t14232;
  double t14233;
  double t14234;
  double t14235;
  double t14237;
  double t14239;
  t14232 = ct * ct;
  t14233 = t14232 * t14232;
  t14235 = t14233 * t14233;
  t14239 = t14235 * t14235;
  t14234 = t14233 * t14232;
  t14237 = t14234 * t14234;
  t13 = st * st;
  return(-0.1794834319284015e-3 * t13 * st * ct * (-0.9095068827d10 * t14239 - 0.13537375740d11 * t14237 - 0.2242291194d10 * t14235 + 0.407689308d9 * t14234 - 0.39453804d8 * t14233 - 0.20995d5 + (0.2287064091d10 * t14239 + 0.15084504396d11 * t14237 + 0.7134562890d10 * t14235 + 0.1700595d7) * t14232));
}

inline double Y_22_4 (double st, double ct)
{
  double t12;
  double t13;
  double t14243;
  double t14244;
  double t14245;
  double t14246;
  double t14248;
  double t14250;
  t14243 = ct * ct;
  t14244 = t14243 * t14243;
  t14246 = t14244 * t14244;
  t14250 = t14246 * t14246;
  t14245 = t14244 * t14243;
  t14248 = t14245 * t14245;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.1994609319790330e-2 * t13 * (-0.625976397d9 * t14250 - 0.712493460d9 * t14248 - 0.81702918d8 * t14246 + 0.11553948d8 * t14245 - 0.798660d6 * t14244 - 0.85d2 + (0.175928007d9 * t14250 + 0.916063020d9 * t14248 + 0.317733570d9 * t14246 + 0.20655d5) * t14243));
}

inline double Y_22_5 (double st, double ct)
{
  double t13;
  double t14;
  double t14254;
  double t14255;
  double t14256;
  double t14257;
  double t14259;
  t14254 = ct * ct;
  t14255 = t14254 * t14254;
  t14256 = t14255 * t14254;
  t14259 = t14256 * t14256;
  t14257 = t14255 * t14255;
  t13 = st * st;
  t14 = t13 * t13;
  return(-0.4885775069686146e-2 * t14 * st * ct * (0.237497820d9 * t14259 - 0.12104136d8 * t14256 + 0.1283772d7 * t14255 + 0.765d3 + (0.58839550d8 + 0.58642669d8 * t14257) * t14257 + (-0.185474488d9 * t14259 - 0.158331880d9 * t14257 - 0.59160d5) * t14254));
}

inline double Y_22_6 (double st, double ct)
{
  double t12;
  double t13;
  double t14265;
  double t14266;
  double t14267;
  double t14268;
  double t14270;
  t14265 = ct * ct;
  t14266 = t14265 * t14265;
  t14267 = t14266 * t14265;
  t14270 = t14267 * t14267;
  t14268 = t14266 * t14266;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.3806965263719316e-2 * t13 * t12 * (0.181615980d9 * t14270 - 0.4984056d7 * t14267 + 0.377580d6 * t14266 + 0.45d2 + (0.31150350d8 + 0.58642669d8 * t14268) * t14268 + (-0.163653960d9 * t14270 - 0.102450040d9 * t14268 - 0.10440d5) * t14265));
}

inline double Y_22_7 (double st, double ct)
{
  double t11;
  double t13;
  double t14276;
  double t14277;
  double t14278;
  double t14279;
  double t14281;
  t14276 = ct * ct;
  t14277 = t14276 * t14276;
  t14278 = t14277 * t14276;
  t14281 = t14278 * t14278;
  t14279 = t14277 * t14277;
  t11 = st * st;
  t13 = t11 * t11;
  return(-0.8200454144065914e-1 * t13 * t11 * st * ct * (-0.4937835d7 * t14281 - 0.2207975d7 * t14279 + 0.537075d6 * t14278 - 0.64449d5 * t14277 - 0.45d2 + (0.2022161d7 * t14281 + 0.4696965d7 * t14279 + 0.3255d4) * t14276));
}

inline double Y_22_8 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14287;
  double t14288;
  double t14289;
  double t14290;
  double t14292;
  t14287 = ct * ct;
  t14288 = t14287 * t14287;
  t14289 = t14287 * t14288;
  t14292 = t14289 * t14289;
  t14290 = t14288 * t14288;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5798596734078333e-1 * t12 * (-0.4279457d7 * t14292 - 0.1324785d7 * t14290 + 0.250635d6 * t14289 - 0.21483d5 * t14288 - 0.3d1 + (0.2022161d7 * t14292 + 0.3444441d7 * t14290 + 0.651d3) * t14287));
}

inline double Y_22_9 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14297;
  double t14298;
  double t14299;
  double t14300;
  t14297 = ct * ct;
  t14298 = t14297 * t14297;
  t14300 = t14298 * t14298;
  t14299 = t14297 * t14298;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.1208002328336222d1 * t13 * st * ct * (0.79365d5 * t14300 + 0.3465d4 * t14298 + 0.3d1 + (-0.24420d5 + 0.65231d5 * t14299) * t14299 + (-0.118326d6 * t14300 - 0.198d3) * t14297));
}

inline double Y_22_10 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14307;
  double t14308;
  double t14309;
  double t14310;
  t14307 = ct * ct;
  t14308 = t14307 * t14307;
  t14310 = t14308 * t14308;
  t14309 = t14307 * t14308;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5922718696780686e-1 * t12 * t10 * (0.714285d6 * t14310 + 0.17325d5 * t14308 + 0.3d1 + (-0.170940d6 + 0.848003d6 * t14309) * t14309 + (-0.1301586d7 * t14310 - 0.594d3) * t14307));
}

inline double Y_22_11 (double st, double ct)
{
  double t11;
  double t12;
  double t14317;
  double t14318;
  double t14320;
  double t9;
  t14317 = ct * ct;
  t14318 = t14317 * t14317;
  t14320 = t14318 * t14318;
  t9 = st * st;
  t11 = t9 * t9;
  t12 = t11 * t11;
  return(-0.3571533755644409e-1 * t12 * t9 * st * ct * (-0.1084655d7 * t14320 - 0.85470d5 * t14318 - 0.99d2 + (0.848003d6 * t14320 + 0.476190d6 * t14318 + 0.5775d4) * t14317));
}

inline double Y_22_12 (double st, double ct)
{
  double t10;
  double t14327;
  double t14328;
  double t14330;
  double t8;
  double t9;
  t14327 = ct * ct;
  t14328 = t14327 * t14327;
  t14330 = t14328 * t14328;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.2031475753389943e-1 * t10 * t9 * (-0.887445d6 * t14330 - 0.38850d5 * t14328 - 0.9d1 + (0.848003d6 * t14330 + 0.303030d6 * t14328 + 0.1575d4) * t14327));
}

inline double Y_22_13 (double st, double ct)
{
  double t11;
  double t14336;
  double t14337;
  double t8;
  double t9;
  t14336 = ct * ct;
  t14337 = t14336 * t14336;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(-0.1085869465531948e-1 * t11 * t9 * st * ct * (-0.15540d5 * t14336 + 0.315d3 + (-0.709956d6 * t14336 + 0.181818d6 + 0.848003d6 * t14337) * t14337));
}

inline double Y_22_14 (double st, double ct)
{
  double t10;
  double t14345;
  double t14346;
  double t7;
  double t8;
  t14345 = ct * ct;
  t14346 = t14345 * t14345;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(0.5429347327659740e-2 * t10 * t8 * t7 * (-0.5180d4 * t14345 + 0.35d2 + (-0.552188d6 * t14345 + 0.101010d6 + 0.848003d6 * t14346) * t14346));
}

inline double Y_22_15 (double st, double ct)
{
  double t11;
  double t14354;
  double t14355;
  double t7;
  double t9;
  t14354 = ct * ct;
  t14355 = t14354 * t14354;
  t7 = st * st;
  t9 = t7 * t7;
  t11 = t9 * t9;
  return(-0.9341002340055552e-1 * t11 * t9 * t7 * st * ct * (-0.11193d5 * t14355 - 0.35d2 + (0.22919d5 * t14355 + 0.1365d4) * t14354));
}

inline double Y_22_16 (double st, double ct)
{
  double t14363;
  double t14364;
  double t6;
  double t7;
  double t8;
  double t9;
  t14363 = ct * ct;
  t14364 = t14363 * t14363;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.4009135203436427e-1 * t9 * (-0.7995d4 * t14364 - 0.5d1 + (0.22919d5 * t14364 + 0.585d3) * t14363));
}

inline double Y_22_17 (double st, double ct)
{
  double t14370;
  double t6;
  double t7;
  double t8;
  double t9;
  t14370 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.2044265863495411d0 * t9 * st * ct * (0.15d2 + (-0.410d3 + 0.1763d4 * t14370) * t14370));
}

inline double Y_22_18 (double st, double ct)
{
  double t14377;
  double t5;
  double t6;
  double t7;
  double t8;
  t14377 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.7227571273128896e-1 * t8 * t5 * (0.3d1 + (-0.246d3 + 0.1763d4 * t14377) * t14377));
}

inline double Y_22_19 (double st, double ct)
{
  double t1;
  double t5;
  double t7;
  double t8;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.9255807359349003d0 * t9 * t5 * st * ct * (0.43d2 * t1 - 0.3d1));
}

inline double Y_22_20 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t6;
  double t7;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t6 = t5 * t5;
  t7 = t6 * t6;
  return(0.2473718569761772d0 * t7 * t5 * (0.43d2 * t1 - 0.1d1));
}

inline double Y_22_21 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t5 = t4 * t4;
  return(-0.2294032228119394d1 * t5 * t2 * st * ct);
}

inline double Y_22_22 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t5 = t4 * t4;
  return(0.3458383708025008d0 * t5 * t2 * t1);
}

inline double Y_23_0 (double st, double ct)
{
  double t14407;
  t14407 = ct * ct;
  return((-0.3868326187133789d1 + (0.3545965671539307d3 + (-0.9574107313156128d4 + (0.1189924766063690d6 + (-0.8197259499549866d6 + (0.3442848989810944d7 + (-0.9269208818721771d7 + (0.1633146315679550d8 + (-0.1873314891514778d8 + (0.1347472114949226d8 + (0.9815014276027679d6 * t14407 - 0.5518219137411118d7) * t14407) * t14407) * t14407) * t14407) * t14407) * t14407) * t14407) * t14407) * t14407) * t14407) * ct);
}

inline double Y_23_1 (double st, double ct)
{
  double t14419;
  double t14420;
  double t14421;
  double t14422;
  double t14423;
  double t14424;
  double t14426;
  double t14428;
  t14419 = ct * ct;
  t14420 = t14419 * t14419;
  t14422 = t14420 * t14420;
  t14423 = t14419 * t14422;
  t14428 = t14423 * t14423;
  t14426 = t14422 * t14422;
  t14421 = t14419 * t14420;
  t14424 = t14421 * t14421;
  return(-0.5601568281398168e-5 * (-0.880519675035d12 * t14428 - 0.2419805913525d13 * t14426 - 0.915602237550d12 * t14424 + 0.287760703230d12 * t14423 - 0.56057279850d11 * t14422 + 0.6329047725d10 * t14421 - 0.363738375d9 * t14420 - 0.29393d5 + (0.171529806825d12 * t14428 + 0.1945334165775d13 * t14426 + 0.1861389164250d13 * t14424 + 0.8083075d7) * t14419) * st);
}

inline double Y_23_2 (double st, double ct)
{
  double t14430;
  double t14431;
  double t14432;
  double t14433;
  double t14434;
  double t14435;
  double t14437;
  double t15;
  t14430 = ct * ct;
  t14431 = t14430 * t14430;
  t14433 = t14431 * t14431;
  t14437 = t14433 * t14433;
  t14432 = t14430 * t14431;
  t14435 = t14432 * t14432;
  t14434 = t14430 * t14433;
  t15 = st * st;
  return(0.1313684207339850e-3 * t15 * (0.63665481789d11 * t14437 + 0.47380815090d11 * t14435 + 0.5232012786d10 * t14433 - 0.815378616d9 * t14432 + 0.69044157d8 * t14431 + 0.29393d5 + (-0.19976776092d11 + 0.6861192273d10 * t14434) * t14434 + (-0.32018897274d11 * t14437 - 0.70394353848d11 * t14435 - 0.2645370d7) * t14430) * ct);
}

inline double Y_23_3 (double st, double ct)
{
  double t14;
  double t14440;
  double t14441;
  double t14442;
  double t14443;
  double t14444;
  double t14445;
  double t14447;
  t14440 = ct * ct;
  t14441 = t14440 * t14440;
  t14443 = t14441 * t14441;
  t14447 = t14443 * t14443;
  t14442 = t14441 * t14440;
  t14445 = t14442 * t14442;
  t14444 = t14440 * t14443;
  t14 = st * st;
  return(-0.5116064957430432e-3 * t14 * st * (0.11893551543d11 * t14447 + 0.6768687870d10 * t14445 + 0.517451814d9 * t14443 - 0.62721432d8 * t14442 + 0.3793635d7 * t14441 + 0.323d3 + (-0.2414775132d10 + 0.1583352063d10 * t14444) * t14444 + (-0.6685264266d10 * t14447 - 0.11603464920d11 * t14445 - 0.87210d5) * t14440));
}

inline double Y_23_4 (double st, double ct)
{
  double t13;
  double t14;
  double t14452;
  double t14453;
  double t14454;
  double t14455;
  double t14457;
  double t14459;
  t14452 = ct * ct;
  t14453 = t14452 * t14452;
  t14455 = t14453 * t14453;
  t14459 = t14455 * t14455;
  t14454 = t14453 * t14452;
  t14457 = t14454 * t14454;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.2377732125389211e-2 * t14 * (-0.1114210711d10 * t14459 - 0.1504152860d10 * t14457 - 0.223590290d9 * t14455 + 0.38329764d8 * t14454 - 0.3484524d7 * t14453 - 0.1615d4 + (0.293213345d9 * t14459 + 0.1762007636d10 * t14457 + 0.752076430d9 * t14455 + 0.140505d6) * t14452) * ct);
}

inline double Y_23_5 (double st, double ct)
{
  double t12;
  double t13;
  double t14463;
  double t14464;
  double t14465;
  double t14466;
  double t14468;
  double t14470;
  t14463 = ct * ct;
  t14464 = t14463 * t14463;
  t14466 = t14464 * t14464;
  t14470 = t14466 * t14466;
  t14465 = t14464 * t14463;
  t14468 = t14465 * t14465;
  t12 = st * st;
  t13 = t12 * t12;
  return(-0.1958667469243622e-2 * t13 * st * (-0.996925373d9 * t14470 - 0.1029157220d10 * t14468 - 0.105911190d9 * t14466 + 0.14121492d8 * t14465 - 0.916980d6 * t14464 - 0.85d2 + (0.293213345d9 * t14470 + 0.1391058660d10 * t14468 + 0.435412670d9 * t14466 + 0.22185d5) * t14463));
}

inline double Y_23_6 (double st, double ct)
{
  double t13;
  double t14;
  double t14475;
  double t14476;
  double t14477;
  double t14478;
  double t14480;
  t14475 = ct * ct;
  t14476 = t14475 * t14475;
  t14477 = t14476 * t14475;
  t14480 = t14477 * t14477;
  t14478 = t14476 * t14476;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.4972255678532033e-2 * t14 * t13 * (0.335772780d9 * t14480 - 0.14608440d8 * t14477 + 0.1460844d7 * t14476 + 0.765d3 + (0.75071150d8 + 0.90997245d8 * t14478) * t14478 + (-0.275013896d9 * t14480 - 0.212929080d9 * t14478 - 0.63240d5) * t14475) * ct);
}

inline double Y_23_7 (double st, double ct)
{
  double t12;
  double t14;
  double t14486;
  double t14487;
  double t14488;
  double t14489;
  double t14491;
  t14486 = ct * ct;
  t14487 = t14486 * t14486;
  t14488 = t14487 * t14486;
  t14491 = t14488 * t14488;
  t14489 = t14487 * t14487;
  t12 = st * st;
  t14 = t12 * t12;
  return(-0.5614467145614525e-1 * t14 * t12 * st * (0.17117828d8 * t14491 - 0.401016d6 * t14488 + 0.28644d5 * t14487 + 0.3d1 + (0.2649570d7 + 0.6066483d7 * t14489) * t14489 + (-0.16177288d8 * t14491 - 0.9185176d7 * t14489 - 0.744d3) * t14486));
}

inline double Y_23_8 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14498;
  double t14499;
  double t14500;
  double t14501;
  double t14503;
  t14498 = ct * ct;
  t14499 = t14498 * t14498;
  t14500 = t14498 * t14499;
  t14503 = t14500 * t14500;
  t14501 = t14499 * t14499;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1250401203585302d1 * t13 * (-0.456617d6 * t14503 - 0.185185d6 * t14501 + 0.42735d5 * t14500 - 0.4851d4 * t14499 - 0.3d1 + (0.195693d6 * t14503 + 0.414141d6 * t14501 + 0.231d3) * t14498) * ct);
}

inline double Y_23_9 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14508;
  double t14509;
  double t14510;
  double t14511;
  double t14513;
  t14508 = ct * ct;
  t14509 = t14508 * t14508;
  t14510 = t14508 * t14509;
  t14513 = t14510 * t14510;
  t14511 = t14509 * t14509;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.5707274542793994e-1 * t12 * st * (-0.5936021d7 * t14513 - 0.1666665d7 * t14511 + 0.299145d6 * t14510 - 0.24255d5 * t14509 - 0.3d1 + (0.2935395d7 * t14513 + 0.4555551d7 * t14511 + 0.693d3) * t14508));
}

inline double Y_23_10 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14519;
  double t14520;
  double t14521;
  double t14522;
  t14519 = ct * ct;
  t14520 = t14519 * t14519;
  t14522 = t14520 * t14520;
  t14521 = t14519 * t14520;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1115211057760582d0 * t13 * t11 * (0.1084655d7 * t14522 + 0.42735d5 * t14520 + 0.33d2 + (-0.317460d6 + 0.978465d6 * t14521) * t14521 + (-0.1696006d7 * t14522 - 0.2310d4) * t14519) * ct);
}

inline double Y_23_11 (double st, double ct)
{
  double t10;
  double t12;
  double t13;
  double t14529;
  double t14530;
  double t14531;
  double t14532;
  t14529 = ct * ct;
  t14530 = t14529 * t14529;
  t14532 = t14530 * t14530;
  t14531 = t14529 * t14530;
  t10 = st * st;
  t12 = t10 * t10;
  t13 = t12 * t12;
  return(-0.5304518059214348e-2 * t13 * t10 * st * (0.9761895d7 * t14532 + 0.213675d6 * t14530 + 0.33d2 + (-0.2222220d7 + 0.12720045d8 * t14531) * t14531 + (-0.18656066d8 * t14532 - 0.6930d4) * t14529));
}

inline double Y_23_12 (double st, double ct)
{
  double t10;
  double t11;
  double t14540;
  double t14541;
  double t14543;
  double t9;
  t14540 = ct * ct;
  t14541 = t14540 * t14540;
  t14543 = t14541 * t14541;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.5176679560944095e-2 * t11 * t10 * (-0.9328033d7 * t14543 - 0.666666d6 * t14541 - 0.693d3 + (0.7632027d7 * t14543 + 0.3904758d7 * t14541 + 0.42735d5) * t14540) * ct);
}

inline double Y_23_13 (double st, double ct)
{
  double t1;
  double t10;
  double t14549;
  double t14550;
  double t14559;
  double t7;
  double t8;
  t14549 = ct * ct;
  t14550 = t14549 * t14549;
  t1 = t14550 * t14550;
  t14559 = 0.848003d6 * t1;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.2575365564532994e-1 * t10 * t8 * st * (-0.33670d5 * t14550 - 0.7d1 - t14559 + (0.276094d6 * t14550 + 0.1295d4 + t14559) * t14549));
}

inline double Y_23_14 (double st, double ct)
{
  double t11;
  double t14560;
  double t14561;
  double t8;
  double t9;
  t14560 = ct * ct;
  t14561 = t14560 * t14560;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(0.9907629146599035e-1 * t11 * t9 * t8 * (-0.1820d4 * t14560 + 0.35d2 + (-0.91676d5 * t14560 + 0.22386d5 + 0.114595d6 * t14561) * t14561) * ct);
}

inline double Y_23_15 (double st, double ct)
{
  double t11;
  double t14569;
  double t14570;
  double t7;
  double t9;
  t14569 = ct * ct;
  t14570 = t14569 * t14569;
  t7 = st * st;
  t9 = t7 * t7;
  t11 = t9 * t9;
  return(-0.5357432267326198e-2 * t11 * t9 * t7 * st * (-0.5460d4 * t14569 + 0.35d2 + (-0.641732d6 * t14569 + 0.111930d6 + 0.1031355d7 * t14570) * t14570));
}

inline double Y_23_16 (double st, double ct)
{
  double t10;
  double t14579;
  double t14580;
  double t7;
  double t8;
  double t9;
  t14579 = ct * ct;
  t14580 = t14579 * t14579;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.9463112128514717e-1 * t10 * (-0.12341d5 * t14580 - 0.35d2 + (0.26445d5 * t14580 + 0.1435d4) * t14579) * ct);
}

inline double Y_23_17 (double st, double ct)
{
  double t14586;
  double t14587;
  double t6;
  double t7;
  double t8;
  double t9;
  t14586 = ct * ct;
  t14587 = t14586 * t14586;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.1979351911134514d0 * t9 * st * (-0.1763d4 * t14587 - 0.1d1 + (0.5289d4 * t14587 + 0.123d3) * t14586));
}

inline double Y_23_18 (double st, double ct)
{
  double t14594;
  double t6;
  double t7;
  double t8;
  double t9;
  t14594 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1034830722107360d1 * t9 * t6 * (0.3d1 + (-0.86d2 + 0.387d3 * t14594) * t14594) * ct);
}

inline double Y_23_19 (double st, double ct)
{
  double t14601;
  double t5;
  double t7;
  double t8;
  double t9;
  t14601 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.2142303123227002d0 * t9 * t5 * st * (0.1d1 + (-0.86d2 + 0.645d3 * t14601) * t14601));
}

inline double Y_23_20 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.2809604206196248d1 * t8 * t6 * (0.15d2 * t1 - 0.1d1) * ct);
}

inline double Y_23_21 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t7;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t7 = t5 * t5;
  t8 = t7 * t7;
  return(-0.2445446571889560d0 * t8 * t5 * st * (0.45d2 * t1 - 0.1d1));
}

inline double Y_23_22 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t5 = t4 * t4;
  return(0.2319954319026511d1 * t5 * t2 * t1 * ct);
}

inline double Y_23_23 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  t6 = t5 * t5;
  return(-0.3420586029872711d0 * t6 * t3 * t1 * st);
}

inline double Y_24_0 (double st, double ct)
{
  double t14633;
  double t14634;
  double t14635;
  double t14636;
  double t14637;
  double t14638;
  double t14640;
  double t14642;
  t14633 = ct * ct;
  t14634 = t14633 * t14633;
  t14636 = t14634 * t14634;
  t14637 = t14633 * t14636;
  t14642 = t14637 * t14637;
  t14640 = t14636 * t14636;
  t14635 = t14633 * t14634;
  t14638 = t14635 * t14635;
  return(0.1611802577972412d0 + 0.2897065047140837d8 * t14642 + 0.3980794144468904d8 * t14640 - 0.2705095634851456d7 * t14637 + 0.4610958468496799d6 * t14636 - 0.4627485201358795d5 * t14635 + 0.2393526828289032d4 * t14634 + (0.1004164288694859d8 + 0.1922106962388754d7 * t14638) * t14638 + (-0.1128726641743183d8 * t14642 - 0.4266995030672550d8 * t14640 - 0.2449719473519325d8 * t14638 - 0.4835407733917236d2) * t14633);
}

inline double Y_24_1 (double st, double ct)
{
  double t14645;
  double t14646;
  double t14647;
  double t14648;
  double t14649;
  double t14650;
  double t14652;
  double t14654;
  t14645 = ct * ct;
  t14646 = t14645 * t14645;
  t14648 = t14646 * t14646;
  t14649 = t14645 * t14648;
  t14654 = t14649 * t14649;
  t14652 = t14648 * t14648;
  t14647 = t14645 * t14646;
  t14650 = t14647 * t14647;
  return(-0.5840038639982171e-5 * ct * (-0.1735881645069d13 * t14654 - 0.5369122297539d13 * t14652 - 0.2397469243554d13 * t14650 + 0.842354058546d12 * t14649 - 0.189099890694d12 * t14648 + 0.25786348731d11 * t14647 - 0.1940907969d10 * t14646 - 0.676039d6 + (0.322476036831d12 * t14654 + 0.4050390505161d13 * t14652 + 0.4452442880886d13 * t14650 + 0.66927861d8) * t14645) * st);
}

inline double Y_24_2 (double st, double ct)
{
  double t14;
  double t14656;
  double t14657;
  double t14658;
  double t14659;
  double t14660;
  double t14661;
  double t14663;
  double t14665;
  t14656 = ct * ct;
  t14657 = t14656 * t14656;
  t14659 = t14657 * t14657;
  t14660 = t14656 * t14659;
  t14665 = t14660 * t14660;
  t14663 = t14659 * t14659;
  t14658 = t14657 * t14656;
  t14661 = t14658 * t14658;
  t14 = st * st;
  return(0.7140626493392913e-4 * t14 * (-0.121918108851d12 * t14665 - 0.305267822937d12 * t14663 - 0.104237793198d12 * t14661 + 0.30989614194d11 * t14660 - 0.5691969954d10 * t14659 + 0.603693783d9 * t14658 - 0.32456655d8 * t14657 - 0.2261d4 + (0.24805848987d11 * t14665 + 0.257382674241d12 * t14663 + 0.223366699710d12 * t14661 + 0.671517d6) * t14656));
}

inline double Y_24_3 (double st, double ct)
{
  double t14667;
  double t14668;
  double t14669;
  double t14670;
  double t14671;
  double t14672;
  double t14674;
  double t15;
  t14667 = ct * ct;
  t14668 = t14667 * t14667;
  t14670 = t14668 * t14668;
  t14674 = t14670 * t14670;
  t14669 = t14667 * t14668;
  t14672 = t14669 * t14669;
  t14671 = t14667 * t14670;
  t15 = st * st;
  return(-0.5801072386548504e-3 * t15 * st * ct * (0.23398424931d11 * t14674 + 0.15793605030d11 * t14672 + 0.1565132030d10 * t14670 - 0.229978584d9 * t14669 + 0.18293751d8 * t14668 + 0.6783d4 + (-0.6317442012d10 + 0.2756205443d10 * t14671) * t14671 + (-0.12314960490d11 * t14674 - 0.24668106904d11 * t14672 - 0.655690d6) * t14667));
}

inline double Y_24_4 (double st, double ct)
{
  double t14;
  double t14679;
  double t14680;
  double t14681;
  double t14682;
  double t14683;
  double t14684;
  double t14686;
  double t15;
  t14679 = ct * ct;
  t14680 = t14679 * t14679;
  t14682 = t14680 * t14680;
  t14686 = t14682 * t14682;
  t14681 = t14680 * t14679;
  t14684 = t14681 * t14681;
  t14683 = t14679 * t14682;
  t14 = st * st;
  t15 = t14 * t14;
  return(0.5023876055943425e-3 * t15 * (0.18941582087d11 * t14686 + 0.9776993590d10 * t14684 + 0.670770870d9 * t14682 - 0.76659528d8 * t14681 + 0.4355655d7 * t14680 + 0.323d3 + (-0.3309136292d10 + 0.2756205443d10 * t14683) * t14683 + (-0.11142107110d11 * t14686 - 0.17620076360d11 * t14684 - 0.93670d5) * t14679));
}

inline double Y_24_5 (double st, double ct)
{
  double t13;
  double t14;
  double t14691;
  double t14692;
  double t14693;
  double t14694;
  double t14696;
  double t14698;
  t14691 = ct * ct;
  t14692 = t14691 * t14691;
  t14694 = t14692 * t14692;
  t14698 = t14694 * t14694;
  t14693 = t14692 * t14691;
  t14696 = t14693 * t14693;
  t13 = st * st;
  t14 = t13 * t13;
  return(-0.2419819147190911e-2 * t14 * st * ct * (-0.1728947655d10 * t14698 - 0.2126560940d10 * t14696 - 0.285270370d9 * t14694 + 0.46260060d8 * t14693 - 0.3965148d7 * t14692 - 0.1615d4 + (0.475207835d9 * t14698 + 0.2612632012d10 * t14696 + 0.1011413130d10 * t14694 + 0.150195d6) * t14691));
}

inline double Y_24_6 (double st, double ct)
{
  double t12;
  double t13;
  double t14703;
  double t14704;
  double t14705;
  double t14706;
  double t14708;
  double t14710;
  t14703 = ct * ct;
  t14704 = t14703 * t14703;
  t14706 = t14704 * t14704;
  t14710 = t14706 * t14706;
  t14705 = t14704 * t14703;
  t14708 = t14705 * t14705;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.9628731718019915e-2 * t13 * t12 * (-0.309390633d9 * t14710 - 0.291003076d9 * t14708 - 0.27025614d8 * t14706 + 0.3408636d7 * t14705 - 0.208692d6 * t14704 - 0.17d2 + (0.95041567d8 * t14710 + 0.412520844d9 * t14708 + 0.117110994d9 * t14706 + 0.4743d4) * t14703));
}

inline double Y_24_7 (double st, double ct)
{
  double t13;
  double t14715;
  double t14716;
  double t14717;
  double t14718;
  double t14720;
  double t15;
  t14715 = ct * ct;
  t14716 = t14715 * t14715;
  t14717 = t14716 * t14715;
  t14720 = t14717 * t14717;
  t14718 = t14716 * t14716;
  t13 = st * st;
  t15 = t13 * t13;
  return(-0.7581670936443608e-1 * t15 * t13 * st * ct * (0.31049956d8 * t14720 - 0.1162392d7 * t14717 + 0.109956d6 * t14716 + 0.51d2 + (0.6296290d7 + 0.9197571d7 * t14718) * t14718 + (-0.26614248d8 * t14720 - 0.18774392d8 * t14718 - 0.4488d4) * t14715));
}

inline double Y_24_8 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t14727;
  double t14728;
  double t14729;
  double t14730;
  double t14732;
  t14727 = ct * ct;
  t14728 = t14727 * t14727;
  t14729 = t14727 * t14728;
  t14732 = t14729 * t14729;
  t14730 = t14728 * t14728;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.5526044814118675e-1 * t14 * (0.23744084d8 * t14732 - 0.478632d6 * t14729 + 0.32340d5 * t14728 + 0.3d1 + (0.3333330d7 + 0.9197571d7 * t14730) * t14730 + (-0.23483160d8 * t14732 - 0.12148136d8 * t14730 - 0.792d3) * t14727));
}

inline double Y_24_9 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14738;
  double t14739;
  double t14740;
  double t14741;
  double t14743;
  t14738 = ct * ct;
  t14739 = t14738 * t14738;
  t14740 = t14738 * t14739;
  t14743 = t14740 * t14740;
  t14741 = t14739 * t14739;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.3847843711791675e-1 * t13 * st * ct * (-0.20547765d8 * t14743 - 0.7592585d7 * t14741 + 0.1666665d7 * t14740 - 0.179487d6 * t14739 - 0.99d2 + (0.9197571d7 * t14743 + 0.17808063d8 * t14741 + 0.8085d4) * t14738));
}

inline double Y_24_10 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14749;
  double t14750;
  double t14751;
  double t14752;
  double t14754;
  t14749 = ct * ct;
  t14750 = t14749 * t14749;
  t14751 = t14749 * t14750;
  t14754 = t14751 * t14751;
  t14752 = t14750 * t14750;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5111561502591838e-2 * t12 * t10 * (-0.89040315d8 * t14754 - 0.22777755d8 * t14752 + 0.3888885d7 * t14751 - 0.299145d6 * t14750 - 0.33d2 + (0.45987855d8 * t14754 + 0.65296231d8 * t14752 + 0.8085d4) * t14749));
}

inline double Y_24_11 (double st, double ct)
{
  double t11;
  double t13;
  double t14;
  double t14760;
  double t14761;
  double t14762;
  double t14763;
  t14760 = ct * ct;
  t14761 = t14760 * t14760;
  t14763 = t14761 * t14761;
  t14762 = t14760 * t14761;
  t11 = st * st;
  t13 = t11 * t11;
  t14 = t13 * t13;
  return(-0.1616417674822289e-1 * t14 * t11 * st * ct * (0.9328033d7 * t14763 + 0.333333d6 * t14761 + 0.231d3 + (-0.2603172d7 + 0.9197571d7 * t14762) * t14762 + (-0.15264054d8 * t14763 - 0.17094d5) * t14760));
}

inline double Y_24_12 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t14771;
  double t14772;
  double t14773;
  double t14774;
  t14771 = ct * ct;
  t14772 = t14771 * t14771;
  t14774 = t14772 * t14772;
  t14773 = t14771 * t14772;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.2241568003514630e-2 * t12 * t11 * (0.27984099d8 * t14774 + 0.555555d6 * t14772 + 0.77d2 + (-0.6074068d7 + 0.39856141d8 * t14773) * t14773 + (-0.55968198d8 * t14774 - 0.17094d5) * t14771));
}

inline double Y_24_13 (double st, double ct)
{
  double t10;
  double t12;
  double t14781;
  double t14782;
  double t14784;
  double t9;
  t14781 = ct * ct;
  t14782 = t14781 * t14781;
  t14784 = t14782 * t14782;
  t9 = st * st;
  t10 = t9 * t9;
  t12 = t10 * t10;
  return(-0.4723276869700707e-1 * t12 * t10 * st * ct * (-0.1260545d7 * t14784 - 0.82082d5 * t14782 - 0.77d2 + (0.1077193d7 * t14784 + 0.504218d6 * t14782 + 0.5005d4) * t14781));
}

inline double Y_24_14 (double st, double ct)
{
  double t11;
  double t14791;
  double t14792;
  double t14794;
  double t8;
  double t9;
  t14791 = ct * ct;
  t14792 = t14791 * t14791;
  t14794 = t14792 * t14792;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(0.2541253256224630e-1 * t11 * t9 * t8 * (-0.1031355d7 * t14794 - 0.37310d5 * t14792 - 0.7d1 + (0.1077193d7 * t14794 + 0.320866d6 * t14792 + 0.1365d4) * t14791));
}

inline double Y_24_15 (double st, double ct)
{
  double t10;
  double t12;
  double t14801;
  double t14802;
  double t8;
  t14801 = ct * ct;
  t14802 = t14801 * t14801;
  t8 = st * st;
  t10 = t8 * t8;
  t12 = t10 * t10;
  return(-0.3345715378600709e-1 * t12 * t10 * t8 * st * ct * (-0.5740d4 * t14801 + 0.105d3 + (-0.317340d6 * t14801 + 0.74046d5 + 0.414305d6 * t14802) * t14802));
}

inline double Y_24_16 (double st, double ct)
{
  double t10;
  double t14811;
  double t14812;
  double t7;
  double t8;
  double t9;
  t14811 = ct * ct;
  t14812 = t14811 * t14811;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.2645020249757705e-1 * t10 * (-0.1148d4 * t14811 + 0.7d1 + (-0.148092d6 * t14811 + 0.24682d5 + 0.248583d6 * t14812) * t14812));
}

inline double Y_24_17 (double st, double ct)
{
  double t10;
  double t14819;
  double t14820;
  double t7;
  double t8;
  double t9;
  t14819 = ct * ct;
  t14820 = t14819 * t14819;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.4790335411945686d0 * t10 * st * ct * (-0.2709d4 * t14820 - 0.7d1 + (0.6063d4 * t14820 + 0.301d3) * t14819));
}

inline double Y_24_18 (double st, double ct)
{
  double t14827;
  double t14828;
  double t6;
  double t7;
  double t8;
  double t9;
  t14827 = ct * ct;
  t14828 = t14827 * t14827;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1955646242675331d0 * t9 * t6 * (-0.1935d4 * t14828 - 0.1d1 + (0.6063d4 * t14828 + 0.129d3) * t14827));
}

inline double Y_24_19 (double st, double ct)
{
  double t10;
  double t14835;
  double t6;
  double t8;
  double t9;
  t14835 = ct * ct;
  t6 = st * st;
  t8 = t6 * t6;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.3141232997462073d1 * t10 * t6 * st * ct * (0.1d1 + (-0.30d2 + 0.141d3 * t14835) * t14835));
}

inline double Y_24_20 (double st, double ct)
{
  double t14843;
  double t5;
  double t6;
  double t7;
  double t8;
  t14843 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.2117818854853927d0 * t8 * t6 * (0.1d1 + (-0.90d2 + 0.705d3 * t14843) * t14843));
}

inline double Y_24_21 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t8;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(-0.9471173846968288d0 * t9 * t6 * st * ct * (0.47d2 * t1 - 0.3d1));
}

inline double Y_24_22 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t7;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t7 = t5 * t5;
  t8 = t7 * t7;
  return(0.2418719577354965d0 * t8 * t5 * t4 * (0.47d2 * t1 - 0.1d1));
}

inline double Y_24_23 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  t6 = t5 * t5;
  return(-0.2345035635176439d1 * t6 * t3 * t1 * st * ct);
}

inline double Y_24_24 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.3384767388070956d0 * t4 * t3);
}

inline double Y_25_0 (double st, double ct)
{
  double t14874;
  t14874 = ct * ct;
  return((0.4029506444931030d1 + (-0.4351866960525513d3 + (0.1388245560407639d5 + (-0.2049314874887466d6 + (0.1690684771782160d7 + (-0.8607122474527359d7 + (0.2858006052439213d8 + (-0.6369270631150246d8 + (0.9600738819013238d8 + (-0.9656883490469456d8 + (0.6207996529587507d8 + (0.3767329646281958d7 * t14874 - 0.2306528354866505d8) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * t14874) * ct);
}

inline double Y_25_1 (double st, double ct)
{
  double t14887;
  double t14888;
  double t14889;
  double t14890;
  double t14891;
  double t14892;
  double t14894;
  double t14896;
  t14887 = ct * ct;
  t14888 = t14887 * t14887;
  t14890 = t14888 * t14888;
  t14891 = t14887 * t14890;
  t14896 = t14891 * t14891;
  t14894 = t14890 * t14890;
  t14889 = t14887 * t14888;
  t14892 = t14889 * t14889;
  return(-0.3039252468104830e-5 * (0.16824699021438d14 * t14896 + 0.21063479782653d14 * t14894 - 0.1221876216792d13 * t14891 + 0.196372963413d12 * t14890 - 0.18513276012d11 * t14889 + 0.895803678d9 * t14888 + 0.52003d5 + (0.4794938487108d13 + 0.1215486600363d13 * t14892) * t14892 + (-0.6846414320412d13 * t14896 - 0.23679206030172d14 * t14894 - 0.12329841823992d14 * t14892 - 0.16848972d8) * t14887) * st);
}

inline double Y_25_2 (double st, double ct)
{
  double t14899;
  double t14900;
  double t14901;
  double t14902;
  double t14903;
  double t14904;
  double t14906;
  double t14908;
  double t15;
  t14899 = ct * ct;
  t14900 = t14899 * t14899;
  t14902 = t14900 * t14900;
  t14903 = t14899 * t14902;
  t14908 = t14903 * t14903;
  t14906 = t14902 * t14902;
  t14901 = t14899 * t14900;
  t14904 = t14901 * t14901;
  t15 = st * st;
  return(0.2578891235921852e-4 * t15 * (-0.697319977079d12 * t14908 - 0.1973267169181d13 * t14906 - 0.799156414518d12 * t14904 + 0.266385471506d12 * t14903 - 0.56568343370d11 * t14902 + 0.7273072719d10 * t14901 - 0.514257667d9 * t14900 - 0.156009d6 + (0.135054066707d12 * t14908 + 0.1557842501985d13 * t14906 + 0.1560257761678d13 * t14904 + 0.16588957d8) * t14899) * ct);
}

inline double Y_25_3 (double st, double ct)
{
  double t14;
  double t14910;
  double t14911;
  double t14912;
  double t14913;
  double t14914;
  double t14915;
  double t14917;
  double t14919;
  t14910 = ct * ct;
  t14911 = t14910 * t14910;
  t14913 = t14911 * t14911;
  t14914 = t14910 * t14913;
  t14919 = t14914 * t14914;
  t14917 = t14913 * t14913;
  t14912 = t14911 * t14910;
  t14915 = t14912 * t14912;
  t14 = st * st;
  return(-0.1636123070769006e-3 * t14 * st * (-0.90954779619d11 * t14919 - 0.208357402957d12 * t14917 - 0.64528157694d11 * t14915 + 0.18200249606d11 * t14914 - 0.3162205530d10 * t14913 + 0.316220553d9 * t14912 - 0.15970735d8 * t14911 - 0.969d3 + (0.19293438101d11 * t14919 + 0.183844767315d12 * t14917 + 0.145365629970d12 * t14915 + 0.309111d6) * t14910));
}

inline double Y_25_4 (double st, double ct)
{
  double t14923;
  double t14924;
  double t14925;
  double t14926;
  double t14927;
  double t14928;
  double t14930;
  double t15;
  double t16;
  t14923 = ct * ct;
  t14924 = t14923 * t14923;
  t14926 = t14924 * t14924;
  t14930 = t14926 * t14926;
  t14925 = t14923 * t14924;
  t14928 = t14925 * t14925;
  t14927 = t14923 * t14926;
  t15 = st * st;
  t16 = t15 * t15;
  return(0.4132627943965270e-2 * t16 * (0.5186842965d10 * t14930 + 0.3189841410d10 * t14928 + 0.285270370d9 * t14926 - 0.39651480d8 * t14925 + 0.2973861d7 * t14924 + 0.969d3 + (-0.1213695756d10 + 0.665290969d9 * t14927) * t14927 + (-0.2851247010d10 * t14930 - 0.5225264024d10 * t14928 - 0.100130d6) * t14923) * ct);
}

inline double Y_25_5 (double st, double ct)
{
  double t14;
  double t14935;
  double t14936;
  double t14937;
  double t14938;
  double t14939;
  double t14940;
  double t14942;
  double t15;
  t14935 = ct * ct;
  t14936 = t14935 * t14935;
  t14938 = t14936 * t14936;
  t14942 = t14938 * t14938;
  t14937 = t14936 * t14935;
  t14940 = t14937 * t14937;
  t14939 = t14935 * t14938;
  t14 = st * st;
  t15 = t14 * t14;
  return(-0.4939435150362062e-3 * t15 * st * (0.29392110135d11 * t14942 + 0.13822646110d11 * t14940 + 0.855811110d9 * t14938 - 0.92520120d8 * t14937 + 0.4956435d7 * t14936 + 0.323d3 + (-0.4450217772d10 + 0.4657036783d10 * t14939) * t14939 + (-0.18057897730d11 * t14942 - 0.26126320120d11 * t14940 - 0.100130d6) * t14935));
}

inline double Y_25_6 (double st, double ct)
{
  double t13;
  double t14;
  double t14948;
  double t14949;
  double t14950;
  double t14951;
  double t14953;
  double t14955;
  t14948 = ct * ct;
  t14949 = t14948 * t14948;
  t14951 = t14949 * t14949;
  t14955 = t14951 * t14951;
  t14950 = t14949 * t14948;
  t14953 = t14950 * t14950;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.1229909433855681e-1 * t14 * t13 * (-0.524261547d9 * t14955 - 0.589949164d9 * t14953 - 0.71777706d8 * t14951 + 0.11042724d8 * t14950 - 0.895356d6 * t14949 - 0.323d3 + (0.150226993d9 * t14955 + 0.758506068d9 * t14953 + 0.267535086d9 * t14951 + 0.31977d5) * t14948) * ct);
}

inline double Y_25_7 (double st, double ct)
{
  double t12;
  double t14;
  double t14960;
  double t14961;
  double t14962;
  double t14963;
  double t14965;
  double t14967;
  t14960 = ct * ct;
  t14961 = t14960 * t14960;
  t14963 = t14961 * t14961;
  t14967 = t14963 * t14963;
  t14962 = t14961 * t14960;
  t14965 = t14962 * t14962;
  t12 = st * st;
  t14 = t12 * t12;
  return(-0.9477088670554510e-2 * t14 * t12 * st * (-0.469076121d9 * t14967 - 0.403649428d9 * t14965 - 0.33999966d8 * t14963 + 0.4068372d7 * t14962 - 0.235620d6 * t14961 - 0.17d2 + (0.150226993d9 * t14967 + 0.598820580d9 * t14965 + 0.154888734d9 * t14963 + 0.5049d4) * t14960));
}

inline double Y_25_8 (double st, double ct)
{
  double t13;
  double t14;
  double t14973;
  double t14974;
  double t14975;
  double t14976;
  double t14978;
  double t15;
  t14973 = ct * ct;
  t14974 = t14973 * t14973;
  t14975 = t14974 * t14973;
  t14978 = t14975 * t14975;
  t14976 = t14974 * t14974;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(0.2333097949203793e-2 * t15 * (0.1397248020d10 * t14978 - 0.45333288d8 * t14975 + 0.4068372d7 * t14974 + 0.1683d4 + (0.258147890d9 + 0.450680979d9 * t14976) * t14976 + (-0.1250869656d10 * t14978 - 0.807298856d9 * t14976 - 0.157080d6) * t14973) * ct);
}

inline double Y_25_9 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t14984;
  double t14985;
  double t14986;
  double t14987;
  double t14989;
  t14984 = ct * ct;
  t14985 = t14984 * t14984;
  t14986 = t14984 * t14985;
  t14989 = t14986 * t14986;
  t14987 = t14985 * t14985;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(-0.1649749381054429e-2 * t14 * st * (0.1068483780d10 * t14989 - 0.18666648d8 * t14986 + 0.1196580d7 * t14985 + 0.99d2 + (0.136666530d9 + 0.450680979d9 * t14987) * t14987 + (-0.1103708520d10 * t14989 - 0.522369848d9 * t14987 - 0.27720d5) * t14984));
}

inline double Y_25_10 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14996;
  double t14997;
  double t14998;
  double t14999;
  double t15001;
  t14996 = ct * ct;
  t14997 = t14996 * t14996;
  t14998 = t14996 * t14997;
  t15001 = t14998 * t14998;
  t14999 = t14997 * t14997;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.7808039168349771e-2 * t13 * t11 * (-0.137963565d9 * t15001 - 0.46640165d8 * t14999 + 0.9761895d7 * t14998 - 0.999999d6 * t14997 - 0.495d3 + (0.64382997d8 * t15001 + 0.114480405d9 * t14999 + 0.42735d5) * t14996) * ct);
}

inline double Y_25_11 (double st, double ct)
{
  double t10;
  double t12;
  double t13;
  double t15007;
  double t15008;
  double t15009;
  double t15010;
  double t15012;
  t15007 = ct * ct;
  t15008 = t15007 * t15007;
  t15009 = t15007 * t15008;
  t15012 = t15009 * t15009;
  t15010 = t15008 * t15008;
  t10 = st * st;
  t12 = t10 * t10;
  t13 = t12 * t12;
  return(-0.1512020283277694e-1 * t13 * t10 * st * (-0.39856141d8 * t15012 - 0.9328033d7 * t15010 + 0.1518517d7 * t15009 - 0.111111d6 * t15008 - 0.11d2 + (0.21460999d8 * t15012 + 0.27984099d8 * t15010 + 0.2849d4) * t15007));
}

inline double Y_25_12 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t15019;
  double t15020;
  double t15021;
  double t15022;
  t15019 = ct * ct;
  t15020 = t15019 * t15019;
  t15022 = t15020 * t15020;
  t15021 = t15019 * t15020;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.4916142432860395e-1 * t13 * t12 * (0.3781635d7 * t15022 + 0.123123d6 * t15020 + 0.77d2 + (-0.1008436d7 + 0.4060189d7 * t15021) * t15021 + (-0.6463158d7 * t15022 - 0.6006d4) * t15019) * ct);
}

inline double Y_25_13 (double st, double ct)
{
  double t10;
  double t11;
  double t13;
  double t15029;
  double t15030;
  double t15031;
  double t15032;
  t15029 = ct * ct;
  t15030 = t15029 * t15029;
  t15032 = t15030 * t15030;
  t15031 = t15029 * t15030;
  t10 = st * st;
  t11 = t10 * t10;
  t13 = t11 * t11;
  return(-0.2211877050166839e-2 * t13 * t11 * st * (0.34034715d8 * t15032 + 0.615615d6 * t15030 + 0.77d2 + (-0.7059052d7 + 0.52782457d8 * t15031) * t15031 + (-0.71094738d8 * t15032 - 0.18018d5) * t15029));
}

inline double Y_25_14 (double st, double ct)
{
  double t10;
  double t12;
  double t15040;
  double t15041;
  double t15043;
  double t9;
  t15040 = ct * ct;
  t15041 = t15040 * t15040;
  t15043 = t15041 * t15041;
  t9 = st * st;
  t10 = t9 * t9;
  t12 = t10 * t10;
  return(0.1595007223879715e-1 * t12 * t10 * t9 * (-0.4557355d7 * t15043 - 0.271502d6 * t15041 - 0.231d3 + (0.4060189d7 * t15043 + 0.1745370d7 * t15041 + 0.15785d5) * t15040) * ct);
}

inline double Y_25_15 (double st, double ct)
{
  double t10;
  double t12;
  double t15050;
  double t15051;
  double t15053;
  double t8;
  t15050 = ct * ct;
  t15051 = t15050 * t15050;
  t15053 = t15051 * t15051;
  t8 = st * st;
  t10 = t8 * t8;
  t12 = t10 * t10;
  return(-0.8364288446501775e-2 * t12 * t10 * t8 * st * (-0.3728745d7 * t15053 - 0.123410d6 * t15051 - 0.21d2 + (0.4060189d7 * t15053 + 0.1110690d7 * t15051 + 0.4305d4) * t15050));
}

inline double Y_25_16 (double st, double ct)
{
  double t10;
  double t11;
  double t15061;
  double t15062;
  double t8;
  double t9;
  t15061 = ct * ct;
  t15062 = t15061 * t15061;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1693639326972424d0 * t11 * (-0.1204d4 * t15061 + 0.21d2 + (-0.72756d5 * t15061 + 0.16254d5 + 0.99029d5 * t15062) * t15062) * ct);
}

inline double Y_25_17 (double st, double ct)
{
  double t10;
  double t15069;
  double t15070;
  double t7;
  double t8;
  double t9;
  t15069 = ct * ct;
  t15070 = t15069 * t15069;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.1829339552455714d0 * t10 * st * (-0.172d3 * t15069 + 0.1d1 + (-0.24252d5 * t15069 + 0.3870d4 + 0.42441d5 * t15070) * t15070));
}

inline double Y_25_18 (double st, double ct)
{
  double t10;
  double t15078;
  double t15079;
  double t7;
  double t8;
  double t9;
  t15078 = ct * ct;
  t15079 = t15078 * t15078;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.3392919421639027d1 * t10 * t7 * (-0.423d3 * t15079 - 0.1d1 + (0.987d3 * t15079 + 0.45d2) * t15078) * ct);
}

inline double Y_25_19 (double st, double ct)
{
  double t10;
  double t15086;
  double t15087;
  double t6;
  double t8;
  double t9;
  t15086 = ct * ct;
  t15087 = t15086 * t15086;
  t6 = st * st;
  t8 = t6 * t6;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.1933295265855425d0 * t10 * t6 * st * (-0.2115d4 * t15087 - 0.1d1 + (0.6909d4 * t15087 + 0.135d3) * t15086));
}

inline double Y_25_20 (double st, double ct)
{
  double t15095;
  double t6;
  double t7;
  double t8;
  double t9;
  t15095 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.2117818854853927d0 * t9 * t7 * (0.15d2 + (-0.470d3 + 0.2303d4 * t15095) * t15095) * ct);
}

inline double Y_25_21 (double st, double ct)
{
  double t15102;
  double t5;
  double t6;
  double t8;
  double t9;
  t15102 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(-0.6982241995400533e-1 * t9 * t6 * st * (0.3d1 + (-0.282d3 + 0.2303d4 * t15102) * t15102));
}

inline double Y_25_22 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t8;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(0.9573567891376206d0 * t9 * t6 * t5 * (0.49d2 * t1 - 0.3d1) * ct);
}

inline double Y_25_23 (double st, double ct)
{
  double t1;
  double t4;
  double t6;
  double t8;
  double t9;
  t1 = ct * ct;
  t4 = st * st;
  t6 = t4 * t4;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(-0.2393391972844051d0 * t9 * t6 * t4 * st * (0.49d2 * t1 - 0.1d1));
}

inline double Y_25_24 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2369337171649669d1 * t4 * t3 * ct);
}

inline double Y_25_25 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(-0.3350748761981671d0 * t5 * t3 * st);
}

inline double Y_26_0 (double st, double ct)
{
  double t15134;
  double t15135;
  double t15136;
  double t15137;
  double t15138;
  double t15139;
  double t15141;
  double t15143;
  double t15145;
  t15134 = ct * ct;
  t15135 = t15134 * t15134;
  t15136 = t15134 * t15135;
  t15139 = t15136 * t15136;
  t15145 = t15139 * t15139;
  t15137 = t15135 * t15135;
  t15138 = t15134 * t15137;
  t15143 = t15138 * t15138;
  t15141 = t15137 * t15137;
  return(-0.1549810171127319d0 - 0.4709162057852447d8 * t15145 - 0.2172798785355628d9 * t15143 - 0.1632125599232250d9 * t15141 - 0.2653862762979269d8 * t15139 + 0.5917396701237559d7 * t15138 - 0.8453423858910799d6 * t15137 + 0.7172602062106132d5 * t15136 - 0.3155103546380997d4 * t15135 + (0.7389761998476148d7 * t15145 + 0.1326253804048240d9 * t15143 + 0.2293509828986496d9 * t15141 + 0.7961588288937807d8 * t15139 + 0.5439833700656891d2) * t15134);
}

inline double Y_26_1 (double st, double ct)
{
  double t15147;
  double t15148;
  double t15149;
  double t15150;
  double t15151;
  double t15152;
  double t15154;
  double t15156;
  t15147 = ct * ct;
  t15148 = t15147 * t15147;
  t15150 = t15148 * t15148;
  t15151 = t15147 * t15150;
  t15156 = t15151 * t15151;
  t15154 = t15150 * t15150;
  t15149 = t15147 * t15148;
  t15152 = t15149 * t15149;
  return(-0.3158483815072005e-5 * ct * (0.34865998853950d14 * t15156 + 0.49331679229525d14 * t15154 - 0.3805506735800d13 * t15151 + 0.707104292125d12 * t15150 - 0.80811919100d11 * t15149 + 0.5142576670d10 * t15148 + 0.1300075d7 + (0.13319273575300d14 + 0.2295919134019d13 * t15152) * t15152 + (-0.13505406670700d14 * t15156 - 0.51928083399500d14 * t15154 - 0.31205155233560d14 * t15152 - 0.150808700d9) * t15147) * st);
}

inline double Y_26_2 (double st, double ct)
{
  double t15159;
  double t15160;
  double t15161;
  double t15162;
  double t15163;
  double t15164;
  double t15166;
  double t15168;
  double t16;
  t15159 = ct * ct;
  t15160 = t15159 * t15159;
  t15162 = t15160 * t15160;
  t15163 = t15159 * t15162;
  t15168 = t15163 * t15163;
  t15166 = t15162 * t15162;
  t15161 = t15159 * t15160;
  t15164 = t15161 * t15161;
  t16 = st * st;
  return(0.2089140673675762e-4 * t16 * (0.4183919862474d13 * t15168 + 0.4792220268011d13 * t15166 - 0.239203280536d12 * t15163 + 0.36365363595d11 * t15162 - 0.3232476764d10 * t15161 + 0.146930762d9 * t15160 + 0.7429d4 + (0.989431751308d12 + 0.327988447717d12 * t15164) * t15164 + (-0.1774996305292d13 * t15168 - 0.5637906197660d13 * t15166 - 0.2674727591448d13 * t15164 - 0.2585292d7) * t15159));
}

inline double Y_26_3 (double st, double ct)
{
  double t15;
  double t15171;
  double t15172;
  double t15173;
  double t15174;
  double t15175;
  double t15176;
  double t15178;
  double t15180;
  t15171 = ct * ct;
  t15172 = t15171 * t15171;
  t15174 = t15172 * t15172;
  t15175 = t15171 * t15174;
  t15180 = t15175 * t15175;
  t15178 = t15174 * t15174;
  t15173 = t15172 * t15171;
  t15176 = t15173 * t15173;
  t15 = st * st;
  return(-0.1837177210670661e-3 * t15 * st * ct * (-0.168318615157d12 * t15180 - 0.437423756715d12 * t15178 - 0.161405975346d12 * t15176 + 0.51177504378d11 * t15175 - 0.10310486230d11 * t15174 + 0.1253978055d10 * t15173 - 0.83598537d8 * t15172 - 0.22287d5 + (0.33929839419d11 * t15180 + 0.360682746765d12 * t15178 + 0.330497949518d12 * t15176 + 0.2533289d7) * t15171));
}

inline double Y_26_4 (double st, double ct)
{
  double t14;
  double t15;
  double t15184;
  double t15185;
  double t15186;
  double t15187;
  double t15188;
  double t15189;
  double t15191;
  double t15193;
  t15184 = ct * ct;
  t15185 = t15184 * t15184;
  t15187 = t15185 * t15185;
  t15188 = t15184 * t15187;
  t15193 = t15188 * t15188;
  t15191 = t15187 * t15187;
  t15186 = t15185 * t15184;
  t15189 = t15186 * t15186;
  t14 = st * st;
  t15 = t14 * t14;
  return(0.4825869736484049e-3 * t15 * (-0.51227404613d11 * t15193 - 0.107771070495d12 * t15191 - 0.30409821442d11 * t15189 + 0.8158732582d10 * t15188 - 0.1344846030d10 * t15187 + 0.127215165d9 * t15186 - 0.6057865d7 * t15185 - 0.323d3 + (0.11309946473d11 * t15193 + 0.99318437515d11 * t15191 + 0.71847380330d11 * t15189 + 0.110143d6) * t15184));
}

inline double Y_26_5 (double st, double ct)
{
  double t15;
  double t15197;
  double t15198;
  double t15199;
  double t15200;
  double t15201;
  double t15202;
  double t15204;
  double t16;
  t15197 = ct * ct;
  t15198 = t15197 * t15197;
  t15200 = t15198 * t15198;
  t15204 = t15200 * t15200;
  t15199 = t15198 * t15197;
  t15202 = t15199 * t15199;
  t15201 = t15197 * t15200;
  t15 = st * st;
  t16 = t15 * t15;
  return(-0.1260282141530841e-1 * t16 * st * (0.2621307735d10 * t15204 + 0.1474872910d10 * t15202 + 0.119629510d9 * t15200 - 0.15775320d8 * t15199 + 0.1119195d7 * t15198 + 0.323d3 + (-0.535070172d9 + 0.364836983d9 * t15201) * t15201 + (-0.1502269930d10 * t15204 - 0.2528353560d10 * t15202 - 0.35530d5) * t15197) * ct);
}

inline double Y_26_6 (double st, double ct)
{
  double t14;
  double t15;
  double t15210;
  double t15211;
  double t15212;
  double t15213;
  double t15214;
  double t15215;
  double t15217;
  t15210 = ct * ct;
  t15211 = t15210 * t15210;
  t15213 = t15211 * t15211;
  t15217 = t15213 * t15213;
  t15212 = t15211 * t15210;
  t15215 = t15212 * t15212;
  t15214 = t15210 * t15213;
  t14 = st * st;
  t15 = t14 * t14;
  return(0.4861643908390198e-3 * t15 * t14 * (0.44562231495d11 * t15217 + 0.19173347830d11 * t15215 + 0.1076665590d10 * t15213 - 0.110427240d9 * t15212 + 0.5595975d7 * t15211 + 0.323d3 + (-0.5885771892d10 + 0.7661576643d10 * t15214) * t15214 + (-0.28543128670d11 * t15217 - 0.37925303400d11 * t15215 - 0.106590d6) * t15210));
}

inline double Y_26_7 (double st, double ct)
{
  double t13;
  double t15;
  double t15223;
  double t15224;
  double t15225;
  double t15226;
  double t15228;
  double t15230;
  t15223 = ct * ct;
  t15224 = t15223 * t15223;
  t15226 = t15224 * t15224;
  t15230 = t15226 * t15226;
  t15225 = t15224 * t15223;
  t15228 = t15225 * t15225;
  t13 = st * st;
  t15 = t13 * t13;
  return(-0.1135435394871321e-2 * t15 * t13 * st * (-0.8562938601d10 * t15230 - 0.8849237460d10 * t15228 - 0.980961982d9 * t15226 + 0.143555412d9 * t15225 - 0.11042724d8 * t15224 - 0.3553d4 + (0.2553858881d10 * t15230 + 0.11883261732d11 * t15228 + 0.3834669566d10 * t15226 + 0.373065d6) * t15223) * ct);
}

inline double Y_26_8 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t15236;
  double t15237;
  double t15238;
  double t15239;
  double t15241;
  double t15243;
  t15236 = ct * ct;
  t15237 = t15236 * t15236;
  t15239 = t15237 * t15237;
  t15243 = t15239 * t15239;
  t15238 = t15236 * t15237;
  t15241 = t15238 * t15238;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.1442941391921878e-1 * t14 * (-0.450680979d9 * t15243 - 0.356161260d9 * t15241 - 0.27333306d8 * t15239 + 0.3111108d7 * t15238 - 0.170940d6 * t15237 - 0.11d2 + (0.150226993d9 * t15243 + 0.551854260d9 * t15241 + 0.130592462d9 * t15239 + 0.3465d4) * t15236));
}

inline double Y_26_9 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t15248;
  double t15249;
  double t15250;
  double t15251;
  double t15253;
  t15248 = ct * ct;
  t15249 = t15248 * t15248;
  t15250 = t15248 * t15249;
  t15253 = t15250 * t15250;
  t15251 = t15249 * t15249;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(-0.8048342555016493e-2 * t15 * st * (0.551854260d9 * t15253 - 0.15619032d8 * t15250 + 0.1333332d7 * t15249 + 0.495d3 + (0.93280330d8 + 0.193148991d9 * t15251) * t15251 + (-0.515063976d9 * t15253 - 0.305281080d9 * t15251 - 0.48840d5) * t15248) * ct);
}

inline double Y_26_10 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t15260;
  double t15261;
  double t15262;
  double t15263;
  double t15265;
  t15260 = ct * ct;
  t15261 = t15260 * t15260;
  t15262 = t15260 * t15261;
  t15265 = t15262 * t15262;
  t15263 = t15261 * t15261;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.2928014688131164e-2 * t14 * t12 * (0.797122820d9 * t15265 - 0.12148136d8 * t15262 + 0.740740d6 * t15261 + 0.55d2 + (0.93280330d8 + 0.364836983d9 * t15263) * t15263 + (-0.858439960d9 * t15265 - 0.373121320d9 * t15263 - 0.16280d5) * t15260));
}

inline double Y_26_11 (double st, double ct)
{
  double t11;
  double t13;
  double t14;
  double t15272;
  double t15273;
  double t15274;
  double t15275;
  double t15277;
  t15272 = ct * ct;
  t15273 = t15272 * t15272;
  t15274 = t15272 * t15273;
  t15277 = t15274 * t15274;
  t15275 = t15273 * t15273;
  t11 = st * st;
  t13 = t11 * t11;
  t14 = t13 * t13;
  return(-0.7124167213250829e-1 * t14 * t11 * st * (-0.20300945d8 * t15277 - 0.6302725d7 * t15275 + 0.1260545d7 * t15274 - 0.123123d6 * t15273 - 0.55d2 + (0.9860459d7 * t15277 + 0.16157895d8 * t15275 + 0.5005d4) * t15272) * ct);
}

inline double Y_26_12 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t15284;
  double t15285;
  double t15286;
  double t15287;
  double t15289;
  t15284 = ct * ct;
  t15285 = t15284 * t15284;
  t15286 = t15284 * t15285;
  t15289 = t15286 * t15286;
  t15287 = t15285 * t15285;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.1491992640296833e-1 * t12 * t11 * (-0.52782457d8 * t15289 - 0.11344905d8 * t15287 + 0.1764763d7 * t15286 - 0.123123d6 * t15285 - 0.11d2 + (0.29581377d8 * t15289 + 0.35547369d8 * t15287 + 0.3003d4) * t15284));
}

inline double Y_26_13 (double st, double ct)
{
  double t11;
  double t12;
  double t14;
  double t15295;
  double t15296;
  double t15297;
  double t15298;
  t15295 = ct * ct;
  t15296 = t15295 * t15295;
  t15298 = t15296 * t15296;
  t15297 = t15295 * t15296;
  t11 = st * st;
  t12 = t11 * t11;
  t14 = t12 * t12;
  return(-0.3831083430984541e-2 * t14 * t12 * st * (0.59245615d8 * t15298 + 0.1764763d7 * t15296 + 0.1001d4 + (-0.15126540d8 + 0.69023213d8 * t15297) * t15297 + (-0.105564914d9 * t15298 - 0.82082d5) * t15295) * ct);
}

inline double Y_26_14 (double st, double ct)
{
  double t10;
  double t11;
  double t13;
  double t15306;
  double t15307;
  double t15308;
  double t15309;
  t15306 = ct * ct;
  t15307 = t15306 * t15306;
  t15309 = t15307 * t15307;
  t15308 = t15306 * t15307;
  t10 = st * st;
  t11 = t10 * t10;
  t13 = t11 * t11;
  return(0.2184053589756532e-2 * t13 * t11 * t10 * (0.41016195d8 * t15309 + 0.678755d6 * t15307 + 0.77d2 + (-0.8145060d7 + 0.69023213d8 * t15308) * t15308 + (-0.89324158d8 * t15309 - 0.18942d5) * t15306));
}

inline double Y_26_15 (double st, double ct)
{
  double t11;
  double t13;
  double t15317;
  double t15318;
  double t15320;
  double t9;
  t15317 = ct * ct;
  t15318 = t15317 * t15317;
  t15320 = t15318 * t15318;
  t9 = st * st;
  t11 = t9 * t9;
  t13 = t11 * t11;
  return(-0.1614821737943290e-1 * t13 * t11 * t9 * st * (-0.5446595d7 * t15320 - 0.297990d6 * t15318 - 0.231d3 + (0.5050479d7 * t15320 + 0.2000790d7 * t15318 + 0.16555d5) * t15317) * ct);
}

inline double Y_26_16 (double st, double ct)
{
  double t10;
  double t11;
  double t15328;
  double t15329;
  double t15331;
  double t8;
  double t9;
  t15328 = ct * ct;
  t15329 = t15328 * t15328;
  t15331 = t15329 * t15329;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1735463879877938d0 * t11 * (-0.212205d6 * t15331 - 0.6450d4 * t15329 - 0.1d1 + (0.240499d6 * t15331 + 0.60630d5 * t15329 + 0.215d3) * t15328));
}

inline double Y_26_17 (double st, double ct)
{
  double t10;
  double t11;
  double t15337;
  double t15338;
  double t8;
  double t9;
  t15337 = ct * ct;
  t15338 = t15337 * t15337;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(-0.3598734496590745d1 * t11 * st * (-0.60d2 * t15337 + 0.1d1 + (-0.3948d4 * t15337 + 0.846d3 + 0.5593d4 * t15338) * t15338) * ct);
}

inline double Y_26_18 (double st, double ct)
{
  double t10;
  double t15346;
  double t15347;
  double t7;
  double t8;
  double t9;
  t15346 = ct * ct;
  t15347 = t15346 * t15346;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.1808432128075761d0 * t10 * t7 * (-0.180d3 * t15346 + 0.1d1 + (-0.27636d5 * t15346 + 0.4230d4 + 0.50337d5 * t15347) * t15347));
}

inline double Y_26_19 (double st, double ct)
{
  double t10;
  double t11;
  double t15355;
  double t15356;
  double t7;
  double t9;
  t15355 = ct * ct;
  t15356 = t15355 * t15355;
  t7 = st * st;
  t9 = t7 * t7;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(-0.6862517422253688d0 * t11 * t7 * st * (-0.2303d4 * t15356 - 0.5d1 + (0.5593d4 * t15356 + 0.235d3) * t15355) * ct);
}

inline double Y_26_20 (double st, double ct)
{
  double t15364;
  double t15365;
  double t6;
  double t7;
  double t8;
  double t9;
  t15364 = ct * ct;
  t15365 = t15364 * t15364;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.3824331442840756e-1 * t9 * t7 * (-0.11515d5 * t15365 - 0.5d1 + (0.39151d5 * t15365 + 0.705d3) * t15364));
}

inline double Y_26_21 (double st, double ct)
{
  double t10;
  double t15372;
  double t6;
  double t7;
  double t9;
  t15372 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(-0.2140714859232652d0 * t10 * t7 * st * (0.15d2 + (-0.490d3 + 0.2499d4 * t15372) * t15372) * ct);
}

inline double Y_26_22 (double st, double ct)
{
  double t15380;
  double t5;
  double t6;
  double t8;
  double t9;
  t15380 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(0.2072738249696703d0 * t9 * t6 * t5 * (0.1d1 + (-0.98d2 + 0.833d3 * t15380) * t15380));
}

inline double Y_26_23 (double st, double ct)
{
  double t1;
  double t10;
  double t5;
  double t7;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(-0.2901833549575385d1 * t10 * t7 * t5 * st * (0.17d2 * t1 - 0.1d1) * ct);
}

inline double Y_26_24 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t6;
  double t7;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t6 = t5 * t5;
  t7 = t6 * t6;
  return(0.2369337171649669d0 * t7 * t6 * (0.51d2 * t1 - 0.1d1));
}

inline double Y_26_25 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(-0.2392913246572067d1 * t5 * t3 * st * ct);
}

inline double Y_26_26 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(0.3318373618558689d0 * t5 * t3 * t1);
}

inline double Y_27_0 (double st, double ct)
{
  double t15412;
  t15412 = ct * ct;
  return((-0.4184487462043762d1 + (0.5258505910634994d3 + (-0.1956164198756218d5 + (0.3381369543564320d6 + (-0.3287442611798644d7 + (0.1990397072234452d8 + (-0.7961588288937807d8 + (0.2176167465643001d9 + (-0.4128317692175692d9 + (0.5431996963389069d9 + (-0.4862930614843547d9 + (0.2825497234711468d9 + (0.1450582910811985d8 * t15412 - 0.9606690598018992d8) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * t15412) * ct);
}

inline double Y_27_1 (double st, double ct)
{
  double t15426;
  double t15427;
  double t15428;
  double t15429;
  double t15430;
  double t15431;
  double t15433;
  double t15435;
  double t15437;
  t15426 = ct * ct;
  t15427 = t15426 * t15426;
  t15428 = t15426 * t15427;
  t15431 = t15428 * t15428;
  t15437 = t15431 * t15431;
  t15429 = t15427 * t15427;
  t15430 = t15426 * t15429;
  t15435 = t15430 * t15430;
  t15433 = t15429 * t15429;
  return(-0.8194283893625451e-6 * (-0.106596245508025d15 * t15437 - 0.453257985101350d15 * t15435 - 0.311494317420715d15 * t15433 - 0.45937902739300d14 * t15431 + 0.9717633271775d13 * t15430 - 0.1313193685375d13 * t15429 + 0.105055494830d12 * t15428 - 0.4341136150d10 * t15427 - 0.185725d6 + (0.17383387729001d14 * t15437 + 0.288436899609950d15 * t15435 + 0.458079878559875d15 * t15433 + 0.144881077870100d15 * t15431 + 0.70018325d8) * t15426) * st);
}

inline double Y_27_2 (double st, double ct)
{
  double t15439;
  double t15440;
  double t15441;
  double t15442;
  double t15443;
  double t15444;
  double t15446;
  double t15448;
  double t17;
  t15439 = ct * ct;
  t15440 = t15439 * t15439;
  t15442 = t15440 * t15440;
  t15443 = t15439 * t15442;
  t15448 = t15443 * t15443;
  t15446 = t15442 * t15442;
  t15441 = t15439 * t15440;
  t15444 = t15441 * t15441;
  t17 = st * st;
  return(0.2250073366606397e-4 * t17 * ct * (0.8415930757850d13 * t15448 + 0.10935593917875d14 * t15446 - 0.731107205400d12 * t15443 + 0.128881077875d12 * t15442 - 0.13933089500d11 * t15441 + 0.835985370d9 * t15440 + 0.185725d6 + (0.2690099589100d13 + 0.599427163069d12 * t15444) * t15444 + (-0.3392983941900d13 * t15448 - 0.12022758225500d14 * t15446 - 0.6609958990360d13 * t15444 - 0.23029900d8) * t15439));
}

inline double Y_27_3 (double st, double ct)
{
  double t15451;
  double t15452;
  double t15453;
  double t15454;
  double t15455;
  double t15456;
  double t15458;
  double t15460;
  double t16;
  t15451 = ct * ct;
  t15452 = t15451 * t15451;
  t15454 = t15452 * t15452;
  t15455 = t15451 * t15454;
  t15460 = t15455 * t15455;
  t15458 = t15454 * t15454;
  t15453 = t15451 * t15452;
  t15456 = t15453 * t15453;
  t16 = st * st;
  return(-0.2054026564886524e-4 * t16 * st * (0.7069381836594d13 * t15460 + 0.7436203864155d13 * t15458 - 0.321687170376d12 * t15455 + 0.46397188035d11 * t15454 - 0.3901265060d10 * t15453 + 0.167197074d9 * t15452 + 0.7429d4 + (0.1398851786332d13 + 0.599427163069d12 * t15456) * t15456 + (-0.3121545226548d13 * t15460 - 0.9137296251380d13 * t15458 - 0.3965975394216d13 * t15456 - 0.2763588d7) * t15451));
}

inline double Y_27_4 (double st, double ct)
{
  double t15;
  double t15465;
  double t15466;
  double t15467;
  double t15468;
  double t15469;
  double t15470;
  double t15472;
  double t15474;
  double t16;
  t15465 = ct * ct;
  t15466 = t15465 * t15465;
  t15468 = t15466 * t15466;
  t15469 = t15465 * t15468;
  t15474 = t15469 * t15469;
  t15472 = t15468 * t15468;
  t15467 = t15466 * t15465;
  t15470 = t15467 * t15467;
  t15 = st * st;
  t16 = t15 * t15;
  return(0.5602637500471627e-3 * t16 * (-0.92303756699d11 * t15474 - 0.221063618985d12 * t15472 - 0.74628569246d11 * t15470 + 0.22562125586d11 * t15469 - 0.4323752290d10 * t15468 + 0.498894495d9 * t15467 - 0.31461815d8 * t15466 - 0.7429d4 + (0.19336360099d11 * t15474 + 0.190037146145d12 * t15472 + 0.159918362670d12 * t15470 + 0.898909d6) * t15465) * ct);
}

inline double Y_27_5 (double st, double ct)
{
  double t14;
  double t15;
  double t15478;
  double t15479;
  double t15480;
  double t15481;
  double t15482;
  double t15483;
  double t15485;
  double t15487;
  t15478 = ct * ct;
  t15479 = t15478 * t15478;
  t15481 = t15479 * t15479;
  t15482 = t15478 * t15481;
  t15487 = t15482 * t15482;
  t15485 = t15481 * t15481;
  t15480 = t15479 * t15478;
  t15483 = t15480 * t15480;
  t14 = st * st;
  t15 = t14 * t14;
  return(-0.4749867038003839e-3 * t15 * st * (-0.84277343073d11 * t15487 - 0.163394848815d12 * t15485 - 0.42181365226d11 * t15483 + 0.10790581802d11 * t15482 - 0.1691903070d10 * t15481 + 0.151837455d9 * t15480 - 0.6839525d7 * t15479 - 0.323d3 + (0.19336360099d11 * t15487 + 0.156987207685d12 * t15485 + 0.104294584350d12 * t15483 + 0.117249d6) * t15478));
}

inline double Y_27_6 (double st, double ct)
{
  double t15;
  double t15492;
  double t15493;
  double t15494;
  double t15495;
  double t15496;
  double t15497;
  double t15499;
  double t16;
  t15492 = ct * ct;
  t15493 = t15492 * t15492;
  t15495 = t15493 * t15493;
  t15499 = t15495 * t15495;
  t15494 = t15493 * t15492;
  t15497 = t15494 * t15494;
  t15496 = t15492 * t15495;
  t15 = st * st;
  t16 = t15 * t15;
  return(0.3878250196391440e-3 * t16 * t15 * (0.128444079015d12 * t15499 + 0.66369280950d11 * t15497 + 0.4904809910d10 * t15495 - 0.615237480d9 * t15494 + 0.41410215d8 * t15493 + 0.10659d5 + (-0.23008017396d11 + 0.19336360099d11 * t15496) * t15496 + (-0.76615766430d11 * t15499 - 0.118832617320d12 * t15497 - 0.1243550d7) * t15492) * ct);
}

inline double Y_27_7 (double st, double ct)
{
  double t14;
  double t15505;
  double t15506;
  double t15507;
  double t15508;
  double t15509;
  double t15510;
  double t15512;
  double t16;
  t15505 = ct * ct;
  t15506 = t15505 * t15505;
  t15508 = t15506 * t15506;
  t15512 = t15508 * t15508;
  t15507 = t15506 * t15505;
  t15510 = t15507 * t15507;
  t15509 = t15505 * t15508;
  t14 = st * st;
  t16 = t14 * t14;
  return(-0.7402133157197334e-3 * t16 * t14 * st * (0.42814693005d11 * t15512 + 0.16917659850d11 * t15510 + 0.865554690d9 * t15508 - 0.84444360d8 * t15507 + 0.4059825d7 * t15506 + 0.209d3 + (-0.4962513556d10 + 0.7962030629d10 * t15509) * t15509 + (-0.28543128670d11 * t15512 - 0.34950769800d11 * t15510 - 0.73150d5) * t15505));
}

inline double Y_27_8 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t15519;
  double t15520;
  double t15521;
  double t15522;
  double t15524;
  double t15526;
  t15519 = ct * ct;
  t15520 = t15519 * t15519;
  t15522 = t15520 * t15520;
  t15526 = t15522 * t15522;
  t15521 = t15519 * t15520;
  t15524 = t15521 * t15521;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(0.3916840701065906e-2 * t15 * (-0.3669830829d10 * t15526 - 0.3495076980d10 * t15524 - 0.354465254d9 * t15522 + 0.49460268d8 * t15521 - 0.3619044d7 * t15520 - 0.1045d4 + (0.1137432947d10 * t15526 + 0.4893107772d10 * t15524 + 0.1450085130d10 * t15522 + 0.115995d6) * t15519) * ct);
}

inline double Y_27_9 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t15531;
  double t15532;
  double t15533;
  double t15534;
  double t15536;
  double t15538;
  t15531 = ct * ct;
  t15532 = t15531 * t15531;
  t15534 = t15532 * t15532;
  t15538 = t15534 * t15534;
  t15533 = t15531 * t15532;
  t15536 = t15533 * t15533;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(-0.2845518798982213e-2 * t14 * st * (-0.3283532847d10 * t15538 - 0.2391368460d10 * t15536 - 0.167904594d9 * t15534 + 0.18222204d8 * t15533 - 0.952380d6 * t15532 - 0.55d2 + (0.1137432947d10 * t15538 + 0.3862979820d10 * t15536 + 0.839522970d9 * t15534 + 0.18315d5) * t15531));
}

inline double Y_27_10 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t15544;
  double t15545;
  double t15546;
  double t15547;
  double t15549;
  t15544 = ct * ct;
  t15545 = t15544 * t15544;
  t15546 = t15544 * t15545;
  t15549 = t15546 * t15546;
  t15547 = t15545 * t15545;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(0.7343423478698846e-1 * t15 * t13 * (0.81203780d8 * t15549 - 0.2016872d7 * t15546 + 0.164164d6 * t15545 + 0.55d2 + (0.12605450d8 + 0.30741431d8 * t15547) * t15547 + (-0.78883672d8 * t15549 - 0.43087720d8 * t15547 - 0.5720d4) * t15544) * ct);
}

inline double Y_27_11 (double st, double ct)
{
  double t12;
  double t14;
  double t15;
  double t15556;
  double t15557;
  double t15558;
  double t15559;
  double t15561;
  t15556 = ct * ct;
  t15557 = t15556 * t15556;
  t15558 = t15556 * t15557;
  t15561 = t15558 * t15558;
  t15559 = t15557 * t15557;
  t12 = st * st;
  t14 = t12 * t12;
  t15 = t14 * t14;
  return(-0.2889231324266835e-2 * t15 * t12 * st * (0.1055649140d10 * t15561 - 0.14118104d8 * t15558 + 0.820820d6 * t15557 + 0.55d2 + (0.113449050d9 + 0.522604327d9 * t15559) * t15559 + (-0.1183255080d10 * t15561 - 0.473964920d9 * t15559 - 0.17160d5) * t15556));
}

inline double Y_27_12 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t15569;
  double t15570;
  double t15571;
  double t15572;
  double t15574;
  t15569 = ct * ct;
  t15570 = t15569 * t15569;
  t15571 = t15569 * t15570;
  t15574 = t15571 * t15571;
  t15572 = t15570 * t15570;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1850589111482701e-2 * t13 * t12 * (-0.1035348195d10 * t15574 - 0.296228075d9 * t15572 + 0.56724525d8 * t15571 - 0.5294289d7 * t15570 - 0.2145d4 + (0.522604327d9 * t15574 + 0.791736855d9 * t15572 + 0.205205d6) * t15569) * ct);
}

inline double Y_27_13 (double st, double ct)
{
  double t10;
  double t11;
  double t13;
  double t15580;
  double t15581;
  double t15582;
  double t15583;
  double t15585;
  t15580 = ct * ct;
  t15581 = t15580 * t15580;
  t15582 = t15580 * t15581;
  t15585 = t15582 * t15582;
  t15583 = t15581 * t15581;
  t10 = st * st;
  t11 = t10 * t10;
  t13 = t11 * t11;
  return(-0.1133249761670778e-2 * t13 * t11 * st * (-0.897301769d9 * t15585 - 0.177736845d9 * t15583 + 0.26471445d8 * t15582 - 0.1764763d7 * t15581 - 0.143d3 + (0.522604327d9 * t15585 + 0.580607027d9 * t15583 + 0.41041d5) * t15580));
}

inline double Y_27_14 (double st, double ct)
{
  double t11;
  double t12;
  double t14;
  double t15592;
  double t15593;
  double t15594;
  double t15595;
  t15592 = ct * ct;
  t15593 = t15592 * t15592;
  t15595 = t15593 * t15593;
  t15594 = t15592 * t15593;
  t11 = st * st;
  t12 = t11 * t11;
  t14 = t12 * t12;
  return(0.3878676354317719e-2 * t14 * t12 * t11 * (0.70805735d8 * t15595 + 0.1936935d7 * t15593 + 0.1001d4 + (-0.17340180d8 + 0.89225129d8 * t15594) * t15594 + (-0.131312454d9 * t15595 - 0.86086d5) * t15592) * ct);
}

inline double Y_27_15 (double st, double ct)
{
  double t10;
  double t12;
  double t14;
  double t15603;
  double t15604;
  double t15605;
  double t15606;
  t15603 = ct * ct;
  t15604 = t15603 * t15603;
  t15606 = t15604 * t15604;
  t15605 = t15603 * t15604;
  t10 = st * st;
  t12 = t10 * t10;
  t14 = t12 * t12;
  return(-0.1510527421024661e-1 * t14 * t12 * t10 * st * (0.7002765d7 * t15606 + 0.106425d6 * t15604 + 0.11d2 + (-0.1333860d7 + 0.12746447d8 * t15605) * t15605 + (-0.15872934d8 * t15606 - 0.2838d4) * t15603));
}

inline double Y_27_16 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t15615;
  double t15616;
  double t15618;
  double t9;
  t15615 = ct * ct;
  t15616 = t15615 * t15615;
  t15618 = t15616 * t15616;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.3431258711126844d0 * t12 * (-0.307615d6 * t15618 - 0.15510d5 * t15616 - 0.11d2 + (0.296429d6 * t15618 + 0.108570d6 * t15616 + 0.825d3) * t15615) * ct);
}

inline double Y_27_17 (double st, double ct)
{
  double t10;
  double t11;
  double t15624;
  double t15625;
  double t15627;
  double t8;
  double t9;
  t15624 = ct * ct;
  t15625 = t15624 * t15624;
  t15627 = t15625 * t15625;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(-0.1715629355563422d0 * t11 * st * (-0.251685d6 * t15627 - 0.7050d4 * t15625 - 0.1d1 + (0.296429d6 * t15627 + 0.69090d5 * t15625 + 0.225d3) * t15624));
}

inline double Y_27_18 (double st, double ct)
{
  double t10;
  double t11;
  double t15634;
  double t15635;
  double t8;
  double t9;
  t15634 = ct * ct;
  t15635 = t15634 * t15634;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.8087554342144018e-1 * t11 * t8 * (-0.2820d4 * t15634 + 0.45d2 + (-0.201348d6 * t15634 + 0.41454d5 + 0.296429d6 * t15635) * t15635) * ct);
}

inline double Y_27_19 (double st, double ct)
{
  double t10;
  double t11;
  double t15643;
  double t15644;
  double t7;
  double t9;
  t15643 = ct * ct;
  t15644 = t15643 * t15643;
  t7 = st * st;
  t9 = t7 * t7;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(-0.3577334498144238e-1 * t11 * t7 * st * (-0.940d3 * t15643 + 0.5d1 + (-0.156604d6 * t15643 + 0.23030d5 + 0.296429d6 * t15644) * t15644));
}

inline double Y_27_20 (double st, double ct)
{
  double t10;
  double t15653;
  double t15654;
  double t7;
  double t8;
  double t9;
  t15653 = ct * ct;
  t15654 = t15653 * t15653;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.6936708955957751d0 * t10 * t8 * (-0.2499d4 * t15654 - 0.5d1 + (0.6307d4 * t15654 + 0.245d3) * t15653) * ct);
}

inline double Y_27_21 (double st, double ct)
{
  double t10;
  double t15661;
  double t15662;
  double t6;
  double t7;
  double t9;
  t15661 = ct * ct;
  t15662 = t15661 * t15661;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(-0.3784284983875533e-1 * t10 * t7 * st * (-0.12495d5 * t15662 - 0.5d1 + (0.44149d5 * t15662 + 0.735d3) * t15661));
}

inline double Y_27_22 (double st, double ct)
{
  double t10;
  double t15670;
  double t6;
  double t7;
  double t9;
  t15670 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(0.6488697076240070d0 * t10 * t7 * t6 * (0.5d1 + (-0.170d3 + 0.901d3 * t15670) * t15670) * ct);
}

inline double Y_27_23 (double st, double ct)
{
  double t10;
  double t15678;
  double t5;
  double t7;
  double t9;
  t15678 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(-0.2051906180779384d0 * t10 * t7 * t5 * st * (0.1d1 + (-0.102d3 + 0.901d3 * t15678) * t15678));
}

inline double Y_27_24 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.9769027421413785d0 * t8 * t7 * (0.53d2 * t1 - 0.3d1) * ct);
}

inline double Y_27_25 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t6;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t6 = t5 * t5;
  t8 = t6 * t6;
  return(-0.2346444488193391d0 * t8 * t6 * st * (0.53d2 * t1 - 0.1d1));
}

inline double Y_27_26 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(0.2415812459679669d1 * t5 * t3 * t1 * ct);
}

inline double Y_27_27 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t6 = t4 * t4;
  return(-0.3287504355818417d0 * t6 * t4 * t1 * st);
}

inline double Y_28_0 (double st, double ct)
{
  double t15711;
  double t15712;
  double t15713;
  double t15714;
  double t15715;
  double t15716;
  double t15717;
  double t15718;
  double t15720;
  double t15722;
  t15711 = ct * ct;
  t15712 = t15711 * t15711;
  t15713 = t15711 * t15712;
  t15716 = t15713 * t15713;
  t15722 = t15716 * t15716;
  t15714 = t15712 * t15712;
  t15715 = t15711 * t15714;
  t15720 = t15715 * t15715;
  t15718 = t15714 * t15714;
  t15717 = t15716 * t15711;
  return(0.6004181623761870d9 * t15722 + 0.1276519286396431d10 * t15720 + 0.5848450063915564d9 * t15718 + 0.6468790484761968d8 * t15716 - 0.1216353766365498d8 * t15715 + 0.1479349175309390d7 * t15714 - 0.1075890309315920d6 * t15713 + 0.4075342080742121d4 * t15712 + 0.1494459807872772d0 + (-0.2331607998903215d9 + 0.2849359289094970d8 * t15717) * t15717 + (-0.1958286929596179d9 * t15722 - 0.1083107273306063d10 * t15720 - 0.1032079423043923d10 * t15718 - 0.6067506819963455d2) * t15711);
}

inline double Y_28_1 (double st, double ct)
{
  double t15725;
  double t15726;
  double t15727;
  double t15728;
  double t15729;
  double t15730;
  double t15732;
  double t15734;
  double t15736;
  t15725 = ct * ct;
  t15726 = t15725 * t15725;
  t15727 = t15725 * t15726;
  t15730 = t15727 * t15727;
  t15736 = t15730 * t15730;
  t15728 = t15726 * t15726;
  t15729 = t15725 * t15728;
  t15734 = t15729 * t15729;
  t15732 = t15728 * t15728;
  return(-0.2799801434054345d8 * ct * st * (-0.6381818181818182d1 * t15736 - 0.2986681465038846d2 * t15734 - 0.2328522175630589d2 * t15732 - 0.4091460153562793d1 * t15730 + 0.9729691828594446d0 * t15729 - 0.1524595585677192d0 * t15728 + 0.1483390299577809e-1 * t15727 - 0.8091219815878957e-3 * t15726 - 0.1521020342860169e-6 + (t15736 + 0.1806174957118353d2 * t15734 + 0.3200015855398763d2 * t15732 + 0.1172885244021334d2 * t15730 + 0.2043237327242161e-4) * t15725));
}

inline double Y_28_2 (double st, double ct)
{
  double t15738;
  double t15739;
  double t15740;
  double t15741;
  double t15742;
  double t15743;
  double t15745;
  double t15747;
  double t15749;
  double t16;
  t15738 = ct * ct;
  t15739 = t15738 * t15738;
  t15740 = t15738 * t15739;
  t15743 = t15740 * t15740;
  t15749 = t15743 * t15743;
  t15741 = t15739 * t15739;
  t15742 = t15738 * t15741;
  t15747 = t15742 * t15742;
  t15745 = t15741 * t15741;
  t16 = st * st;
  return(0.4028277513767055e-5 * t16 * (-0.38962765599485d14 * t15749 - 0.153169939792870d15 * t15747 - 0.96670650234015d14 * t15745 - 0.12989338015940d14 * t15743 + 0.2613708259305d13 * t15742 - 0.335090802475d12 * t15741 + 0.25358222890d11 * t15740 - 0.987982710d9 * t15739 - 0.37145d5 + (0.6593698793759d13 * t15749 + 0.101450219862810d15 * t15747 + 0.148481064084925d15 * t15745 + 0.42964733437340d14 * t15743 + 0.14969435d8) * t15738));
}

inline double Y_28_3 (double st, double ct)
{
  double t15751;
  double t15752;
  double t15753;
  double t15754;
  double t15755;
  double t15756;
  double t15758;
  double t15760;
  double t17;
  t15751 = ct * ct;
  t15752 = t15751 * t15751;
  t15754 = t15752 * t15752;
  t15755 = t15751 * t15754;
  t15760 = t15755 * t15755;
  t15758 = t15754 * t15754;
  t15753 = t15751 * t15752;
  t15756 = t15753 * t15753;
  t17 = st * st;
  return(-0.1143633590828136e-3 * t17 * st * ct * (0.2769112700970d13 * t15760 + 0.3315954284775d13 * t15758 - 0.193389647880d12 * t15755 + 0.32428142175d11 * t15754 - 0.3325963300d10 * t15753 + 0.188770890d9 * t15752 + 0.37145d5 + (0.746285692460d12 + 0.212699961089d12 * t15756) * t15756 + (-0.1160181605940d13 * t15760 - 0.3800742922900d13 * t15758 - 0.1919020352040d13 * t15756 - 0.4903140d7) * t15751));
}

inline double Y_28_4 (double st, double ct)
{
  double t15765;
  double t15766;
  double t15767;
  double t15768;
  double t15769;
  double t15770;
  double t15772;
  double t15774;
  double t16;
  double t17;
  t15765 = ct * ct;
  t15766 = t15765 * t15765;
  t15768 = t15766 * t15766;
  t15769 = t15765 * t15768;
  t15774 = t15769 * t15769;
  t15772 = t15768 * t15768;
  t15767 = t15765 * t15766;
  t15770 = t15767 * t15767;
  t16 = st * st;
  t17 = t16 * t16;
  return(0.2021677668168240e-4 * t17 * (0.11630273344074d14 * t15774 + 0.11274244568235d14 * t15772 - 0.425457225336d12 * t15769 + 0.58370655915d11 * t15768 - 0.4656348620d10 * t15767 + 0.188770890d9 * t15766 + 0.7429d4 + (0.1940342800396d13 + 0.1063499805445d13 * t15770) * t15770 + (-0.5336835387324d13 * t15774 - 0.14442823107020d14 * t15772 - 0.5757061056120d13 * t15770 - 0.2941884d7) * t15765));
}

inline double Y_28_5 (double st, double ct)
{
  double t14;
  double t15;
  double t15779;
  double t15780;
  double t15781;
  double t15782;
  double t15783;
  double t15784;
  double t15786;
  double t15788;
  t15779 = ct * ct;
  t15780 = t15779 * t15779;
  t15782 = t15780 * t15780;
  t15783 = t15779 * t15782;
  t15788 = t15783 * t15783;
  t15786 = t15782 * t15782;
  t15781 = t15780 * t15779;
  t15784 = t15781 * t15781;
  t14 = st * st;
  t15 = t14 * t14;
  return(-0.1833572047225395d8 * t15 * st * ct * (-0.4600000000000000d1 * t15788 - 0.1018534961154273d2 * t15786 - 0.3157767964672822d1 * t15784 + 0.9122440786832597d0 * t15783 - 0.1666891173673730d0 * t15782 + 0.1829514702812631e-1 * t15781 - 0.1094581446127215e-2 * t15780 - 0.2305190830734746e-6 + (t15788 + 0.9113207547169811d1 * t15786 + 0.7067385444743935d1 * t15784 + 0.2958328232776257e-4) * t15779));
}

inline double Y_28_6 (double st, double ct)
{
  double t1;
  double t13;
  double t14;
  double t15793;
  double t15794;
  double t15795;
  double t15796;
  double t15797;
  double t15798;
  double t15802;
  double t15807;
  t15793 = ct * ct;
  t15794 = t15793 * t15793;
  t15796 = t15794 * t15794;
  t1 = t15796 * t15796;
  t15807 = 0.42814693005d11 * t1;
  t15797 = t15793 * t15796;
  t15802 = t15797 * t15797;
  t15795 = t15793 * t15794;
  t15798 = t15795 * t15795;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.2651713690025054e-2 * t14 * t13 * (-0.23886091887d11 * t15802 - 0.10150595910d11 * t15798 + 0.2481256778d10 * t15797 - 0.370952010d9 * t15796 + 0.31666635d8 * t15795 - 0.1353275d7 * t15794 - 0.57d2 - t15807 + (0.5687164735d10 * t15802 + 0.26213077350d11 * t15798 + 0.21945d5 + t15807) * t15793));
}

inline double Y_28_7 (double st, double ct)
{
  double t15;
  double t15808;
  double t15809;
  double t15810;
  double t15811;
  double t15812;
  double t15813;
  double t15815;
  double t17;
  t15808 = ct * ct;
  t15809 = t15808 * t15808;
  t15811 = t15809 * t15809;
  t15815 = t15811 * t15811;
  t15810 = t15809 * t15808;
  t15813 = t15810 * t15810;
  t15812 = t15808 * t15811;
  t15 = st * st;
  t17 = t15 * t15;
  return(-0.9556112814745000e-3 * t17 * t15 * st * (0.77066447409d11 * t15815 + 0.36698308290d11 * t15813 + 0.2481256778d10 * t15811 - 0.296761608d9 * t15810 + 0.18999981d8 * t15809 + 0.4389d4 + (-0.12180715092d11 + 0.12511762417d11 * t15812) * t15812 + (-0.47772183774d11 * t15815 - 0.68503508808d11 * t15813 - 0.541310d6) * t15808) * ct);
}

inline double Y_28_8 (double st, double ct)
{
  double t14;
  double t15;
  double t15822;
  double t15823;
  double t15824;
  double t15825;
  double t15826;
  double t15827;
  double t15829;
  double t16;
  t15822 = ct * ct;
  t15823 = t15822 * t15822;
  t15825 = t15823 * t15823;
  t15829 = t15825 * t15825;
  t15824 = t15823 * t15822;
  t15827 = t15824 * t15824;
  t15826 = t15822 * t15825;
  t14 = st * st;
  t15 = t14 * t14;
  t16 = t15 * t15;
  return(0.7298601720517746e-3 * t16 * (0.62387124093d11 * t15829 + 0.22718000370d11 * t15827 + 0.1063395762d10 * t15825 - 0.98920536d8 * t15824 + 0.4523805d7 * t15823 + 0.209d3 + (-0.6380374572d10 + 0.12511762417d11 * t15826) * t15826 + (-0.43222451986d11 * t15829 - 0.48931077720d11 * t15827 - 0.77330d5) * t15822));
}

inline double Y_28_9 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t15835;
  double t15836;
  double t15837;
  double t15838;
  double t15840;
  double t15842;
  t15835 = ct * ct;
  t15836 = t15835 * t15835;
  t15838 = t15836 * t15836;
  t15842 = t15838 * t15838;
  t15837 = t15835 * t15836;
  t15840 = t15837 * t15837;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(-0.3970868642265117e-2 * t15 * st * (-0.5256784701d10 * t15842 - 0.4628615460d10 * t15840 - 0.431106390d9 * t15838 + 0.57480852d8 * t15837 - 0.4010292d7 * t15836 - 0.1045d4 + (0.1690778705d10 * t15842 + 0.6744553956d10 * t15840 + 0.1842000030d10 * t15838 + 0.122265d6) * t15835) * ct);
}

inline double Y_28_10 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t15848;
  double t15849;
  double t15850;
  double t15851;
  double t15853;
  double t15855;
  t15848 = ct * ct;
  t15849 = t15848 * t15848;
  t15851 = t15849 * t15849;
  t15855 = t15851 * t15851;
  t15850 = t15848 * t15849;
  t15853 = t15850 * t15850;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.2807828144146683e-2 * t14 * t12 * (-0.4703438943d10 * t15855 - 0.3166947420d10 * t15853 - 0.204208290d9 * t15851 + 0.21177156d8 * t15850 - 0.1055340d7 * t15849 - 0.55d2 + (0.1690778705d10 * t15855 + 0.5324647860d10 * t15853 + 0.1066421070d10 * t15851 + 0.19305d5) * t15848));
}

inline double Y_28_11 (double st, double ct)
{
  double t12;
  double t14;
  double t15;
  double t15861;
  double t15862;
  double t15863;
  double t15864;
  double t15866;
  t15861 = ct * ct;
  t15862 = t15861 * t15861;
  t15863 = t15861 * t15862;
  t15866 = t15863 * t15863;
  t15864 = t15862 * t15862;
  t12 = st * st;
  t14 = t12 * t12;
  t15 = t14 * t14;
  return(-0.3225234087704737d7 * t15 * t12 * st * ct * (0.2449399656946827d1 * t15866 - 0.5367895853644549e-1 * t15863 + 0.4175030108390205e-2 * t15862 + 0.1268646212338001e-5 + (0.3504043126684636d0 + t15864) * t15864 + (-0.2472727272727273d1 * t15866 - 0.1248713550600343d1 * t15864 - 0.1387053192156214e-3) * t15861));
}

inline double Y_28_12 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t15874;
  double t15875;
  double t15876;
  double t15877;
  double t15879;
  t15874 = ct * ct;
  t15875 = t15874 * t15874;
  t15876 = t15874 * t15875;
  t15879 = t15876 * t15876;
  t15877 = t15875 * t15875;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.3657547878370371e-3 * t14 * t13 * (0.10767621228d11 * t15879 - 0.127062936d9 * t15876 + 0.7059052d7 * t15875 + 0.429d3 + (0.1066421070d10 + 0.5748647597d10 * t15877) * t15877 + (-0.12542503848d11 * t15879 - 0.4644856216d10 * t15877 - 0.140712d6) * t15874));
}

inline double Y_28_13 (double st, double ct)
{
  double t11;
  double t12;
  double t14;
  double t15886;
  double t15887;
  double t15888;
  double t15889;
  double t15891;
  t15886 = ct * ct;
  t15887 = t15886 * t15886;
  t15888 = t15886 * t15887;
  t15891 = t15888 * t15888;
  t15889 = t15887 * t15887;
  t11 = st * st;
  t12 = t11 * t11;
  t14 = t12 * t12;
  return(-0.9367893387825769e-2 * t14 * t12 * st * (-0.267675387d9 * t15891 - 0.70805735d8 * t15889 + 0.13005135d8 * t15888 - 0.1162161d7 * t15887 - 0.429d3 + (0.140210917d9 * t15891 + 0.196968681d9 * t15889 + 0.43043d5) * t15886) * ct);
}

inline double Y_28_14 (double st, double ct)
{
  double t10;
  double t11;
  double t13;
  double t15898;
  double t15899;
  double t15900;
  double t15901;
  double t15903;
  t15898 = ct * ct;
  t15899 = t15898 * t15898;
  t15900 = t15898 * t15899;
  t15903 = t15900 * t15900;
  t15901 = t15899 * t15899;
  t10 = st * st;
  t11 = t10 * t10;
  t13 = t11 * t11;
  return(0.1119677418632385e-2 * t13 * t11 * t10 * (-0.1159926677d10 * t15903 - 0.212417205d9 * t15901 + 0.30345315d8 * t15900 - 0.1936935d7 * t15899 - 0.143d3 + (0.701054585d9 * t15903 + 0.722218497d9 * t15901 + 0.43043d5) * t15898));
}

inline double Y_28_15 (double st, double ct)
{
  double t11;
  double t13;
  double t15;
  double t15910;
  double t15911;
  double t15912;
  double t15913;
  t15910 = ct * ct;
  t15911 = t15910 * t15910;
  t15913 = t15911 * t15911;
  t15912 = t15910 * t15911;
  t11 = st * st;
  t13 = t11 * t11;
  t15 = t13 * t13;
  return(-0.2747205613201822e-1 * t15 * t13 * t11 * st * (0.11996985d8 * t15913 + 0.302445d6 * t15911 + 0.143d3 + (-0.2822820d7 + 0.16303595d8 * t15912) * t15912 + (-0.23121462d8 * t15913 - 0.12870d5) * t15910) * ct);
}

inline double Y_28_16 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t15922;
  double t15923;
  double t15924;
  double t15925;
  t15922 = ct * ct;
  t15923 = t15922 * t15922;
  t15925 = t15923 * t15923;
  t15924 = t15922 * t15923;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1642590051878958d0 * t13 * (0.755055d6 * t15925 + 0.10575d5 * t15923 + 0.1d1 + (-0.138180d6 + 0.1482145d7 * t15924) * t15924 + (-0.1778574d7 * t15925 - 0.270d3) * t15922));
}

inline double Y_28_17 (double st, double ct)
{
  double t1;
  double t10;
  double t11;
  double t15932;
  double t15933;
  double t15942;
  double t8;
  double t9;
  t15932 = ct * ct;
  t15933 = t15932 * t15932;
  t1 = t15933 * t15933;
  t15942 = 0.296429d6 * t1;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(-0.4241149277048787d0 * t11 * st * (-0.13818d5 * t15933 - 0.9d1 - t15942 + (0.100674d6 * t15933 + 0.705d3 + t15942) * t15932) * ct);
}

inline double Y_28_18 (double st, double ct)
{
  double t10;
  double t11;
  double t15943;
  double t15944;
  double t15946;
  double t8;
  double t9;
  t15943 = ct * ct;
  t15944 = t15943 * t15943;
  t15946 = t15944 * t15944;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1885420827738531e-1 * t11 * t8 * (-0.2667861d7 * t15946 - 0.69090d5 * t15944 - 0.9d1 + (0.3260719d7 * t15946 + 0.704718d6 * t15944 + 0.2115d4) * t15943));
}

inline double Y_28_19 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t15953;
  double t15954;
  double t8;
  t15953 = ct * ct;
  t15954 = t15953 * t15953;
  t8 = st * st;
  t10 = t8 * t8;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.8174989903125300e-1 * t12 * t8 * st * (-0.2940d4 * t15953 + 0.45d2 + (-0.227052d6 * t15953 + 0.44982d5 + 0.346885d6 * t15954) * t15954) * ct);
}

inline double Y_28_20 (double st, double ct)
{
  double t10;
  double t15963;
  double t15964;
  double t7;
  double t8;
  double t9;
  t15963 = ct * ct;
  t15964 = t15963 * t15963;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.3539874465893898e-1 * t10 * t8 * (-0.980d3 * t15963 + 0.5d1 + (-0.176596d6 * t15963 + 0.24990d5 + 0.346885d6 * t15964) * t15964));
}

inline double Y_28_21 (double st, double ct)
{
  double t10;
  double t11;
  double t15972;
  double t15973;
  double t7;
  double t8;
  t15972 = ct * ct;
  t15973 = t15972 * t15972;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.1001227695753074d0 * t11 * t8 * st * (-0.18921d5 * t15973 - 0.35d2 + (0.49555d5 * t15973 + 0.1785d4) * t15972) * ct);
}

inline double Y_28_22 (double st, double ct)
{
  double t10;
  double t15981;
  double t15982;
  double t6;
  double t7;
  double t9;
  t15981 = ct * ct;
  t15982 = t15981 * t15981;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  t10 = t9 * t9;
  return(0.1873125501828570d0 * t10 * t7 * t6 * (-0.2703d4 * t15982 - 0.1d1 + (0.9911d4 * t15982 + 0.153d3) * t15981));
}

inline double Y_28_23 (double st, double ct)
{
  double t10;
  double t11;
  double t15990;
  double t6;
  double t8;
  t15990 = ct * ct;
  t6 = st * st;
  t8 = t6 * t6;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.1092210469417036d1 * t11 * t8 * t6 * st * (0.3d1 + (-0.106d3 + 0.583d3 * t15990) * t15990) * ct);
}

inline double Y_28_24 (double st, double ct)
{
  double t15999;
  double t5;
  double t6;
  double t7;
  double t8;
  t15999 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.6773601784484838e-1 * t8 * t7 * (0.3d1 + (-0.318d3 + 0.2915d4 * t15999) * t15999));
}

inline double Y_28_25 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(-0.9862513067455250d0 * t9 * t7 * st * (0.55d2 * t1 - 0.3d1) * ct);
}

inline double Y_28_26 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t6;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t6 = t5 * t5;
  t8 = t6 * t6;
  return(0.2324616623179515d0 * t8 * t6 * t4 * (0.55d2 * t1 - 0.1d1));
}

inline double Y_28_27 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t6;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  t6 = t4 * t4;
  return(-0.2438078482994094d1 * t6 * t4 * t1 * st * ct);
}

inline double Y_28_28 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(0.3258019416224806d0 * t5 * t3 * t2);
}

inline double Y_29_0 (double st, double ct)
{
  double t16;
  double t16031;
  double t16032;
  double t16033;
  double t16034;
  double t16035;
  double t16036;
  double t16037;
  double t16038;
  double t16040;
  double t16042;
  t16031 = ct * ct;
  t16032 = t16031 * t16031;
  t16033 = t16032 * t16031;
  t16036 = t16033 * t16033;
  t16042 = t16036 * t16036;
  t16034 = t16032 * t16032;
  t16035 = t16031 * t16034;
  t16040 = t16035 * t16035;
  t16038 = t16034 * t16034;
  t16037 = t16031 * t16036;
  t16 = 0.2272822966507177d2 * t16042 + 0.5318388924586717d2 * t16040 + 0.2764269015514676d2 * t16038 + 0.3642835136724767d1 * t16036 - 0.7700301915027963d0 * t16035 + 0.1085940013657790d0 * t16034 - 0.9605366214172096e-2 * t16033 + 0.4802683107086048e-3 * t16032 + 0.7738524551393845e-7 + (-0.1193462178126971d2 + t16037) * t16037 + (-0.7122807017543860d1 * t16042 - 0.4288345219824862d2 * t16040 - 0.4558619078217186d2 * t16038 - 0.1119506551768310e-4) * t16031;
  return(0.5600464809600458d8 * t16 * ct);
}

inline double Y_29_1 (double st, double ct)
{
  double t16;
  double t16045;
  double t16046;
  double t16047;
  double t16048;
  double t16049;
  double t16050;
  double t16051;
  double t16052;
  double t16054;
  double t16056;
  t16045 = ct * ct;
  t16046 = t16045 * t16045;
  t16047 = t16046 * t16045;
  t16050 = t16047 * t16047;
  t16056 = t16050 * t16050;
  t16048 = t16046 * t16046;
  t16049 = t16045 * t16048;
  t16054 = t16049 * t16049;
  t16052 = t16048 * t16048;
  t16051 = t16045 * t16050;
  t16 = 0.1959330143540670d2 * t16056 + 0.3851247152286933d2 * t16054 + 0.1620433560818948d2 * t16052 + 0.1632995061290413d1 * t16050 - 0.2920804174665779d0 * t16049 + 0.3370158663075899e-1 * t16048 - 0.2318536672386368e-2 * t16047 + 0.8280488115665600e-4 * t16046 + 0.2668456741859946e-8 + (-0.6173080231691231d1 + t16051) * t16051 + (-0.6631578947368421d1 * t16056 - 0.3401101381240408d2 * t16054 - 0.2986681465038846d2 * t16052 - 0.1158110225967217e-5) * t16045;
  return(-0.5506332646518976d8 * t16 * st);
}

inline double Y_29_2 (double st, double ct)
{
  double t1;
  double t16059;
  double t16060;
  double t16061;
  double t16062;
  double t16063;
  double t16064;
  double t16066;
  double t16068;
  double t16070;
  t16059 = ct * ct;
  t16060 = t16059 * t16059;
  t16061 = t16060 * t16059;
  t16064 = t16061 * t16061;
  t16070 = t16064 * t16064;
  t16062 = t16060 * t16060;
  t16063 = t16059 * t16062;
  t16068 = t16063 * t16063;
  t16066 = t16062 * t16062;
  t1 = st * st;
  return(0.5233119029225731d8 * (-0.6157894736842105d1 * t16070 - 0.2672293942403178d2 * t16068 - 0.1920009513239258d2 * t16066 - 0.3086540115845616d1 * t16064 + 0.6998550262673198d0 * t16063 - 0.1043144348094921d0 * t16062 + 0.9629024751645426e-2 * t16061 - 0.4968292869399360e-3 * t16060 - 0.8272215899765834e-7 + (t16070 + 0.1679425837320574d2 * t16068 + 0.2750890823062095d2 * t16066 + 0.9259620347536847d1 * t16064 + 0.1182926873666514e-4) * t16059) * t1 * ct);
}

inline double Y_29_3 (double st, double ct)
{
  double t15;
  double t16072;
  double t16073;
  double t16074;
  double t16075;
  double t16076;
  double t16077;
  double t16079;
  double t16081;
  double t16083;
  t16072 = ct * ct;
  t16073 = t16072 * t16072;
  t16074 = t16073 * t16072;
  t16077 = t16074 * t16074;
  t16083 = t16077 * t16077;
  t16075 = t16073 * t16073;
  t16076 = t16072 * t16075;
  t16081 = t16076 * t16076;
  t16079 = t16075 * t16075;
  t15 = st * st;
  return(-0.4806926769319460d8 * t15 * st * (-0.5701754385964912d1 * t16083 - 0.2078450844091360d2 * t16081 - 0.1208894878706199d2 * t16079 - 0.1486111907629370d1 * t16077 + 0.2851261218126118d0 * t16076 - 0.3477147826983070e-1 * t16075 + 0.2496413824500666e-2 * t16074 - 0.9200542350739555e-4 * t16073 - 0.3063783666579938e-8 + (t16083 + 0.1430622009569378d2 * t16081 + 0.1935812060673326d2 * t16079 + 0.5144233526409359d1 * t16077 + 0.1314363192962794e-5) * t16072));
}

inline double Y_29_4 (double st, double ct)
{
  double t1;
  double t16087;
  double t16088;
  double t16089;
  double t16090;
  double t16091;
  double t16092;
  double t16094;
  double t16096;
  double t2;
  t16087 = ct * ct;
  t16088 = t16087 * t16087;
  t16090 = t16088 * t16088;
  t16091 = t16087 * t16090;
  t16096 = t16091 * t16091;
  t16094 = t16090 * t16090;
  t16089 = t16088 * t16087;
  t16092 = t16089 * t16089;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4266750126215929d8 * (0.1210526315789474d2 * t16096 + 0.1340177580466149d2 * t16094 - 0.6858978035212479d0 * t16091 + 0.1096638930048507d0 * t16090 - 0.1069891639071714e-1 * t16089 + 0.5760954979616922e-3 * t16088 + 0.1011048609971380e-6 + (0.2769971898835809d1 + t16092) * t16092 + (-0.5263157894736842d1 * t16096 - 0.1598808341608739d2 * t16094 - 0.7439353099730458d1 * t16092 - 0.1415468053959932e-4) * t16087) * t2 * ct);
}

inline double Y_29_5 (double st, double ct)
{
  double t15;
  double t16;
  double t16101;
  double t16102;
  double t16103;
  double t16104;
  double t16105;
  double t16106;
  double t16108;
  double t16110;
  t16101 = ct * ct;
  t16102 = t16101 * t16101;
  t16104 = t16102 * t16102;
  t16105 = t16101 * t16104;
  t16110 = t16105 * t16105;
  t16108 = t16104 * t16104;
  t16103 = t16102 * t16101;
  t16106 = t16103 * t16103;
  t15 = st * st;
  t16 = t15 * t15;
  return(-0.3658708049013263d8 * t16 * st * (0.1016842105263158d2 * t16110 + 0.9113207547169811d1 * t16108 - 0.3017950335493491d0 * t16105 + 0.3947900148174625e-1 * t16104 - 0.2995696589400799e-2 * t16103 + 0.1152190995923384e-3 * t16102 + 0.4044194439885519e-8 + (0.1440385387394621d1 + t16106) * t16106 + (-0.4842105263157895d1 * t16110 - 0.1215094339622642d2 * t16108 - 0.4463611859838275d1 * t16106 - 0.1698561664751918e-5) * t16101));
}

inline double Y_29_6 (double st, double ct)
{
  double t14;
  double t15;
  double t16116;
  double t16117;
  double t16118;
  double t16119;
  double t16120;
  double t16121;
  double t16123;
  double t16125;
  t16116 = ct * ct;
  t16117 = t16116 * t16116;
  t16119 = t16117 * t16117;
  t16120 = t16116 * t16119;
  t16125 = t16120 * t16120;
  t16123 = t16119 * t16119;
  t16118 = t16117 * t16116;
  t16121 = t16118 * t16118;
  t14 = st * st;
  t15 = t14 * t14;
  return(0.3029698099575254d8 * t15 * t14 * ct * (-0.4438596491228070d1 * t16125 - 0.9113207547169811d1 * t16123 - 0.2603773584905660d1 * t16121 + 0.7201926936973103d0 * t16120 - 0.1257479306455621d0 * t16119 + 0.1315966716058208e-1 * t16118 - 0.7489241473501998e-3 * t16117 - 0.1415468053959932e-6 + (t16125 + 0.8473684210526316d1 * t16123 + 0.6075471698113208d1 * t16121 + 0.1920318326538974e-4) * t16116));
}

inline double Y_29_7 (double st, double ct)
{
  double t13;
  double t15;
  double t16130;
  double t16131;
  double t16132;
  double t16133;
  double t16134;
  double t16135;
  double t16137;
  double t16139;
  t16130 = ct * ct;
  t16131 = t16130 * t16130;
  t16133 = t16131 * t16131;
  t16134 = t16130 * t16133;
  t16139 = t16134 * t16134;
  t16137 = t16133 * t16133;
  t16132 = t16131 * t16130;
  t16135 = t16132 * t16132;
  t13 = st * st;
  t15 = t13 * t13;
  return(-0.2421653608677274d8 * t15 * t13 * st * (-0.4052631578947368d1 * t16139 - 0.6735849056603774d1 * t16137 - 0.1471698113207547d1 * t16135 + 0.3444399839421919d0 * t16134 - 0.4920571199174170e-1 * t16133 + 0.4005116092351068e-2 * t16132 - 0.1628095972500434e-3 * t16131 - 0.6154208930260572e-8 + (t16139 + 0.7d1 * t16137 + 0.3962264150943396d1 * t16135 + 0.2504763034616053e-5) * t16130));
}

inline double Y_29_8 (double st, double ct)
{
  double t14;
  double t15;
  double t16;
  double t16145;
  double t16146;
  double t16147;
  double t16148;
  double t16149;
  double t16150;
  double t16152;
  t16145 = ct * ct;
  t16146 = t16145 * t16145;
  t16148 = t16146 * t16146;
  t16152 = t16148 * t16148;
  t16147 = t16145 * t16146;
  t16150 = t16147 * t16147;
  t16149 = t16145 * t16148;
  t14 = st * st;
  t15 = t14 * t14;
  t16 = t15 * t15;
  return(0.1867336131304849d8 * t16 * ct * (0.5727272727272727d1 * t16152 + 0.2521440823327616d1 * t16150 + 0.1565636290646327d0 * t16148 - 0.1789298617881516e-1 * t16147 + 0.1092304388823019e-2 * t16146 + 0.2277057304196412e-6 + (-0.8027444253859348d0 + t16149) * t16149 + (-0.3684210526315789d1 * t16152 - 0.4898799313893654d1 * t16150 - 0.2960174495455335e-4) * t16145));
}

inline double Y_29_9 (double st, double ct)
{
  double t14;
  double t15;
  double t16;
  double t16158;
  double t16159;
  double t16160;
  double t16161;
  double t16162;
  double t16163;
  double t16165;
  t16158 = ct * ct;
  t16159 = t16158 * t16158;
  t16161 = t16159 * t16159;
  t16165 = t16161 * t16161;
  t16160 = t16158 * t16159;
  t16163 = t16160 * t16160;
  t16162 = t16158 * t16161;
  t14 = st * st;
  t15 = t14 * t14;
  t16 = t15 * t15;
  return(-0.1368366173828217e-1 * t16 * st * (0.4703438943d10 * t16165 + 0.1583473710d10 * t16163 + 0.68069430d8 * t16161 - 0.6050616d7 * t16160 + 0.263835d6 * t16159 + 0.11d2 + (-0.426568428d9 + 0.1014467223d10 * t16162) * t16162 + (-0.3381557410d10 * t16165 - 0.3549765240d10 * t16163 - 0.4290d4) * t16158));
}

inline double Y_29_10 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t16172;
  double t16173;
  double t16174;
  double t16175;
  double t16177;
  double t16179;
  t16172 = ct * ct;
  t16173 = t16172 * t16172;
  t16175 = t16173 * t16173;
  t16179 = t16175 * t16175;
  t16174 = t16172 * t16173;
  t16177 = t16174 * t16174;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.9940839086549971d7 * t14 * t12 * ct * (-0.3d1 * t16179 - 0.2449399656946827d1 * t16177 - 0.2102425876010782d0 * t16175 + 0.2683947926822274e-1 * t16174 - 0.1789298617881516e-2 * t16173 - 0.4228820707793336e-6 + (t16179 + 0.3709090909090909d1 * t16177 + 0.9365351629502573d0 * t16175 + 0.5201449470585803e-4) * t16172));
}

inline double Y_29_11 (double st, double ct)
{
  double t12;
  double t14;
  double t15;
  double t16185;
  double t16186;
  double t16187;
  double t16188;
  double t16190;
  double t16192;
  t16185 = ct * ct;
  t16186 = t16185 * t16185;
  t16188 = t16186 * t16186;
  t16192 = t16188 * t16188;
  t16187 = t16185 * t16186;
  t16190 = t16187 * t16187;
  t12 = st * st;
  t14 = t12 * t12;
  t15 = t14 * t14;
  return(-0.1066349286593556e-2 * t15 * t12 * st * (-0.17245942791d11 * t16192 - 0.10767621228d11 * t16190 - 0.639852642d9 * t16188 + 0.63531468d8 * t16187 - 0.3025308d7 * t16186 - 0.143d3 + (0.6424959079d10 * t16192 + 0.18813755772d11 * t16190 + 0.3483642162d10 * t16188 + 0.52767d5) * t16185));
}

inline double Y_29_12 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t16199;
  double t16200;
  double t16201;
  double t16202;
  double t16204;
  t16199 = ct * ct;
  t16200 = t16199 * t16199;
  t16201 = t16199 * t16200;
  t16204 = t16201 * t16201;
  t16202 = t16200 * t16200;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(0.9656203481882726e-2 * t15 * t14 * (0.1070701548d10 * t16204 - 0.20808216d8 * t16201 + 0.1549548d7 * t16200 + 0.429d3 + (0.141611470d9 + 0.470118957d9 * t16202) * t16202 + (-0.1121687336d10 * t16204 - 0.525249816d9 * t16202 - 0.49192d5) * t16199) * ct);
}

inline double Y_29_13 (double st, double ct)
{
  double t12;
  double t13;
  double t15;
  double t16211;
  double t16212;
  double t16213;
  double t16214;
  double t16216;
  t16211 = ct * ct;
  t16212 = t16211 * t16211;
  t16213 = t16211 * t16212;
  t16216 = t16213 * t16213;
  t16214 = t16212 * t16212;
  t12 = st * st;
  t13 = t12 * t12;
  t15 = t13 * t13;
  return(-0.1084122998871935e-2 * t15 * t13 * st * (0.4639706708d10 * t16216 - 0.48552504d8 * t16213 + 0.2582580d7 * t16212 + 0.143d3 + (0.424834410d9 + 0.2664007423d10 * t16214) * t16214 + (-0.5608436680d10 * t16216 - 0.1925915992d10 * t16214 - 0.49192d5) * t16211));
}

inline double Y_29_14 (double st, double ct)
{
  double t11;
  double t12;
  double t14;
  double t16224;
  double t16225;
  double t16226;
  double t16227;
  double t16229;
  t16224 = ct * ct;
  t16225 = t16224 * t16224;
  t16226 = t16224 * t16225;
  t16229 = t16226 * t16226;
  t16227 = t16225 * t16225;
  t11 = st * st;
  t12 = t11 * t11;
  t14 = t12 * t12;
  return(0.2843627967153856e-1 * t14 * t12 * t11 * (-0.114125165d9 * t16229 - 0.27992965d8 * t16227 + 0.4939935d7 * t16226 - 0.423423d6 * t16225 - 0.143d3 + (0.61953661d8 * t16229 + 0.80925117d8 * t16227 + 0.15015d5) * t16224) * ct);
}

inline double Y_29_15 (double st, double ct)
{
  double t10;
  double t12;
  double t14;
  double t16236;
  double t16237;
  double t16238;
  double t16239;
  double t16241;
  t16236 = ct * ct;
  t16237 = t16236 * t16236;
  t16238 = t16236 * t16237;
  t16241 = t16238 * t16238;
  t16239 = t16237 * t16237;
  t10 = st * st;
  t12 = t10 * t10;
  t14 = t12 * t12;
  return(-0.1217568753509600e-1 * t14 * t12 * t10 * st * (-0.134875195d9 * t16241 - 0.22903335d8 * t16239 + 0.3143595d7 * t16238 - 0.192465d6 * t16237 - 0.13d2 + (0.84482265d8 * t16241 + 0.80925117d8 * t16239 + 0.4095d4) * t16236));
}

inline double Y_29_16 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14;
  double t16249;
  double t16250;
  double t16251;
  double t16252;
  t16249 = ct * ct;
  t16250 = t16249 * t16249;
  t16252 = t16250 * t16250;
  t16251 = t16249 * t16250;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.1018691105618403d0 * t14 * (0.3853577d7 * t16252 + 0.89817d5 * t16250 + 0.39d2 + (-0.872508d6 + 0.5632151d7 * t16251) * t16251 + (-0.7707154d7 * t16252 - 0.3666d4) * t16249) * ct);
}

inline double Y_29_17 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t16259;
  double t16260;
  double t16261;
  double t16262;
  t16259 = ct * ct;
  t16260 = t16259 * t16259;
  t16262 = t16260 * t16260;
  t16261 = t16259 * t16260;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.5415459030015786e-1 * t13 * st * (0.2667861d7 * t16262 + 0.34545d5 * t16260 + 0.3d1 + (-0.469812d6 + 0.5632151d7 * t16261) * t16261 + (-0.6521438d7 * t16262 - 0.846d3) * t16259));
}

inline double Y_29_18 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t16270;
  double t16271;
  double t16273;
  double t9;
  t16270 = ct * ct;
  t16271 = t16270 * t16270;
  t16273 = t16271 * t16271;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.4287000872049734d0 * t12 * t9 * (-0.346885d6 * t16273 - 0.14994d5 * t16271 - 0.9d1 + (0.359499d6 * t16273 + 0.113526d6 * t16271 + 0.735d3) * t16270) * ct);
}

inline double Y_29_19 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t16280;
  double t16281;
  double t16283;
  double t8;
  t16280 = ct * ct;
  t16281 = t16280 * t16280;
  t16283 = t16281 * t16281;
  t8 = st * st;
  t10 = t8 * t8;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.5597032971648374e-1 * t12 * t8 * st * (-0.1040655d7 * t16283 - 0.24990d5 * t16281 - 0.3d1 + (0.1318163d7 * t16283 + 0.264894d6 * t16281 + 0.735d3) * t16280));
}

inline double Y_29_20 (double st, double ct)
{
  double t10;
  double t11;
  double t16291;
  double t16292;
  double t8;
  double t9;
  t16291 = ct * ct;
  t16292 = t16291 * t16291;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.3539874465893898e-1 * t11 * t9 * (-0.7140d4 * t16291 + 0.105d3 + (-0.594660d6 * t16291 + 0.113526d6 + 0.941545d6 * t16292) * t16292) * ct);
}

inline double Y_29_21 (double st, double ct)
{
  double t10;
  double t11;
  double t16300;
  double t16301;
  double t7;
  double t8;
  t16300 = ct * ct;
  t16301 = t16300 * t16300;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.2503069239382684e-1 * t11 * t8 * st * (-0.1428d4 * t16300 + 0.7d1 + (-0.277508d6 * t16300 + 0.37842d5 + 0.564927d6 * t16301) * t16301));
}

inline double Y_29_22 (double st, double ct)
{
  double t10;
  double t11;
  double t16310;
  double t16311;
  double t7;
  double t8;
  t16310 = ct * ct;
  t16311 = t16310 * t16310;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(0.5055952028841524d0 * t11 * t8 * t7 * (-0.4081d4 * t16311 - 0.7d1 + (0.11077d5 * t16311 + 0.371d3) * t16310) * ct);
}

inline double Y_29_23 (double st, double ct)
{
  double t10;
  double t11;
  double t16319;
  double t16320;
  double t6;
  double t8;
  t16319 = ct * ct;
  t16320 = t16319 * t16319;
  t6 = st * st;
  t8 = t6 * t6;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.1855027246459796d0 * t11 * t8 * t6 * st * (-0.2915d4 * t16320 - 0.1d1 + (0.11077d5 * t16320 + 0.159d3) * t16319));
}

inline double Y_29_24 (double st, double ct)
{
  double t16329;
  double t6;
  double t7;
  double t8;
  double t9;
  t16329 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1102662482390495d1 * t9 * t8 * (0.3d1 + (-0.110d3 + 0.627d3 * t16329) * t16329) * ct);
}

inline double Y_29_25 (double st, double ct)
{
  double t16336;
  double t5;
  double t6;
  double t7;
  double t9;
  t16336 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(-0.2013177049733058d0 * t9 * t7 * st * (0.1d1 + (-0.110d3 + 0.1045d4 * t16336) * t16336));
}

inline double Y_29_26 (double st, double ct)
{
  double t1;
  double t5;
  double t6;
  double t7;
  double t9;
  t1 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(0.2986024118097202d1 * t9 * t7 * t5 * (0.19d2 * t1 - 0.1d1) * ct);
}

inline double Y_29_27 (double st, double ct)
{
  double t1;
  double t4;
  double t6;
  double t7;
  double t9;
  t1 = ct * ct;
  t4 = st * st;
  t6 = t4 * t4;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(-0.2303767622449997d0 * t9 * t7 * t4 * st * (0.57d2 * t1 - 0.1d1));
}

inline double Y_29_28 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t5 = t3 * t3;
  return(0.2459750717939475d1 * t5 * t3 * t2 * ct);
}

inline double Y_29_29 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t6 = t4 * t4;
  return(-0.3229810924967740d0 * t6 * t4 * t2 * st);
}

inline double Y_30_0 (double st, double ct)
{
  double t16370;
  double t16371;
  double t16372;
  double t16373;
  double t16374;
  double t16375;
  double t16376;
  double t16377;
  double t16379;
  double t16381;
  double t16383;
  t16370 = ct * ct;
  t16371 = t16370 * t16370;
  t16372 = t16370 * t16371;
  t16375 = t16372 * t16372;
  t16376 = t16375 * t16370;
  t16383 = t16376 * t16376;
  t16381 = t16375 * t16375;
  t16373 = t16371 * t16371;
  t16374 = t16370 * t16373;
  t16379 = t16374 * t16374;
  t16377 = t16373 * t16373;
  return(-0.1444644480943680d0 - 0.8120673973920663d9 * t16383 - 0.5303693767656318d10 * t16381 - 0.6254944503342513d10 * t16379 - 0.1879858949115717d10 * t16377 + 0.6266196497052390d9 * t16376 - 0.1473446721529115d9 * t16375 + 0.2371889844412722d8 * t16374 - 0.2487996340293065d7 * t16373 + 0.1569006701085716d6 * t16372 - 0.5172549564018846d4 * t16371 + (0.1101424745888090d9 * t16383 + 0.2692644528194746d10 * t16381 + 0.6904808867326150d10 * t16379 + 0.4042311073588699d10 * t16377 + 0.6717596836388111d2) * t16370);
}

inline double Y_30_1 (double st, double ct)
{
  double t16;
  double t16385;
  double t16386;
  double t16387;
  double t16388;
  double t16389;
  double t16390;
  double t16391;
  double t16392;
  double t16394;
  double t16396;
  t16385 = ct * ct;
  t16386 = t16385 * t16385;
  t16387 = t16386 * t16385;
  t16390 = t16387 * t16387;
  t16396 = t16390 * t16390;
  t16388 = t16386 * t16386;
  t16389 = t16385 * t16388;
  t16394 = t16389 * t16389;
  t16392 = t16388 * t16388;
  t16391 = t16385 * t16390;
  t16 = 0.2118733273862623d2 * t16396 + 0.4597251443286823d2 * t16394 + 0.2202044808969318d2 * t16392 + 0.2654947642019746d1 * t16390 - 0.5351057262985534d0 * t16389 + 0.7178247547907424e-1 * t16388 - 0.6023704236006230e-2 * t16387 + 0.2849049300813757e-3 * t16386 + 0.4066004425308630e-7 + (-0.9102677629781985d1 + t16391) * t16391 + (-0.6881355932203390d1 * t16396 - 0.3852242316113859d2 * t16394 - 0.3785971776824442d2 * t16392 - 0.6261646814975291e-5) * t16385;
  return(-0.1083514206787777d9 * st * t16 * ct);
}

inline double Y_30_2 (double st, double ct)
{
  double t1;
  double t16399;
  double t16400;
  double t16401;
  double t16402;
  double t16403;
  double t16404;
  double t16405;
  double t16406;
  double t16408;
  double t16410;
  double t17;
  t16399 = ct * ct;
  t16400 = t16399 * t16399;
  t16401 = t16400 * t16399;
  t16404 = t16401 * t16401;
  t16410 = t16404 * t16404;
  t16402 = t16400 * t16400;
  t16403 = t16399 * t16402;
  t16408 = t16403 * t16403;
  t16406 = t16402 * t16402;
  t16405 = t16399 * t16404;
  t1 = st * st;
  t17 = 0.1826494201605709d2 * t16410 + 0.3329044148587010d2 * t16408 + 0.1290853853533738d2 * t16406 + 0.1190148942974369d1 * t16404 - 0.2029711375615202d0 * t16403 + 0.2227731997626442e-1 * t16402 - 0.1453997574208400e-2 * t16401 + 0.4912153966920271e-4 * t16400 + 0.1402070491485735e-8 + (-0.4708281532645854d1 + t16405) * t16405 + (-0.6406779661016949d1 * t16410 - 0.3055226664504095d2 * t16408 - 0.2480464267574635d2 * t16406 - 0.6477565670664094e-6) * t16399;
  return(0.1031474794484477d9 * t17 * t1);
}

inline double Y_30_3 (double st, double ct)
{
  double t16;
  double t16413;
  double t16414;
  double t16415;
  double t16416;
  double t16417;
  double t16418;
  double t16420;
  double t16422;
  double t16424;
  t16413 = ct * ct;
  t16414 = t16413 * t16413;
  t16415 = t16414 * t16413;
  t16418 = t16415 * t16415;
  t16424 = t16418 * t16418;
  t16416 = t16414 * t16414;
  t16417 = t16413 * t16416;
  t16422 = t16417 * t16417;
  t16420 = t16416 * t16416;
  t16 = st * st;
  return(-0.9501248250750773d8 * t16 * st * (-0.5949152542372881d1 * t16424 - 0.2400535236396075d2 * t16422 - 0.1594584172012265d2 * t16420 - 0.2354140766322927d1 * t16418 + 0.5100638327033009d0 * t16417 - 0.7248969198625723e-1 * t16416 + 0.6364948564646977e-2 * t16415 - 0.3115709087589429e-3 * t16414 - 0.4626832621902924e-7 + (t16424 + 0.1565566458519179d2 * t16422 + 0.2377888677562150d2 * t16420 + 0.7376307734478505d1 * t16418 + 0.7017362809886101e-5) * t16413) * ct);
}

inline double Y_30_4 (double st, double ct)
{
  double t16;
  double t16428;
  double t16429;
  double t16430;
  double t16431;
  double t16432;
  double t16433;
  double t16435;
  double t16437;
  double t16439;
  double t17;
  t16428 = ct * ct;
  t16429 = t16428 * t16428;
  t16430 = t16429 * t16428;
  t16433 = t16430 * t16430;
  t16439 = t16433 * t16433;
  t16431 = t16429 * t16429;
  t16432 = t16428 * t16431;
  t16437 = t16432 * t16432;
  t16435 = t16431 * t16431;
  t16 = st * st;
  t17 = t16 * t16;
  return(0.6640360731074299e-4 * t17 * (-0.7023648447725d13 * t16439 - 0.23806471580710d14 * t16437 - 0.12801593208495d14 * t16435 - 0.1445251512900d13 * t16433 + 0.264962777365d12 * t16432 - 0.30809625275d11 * t16431 + 0.2104071970d10 * t16430 - 0.73568950d8 * t16429 - 0.2185d4 + (0.1275062333587d13 * t16439 + 0.17004622557650d14 * t16437 + 0.21335988680825d14 * t16435 + 0.5225140085100d13 * t16433 + 0.994175d6) * t16428));
}

inline double Y_30_5 (double st, double ct)
{
  double t1;
  double t16443;
  double t16444;
  double t16445;
  double t16446;
  double t16447;
  double t16448;
  double t16450;
  double t16452;
  double t2;
  t16443 = ct * ct;
  t16444 = t16443 * t16443;
  t16446 = t16444 * t16444;
  t16447 = t16443 * t16446;
  t16452 = t16447 * t16447;
  t16450 = t16446 * t16446;
  t16445 = t16444 * t16443;
  t16448 = t16445 * t16445;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.7297527511661952d8 * (0.1128456735057984d2 * t16452 + 0.1158458586504637d2 * t16450 - 0.5231423925162060d0 * t16447 + 0.7992453218997592e-1 * t16446 - 0.7434840203718691e-2 * t16445 + 0.3808088884831524e-3 * t16444 + 0.5997745991355642e-7 + (0.2206587783818356d1 + t16448) * t16448 + (-0.5084745762711864d1 * t16452 - 0.1436217662801070d2 * t16450 - 0.6178445794691398d1 * t16448 - 0.8876664067206351e-5) * t16443) * t2 * st * ct);
}

inline double Y_30_6 (double st, double ct)
{
  double t1;
  double t16458;
  double t16459;
  double t16460;
  double t16461;
  double t16462;
  double t16463;
  double t16465;
  double t16467;
  double t2;
  t16458 = ct * ct;
  t16459 = t16458 * t16458;
  t16461 = t16459 * t16459;
  t16462 = t16458 * t16461;
  t16467 = t16462 * t16462;
  t16465 = t16461 * t16461;
  t16460 = t16459 * t16458;
  t16463 = t16460 * t16460;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.6081272926384960d8 * (0.9479036574487065d1 * t16467 + 0.7877518388231532d1 * t16465 - 0.2301826527071307d0 * t16462 + 0.2877283158839133e-1 * t16461 - 0.2081755257041233e-2 * t16460 + 0.7616177769663049e-4 * t16459 + 0.2399098396542257e-8 + (0.1147425647585545d1 + t16463) * t16463 + (-0.4677966101694915d1 * t16467 - 0.1091525423728814d2 * t16465 - 0.3707067476814838d1 * t16463 - 0.1065199688064762e-5) * t16458) * t2 * t1);
}

inline double Y_30_7 (double st, double ct)
{
  double t15;
  double t16473;
  double t16474;
  double t16475;
  double t16476;
  double t16477;
  double t16478;
  double t16480;
  double t16482;
  double t17;
  t16473 = ct * ct;
  t16474 = t16473 * t16473;
  t16476 = t16474 * t16474;
  t16477 = t16473 * t16476;
  t16482 = t16477 * t16477;
  t16480 = t16476 * t16476;
  t16475 = t16474 * t16473;
  t16478 = t16475 * t16475;
  t15 = st * st;
  t17 = t15 * t15;
  return(-0.1421247000993937e-2 * t17 * t15 * st * (-0.147774058817d12 * t16482 - 0.282114112287d12 * t16480 - 0.74520708906d11 * t16478 + 0.19770800322d11 * t16477 - 0.3305148990d10 * t16476 + 0.330514899d9 * t16475 - 0.17934917d8 * t16474 - 0.3059d4 + (0.34461144151d11 * t16482 + 0.272215371505d12 * t16480 + 0.180978864486d12 * t16478 + 0.437437d6) * t16473) * ct);
}

inline double Y_30_8 (double st, double ct)
{
  double t14;
  double t15;
  double t16;
  double t16488;
  double t16489;
  double t16490;
  double t16491;
  double t16492;
  double t16493;
  double t16495;
  double t16497;
  t16488 = ct * ct;
  t16489 = t16488 * t16488;
  t16491 = t16489 * t16489;
  t16492 = t16488 * t16491;
  t16497 = t16492 * t16492;
  t16495 = t16491 * t16491;
  t16490 = t16488 * t16489;
  t16493 = t16490 * t16490;
  t14 = st * st;
  t15 = t14 * t14;
  t16 = t15 * t15;
  return(0.2100851146004366e-1 * t16 * (-0.7101270561d10 * t16497 - 0.10974690867d11 * t16495 - 0.2216863194d10 * t16493 + 0.497663166d9 * t16492 - 0.68069430d8 * t16491 + 0.5294289d7 * t16490 - 0.205205d6 * t16489 - 0.7d1 + (0.1813744429d10 * t16497 + 0.11835450935d11 * t16495 + 0.6212089170d10 * t16493 + 0.3003d4) * t16488));
}

inline double Y_30_9 (double st, double ct)
{
  double t15;
  double t16;
  double t16502;
  double t16503;
  double t16504;
  double t16505;
  double t16506;
  double t16507;
  double t16509;
  double t17;
  t16502 = ct * ct;
  t16503 = t16502 * t16502;
  t16505 = t16503 * t16503;
  t16509 = t16505 * t16505;
  t16504 = t16503 * t16502;
  t16507 = t16504 * t16504;
  t16506 = t16502 * t16505;
  t15 = st * st;
  t16 = t15 * t15;
  t17 = t16 * t16;
  return(-0.1434437511107308e-2 * t17 * st * (0.106519058415d12 * t16509 + 0.43484624190d11 * t16507 + 0.2488315830d10 * t16505 - 0.272277720d9 * t16504 + 0.15882867d8 * t16503 + 0.3003d4 + (-0.13301179164d11 + 0.19951188719d11 * t16506) * t16506 + (-0.71012705610d11 * t16509 - 0.87797526936d11 * t16507 - 0.410410d6) * t16502) * ct);
}

inline double Y_30_10 (double st, double ct)
{
  double t14;
  double t15;
  double t16;
  double t16516;
  double t16517;
  double t16518;
  double t16519;
  double t16520;
  double t16521;
  double t16523;
  t16516 = ct * ct;
  t16517 = t16516 * t16516;
  t16519 = t16517 * t16517;
  t16523 = t16519 * t16519;
  t16518 = t16516 * t16517;
  t16521 = t16518 * t16518;
  t16520 = t16516 * t16519;
  t14 = st * st;
  t15 = t14 * t14;
  t16 = t15 * t15;
  return(0.1039348719616115e-2 * t16 * t14 * (0.86229713955d11 * t16523 + 0.26919053070d11 * t16521 + 0.1066421070d10 * t16519 - 0.90759240d8 * t16518 + 0.3781635d7 * t16517 + 0.143d3 + (-0.6967284324d10 + 0.19951188719d11 * t16520) * t16520 + (-0.64249590790d11 * t16523 - 0.62712519240d11 * t16521 - 0.58630d5) * t16516));
}

inline double Y_30_11 (double st, double ct)
{
  double t13;
  double t15;
  double t16;
  double t16530;
  double t16531;
  double t16532;
  double t16533;
  double t16535;
  double t16537;
  t16530 = ct * ct;
  t16531 = t16530 * t16530;
  t16533 = t16531 * t16531;
  t16537 = t16533 * t16533;
  t16532 = t16530 * t16531;
  t16535 = t16532 * t16532;
  t13 = st * st;
  t15 = t13 * t13;
  t16 = t15 * t15;
  return(-0.2976241797961783e-1 * t16 * t13 * st * (-0.1410356871d10 * t16537 - 0.1070701548d10 * t16535 - 0.84966882d8 * t16533 + 0.10404108d8 * t16532 - 0.664092d6 * t16531 - 0.143d3 + (0.486614359d9 * t16537 + 0.1682531004d10 * t16535 + 0.393937362d9 * t16533 + 0.18447d5) * t16530) * ct);
}

inline double Y_30_12 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t16544;
  double t16545;
  double t16546;
  double t16547;
  double t16549;
  double t16551;
  t16544 = ct * ct;
  t16545 = t16544 * t16544;
  t16547 = t16545 * t16545;
  t16551 = t16547 * t16547;
  t16546 = t16544 * t16545;
  t16549 = t16546 * t16546;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.1053578175752946e-2 * t14 * t13 * (-0.23976066807d11 * t16551 - 0.13919120124d11 * t16549 - 0.764701938d9 * t16547 + 0.72828756d8 * t16546 - 0.3320460d7 * t16545 - 0.143d3 + (0.9245672821d10 * t16551 + 0.25237965060d11 * t16549 + 0.4333310982d10 * t16547 + 0.55341d5) * t16544));
}

inline double Y_30_13 (double st, double ct)
{
  double t13;
  double t14;
  double t16;
  double t16557;
  double t16558;
  double t16559;
  double t16560;
  double t16562;
  t16557 = ct * ct;
  t16558 = t16557 * t16557;
  t16559 = t16557 * t16558;
  t16562 = t16559 * t16559;
  t16560 = t16558 * t16558;
  t13 = st * st;
  t14 = t13 * t13;
  t16 = t14 * t14;
  return(-0.2931144617133943e-1 * t16 * t14 * st * (0.456500660d9 * t16562 - 0.7903896d7 * t16559 + 0.564564d6 * t16558 + 0.143d3 + (0.55985930d8 + 0.215015647d9 * t16560) * t16560 + (-0.495629288d9 * t16562 - 0.215800312d9 * t16560 - 0.17160d5) * t16557) * ct);
}

inline double Y_30_14 (double st, double ct)
{
  double t12;
  double t13;
  double t15;
  double t16570;
  double t16571;
  double t16572;
  double t16573;
  double t16575;
  t16570 = ct * ct;
  t16571 = t16570 * t16570;
  t16572 = t16570 * t16571;
  t16575 = t16572 * t16572;
  t16573 = t16571 * t16571;
  t12 = st * st;
  t13 = t12 * t12;
  t15 = t13 * t13;
  return(0.1178905876301301e-1 * t15 * t13 * t12 * (0.539500780d9 * t16575 - 0.5029752d7 * t16572 + 0.256620d6 * t16571 + 0.13d2 + (0.45806670d8 + 0.332296909d9 * t16573) * t16573 + (-0.675858120d9 * t16575 - 0.215800312d9 * t16573 - 0.4680d4) * t16570));
}

inline double Y_30_15 (double st, double ct)
{
  double t11;
  double t13;
  double t15;
  double t16583;
  double t16584;
  double t16585;
  double t16586;
  double t16588;
  t16583 = ct * ct;
  t16584 = t16583 * t16583;
  t16585 = t16583 * t16584;
  t16588 = t16585 * t16585;
  t16586 = t16584 * t16584;
  t11 = st * st;
  t13 = t11 * t11;
  t15 = t13 * t13;
  return(-0.7029636475956449e-2 * t15 * t13 * t11 * st * (-0.591375855d9 * t16588 - 0.134875195d9 * t16586 + 0.22903335d8 * t16585 - 0.1886157d7 * t16584 - 0.585d3 + (0.332296909d9 * t16588 + 0.404625585d9 * t16586 + 0.64155d5) * t16583) * ct);
}

inline double Y_30_16 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t16596;
  double t16597;
  double t16598;
  double t16599;
  double t16601;
  t16596 = ct * ct;
  t16597 = t16596 * t16596;
  t16598 = t16596 * t16597;
  t16601 = t16598 * t16598;
  t16599 = t16597 * t16597;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.4014205305405391e-2 * t13 * (-0.512525741d9 * t16601 - 0.80925117d8 * t16599 + 0.10688223d8 * t16598 - 0.628719d6 * t16597 - 0.39d2 + (0.332296909d9 * t16601 + 0.296725429d9 * t16599 + 0.12831d5) * t16596));
}

inline double Y_30_17 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t14;
  double t16607;
  double t16608;
  double t16609;
  double t16610;
  t16607 = ct * ct;
  t16608 = t16607 * t16607;
  t16610 = t16608 * t16608;
  t16609 = t16607 * t16608;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(-0.1029704302503183d0 * t14 * st * (0.4509505d7 * t16610 + 0.97461d5 * t16608 + 0.39d2 + (-0.983892d6 + 0.7070147d7 * t16609) * t16609 + (-0.9346974d7 * t16610 - 0.3822d4) * t16607) * ct);
}

inline double Y_30_18 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t16618;
  double t16619;
  double t16620;
  double t16621;
  t16618 = ct * ct;
  t16619 = t16618 * t16618;
  t16621 = t16619 * t16619;
  t16620 = t16618 * t16619;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.5358751090062166e-1 * t13 * t10 * (0.3121965d7 * t16621 + 0.37485d5 * t16619 + 0.3d1 + (-0.529788d6 + 0.7070147d7 * t16620) * t16620 + (-0.7908978d7 * t16621 - 0.882d3) * t16618));
}

inline double Y_30_19 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t16629;
  double t16630;
  double t16632;
  double t9;
  t16629 = ct * ct;
  t16630 = t16629 * t16629;
  t16632 = t16630 * t16630;
  t9 = st * st;
  t11 = t9 * t9;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.1856325830620555d0 * t13 * t9 * st * (-0.941545d6 * t16632 - 0.37842d5 * t16630 - 0.21d2 + (0.1010021d7 * t16632 + 0.297330d6 * t16630 + 0.1785d4) * t16629) * ct);
}

inline double Y_30_20 (double st, double ct)
{
  double t10;
  double t11;
  double t16640;
  double t16641;
  double t16643;
  double t8;
  double t9;
  t16640 = ct * ct;
  t16641 = t16640 * t16640;
  t16643 = t16641 * t16641;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.7915399937554517e-2 * t11 * t9 * (-0.8473905d7 * t16643 - 0.189210d6 * t16641 - 0.21d2 + (0.11110231d8 * t16643 + 0.2081310d7 * t16641 + 0.5355d4) * t16640));
}

inline double Y_30_21 (double st, double ct)
{
  double t11;
  double t12;
  double t16650;
  double t16651;
  double t8;
  double t9;
  t16650 = ct * ct;
  t16651 = t16650 * t16650;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  t12 = t11 * t11;
  return(-0.5958496608246209e-1 * t12 * t9 * st * (-0.4452d4 * t16650 + 0.63d2 + (-0.398772d6 * t16650 + 0.73458d5 + 0.653543d6 * t16651) * t16651) * ct);
}

inline double Y_30_22 (double st, double ct)
{
  double t10;
  double t11;
  double t16660;
  double t16661;
  double t7;
  double t8;
  t16660 = ct * ct;
  t16661 = t16660 * t16660;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(0.2478884428351150e-1 * t11 * t8 * t7 * (-0.1484d4 * t16660 + 0.7d1 + (-0.310156d6 * t16660 + 0.40810d5 + 0.653543d6 * t16661) * t16661));
}

inline double Y_30_23 (double st, double ct)
{
  double t11;
  double t12;
  double t16670;
  double t16671;
  double t7;
  double t9;
  t16670 = ct * ct;
  t16671 = t16670 * t16670;
  t7 = st * st;
  t9 = t7 * t7;
  t11 = t9 * t9;
  t12 = t11 * t11;
  return(-0.5104335447311087d0 * t12 * t9 * t7 * st * (-0.4389d4 * t16671 - 0.7d1 + (0.12331d5 * t16671 + 0.385d3) * t16670) * ct);
}

inline double Y_30_24 (double st, double ct)
{
  double t16680;
  double t16681;
  double t6;
  double t7;
  double t8;
  double t9;
  t16680 = ct * ct;
  t16681 = t16680 * t16680;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1837770803984159d0 * t9 * t8 * (-0.3135d4 * t16681 - 0.1d1 + (0.12331d5 * t16681 + 0.165d3) * t16680));
}

inline double Y_30_25 (double st, double ct)
{
  double t10;
  double t16688;
  double t6;
  double t7;
  double t8;
  t16688 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.6676952910519203d0 * t10 * t8 * st * (0.5d1 + (-0.190d3 + 0.1121d4 * t16688) * t16688) * ct);
}

inline double Y_30_26 (double st, double ct)
{
  double t16696;
  double t5;
  double t6;
  double t7;
  double t9;
  t16696 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(0.1995121285457775d0 * t9 * t7 * t5 * (0.1d1 + (-0.114d3 + 0.1121d4 * t16696) * t16696));
}

inline double Y_30_27 (double st, double ct)
{
  double t1;
  double t10;
  double t5;
  double t7;
  double t8;
  t1 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.1004189025566050d1 * t10 * t8 * t5 * st * (0.59d2 * t1 - 0.3d1) * ct);
}

inline double Y_30_28 (double st, double ct)
{
  double t1;
  double t4;
  double t5;
  double t6;
  double t8;
  t1 = ct * ct;
  t4 = st * st;
  t5 = t4 * t4;
  t6 = t5 * t5;
  t8 = t6 * t6;
  return(0.2283821206995084d0 * t8 * t6 * t5 * (0.59d2 * t1 - 0.1d1));
}

inline double Y_30_29 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t6 = t4 * t4;
  return(-0.2480864845273554d1 * t6 * t4 * t2 * st * ct);
}

inline double Y_30_30 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t6;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  t6 = t4 * t4;
  return(0.3202782743311970d0 * t6 * t4 * t2 * t1);
}

