#include "../e2l.h"
#include "../l2p.h"
#include "../e2p.h"
#include "../l2l.h"

#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

#include "../profiler.h"

#define EXPSIZE  (ORDER * (ORDER+1))

int main()
{
	const double srcexp alignas(32) [] = {2.190856e-03,  0.000000e+00,  1.246920e-03,  -5.106430e-03,  0.000000e+00,  2.765801e-03,  9.299877e-06,  3.188131e-06,  -6.523726e-06,  0.000000e+00,  -1.726791e-06,  1.000078e-05,  -1.641138e-05,  2.529661e-05,  8.312948e-06,  -3.335210e-06,  0.000000e+00,  -1.370143e-05,  -1.274363e-05,  4.077661e-05,  -1.596402e-07,  -1.130730e-07,  9.696660e-08,  9.538247e-09,  1.098022e-07,  0.000000e+00,  6.124383e-08,  -1.486484e-07,  -1.166155e-07,  2.493625e-07,  1.747424e-07,  -1.432080e-07,  -9.371602e-08,  1.607396e-08,  -6.275744e-08,  2.563151e-07,  0.000000e+00,  7.756592e-08,  1.436653e-07,  -1.965218e-07,  -1.425231e-07,  1.987699e-07,
			4.082581110477630e-03, -8.428393362079785e-04, 3.161598351910260e-03, -3.174132679308476e-03, 8.814499972281847e-04, -6.387897965123308e-03, 8.946557255345795e-04, 0.000000000000000e+00, -2.771756755317214e-03, -2.118669397409166e-03, -2.594243308308529e-03, -2.144306670546811e-03, -6.074706532492207e-04, 4.404767747286202e-03,
			3.557589692641084e-04, 5.024441436332016e-04, 4.618803288492225e-04, 1.289323712404692e-03, 4.613419065595763e-04, 1.168875467772376e-03, -4.730977245788157e-04, -1.355944965410070e-03, 0.000000000000000e+00, 1.652335017431185e-03, -3.095180377377378e-04, 1.053774290833391e-03, -1.122308163536575e-03, 1.111566821905188e-04, -2.329259780117188e-03, 7.329959158678673e-04,
			-6.270981532523630e-04, -3.026180359270927e-05, -5.368462796988133e-04, 1.858804083448155e-05, -2.547772424646906e-04, 3.306762270643756e-04, 1.063726646644054e-04, 7.702131513518254e-04, -3.775795224521990e-04, 0.000000000000000e-01, -9.951879905552591e-05, 3.597546738419863e-04, 1.519215024115664e-05, 6.197975406869620e-04, 3.144635446050151e-05, 5.237175252264719e-04, -4.163613632488913e-04, -3.735381326046903e-04,
			1.268734335446892e-04, -5.762517361576674e-05, 9.213001183667357e-05, -1.724203021293369e-04, 2.005303892911432e-05, -2.546978129369710e-04, 1.575477431295402e-05, -2.019304751202183e-04, 2.283264009352059e-04, 8.560953794009960e-05, 0.000000000000000e+00, -1.895058255876368e-04, -6.173872039861340e-05, -1.409204529890719e-04, -4.878310202014008e-05, -2.422102664299256e-05, 7.756740361551594e-05, 1.091594550871871e-04, 2.258825289988655e-04, -1.625228745704148e-04,
			4.826511909871979e-05, 2.016925939308481e-05, 4.503213199402429e-05, 4.791713485474256e-05, 2.710840635308388e-05, 3.961942016511503e-05, -1.870312889685227e-05, -1.159836991890906e-05, -6.760030865937169e-05, -5.472958953377829e-05, 6.257467687728797e-05, 0.000000000000000e+00, 6.632851430979377e-05, -3.017720448208835e-05, 3.916304673102557e-05, -6.594672046469278e-05, 3.767692467923317e-06, -9.208339765440561e-05, 6.269839852028207e-06, -6.687675458702650e-05, 1.038997573063900e-04, 1.200995375570573e-05,
			-3.060269179782264e-05, 2.084031727935801e-06, -2.518694262797233e-05, 9.081498278624650e-06, -1.080541355465441e-05, 2.090010398011351e-05, 4.222629035696038e-06, 2.938970150195927e-05, 6.929703250474989e-07, 1.791051333288797e-05, -4.205634246814441e-05, 2.334532102688610e-06, 0.000000000000000e-01, 6.853535154386855e-06, 1.687842623271333e-05, 7.422379124955221e-06, 2.628636954577496e-05, 1.987539545417756e-06, 2.078978500257666e-05, -1.588746720483371e-05, 6.855531769508980e-07, -3.400167997553507e-05, -8.071871136738796e-06, 2.203077318590451e-05,
			2.047542106419371e-06, -3.325313808356325e-06, 1.081290318602970e-06, -9.103010619961577e-06, -4.159665848804630e-07, -1.173519728143728e-05, 1.087711134809131e-06, -8.675482951794076e-06, 8.192850036939655e-06, -1.150624479818655e-06, 1.498239991156780e-05, -1.642052377217714e-06, -7.106602000393953e-06, 0.000000000000000e+00, -1.093560850319269e-05, -7.246008040062212e-07, -7.439961328724829e-06, 1.011923450551498e-06, -1.115983379428568e-06, 5.355261010718420e-06, 4.689787369005221e-06, 8.105158573307273e-06, 2.184368734031255e-06, 2.875571062720564e-06, -1.549590320055840e-05, 3.011073435058677e-06,
			3.607820978091736e-06, 6.558070151297314e-07, 3.128742234408378e-06, 1.402754257486672e-06, 1.587610241479273e-06, 7.707284190718749e-07, -9.095886034594717e-07, -9.705425699017555e-07, -3.021210725228607e-06, -1.795534913827755e-06, -1.637508544705519e-06, 6.295919642359405e-07, 5.211409923512666e-06, -1.726812470586663e-06, 0.000000000000000e+00, 2.156683304019056e-06, -2.096651657354722e-06, 1.146481956916469e-06, -3.862185310270240e-06, 7.329404739518146e-08, -4.478288608082599e-06, 5.246553201359065e-07, -2.988873456849152e-06, 3.408679717334884e-06, -3.142869109025213e-07, 5.941403739008768e-06, -2.208078907334374e-06, -2.067007031863287e-06,
			-1.302173943148639e-06, 2.713289010878366e-07, -1.042654523364737e-06, 8.413358207482657e-07, -4.117720108103224e-07, 1.362135522201531e-06, 1.378253406881667e-07, 1.478321610214749e-06, -4.130256810184661e-08, 8.121554776277634e-07, -1.220109706956958e-06, -9.325333085683096e-08, -2.131743224366965e-06, 1.315983051072108e-06, 5.155395034978768e-07, 0.000000000000000e-01, 8.922907156737519e-07, 6.987099513726629e-07, 6.876303051994553e-07, 1.001719294686742e-06, 1.295351553834281e-07, 6.785723246327168e-07, -7.991502090934145e-07, -4.086048962704275e-08, -1.541812349396483e-06, -2.341755785040151e-07, -8.800234439144843e-07, 9.032214542058032e-07, 1.575241241716778e-06, -7.875114656218201e-07,
			-1.296678465888533e-07, -1.677637737731066e-07, -1.337630600730180e-07, -4.368581657599101e-07, -9.714742908861632e-08, -5.152511217690689e-07, 8.135514761121414e-08, -3.425354090650556e-07, 4.191538965004229e-07, -5.012370640269756e-08, 6.767730214302498e-07, -4.032169037993018e-08, 3.887760295298755e-07, -5.703088609242437e-07, -4.071778879831446e-07, 3.161086729107151e-07, 0.000000000000000e-01, -5.517070137532995e-07, 8.963811032773184e-08, -3.570475741579561e-07, 2.363309102912915e-07, -4.899889403953685e-08, 4.005457295424568e-07, 1.851675859195976e-07, 4.146675189266100e-07, 9.515585581585298e-08, 1.298930029862715e-07, -3.805122294996332e-07, -1.647247411125742e-07, -6.826638363712186e-07, 6.219838696332301e-07, 9.241856161768478e-08,
			2.177187050403112e-07, 1.008792228151294e-08, 1.829771594959627e-07, 9.811639223699999e-09, 8.544278244927632e-08, -3.365110391881476e-08, -4.386474996188057e-08, -9.371847681404950e-08, -1.319296411652812e-07, -9.192528718969946e-08, -8.454088173904049e-08, 2.790495506348756e-08, 1.015734619180128e-07, 1.215654458921411e-07, 1.858948647889811e-07, -2.581311973563044e-07, 1.241351980378608e-09, 0.000000000000000e+00, 3.317508513152598e-08, -1.226177601005897e-07, 8.019128994055355e-09, -2.078569730922960e-07, -3.200122824711589e-09, -2.159646782111800e-07, 5.066227796736619e-08, -1.305175436316859e-07, 1.745128204083320e-07, -1.622592605861281e-08, 2.633365953968003e-07, -4.303676396557988e-08, 1.455147190391111e-07, -2.839633751211530e-07, -7.546807795133963e-08, 1.153531867686846e-07,
			-4.390311728704282e-08, 2.051153609682754e-08, -3.382230180268148e-08, 5.795336022218473e-08, -1.153285609541727e-08, 8.143307494784364e-08, 2.107244020525668e-09, 7.641109127015128e-08, -1.479877875831579e-08, 3.766075837975436e-08, -6.133460944096612e-08, -5.064625755388339e-09, -9.144960854220878e-08, 1.823644126915209e-08, -4.483977815329400e-08, 1.235708582186399e-07, -1.045863842404943e-09, -3.856755300291690e-08, 0.000000000000000e-01, 6.745412357484652e-08, 2.266520531805745e-08, 4.736573172585556e-08, 2.805602170698942e-08, 7.744050312754865e-09, 1.037485172492132e-08, -4.130626187404979e-08, -1.464038130645992e-08, -7.149594376577703e-08, -1.177194769147326e-08, -4.779442576949369e-08, 3.874727850422681e-08, 2.182915225687064e-08, 6.849492458302617e-08, 3.612757875091649e-08, -9.718736430480873e-08, 1.218257360128154e-08,
			-1.794488057794682e-08, -7.269852241411368e-09, -1.587889133732501e-08, -1.813212297804014e-08, -8.544972561730329e-09, -1.948958101705511e-08, 5.453917755192485e-09, -1.068106476783030e-08, 2.289472356673982e-08, 1.991206109356295e-10, 3.254195784946417e-08, -1.936441848707583e-09, 2.148241686771510e-08, -2.336679532140126e-08, -3.131973828852544e-09, -3.300146563515148e-08, 5.229229451660134e-10, 3.346411505036848e-08, -8.027221414646682e-09, 0.000000000000000e-01, -2.390759566461155e-08, 1.064085864064586e-08, -1.481952503367187e-08, 2.078738637628523e-08, -1.853402884113779e-09, 2.685193906300541e-08, 5.773963583818502e-09, 2.264967186800567e-08, -3.780145863901159e-10, 6.245775901625854e-09, -1.827403063227900e-08, -9.102118670448627e-09, -2.797022320845151e-08, 4.784241136739600e-09, -9.648416024756183e-09, 4.859284805021064e-08, -1.057051881336714e-08, -1.170433479163628e-08,
			1.128755255180274e-08, -7.993737446408617e-10, 9.304820482315662e-09, -2.878100304815542e-09, 4.110953552612687e-09, -5.611703282741120e-09, -1.935593478441470e-09, -7.347195148799971e-09, -5.157645716659967e-09, -5.262673507541004e-09, -2.512094146984349e-09, 1.368417527511614e-09, 4.426450376795962e-09, 6.723450844215876e-09, 7.174499206289975e-09, -2.641465850277981e-10, -1.522287699149489e-10, -1.741717941900342e-08, 7.161258352290780e-09, 3.112277168225990e-09, 0.000000000000000e+00, -2.628816052535057e-09, -6.235402543260103e-09, -2.352293747857800e-09, -1.000073192228224e-08, -5.336567799955051e-10, -9.529743657094567e-09, 3.971742345402561e-09, -5.102441300644543e-09, 9.990765596347248e-09, -4.821460699577591e-10, 1.291363530084032e-08, -1.875490866160359e-09, 8.048019347844932e-09, -1.095939369672624e-08, -7.722675629145980e-11, -1.414592638117874e-08, 5.501673133960232e-09, 1.044169096067000e-08, -3.892708934644752e-09
};

	const double dstexp alignas(32) [] = {2.553242426718889e+00, -4.120276036260000e-23,
			6.545355792470330e-01, -4.862183807052477e-01, -1.038454847690000e-22, 7.270432087798273e-01,
			-1.318258357033889e-01, -2.158903381151781e-01, -1.401552222965663e-01, 7.542504200000000e-25, 3.228212062566286e-01, -3.391369948674824e-01,
			-1.874116566048106e-01, -8.388688577705803e-03, -8.034067811871062e-02, 1.591282956293980e-01, 5.638806910900000e-22, 1.254362091695442e-02, -1.944022898720538e-01, 3.185249748058490e-02,
			-5.437493024015742e-02, 4.347781692575135e-02, -1.443982463508051e-02, 1.079288718360014e-01, -5.208580598820702e-02, 1.495412380000000e-23, -6.501245692148184e-02, -3.494039452188002e-02, 2.160397756776077e-02, 5.191826425983029e-02,
			1.995028425314719e-02, 2.246833517410851e-02, 1.097470853779136e-02, 3.063347006052455e-02, -4.005731629131763e-02, -6.527198506224641e-03, 4.564166000000000e-25, -3.359694141655860e-02, 2.655576851038678e-02, 6.131860863387474e-03, 3.992846581982822e-02, -3.316330716910743e-02,
			2.298882571914121e-02, -1.063053037466167e-04, 8.984941893149880e-03, -8.335069512494701e-03, -1.476155022346759e-02, -5.549634156969406e-03, 1.446936446980118e-02, 7.594934860000000e-23, 1.589587737934101e-04, 2.174108224155498e-02, -1.668419249863434e-03, 1.471406672540296e-02, -2.819651121254778e-02, 6.034409924449269e-03,
			5.807522341664164e-03, -5.814888207949386e-03, 1.683441557879354e-03, -1.195283881715768e-02, 8.046401934649196e-04, -2.447715467790898e-03, 1.337403061367924e-02, -6.096682211042315e-03, 1.121230682000000e-22, 8.695012968798766e-03, 4.073465525037230e-03, -2.392583476310091e-03, -8.020536237195545e-04, -1.243632617322985e-02, 5.577603754433051e-03, 4.048859671084553e-03,
			-3.251434679594302e-03, -2.789232503320251e-03, -1.501874534444288e-03, -4.062181029413434e-03, 4.123557523145392e-03, -1.993116609843779e-04, 6.757016831408379e-03, -6.053133947721166e-03, 1.105935045936926e-05, -6.699231030000000e-23, 4.170744290134747e-03, -3.634120376860493e-03, -8.131219586002613e-04, -4.110295270624948e-03, -1.012672636044150e-03, 2.817996839502171e-03, 4.019939663434213e-03, -3.432959885614500e-03,
			-3.125240176104848e-03, 1.911674052722301e-04, -1.192322072820975e-03, 1.052062117994014e-03, 2.021251439338980e-03, 4.975789611815241e-04, 1.220490737773113e-03, -3.409355185090722e-03, 1.168784155670806e-05, 1.340614036993871e-03, -7.593098560000000e-23, -2.858535969558064e-04, -2.885089395309404e-03, 2.105880970664955e-04, -2.014749611465055e-03, 2.528074771236893e-03, 5.090064304823895e-04, 2.264182372013626e-03, -3.628558972622060e-03, 9.028134219917316e-04,
			-6.431214886777933e-04, 8.468209784680136e-04, -1.886462042471243e-04, 1.622663937296153e-03, -1.553131809216520e-05, 3.315894303082129e-04, -9.590428605623860e-04, -8.848877924768097e-04, 7.204111899135668e-06, 1.498034634364133e-03, -7.062596875332000e-04, 3.978817900000000e-23, -1.266253901390566e-03, -4.564729981516590e-04, 3.248044557773654e-04, 1.548523157413492e-05, 1.684724622720171e-03, -3.999587595604533e-04, 5.876567216616477e-04, -2.236921053498756e-03, 1.008821980358803e-03, 2.892175618567258e-04,
			5.387700497364429e-04, 3.639976425680214e-04, 2.305690736980949e-04, 5.405395861797317e-04, -5.512650951475174e-04, 5.006405186556184e-05, -8.781507119688645e-04, 3.005931397806981e-04, 2.350010898546678e-06, 9.975511346233760e-04, -8.296863327815874e-04, 7.203946075860431e-05, -4.870530000000000e-24, -5.442868356367729e-04, 5.579096945542254e-04, 1.081986223858262e-04, 5.494983712913983e-04, 2.543777989145232e-04, -3.662229577656420e-04, -1.996393061421685e-04, -7.287387545280285e-04, 6.717764312761474e-04, 3.397663983125409e-04, -3.539733168685486e-04,
			4.418251200754049e-04, -5.356952886361430e-05, 1.667049260851373e-04, -1.697084181009684e-04, -2.830631433283378e-04, -6.241754154804937e-05, -2.426202848718583e-04, 4.132558789864831e-04, -2.671128526911127e-07, 3.824228675939504e-04, -5.909043368891492e-04, 8.856220224746324e-05, 1.205536132751715e-04, -3.023042660000000e-23, 8.010328074022628e-05, 4.033759230660932e-04, -3.396810760407315e-05, 2.821573409228355e-04, -3.170907474234544e-04, -1.011832208165560e-04, -2.744639519239707e-04, 8.685012278159629e-05, 2.575328516024529e-04, 2.419906759037813e-04, -4.351885036075749e-04, 1.217227938221239e-04,
			6.841024696368479e-05, -1.273736742970893e-04, 1.936978642887461e-05, -2.351463509005070e-04, 4.814156566495267e-06, -4.701209622521867e-05, 1.029050953246281e-04, 1.614146867596770e-04, -7.680801329747333e-07, 7.687317262878348e-06, -2.568507609936923e-04, 6.693129544033894e-05, 1.545288793266551e-04, -7.990467947130943e-05, 1.041692200000000e-24, 1.904636815206194e-04, 4.686902720992256e-05, -4.706514709620211e-05, -4.800348781956068e-06, -2.388138135291855e-04, 4.290665741637251e-05, -1.072076300849804e-04, 2.454093730545746e-04, 5.189583099165755e-06, 1.051940719374178e-04, -3.289545646037592e-04, 1.560185014209437e-04, 1.545971731883869e-05,
			-8.942865829439068e-05, -4.819628351349836e-05, -3.675188456654857e-05, -7.185947995958579e-05, 8.088114989612780e-05, -7.675861472577468e-06, 1.227648012066441e-04, -2.002686101025034e-05, -3.795626606034669e-07, -9.555153910916579e-05, -3.093420006931571e-05, 3.219576955008600e-05, 1.232220604208171e-04, -1.064415657454353e-04, 1.502022031015990e-05, -1.207633000000000e-24, 7.206927340375646e-05, -8.892515655756282e-05, -1.438153445362873e-05, -8.062920336384180e-05, -3.898330514712928e-05, 5.118229690019016e-05, 1.330641833474795e-05, 1.245617286223105e-04, -6.431350067370794e-05, 1.266524865288123e-05, -1.583087112052435e-04, 1.243885382997040e-04, 2.060013639247566e-05, -3.568822399259582e-05,
			-6.350353659392989e-05, 1.176234555088794e-05, -2.380386826181517e-05, 2.938192933969497e-05, 4.024562862924760e-05, 9.029934408697921e-06, 3.793712291944336e-05, -5.553500290309515e-05, -1.441367471323446e-08, -6.126306979745871e-05, 4.705713000854950e-05, 6.389776601044588e-06, 6.459305445871694e-05, -8.907643248301410e-05, 2.073411034793566e-05, 1.015242015740371e-05, 7.547201000000000e-24, -1.758848041625727e-05, -5.759271128535120e-05, 5.880240517672879e-06, -4.012531852183890e-05, 4.584943794550430e-05, 1.580902792986980e-05, 3.690504679527306e-05, 6.205852660449151e-06, -4.121249462009117e-05, -1.929981171650162e-05, -3.145802084866099e-05, 6.517206997256199e-05, 1.725634856604160e-05, -4.927656076377284e-05, 1.539967658673121e-05,
			-6.353734362875869e-06, 1.942355948800929e-05, -1.576775204054823e-06, 3.504573763867535e-05, -2.032922371613826e-06, 6.874108618771502e-06, -1.386782794916180e-05, -2.511371137586654e-05, 8.090760616167693e-08, -1.074891201151947e-05, 3.824525282674619e-05, -4.105170677755374e-06, 1.701013490615637e-05, -5.022609800596651e-05, 1.812434492300297e-05, 1.449770309623555e-05, -8.796329477688824e-06, 5.561559000000000e-25, -2.904577045383883e-05, -3.812471878628760e-06, 7.010973410420415e-06, 2.023499798005122e-06, 3.486861321470254e-05, -5.782611697243406e-06, 1.670562505811776e-05, -3.072140641957508e-05, -7.209763450364119e-06, -1.571402356376274e-05, 2.025717439145957e-05, 1.713107075196821e-05, 9.760238653754977e-06, -4.311556666337843e-05, 2.198622193326583e-05, -6.070355801496791e-08,
			1.479427562695609e-05, 6.356599829631253e-06, 5.935616365139900e-06, 9.425992705964694e-06, -1.237680983573364e-05, 1.044394269842041e-06, -1.801116930591031e-05, 1.794454269255607e-06, 2.870626159554592e-08, 1.060323236941865e-05, 1.065955766451943e-05, -4.366006297048245e-06, -5.138561522699753e-06, -1.597017153432642e-05, 1.086956888691751e-05, 1.322613812071017e-05, -1.296312655281388e-05, 2.360691794744123e-06, 3.230232500000000e-24, -9.506814025039024e-06, 1.435970668753238e-05, 1.882944343765677e-06, 1.234282349027840e-05, 5.263916691119556e-06, -7.497161741189894e-06, -1.179355282868305e-06, -1.904750996149429e-05, 7.133012927231646e-06, -4.415337453141154e-06, 2.171197651577799e-05, -5.192539790841241e-06, 3.140951807399479e-06, -2.594284627601723e-05, 2.003400812834250e-05, -8.950869676513406e-08, -3.472527876878801e-06,
			9.177092477642580e-06, -2.337167236642206e-06, 3.425518823146249e-06, -5.163753671368726e-06, -5.749100109481928e-06, -1.401652590501291e-06, -5.617426860878832e-06, 8.024115466602217e-06, -1.985994849791165e-08, 9.113479031166170e-06, -4.196087868526312e-06, -1.586628967781431e-06, -8.068709204310844e-06, 1.812551030615897e-06, 3.939240825365618e-06, 8.454183742892945e-06, -1.228074985791097e-05, 3.587303470310312e-06, 7.492378115118040e-07, 2.341590000000000e-25, 3.494390126406276e-06, 8.282612009665394e-06, -1.034142440647423e-06, 5.740441047027954e-06, -7.117519079458054e-06, -2.325472994700673e-06, -5.340171366580787e-06, -1.997890223890731e-06, 6.094804629198613e-06, 1.700825737354541e-06, 8.129363348270139e-06, -8.087272327431331e-06, -3.202903930773373e-07, -9.527552753326922e-06, 1.274703037917290e-05, -7.637570069286098e-08, -5.272250195638688e-06, 1.860262383752645e-06,
			3.699054797113807e-07, -2.977112886906338e-06, 3.156200247912111e-08, -5.291076163731883e-06, 5.812509575179543e-07, -1.027484705822116e-06, 2.145548159602521e-06, 3.796106820898451e-06, -1.651086025350998e-08, 2.203568504197560e-06, -5.445466181298499e-06, 2.609771592717766e-07, -3.824630088289688e-06, 5.591165704204673e-06, -5.075427600246288e-09, 3.515751750045189e-06, -8.251868749097110e-06, 3.523245106013311e-06, 1.166730513265619e-06, -9.368441183994786e-07, -6.504910000000000e-25, 4.452957130715240e-06, 7.201779702867259e-08, -1.056074425265874e-06, -5.733717483173994e-07, -5.175927806452232e-06, 9.023673319418768e-07, -2.547010838750464e-06, 4.273375724625146e-06, 1.432971067452313e-06, 2.257651147763639e-06, -1.054256176779159e-06, -3.752936277583642e-06, -1.100830468369333e-06, -1.377620338294256e-07, 5.202049661581596e-06, -2.390394626895820e-08, -5.183092492091540e-06, 2.909337251451026e-06, -1.987976614223533e-07
};

	double srcexps alignas(32) [EXPSIZE*8] = {0};
	double dstexps alignas(32) [EXPSIZE*8] = {0};
	double movedexp alignas(32) [EXPSIZE] = {0};

	for (int i=0; i<EXPSIZE; i++)
			srcexps[i*8] = srcexp[i];

	double xr alignas(32) [8] = {-0.375000 - 0.121532, 1, 1, 1, 1, 1, 1, 1};
	double yr alignas(32) [8] = {-0.125000 + 0.196302, 1, 1, 1, 1, 1, 1, 1};
	double zr alignas(32) [8] = {0.1250000 - 0.186786, 1, 1, 1, 1, 1, 1, 1};

	Profiler prof;

	for (int i=0; i<1; i++)
		prof.profile("e2l", [&]() {
				ispc::e2l(xr, yr, zr, srcexps, dstexps);
		});

	double linf = 0;
	for (int i=0; i<EXPSIZE; i++)
	{
		linf = std::max(linf, fabs(dstexp[i] - dstexps[i]));
		printf("%20.10e   %20.10e\n", dstexp[i], dstexps[i]);
	}
	
	
	double p;
	for (int c = 0; c < 8; c++)
	{
		xr[c] = -xr[c];
		yr[c] = -yr[c];
		zr[c] = -zr[c];
	}
	ispc::e2p(xr, yr, zr, 8, srcexps, p);
	printf("hoho %f\n", p);

//	xr[0] = yr[0] = zr[0] = 0.0;
//	//ispc::l2l(xr, yr, zr, dstexp, movedexp);
//
//	for (int i=0; i<EXPSIZE; i++)
//	{
//		//printf("%20.10e   %20.10e\n", dstexps[8*i], movedexp[i]);
//		movedexp[i] = dstexps[8*i];
//	}
//
//	std::vector<const double*> ptrExps;
//	ptrExps.push_back(movedexp);
//
//	double xt alignas(32) [] = {0.0};
//	double yt alignas(32) [] = {0.0};
//	double zt alignas(32) [] = {0.0};
//	double pot alignas(32) [] = {0};
//
//	ispc::l2p(xt, yt, zt, &ptrExps[0], 1, pot);
//	printf("Pot: %f\n", pot[0]);
//


	printf("Difference: %f\n", linf);
	printf("%s", prof.printStatAndReset(Profiler::Unit::us).c_str());

	return 0;
}
