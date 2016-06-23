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
  return(0.1500000000000000d1 * t1 - 0.5000000000000000d0);
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
  double t4289;
  t4289 = ct * ct;
  return(0.3750000000000000d0 + (-0.3750000000000000d1 + 0.4375000000000000d1 * t4289) * t4289);
}

inline double Y_4_1 (double st, double ct)
{
  double t2;
  t2 = ct * ct;
  return(-0.3913118960624632d1 * (t2 - 0.4285714285714286d0) * st * ct);
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
  double t4295;
  t4295 = ct * ct;
  return((0.1875000000000000d1 + (0.7875000000000000d1 * t4295 - 0.8750000000000000d1) * t4295) * ct);
}

inline double Y_5_1 (double st, double ct)
{
  double t4298;
  t4298 = ct * ct;
  return(-0.3423265984407288d0 * st * (0.1d1 + (-0.14d2 + 0.21d2 * t4298) * t4298));
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
  double t4307;
  double t4308;
  t4307 = ct * ct;
  t4308 = t4307 * t4307;
  return(-0.1968750000000000d2 * t4308 - 0.3125000000000000d0 + (0.1443750000000000d2 * t4308 + 0.6562500000000000d1) * t4307);
}

inline double Y_6_1 (double st, double ct)
{
  double t4310;
  t4310 = ct * ct;
  return(-0.4050462936504912d0 * st * ct * (0.5d1 + (-0.30d2 + 0.33d2 * t4310) * t4310));
}

inline double Y_6_2 (double st, double ct)
{
  double t4312;
  double t5;
  t4312 = ct * ct;
  t5 = st * st;
  return(0.3202172114362375d0 * t5 * (0.1d1 + (-0.18d2 + 0.33d2 * t4312) * t4312));
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
  double t4324;
  t4324 = ct * ct;
  return((-0.2187500000000000d1 + (0.1968750000000000d2 + (0.2681250000000000d2 * t4324 - 0.4331250000000000d2) * t4324) * t4324) * ct);
}

inline double Y_7_1 (double st, double ct)
{
  double t4328;
  double t4329;
  t4328 = ct * ct;
  t4329 = t4328 * t4328;
  return(-0.5846339666834283e-1 * st * (-0.495d3 * t4329 - 0.5d1 + (0.429d3 * t4329 + 0.135d3) * t4328));
}

inline double Y_7_2 (double st, double ct)
{
  double t4331;
  double t6;
  t4331 = ct * ct;
  t6 = st * st;
  return(0.1432054904673700d0 * t6 * (0.15d2 + (-0.110d3 + 0.143d3 * t4331) * t4331) * ct);
}

inline double Y_7_3 (double st, double ct)
{
  double t1;
  double t4333;
  t4333 = ct * ct;
  t1 = st * st;
  return(-0.1012615734126228d0 * (0.3d1 + (-0.66d2 + 0.143d3 * t4333) * t4333) * t1 * st);
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
  double t4349;
  double t4350;
  t4349 = ct * ct;
  t4350 = t4349 * t4349;
  return(-0.9843750000000000d1 * t4349 + 0.2734375000000000d0 + (-0.9384375000000000d2 * t4349 + 0.5414062500000000d2 + 0.5027343750000000d2 * t4350) * t4350);
}

inline double Y_8_1 (double st, double ct)
{
  double t4353;
  double t4354;
  t4353 = ct * ct;
  t4354 = t4353 * t4353;
  return(-0.6629126073623883e-1 * st * ct * (-0.1001d4 * t4354 - 0.35d2 + (0.715d3 * t4354 + 0.385d3) * t4353));
}

inline double Y_8_2 (double st, double ct)
{
  double t1;
  double t4356;
  double t4359;
  double t5;
  t4356 = ct * ct;
  t1 = t4356 * t4356;
  t4359 = 0.143d3 * t1;
  t5 = st * st;
  return(0.2773162398327945d0 * t5 * (-0.1d1 - t4359 + (0.33d2 + t4359) * t4356));
}

inline double Y_8_3 (double st, double ct)
{
  double t1;
  double t4360;
  t4360 = ct * ct;
  t1 = st * st;
  return(-0.7509759275436197d0 * (0.3d1 + (-0.26d2 + 0.39d2 * t4360) * t4360) * ct * t1 * st);
}

inline double Y_8_4 (double st, double ct)
{
  double t1;
  double t2;
  double t4364;
  t4364 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2908517260779108d0 * (0.1d1 + (-0.26d2 + 0.65d2 * t4364) * t4364) * t2);
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
  double t4381;
  t4381 = ct * ct;
  return((0.2460937500000000d1 + (-0.3609375000000000d2 + (0.1407656250000000d3 + (0.9496093750000000d2 * t4381 - 0.2010937500000000d3) * t4381) * t4381) * t4381) * ct);
}

inline double Y_9_1 (double st, double ct)
{
  double t4386;
  double t4387;
  t4386 = ct * ct;
  t4387 = t4386 * t4386;
  return(-0.3705794133009819e-1 * (-0.308d3 * t4386 + 0.7d1 + (-0.4004d4 * t4386 + 0.2002d4 + 0.2431d4 * t4387) * t4387) * st);
}

inline double Y_9_2 (double st, double ct)
{
  double t4390;
  double t4391;
  double t7;
  t4390 = ct * ct;
  t4391 = t4390 * t4390;
  t7 = st * st;
  return(0.3476343040826092d0 * t7 * (-0.273d3 * t4391 - 0.7d1 + (0.221d3 * t4391 + 0.91d2) * t4390) * ct);
}

inline double Y_9_3 (double st, double ct)
{
  double t4393;
  double t4394;
  double t6;
  t4393 = ct * ct;
  t4394 = t4393 * t4393;
  t6 = st * st;
  return(-0.2655100854369755d0 * t6 * st * (-0.195d3 * t4394 - 0.1d1 + (0.221d3 * t4394 + 0.39d2) * t4393));
}

inline double Y_9_4 (double st, double ct)
{
  double t4398;
  double t6;
  double t7;
  t4398 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.2344921582177643d1 * t7 * (0.1d1 + (-0.10d2 + 0.17d2 * t4398) * t4398) * ct);
}

inline double Y_9_5 (double st, double ct)
{
  double t4402;
  double t5;
  double t6;
  t4402 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  return(-0.2802717361664391d0 * t6 * st * (0.1d1 + (-0.30d2 + 0.85d2 * t4402) * t4402));
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
  double t4421;
  double t4422;
  double t4424;
  t4421 = ct * ct;
  t4422 = t4421 * t4421;
  t4424 = t4422 * t4422;
  return(-0.4273242187500000d3 * t4424 - 0.1173046875000000d3 * t4422 - 0.2460937500000000d0 + (0.1804257812500000d3 * t4424 + 0.3519140625000000d3 * t4422 + 0.1353515625000000d2) * t4421);
}

inline double Y_10_1 (double st, double ct)
{
  double t4426;
  double t4427;
  t4426 = ct * ct;
  t4427 = t4426 * t4426;
  return(-0.4096909563164656e-1 * st * ct * (-0.1092d4 * t4426 + 0.63d2 + (-0.7956d4 * t4426 + 0.4914d4 + 0.4199d4 * t4427) * t4427));
}

inline double Y_10_2 (double st, double ct)
{
  double t1;
  double t4430;
  double t4431;
  t4430 = ct * ct;
  t4431 = t4430 * t4430;
  t1 = st * st;
  return(0.3548027758707998e-1 * (-0.364d3 * t4430 + 0.7d1 + (-0.6188d4 * t4430 + 0.2730d4 + 0.4199d4 * t4431) * t4431) * t1);
}

inline double Y_10_3 (double st, double ct)
{
  double t1;
  double t4434;
  double t4435;
  t4434 = ct * ct;
  t4435 = t4434 * t4434;
  t1 = st * st;
  return(-0.3618292555284191d0 * (-0.357d3 * t4435 - 0.7d1 + (0.323d3 * t4435 + 0.105d3) * t4434) * ct * t1 * st);
}

inline double Y_10_4 (double st, double ct)
{
  double t1;
  double t2;
  double t4439;
  double t4440;
  t4439 = ct * ct;
  t4440 = t4439 * t4439;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2558519202158252d0 * (-0.255d3 * t4440 - 0.1d1 + (0.323d3 * t4440 + 0.45d2) * t4439) * t2);
}

inline double Y_10_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4444;
  t4444 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1618149623219373d0 * (0.15d2 + (-0.170d3 + 0.323d3 * t4444) * t4444) * ct * t2 * st);
}

inline double Y_10_6 (double st, double ct)
{
  double t1;
  double t2;
  double t4449;
  t4449 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.9045731388210477e-1 * (0.3d1 + (-0.102d3 + 0.323d3 * t4449) * t4449) * t2 * t1);
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
  double t4469;
  t4469 = ct * ct;
  return((-0.2707031250000000d1 + (0.5865234375000000d2 + (-0.3519140625000000d3 + (0.8546484375000000d3 + (0.3444492187500000d3 * t4469 - 0.9021289062500000d3) * t4469) * t4469) * t4469) * t4469) * ct);
}

inline double Y_11_1 (double st, double ct)
{
  double t4475;
  double t4476;
  double t4478;
  t4475 = ct * ct;
  t4476 = t4475 * t4475;
  t4478 = t4476 * t4476;
  return(-0.1121984891901959e-1 * st * (-0.62985d5 * t4478 - 0.13650d5 * t4476 - 0.21d2 + (0.29393d5 * t4478 + 0.46410d5 * t4476 + 0.1365d4) * t4475));
}

inline double Y_11_2 (double st, double ct)
{
  double t4480;
  double t4481;
  double t8;
  t4480 = ct * ct;
  t4481 = t4480 * t4480;
  t8 = st * st;
  return(0.1279259601079126d0 * t8 * (-0.420d3 * t4480 + 0.21d2 + (-0.3876d4 * t4480 + 0.2142d4 + 0.2261d4 * t4481) * t4481) * ct);
}

inline double Y_11_3 (double st, double ct)
{
  double t1;
  double t4484;
  double t4485;
  t4484 = ct * ct;
  t4485 = t4484 * t4484;
  t1 = st * st;
  return(-0.2393275567989600d0 * (-0.60d2 * t4484 + 0.1d1 + (-0.1292d4 * t4484 + 0.510d3 + 0.969d3 * t4485) * t4485) * t1 * st);
}

inline double Y_11_4 (double st, double ct)
{
  double t1;
  double t4490;
  double t4495;
  double t6;
  double t7;
  t4490 = ct * ct;
  t1 = t4490 * t4490;
  t4495 = 0.323d3 * t1;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.5243404059655569d0 * t7 * (-0.5d1 - t4495 + (0.85d2 + t4495) * t4490) * ct);
}

inline double Y_11_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4496;
  double t4497;
  t4496 = ct * ct;
  t4497 = t4496 * t4496;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.4954551130455398e-1 * (-0.1615d4 * t4497 - 0.5d1 + (0.2261d4 * t4497 + 0.255d3) * t4496) * t2 * st);
}

inline double Y_11_6 (double st, double ct)
{
  double t4502;
  double t6;
  double t7;
  t4502 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  return(0.1667950453646724d0 * t7 * t6 * (0.15d2 + (-0.190d3 + 0.399d3 * t4502) * t4502) * ct);
}

inline double Y_11_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4507;
  t4507 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2637261228917375d0 * (0.1d1 + (-0.38d2 + 0.133d3 * t4507) * t4507) * t3 * t1 * st);
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
  double t4529;
  double t4530;
  double t4531;
  double t4532;
  t4529 = ct * ct;
  t4530 = t4529 * t4529;
  t4532 = t4530 * t4530;
  t4531 = t4529 * t4530;
  return(0.2029790039062500d4 * t4532 + 0.2199462890625000d3 * t4530 + 0.2255859375000000d0 + (-0.9970898437500000d3 + 0.6601943359375000d3 * t4531) * t4531 + (-0.1894470703125000d4 * t4532 - 0.1759570312500000d2) * t4529);
}

inline double Y_12_1 (double st, double ct)
{
  double t4535;
  double t4536;
  double t4538;
  t4535 = ct * ct;
  t4536 = t4535 * t4535;
  t4538 = t4536 * t4536;
  return(-0.1219726171562187e-1 * ct * st * (-0.124355d6 * t4538 - 0.39270d5 * t4536 - 0.231d3 + (0.52003d5 * t4538 + 0.106590d6 * t4536 + 0.5775d4) * t4535));
}

inline double Y_12_2 (double st, double ct)
{
  double t1;
  double t4540;
  double t4541;
  double t4543;
  t4540 = ct * ct;
  t4541 = t4540 * t4540;
  t4543 = t4541 * t4541;
  t1 = st * st;
  return(0.7568201863280298e-1 * (-0.14535d5 * t4543 - 0.2550d4 * t4541 - 0.3d1 + (0.7429d4 * t4543 + 0.9690d4 * t4541 + 0.225d3) * t4540) * t1);
}

inline double Y_12_3 (double st, double ct)
{
  double t1;
  double t4545;
  double t4546;
  t4545 = ct * ct;
  t4546 = t4545 * t4545;
  t1 = st * st;
  return(-0.6179410945139209e-1 * (-0.1020d4 * t4545 + 0.45d2 + (-0.11628d5 * t4545 + 0.5814d4 + 0.7429d4 * t4546) * t4546) * t1 * st * ct);
}

inline double Y_12_4 (double st, double ct)
{
  double t1;
  double t2;
  double t4551;
  double t4552;
  t4551 = ct * ct;
  t4552 = t4551 * t4551;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4634558208854407e-1 * (-0.340d3 * t4551 + 0.5d1 + (-0.9044d4 * t4551 + 0.3230d4 + 0.7429d4 * t4552) * t4552) * t2);
}

inline double Y_12_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4557;
  double t4558;
  t4557 = ct * ct;
  t4558 = t4557 * t4557;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.5404777193938090d0 * (-0.399d3 * t4558 - 0.5d1 + (0.437d3 * t4558 + 0.95d2) * t4557) * t2 * st * ct);
}

inline double Y_12_6 (double st, double ct)
{
  double t1;
  double t2;
  double t4563;
  double t4564;
  t4563 = ct * ct;
  t4564 = t4563 * t4563;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.4814958217039473e-1 * (-0.1995d4 * t4564 - 0.5d1 + (0.3059d4 * t4564 + 0.285d3) * t4563) * t2 * t1);
}

inline double Y_12_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4569;
  t4569 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.5140968566359161d0 * (0.5d1 + (-0.70d2 + 0.161d3 * t4569) * t4569) * ct * t3 * t1 * st);
}

inline double Y_12_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4575;
  t4575 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2570484283179581d0 * (0.1d1 + (-0.42d2 + 0.161d3 * t4575) * t4575) * t3);
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
  double t4597;
  t4597 = ct * ct;
  return((0.2932617187500000d1 + (-0.8797851562500000d2 + (0.7478173828125000d3 + (-0.2706386718750000d4 + (0.4736176757812500d4 + (0.1269604492187500d4 * t4597 - 0.3961166015625000d4) * t4597) * t4597) * t4597) * t4597) * t4597) * ct);
}

inline double Y_13_1 (double st, double ct)
{
  double t4604;
  double t4605;
  double t4606;
  double t4607;
  t4604 = ct * ct;
  t4605 = t4604 * t4604;
  t4607 = t4605 * t4605;
  t4606 = t4604 * t4605;
  return(-0.6587274200796895e-2 * st * (0.479655d6 * t4607 + 0.42075d5 * t4605 + 0.33d2 + (-0.213180d6 + 0.185725d6 * t4606) * t4606 + (-0.490314d6 * t4607 - 0.2970d4) * t4604));
}

inline double Y_13_2 (double st, double ct)
{
  double t4610;
  double t4611;
  double t4613;
  double t9;
  t4610 = ct * ct;
  t4611 = t4610 * t4610;
  t4613 = t4611 * t4611;
  t9 = st * st;
  return(0.2945918579882491e-1 * t9 * (-0.81719d5 * t4613 - 0.21318d5 * t4611 - 0.99d2 + (0.37145d5 * t4613 + 0.63954d5 * t4611 + 0.2805d4) * t4610) * ct);
}

inline double Y_13_3 (double st, double ct)
{
  double t1;
  double t4615;
  double t4616;
  double t4618;
  t4615 = ct * ct;
  t4616 = t4615 * t4615;
  t4618 = t4616 * t4616;
  t1 = st * st;
  return(-0.2442626648101711e-1 * (-0.66861d5 * t4618 - 0.9690d4 * t4616 - 0.9d1 + (0.37145d5 * t4618 + 0.40698d5 * t4616 + 0.765d3) * t4615) * t1 * st);
}

inline double Y_13_4 (double st, double ct)
{
  double t4622;
  double t4623;
  double t8;
  double t9;
  t4622 = ct * ct;
  t4623 = t4622 * t4622;
  t8 = st * st;
  t9 = t8 * t8;
  return(0.6369591007726704e-1 * t9 * (-0.1140d4 * t4622 + 0.45d2 + (-0.15732d5 * t4622 + 0.7182d4 + 0.10925d5 * t4623) * t4623) * ct);
}

inline double Y_13_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4628;
  double t4629;
  t4628 = ct * ct;
  t4629 = t4628 * t4628;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.4503980994948408e-1 * (-0.380d3 * t4628 + 0.5d1 + (-0.12236d5 * t4628 + 0.3990d4 + 0.10925d5 * t4629) * t4629) * t2 * st);
}

inline double Y_13_6 (double st, double ct)
{
  double t4635;
  double t4636;
  double t7;
  double t8;
  t4635 = ct * ct;
  t4636 = t4635 * t4635;
  t7 = st * st;
  t8 = t7 * t7;
  return(0.5552880702873221d0 * t8 * t7 * (-0.483d3 * t4636 - 0.5d1 + (0.575d3 * t4636 + 0.105d3) * t4635) * ct);
}

inline double Y_13_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4641;
  double t4642;
  t4641 = ct * ct;
  t4642 = t4641 * t4641;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2346520376016589d0 * (-0.483d3 * t4642 - 0.1d1 + (0.805d3 * t4642 + 0.63d2) * t4641) * t3 * t1 * st);
}

inline double Y_13_8 (double st, double ct)
{
  double t4648;
  double t6;
  double t7;
  double t8;
  t4648 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.8779875298138037d0 * t8 * (0.3d1 + (-0.46d2 + 0.115d3 * t4648) * t4648) * ct);
}

inline double Y_13_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4653;
  t4653 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8371282635016108e-1 * (0.3d1 + (-0.138d3 + 0.575d3 * t4653) * t4653) * t3 * st);
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
  double t4677;
  double t4678;
  double t4679;
  double t4680;
  double t4682;
  t4677 = ct * ct;
  t4678 = t4677 * t4677;
  t4679 = t4677 * t4678;
  t4682 = t4679 * t4679;
  t4680 = t4678 * t4678;
  return(-0.8252429199218750d4 * t4682 - 0.7104265136718750d4 * t4680 + 0.2368088378906250d4 * t4679 - 0.3739086914062500d3 * t4678 - 0.2094726562500000d0 + (0.2448522949218750d4 * t4682 + 0.1089320654296875d5 * t4680 + 0.2199462890625000d2) * t4677);
}

inline double Y_14_1 (double st, double ct)
{
  double t4684;
  double t4685;
  double t4686;
  double t4687;
  t4684 = ct * ct;
  t4685 = t4684 * t4684;
  t4687 = t4685 * t4685;
  t4686 = t4684 * t4685;
  return(-0.7075867551850312e-2 * ct * st * (0.1062347d7 * t4687 + 0.138567d6 * t4685 + 0.429d3 + (-0.554268d6 + 0.334305d6 * t4686) * t4686 + (-0.965770d6 * t4687 - 0.14586d5) * t4684));
}

inline double Y_14_2 (double st, double ct)
{
  double t1;
  double t4690;
  double t4691;
  double t4692;
  double t4693;
  t4690 = ct * ct;
  t4691 = t4690 * t4690;
  t4693 = t4691 * t4691;
  t4692 = t4691 * t4690;
  t1 = st * st;
  return(0.6378100819147037e-2 * (0.735471d6 * t4693 + 0.53295d5 * t4691 + 0.33d2 + (-0.298452d6 + 0.334305d6 * t4692) * t4692 + (-0.817190d6 * t4693 - 0.3366d4) * t4690) * t1);
}

inline double Y_14_3 (double st, double ct)
{
  double t1;
  double t4696;
  double t4697;
  double t4699;
  t4696 = ct * ct;
  t4697 = t4696 * t4696;
  t4699 = t4697 * t4697;
  t1 = st * st;
  return(-0.3036583367331272e-1 * (-0.120175d6 * t4699 - 0.26334d5 * t4697 - 0.99d2 + (0.58995d5 * t4699 + 0.86526d5 * t4697 + 0.3135d4) * t4696) * t1 * st * ct);
}

inline double Y_14_4 (double st, double ct)
{
  double t1;
  double t2;
  double t4703;
  double t4704;
  double t4706;
  t4703 = ct * ct;
  t4704 = t4703 * t4703;
  t4706 = t4704 * t4704;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2136425772322245d0 * (-0.10925d5 * t4706 - 0.1330d4 * t4704 - 0.1d1 + (0.6555d4 * t4706 + 0.6118d4 * t4704 + 0.95d2) * t4703) * t2);
}

inline double Y_14_5 (double st, double ct)
{
  double t10;
  double t4710;
  double t4711;
  double t9;
  t4710 = ct * ct;
  t4711 = t4710 * t4710;
  t9 = st * st;
  t10 = t9 * t9;
  return(-0.5889719400182365d0 * t10 * st * ct * (0.5d1 * t4710 - 0.1d1) * (-0.391d3 * t4711 - 0.5d1 + (0.345d3 * t4711 + 0.115d3) * t4710));
}

inline double Y_14_6 (double st, double ct)
{
  double t1;
  double t2;
  double t4716;
  double t4717;
  t4716 = ct * ct;
  t4717 = t4716 * t4716;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2194968824534509d0 * (-0.84d2 * t4716 + 0.1d1 + (-0.3220d4 * t4716 + 0.966d3 + 0.3105d4 * t4717) * t4717) * t2 * t1);
}

inline double Y_14_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4723;
  double t4724;
  t4723 = ct * ct;
  t4724 = t4723 * t4723;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.4064292512256359d0 * (-0.805d3 * t4724 - 0.7d1 + (0.1035d4 * t4724 + 0.161d3) * t4723) * t3 * t1 * st * ct);
}

inline double Y_14_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4730;
  double t4731;
  t4730 = ct * ct;
  t4731 = t4730 * t4730;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2292570167224805d0 * (-0.575d3 * t4731 - 0.1d1 + (0.1035d4 * t4731 + 0.69d2) * t4730) * t3);
}

inline double Y_14_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4736;
  t4736 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8977200504534839d0 * (0.3d1 + (-0.50d2 + 0.135d3 * t4736) * t4736) * t3 * st * ct);
}

inline double Y_14_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4742;
  t4742 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2458507609790245d0 * (0.1d1 + (-0.50d2 + 0.225d3 * t4742) * t4742) * t3 * t1);
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
  double t4767;
  t4767 = ct * ct;
  return((-0.3142089843750000d1 + (0.1246362304687500d3 + (-0.1420853027343750d4 + (0.7104265136718750d4 + (-0.1815534423828125d5 + (0.2475728759765625d5 + (0.4733811035156250d4 * t4767 - 0.1713966064453125d5) * t4767) * t4767) * t4767) * t4767) * t4767) * t4767) * ct);
}

inline double Y_15_1 (double st, double ct)
{
  double t4775;
  double t4776;
  double t4777;
  double t4778;
  double t4780;
  t4775 = ct * ct;
  t4776 = t4775 * t4775;
  t4777 = t4775 * t4776;
  t4780 = t4777 * t4777;
  t4778 = t4776 * t4776;
  return(-0.4727762873788351e-3 * st * (-0.30421755d8 * t4780 - 0.22309287d8 * t4778 + 0.6789783d7 * t4777 - 0.969969d6 * t4776 - 0.429d3 + (0.9694845d7 * t4780 + 0.37182145d8 * t4778 + 0.51051d5) * t4775));
}

inline double Y_15_2 (double st, double ct)
{
  double t11;
  double t4782;
  double t4783;
  double t4784;
  double t4785;
  t4782 = ct * ct;
  t4783 = t4782 * t4782;
  t4785 = t4783 * t4783;
  t4784 = t4783 * t4782;
  t11 = st * st;
  return(0.7293637327289871e-2 * t11 * (0.1562275d7 * t4785 + 0.171171d6 * t4783 + 0.429d3 + (-0.749892d6 + 0.570285d6 * t4784) * t4784 + (-0.1533870d7 * t4785 - 0.16302d5) * t4782) * ct);
}

inline double Y_15_3 (double st, double ct)
{
  double t1;
  double t4788;
  double t4789;
  double t4790;
  double t4791;
  t4788 = ct * ct;
  t4789 = t4788 * t4788;
  t4791 = t4789 * t4789;
  t4790 = t4789 * t4788;
  t1 = st * st;
  return(-0.1859519952845989e-1 * (0.360525d6 * t4791 + 0.21945d5 * t4789 + 0.11d2 + (-0.134596d6 + 0.190095d6 * t4790) * t4790 + (-0.432630d6 * t4791 - 0.1254d4) * t4788) * t1 * st);
}

inline double Y_15_4 (double st, double ct)
{
  double t10;
  double t4796;
  double t4797;
  double t4799;
  double t9;
  t4796 = ct * ct;
  t4797 = t4796 * t4796;
  t4799 = t4797 * t4797;
  t9 = st * st;
  t10 = t9 * t9;
  return(0.2807813554613938d0 * t10 * (-0.18975d5 * t4799 - 0.3542d4 * t4797 - 0.11d2 + (0.10005d5 * t4799 + 0.12650d5 * t4797 + 0.385d3) * t4796) * ct);
}

inline double Y_15_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4803;
  double t4804;
  double t4806;
  t4803 = ct * ct;
  t4804 = t4803 * t4803;
  t4806 = t4804 * t4804;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.2082330263577458d0 * (-0.15525d5 * t4806 - 0.1610d4 * t4804 - 0.1d1 + (0.10005d5 * t4806 + 0.8050d4 * t4804 + 0.105d3) * t4803) * t2 * st);
}

inline double Y_15_6 (double st, double ct)
{
  double t4811;
  double t4812;
  double t8;
  double t9;
  t4811 = ct * ct;
  t4812 = t4811 * t4811;
  t8 = st * st;
  t9 = t8 * t8;
  return(0.1436944398071090d0 * t9 * t8 * (-0.644d3 * t4811 + 0.21d2 + (-0.12420d5 * t4811 + 0.4830d4 + 0.10005d5 * t4812) * t4812) * ct);
}

inline double Y_15_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4818;
  double t4819;
  t4818 = ct * ct;
  t4819 = t4818 * t4818;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.3063575750319379e-1 * (-0.644d3 * t4818 + 0.7d1 + (-0.28980d5 * t4818 + 0.8050d4 + 0.30015d5 * t4819) * t4819) * t3 * t1 * st);
}

inline double Y_15_8 (double st, double ct)
{
  double t4826;
  double t4827;
  double t7;
  double t8;
  double t9;
  t4826 = ct * ct;
  t4827 = t4826 * t4826;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.4155636333393323d0 * t9 * (-0.945d3 * t4827 - 0.7d1 + (0.1305d4 * t4827 + 0.175d3) * t4826) * ct);
}

inline double Y_15_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4832;
  double t4833;
  t4832 = ct * ct;
  t4833 = t4832 * t4832;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.2244300126133710d0 * (-0.675d3 * t4833 - 0.1d1 + (0.1305d4 * t4833 + 0.75d2) * t4832) * t3 * st);
}

inline double Y_15_10 (double st, double ct)
{
  double t4839;
  double t6;
  double t7;
  double t8;
  t4839 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.5497390138691516d0 * t8 * t6 * (0.5d1 + (-0.90d2 + 0.261d3 * t4839) * t4839) * ct);
}

inline double Y_15_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t4845;
  t4845 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.2410765053199388d0 * (0.1d1 + (-0.54d2 + 0.261d3 * t4845) * t4845) * t4 * t1 * st);
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
  double t4872;
  double t4873;
  double t4874;
  double t4875;
  double t4877;
  t4872 = ct * ct;
  t4873 = t4872 * t4872;
  t4874 = t4872 * t4873;
  t4877 = t4874 * t4874;
  t4875 = t4873 * t4873;
  return(0.5570389709472656d5 * t4877 - 0.4972985595703125d4 * t4874 + 0.5920220947265625d3 * t4873 + 0.1963806152343750d0 + (0.2042476226806641d5 + 0.9171758880615234d4 * t4875) * t4875 + (-0.3550358276367188d5 * t4877 - 0.4538836059570312d5 * t4875 - 0.2670776367187500d2) * t4872);
}

inline double Y_16_1 (double st, double ct)
{
  double t4880;
  double t4881;
  double t4882;
  double t4883;
  double t4885;
  t4880 = ct * ct;
  t4881 = t4880 * t4880;
  t4882 = t4880 * t4881;
  t4885 = t4882 * t4882;
  t4883 = t4881 * t4881;
  return(-0.5033087921896559e-3 * ct * st * (-0.59879925d8 * t4885 - 0.54679625d8 * t4883 + 0.19684665d8 * t4882 - 0.3594591d7 * t4881 - 0.6435d4 + (0.17678835d8 * t4885 + 0.80528175d8 * t4883 + 0.285285d6) * t4880));
}

inline double Y_16_2 (double st, double ct)
{
  double t1;
  double t4887;
  double t4888;
  double t4889;
  double t4890;
  double t4892;
  t4887 = ct * ct;
  t4888 = t4887 * t4887;
  t4889 = t4888 * t4887;
  t4892 = t4889 * t4889;
  t4890 = t4888 * t4888;
  t1 = st * st;
  return(0.1378367894364772e-2 * (-0.17298645d8 * t4892 - 0.10935925d8 * t4890 + 0.3062059d7 * t4889 - 0.399399d6 * t4888 - 0.143d3 + (0.5892945d7 * t4892 + 0.19684665d8 * t4890 + 0.19019d5) * t4887) * t1);
}

inline double Y_16_3 (double st, double ct)
{
  double t1;
  double t4894;
  double t4895;
  double t4896;
  double t4897;
  t4894 = ct * ct;
  t4895 = t4894 * t4894;
  t4897 = t4895 * t4895;
  t4896 = t4895 * t4894;
  t1 = st * st;
  return(-0.2248050003646145e-1 * (0.740025d6 * t4897 + 0.69069d5 * t4895 + 0.143d3 + (-0.328900d6 + 0.310155d6 * t4896) * t4896 + (-0.780390d6 * t4897 - 0.6006d4) * t4894) * t1 * st * ct);
}

inline double Y_16_4 (double st, double ct)
{
  double t1;
  double t2;
  double t4902;
  double t4903;
  double t4904;
  double t4905;
  t4902 = ct * ct;
  t4903 = t4902 * t4902;
  t4905 = t4903 * t4903;
  t4904 = t4903 * t4902;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1812435856045872e-1 * (0.512325d6 * t4905 + 0.26565d5 * t4903 + 0.11d2 + (-0.177100d6 + 0.310155d6 * t4904) * t4904 + (-0.660330d6 * t4905 - 0.1386d4) * t4902) * t2);
}

inline double Y_16_5 (double st, double ct)
{
  double t1;
  double t2;
  double t4910;
  double t4911;
  double t4913;
  t4910 = ct * ct;
  t4911 = t4910 * t4910;
  t4913 = t4911 * t4911;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1370072726386812e-1 * (-0.550275d6 * t4913 - 0.88550d5 * t4911 - 0.231d3 + (0.310155d6 * t4913 + 0.341550d6 * t4911 + 0.8855d4) * t4910) * t2 * st * ct);
}

inline double Y_16_6 (double st, double ct)
{
  double t1;
  double t2;
  double t4918;
  double t4919;
  double t4921;
  t4918 = ct * ct;
  t4919 = t4918 * t4918;
  t4921 = t4919 * t4919;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.9687877155468555e-2 * (-0.450225d6 * t4921 - 0.40250d5 * t4919 - 0.21d2 + (0.310155d6 * t4921 + 0.217350d6 * t4919 + 0.2415d4) * t4918) * t2 * t1);
}

inline double Y_16_7 (double st, double ct)
{
  double t1;
  double t3;
  double t4926;
  double t4927;
  t4926 = ct * ct;
  t4927 = t4926 * t4926;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.1469239315743810d0 * (-0.700d3 * t4926 + 0.21d2 + (-0.15660d5 * t4926 + 0.5670d4 + 0.13485d5 * t4927) * t4927) * t3 * t1 * st * ct);
}

inline double Y_16_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4934;
  double t4935;
  t4934 = ct * ct;
  t4935 = t4934 * t4934;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2999072194673531e-1 * (-0.700d3 * t4934 + 0.7d1 + (-0.36540d5 * t4934 + 0.9450d4 + 0.40455d5 * t4935) * t4935) * t3);
}

inline double Y_16_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4941;
  double t4942;
  t4941 = ct * ct;
  t4942 = t4941 * t4941;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.8482657144486700e-1 * (-0.5481d4 * t4942 - 0.35d2 + (0.8091d4 * t4942 + 0.945d3) * t4941) * t3 * st * ct);
}

inline double Y_16_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4948;
  double t4949;
  t4948 = ct * ct;
  t4949 = t4948 * t4948;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4401434668274822e-1 * (-0.3915d4 * t4949 - 0.5d1 + (0.8091d4 * t4949 + 0.405d3) * t4948) * t3 * t1);
}

inline double Y_16_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t4955;
  t4955 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1867370580532013d0 * (0.15d2 + (-0.290d3 + 0.899d3 * t4955) * t4955) * t4 * t1 * st * ct);
}

inline double Y_16_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4962;
  t4962 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.7891080956457456e-1 * (0.3d1 + (-0.174d3 + 0.899d3 * t4962) * t4962) * t3 * t2);
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
  double t4988;
  t4988 = ct * ct;
  return((0.3338470458984375d1 + (-0.1691491699218750d3 + (0.2486492797851562d4 + (-0.1633980981445312d5 + (0.5673545074462891d5 + (-0.1114077941894531d6 + (0.1242625396728516d6 + (0.1780400253295898d5 * t4988 - 0.7337407104492188d5) * t4988) * t4988) * t4988) * t4988) * t4988) * t4988) * t4988) * ct);
}

inline double Y_17_1 (double st, double ct)
{
  double t4997;
  double t4998;
  double t4999;
  double t5000;
  double t5002;
  t4997 = ct * ct;
  t4998 = t4997 * t4997;
  t4999 = t4997 * t4998;
  t5002 = t4999 * t4999;
  t5000 = t4998 * t4998;
  return(-0.2669197949910873e-3 * st * (0.345972900d9 * t5002 - 0.24496472d8 * t4999 + 0.2662660d7 * t4998 + 0.715d3 + (0.109359250d9 + 0.64822395d8 * t5000) * t5000 + (-0.235717800d9 * t5002 - 0.262462200d9 * t5000 - 0.108680d6) * t4997));
}

inline double Y_17_2 (double st, double ct)
{
  double t11;
  double t5005;
  double t5006;
  double t5007;
  double t5008;
  double t5010;
  t5005 = ct * ct;
  t5006 = t5005 * t5005;
  t5007 = t5006 * t5005;
  t5010 = t5007 * t5007;
  t5008 = t5006 * t5006;
  t11 = st * st;
  return(0.4653905649586976e-2 * t11 * (-0.10855425d8 * t5010 - 0.8633625d7 * t5008 + 0.2877875d7 * t5007 - 0.483483d6 * t5006 - 0.715d3 + (0.3411705d7 * t5010 + 0.13656825d8 * t5008 + 0.35035d5) * t5005) * ct);
}

inline double Y_17_3 (double st, double ct)
{
  double t1;
  double t5012;
  double t5013;
  double t5014;
  double t5015;
  double t5017;
  t5012 = ct * ct;
  t5013 = t5012 * t5012;
  t5014 = t5013 * t5012;
  t5017 = t5014 * t5014;
  t5015 = t5013 * t5013;
  t1 = st * st;
  return(-0.1343466839786080e-2 * (-0.28224105d8 * t5017 - 0.15540525d8 * t5015 + 0.4029025d7 * t5014 - 0.483483d6 * t5013 - 0.143d3 + (0.10235115d8 * t5017 + 0.30045015d8 * t5015 + 0.21021d5) * t5012) * t1 * st);
}

inline double Y_17_4 (double st, double ct)
{
  double t11;
  double t12;
  double t5021;
  double t5022;
  double t5023;
  double t5024;
  t5021 = ct * ct;
  t5022 = t5021 * t5021;
  t5024 = t5022 * t5022;
  t5023 = t5022 * t5021;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.3290808243825335e-2 * t12 * (0.7153575d7 * t5024 + 0.575575d6 * t5022 + 0.1001d4 + (-0.2960100d7 + 0.3411705d7 * t5023) * t5023 + (-0.8064030d7 * t5024 - 0.46046d5) * t5021) * ct);
}

inline double Y_17_5 (double st, double ct)
{
  double t1;
  double t2;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  t5029 = ct * ct;
  t5030 = t5029 * t5029;
  t5032 = t5030 * t5030;
  t5031 = t5030 * t5029;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.2782630861577687e-1 * (0.450225d6 * t5032 + 0.20125d5 * t5030 + 0.7d1 + (-0.144900d6 + 0.310155d6 * t5031) * t5031 + (-0.620310d6 * t5032 - 0.966d3) * t5029) * t2 * st);
}

inline double Y_17_6 (double st, double ct)
{
  double t10;
  double t5038;
  double t5039;
  double t5041;
  double t9;
  t5038 = ct * ct;
  t5039 = t5038 * t5038;
  t5041 = t5039 * t5039;
  t9 = st * st;
  t10 = t9 * t9;
  return(0.1540951194431567d0 * t10 * t9 * (-0.67425d5 * t5041 - 0.9450d4 * t5039 - 0.21d2 + (0.40455d5 * t5041 + 0.39150d5 * t5039 + 0.875d3) * t5038) * ct);
}

inline double Y_17_7 (double st, double ct)
{
  double t1;
  double t3;
  double t5046;
  double t5047;
  double t5049;
  t5046 = ct * ct;
  t5047 = t5046 * t5046;
  t5049 = t5047 * t5047;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2845169700734477e-1 * (-0.202275d6 * t5049 - 0.15750d5 * t5047 - 0.7d1 + (0.148335d6 * t5049 + 0.91350d5 * t5047 + 0.875d3) * t5046) * t3 * t1 * st);
}

inline double Y_17_8 (double st, double ct)
{
  double t10;
  double t5055;
  double t5056;
  double t8;
  double t9;
  t5055 = ct * ct;
  t5056 = t5055 * t5055;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.8997216584020592e-1 * t10 * (-0.1260d4 * t5055 + 0.35d2 + (-0.32364d5 * t5055 + 0.10962d5 + 0.29667d5 * t5056) * t5056) * ct);
}

inline double Y_17_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5062;
  double t5063;
  t5062 = ct * ct;
  t5063 = t5062 * t5062;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.5881664478197644e-2 * (-0.3780d4 * t5062 + 0.35d2 + (-0.226548d6 * t5062 + 0.54810d5 + 0.267003d6 * t5063) * t5063) * t3 * st);
}

inline double Y_17_10 (double st, double ct)
{
  double t5070;
  double t5071;
  double t7;
  double t8;
  double t9;
  t5070 = ct * ct;
  t5071 = t5070 * t5070;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.8644246085902379e-1 * t9 * t7 * (-0.6293d4 * t5071 - 0.35d2 + (0.9889d4 * t5071 + 0.1015d4) * t5070) * ct);
}

inline double Y_17_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5077;
  double t5078;
  t5077 = ct * ct;
  t5078 = t5077 * t5077;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.4322123042951190e-1 * (-0.4495d4 * t5078 - 0.5d1 + (0.9889d4 * t5078 + 0.435d3) * t5077) * t4 * t1 * st);
}

inline double Y_17_12 (double st, double ct)
{
  double t5085;
  double t6;
  double t7;
  double t8;
  t5085 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.1900423953321784d0 * t8 * t7 * (0.15d2 + (-0.310d3 + 0.1023d4 * t5085) * t5085) * ct);
}

inline double Y_17_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5091;
  t5091 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2327534490300584d0 * (0.1d1 + (-0.62d2 + 0.341d3 * t5091) * t5091) * t4 * t2 * st);
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
  double t5118;
  double t5119;
  double t5120;
  double t5121;
  double t5123;
  double t5125;
  t5118 = ct * ct;
  t5119 = t5118 * t5118;
  t5121 = t5119 * t5119;
  t5125 = t5121 * t5121;
  t5120 = t5118 * t5119;
  t5123 = t5120 * t5120;
  return(-0.1513340215301514d6 * t5125 - 0.2692355026245117d6 * t5123 - 0.5106190567016602d5 * t5121 + 0.9531555725097656d4 * t5120 - 0.8880331420898438d3 * t5119 - 0.1854705810546875d0 + (0.3461889381408691d5 * t5125 + 0.2751527664184570d6 * t5123 + 0.1531857170104980d6 * t5121 + 0.3171546936035156d2) * t5118);
}

inline double Y_18_1 (double st, double ct)
{
  double t5127;
  double t5128;
  double t5129;
  double t5130;
  double t5132;
  t5127 = ct * ct;
  t5128 = t5127 * t5127;
  t5129 = t5127 * t5128;
  t5132 = t5129 * t5129;
  t5130 = t5128 * t5128;
  return(-0.2821844788956746e-3 * st * ct * (0.738168900d9 * t5132 - 0.78278200d8 * t5129 + 0.10958948d8 * t5128 + 0.12155d5 + (0.293543250d9 + 0.119409675d9 * t5130) * t5130 + (-0.463991880d9 * t5132 - 0.619109400d9 * t5130 - 0.680680d6) * t5127));
}

inline double Y_18_2 (double st, double ct)
{
  double t1;
  double t5135;
  double t5136;
  double t5137;
  double t5138;
  double t5140;
  t5135 = ct * ct;
  t5136 = t5135 * t5135;
  t5137 = t5136 * t5135;
  t5140 = t5137 * t5137;
  t5138 = t5136 * t5136;
  t1 = st * st;
  return(0.1300806174168349e-2 * (0.112896420d9 * t5140 - 0.6446440d7 * t5137 + 0.644644d6 * t5136 + 0.143d3 + (0.31081050d8 + 0.23881935d8 * t5138) * t5138 + (-0.81880920d8 * t5140 - 0.80120040d8 * t5138 - 0.24024d5) * t5135) * t1);
}

inline double Y_18_3 (double st, double ct)
{
  double t10;
  double t5143;
  double t5144;
  double t5145;
  double t5146;
  double t5148;
  t5143 = ct * ct;
  t5144 = t5143 * t5143;
  t5145 = t5144 * t5143;
  t5148 = t5145 * t5145;
  t5146 = t5144 * t5144;
  t10 = st * st;
  return(-0.2711642584172223d5 * t10 * st * (-0.3d1 * t5148 - 0.2096774193548387d1 * t5146 + 0.6507230255839822d0 * t5145 - 0.1012235817575083d0 * t5144 - 0.1257435798229917e-3 + (t5148 + 0.3545454545454545d1 * t5146 + 0.6748238783833890e-2) * t5143) * ct);
}

inline double Y_18_4 (double st, double ct)
{
  double t1;
  double t2;
  double t5152;
  double t5153;
  double t5154;
  double t5155;
  double t5157;
  t5152 = ct * ct;
  t5153 = t5152 * t5152;
  t5154 = t5153 * t5152;
  t5157 = t5154 * t5154;
  t5155 = t5153 * t5153;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1443836257265186e-1 * (-0.1950975d7 * t5155 + 0.470925d6 * t5154 - 0.52325d5 * t5153 - 0.13d2 - 0.4032015d7 * t5157 + (0.1550775d7 * t5157 + 0.2093d4 + 0.4032015d7 * t5155) * t5152) * t2);
}

inline double Y_18_5 (double st, double ct)
{
  double t1;
  double t2;
  double t5161;
  double t5162;
  double t5163;
  double t5164;
  t5161 = ct * ct;
  t5162 = t5161 * t5161;
  t5164 = t5162 * t5162;
  t5163 = t5162 * t5161;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.3701245048021059e-1 * (0.876525d6 * t5164 + 0.61425d5 * t5162 + 0.91d2 + (-0.339300d6 + 0.471975d6 * t5163) * t5163 + (-0.1051830d7 * t5164 - 0.4550d4) * t5161) * t2 * st * ct);
}

inline double Y_18_6 (double st, double ct)
{
  double t1;
  double t2;
  double t5170;
  double t5171;
  double t5172;
  double t5173;
  t5170 = ct * ct;
  t5171 = t5170 * t5170;
  t5173 = t5171 * t5171;
  t5172 = t5171 * t5170;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.2724042597650177e-1 * (0.606825d6 * t5173 + 0.23625d5 * t5171 + 0.7d1 + (-0.182700d6 + 0.471975d6 * t5172) * t5172 + (-0.890010d6 * t5173 - 0.1050d4) * t5170) * t2 * t1);
}

inline double Y_18_7 (double st, double ct)
{
  double t1;
  double t3;
  double t5179;
  double t5180;
  double t5182;
  t5179 = ct * ct;
  t5180 = t5179 * t5179;
  t5182 = t5180 * t5180;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.4718180181112010d0 * (-0.29667d5 * t5182 - 0.3654d4 * t5180 - 0.7d1 + (0.18879d5 * t5182 + 0.16182d5 * t5180 + 0.315d3) * t5179) * t3 * t1 * st * ct);
}

inline double Y_18_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5188;
  double t5189;
  double t5191;
  t5188 = ct * ct;
  t5189 = t5188 * t5188;
  t5191 = t5189 * t5189;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2789918427601547e-1 * (-0.267003d6 * t5191 - 0.18270d5 * t5189 - 0.7d1 + (0.207669d6 * t5191 + 0.113274d6 * t5189 + 0.945d3) * t5188) * t3);
}

inline double Y_18_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5196;
  double t5197;
  t5196 = ct * ct;
  t5197 = t5196 * t5196;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.1018734170931141e-1 * (-0.12180d5 * t5196 + 0.315d3 + (-0.356004d6 * t5196 + 0.113274d6 + 0.346115d6 * t5197) * t5197) * t3 * st * ct);
}

inline double Y_18_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5204;
  double t5205;
  t5204 = ct * ct;
  t5205 = t5204 * t5204;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.4042975902551046e-1 * (-0.580d3 * t5204 + 0.5d1 + (-0.39556d5 * t5204 + 0.8990d4 + 0.49445d5 * t5205) * t5205) * t3 * t1);
}

inline double Y_18_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5212;
  double t5213;
  t5212 = ct * ct;
  t5213 = t5212 * t5212;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.6158077429260824d0 * (-0.1023d4 * t5213 - 0.5d1 + (0.1705d4 * t5213 + 0.155d3) * t5212) * t4 * t1 * st * ct);
}

inline double Y_18_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5220;
  double t5221;
  t5220 = ct * ct;
  t5221 = t5220 * t5220;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.2124738572848199d0 * (-0.1023d4 * t5221 - 0.1d1 + (0.2387d4 * t5221 + 0.93d2) * t5220) * t3 * t2);
}

inline double Y_18_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5227;
  t5227 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2897757071509815d1 * (0.1d1 + (-0.22d2 + 0.77d2 * t5227) * t5227) * t4 * t2 * st * ct);
}

inline double Y_18_14 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5234;
  t5234 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.2290878112957608d0 * (0.1d1 + (-0.66d2 + 0.385d3 * t5234) * t5234) * t4 * t2 * t1);
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
  double t5261;
  t5261 = ct * ct;
  return((-0.3523941040039062d1 + (0.2220082855224609d3 + (-0.4084952453613281d4 + (0.3404127044677734d5 + (-0.1531857170104980d6 + (0.4038532539367676d6 + (-0.6420231216430664d6 + (0.6053360861206055d6 + (0.6741574058532715d5 * t5261 - 0.3115700443267822d6) * t5261) * t5261) * t5261) * t5261) * t5261) * t5261) * t5261) * t5261) * ct);
}

inline double Y_19_1 (double st, double ct)
{
  double t5271;
  double t5272;
  double t5273;
  double t5274;
  double t5276;
  double t5278;
  t5271 = ct * ct;
  t5272 = t5271 * t5271;
  t5274 = t5272 * t5272;
  t5278 = t5274 * t5274;
  t5273 = t5271 * t5272;
  t5276 = t5273 * t5273;
  return(-0.7436213947150394e-4 * st * (-0.3653936055d10 * t5278 - 0.5757717420d10 * t5276 - 0.951080130d9 * t5274 + 0.164384220d9 * t5273 - 0.14090076d8 * t5272 - 0.2431d4 + (0.883631595d9 * t5278 + 0.6263890380d10 * t5276 + 0.3064591530d10 * t5274 + 0.459459d6) * t5271));
}

inline double Y_19_2 (double st, double ct)
{
  double t13;
  double t5280;
  double t5281;
  double t5282;
  double t5283;
  double t5285;
  t5280 = ct * ct;
  t5281 = t5280 * t5280;
  t5282 = t5281 * t5280;
  t5285 = t5282 * t5282;
  t5283 = t5281 * t5281;
  t13 = st * st;
  return(0.4819217436936572e-3 * t13 * (0.695987820d9 * t5285 - 0.60386040d8 * t5282 + 0.7827820d7 * t5281 + 0.7293d4 + (0.243221550d9 + 0.126233085d9 * t5283) * t5283 + (-0.463991880d9 * t5285 - 0.548354040d9 * t5283 - 0.447304d6) * t5280) * ct);
}

inline double Y_19_3 (double st, double ct)
{
  double t1;
  double t5288;
  double t5289;
  double t5290;
  double t5291;
  double t5293;
  t5288 = ct * ct;
  t5289 = t5288 * t5288;
  t5290 = t5289 * t5288;
  t5293 = t5290 * t5290;
  t5291 = t5289 * t5289;
  t1 = st * st;
  return(-0.4659961482532095e-2 * (0.48384180d8 * t5293 - 0.2260440d7 * t5290 + 0.209300d6 * t5289 + 0.39d2 + (0.11705850d8 + 0.11475735d8 * t5291) * t5291 + (-0.37218600d8 * t5293 - 0.32256120d8 * t5291 - 0.7176d4) * t5288) * t1 * st);
}

inline double Y_19_4 (double st, double ct)
{
  double t11;
  double t12;
  double t5298;
  double t5299;
  double t5300;
  double t5301;
  double t5303;
  t5298 = ct * ct;
  t5299 = t5298 * t5298;
  t5300 = t5299 * t5298;
  t5303 = t5300 * t5300;
  t5301 = t5299 * t5299;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.8939356070140198e-1 * t12 * (-0.1415925d7 * t5303 - 0.876525d6 * t5301 + 0.254475d6 * t5300 - 0.36855d5 * t5299 - 0.39d2 + (0.498945d6 * t5303 + 0.1577745d7 * t5301 + 0.2275d4) * t5298) * ct);
}

inline double Y_19_5 (double st, double ct)
{
  double t1;
  double t2;
  double t5307;
  double t5308;
  double t5309;
  double t5310;
  double t5312;
  t5307 = ct * ct;
  t5308 = t5307 * t5307;
  t5309 = t5308 * t5307;
  t5312 = t5309 * t5309;
  t5310 = t5308 * t5308;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.1413436299844747e-1 * (-0.6135675d7 * t5312 - 0.2629575d7 * t5310 + 0.593775d6 * t5309 - 0.61425d5 * t5308 - 0.13d2 + (0.2494725d7 * t5312 + 0.5785065d7 * t5310 + 0.2275d4) * t5307) * t2 * st);
}

inline double Y_19_6 (double st, double ct)
{
  double t11;
  double t12;
  double t5317;
  double t5318;
  double t5319;
  double t5320;
  t5317 = ct * ct;
  t5318 = t5317 * t5317;
  t5320 = t5318 * t5318;
  t5319 = t5318 * t5317;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.3777567408606090e-1 * t12 * t11 * (0.1157013d7 * t5320 + 0.71253d5 * t5318 + 0.91d2 + (-0.420732d6 + 0.698523d6 * t5319) * t5319 + (-0.1472562d7 * t5320 - 0.4914d4) * t5317) * ct);
}

inline double Y_19_7 (double st, double ct)
{
  double t1;
  double t3;
  double t5326;
  double t5327;
  double t5328;
  double t5329;
  t5326 = ct * ct;
  t5327 = t5326 * t5326;
  t5329 = t5327 * t5327;
  t5328 = t5327 * t5326;
  t1 = st * st;
  t3 = t1 * t1;
  return(-0.2671143531014660e-1 * (0.801009d6 * t5329 + 0.27405d5 * t5327 + 0.7d1 + (-0.226548d6 + 0.698523d6 * t5328) * t5328 + (-0.1246014d7 * t5329 - 0.1134d4) * t5326) * t3 * t1 * st);
}

inline double Y_19_8 (double st, double ct)
{
  double t10;
  double t11;
  double t5336;
  double t5337;
  double t5339;
  double t9;
  t5336 = ct * ct;
  t5337 = t5336 * t5336;
  t5339 = t5337 * t5337;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.5342287062029320e-1 * t11 * (-0.346115d6 * t5339 - 0.37758d5 * t5337 - 0.63d2 + (0.232841d6 * t5339 + 0.178002d6 * t5337 + 0.3045d4) * t5336) * ct);
}

inline double Y_19_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5344;
  double t5345;
  double t5347;
  t5344 = ct * ct;
  t5345 = t5344 * t5344;
  t5347 = t5345 * t5345;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.2130835396206044e-1 * (-0.445005d6 * t5347 - 0.26970d5 * t5345 - 0.9d1 + (0.365893d6 * t5347 + 0.178002d6 * t5345 + 0.1305d4) * t5344) * t3 * st);
}

inline double Y_19_10 (double st, double ct)
{
  double t10;
  double t5353;
  double t5354;
  double t8;
  double t9;
  t5353 = ct * ct;
  t5354 = t5353 * t5353;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.7257363848836917e-1 * t10 * t8 * (-0.1860d4 * t5353 + 0.45d2 + (-0.61380d5 * t5353 + 0.18414d5 + 0.63085d5 * t5354) * t5354) * ct);
}

inline double Y_19_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5361;
  double t5362;
  t5361 = ct * ct;
  t5362 = t5361 * t5361;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1987510944015246d0 * (-0.124d3 * t5361 + 0.1d1 + (-0.9548d4 * t5361 + 0.2046d4 + 0.12617d5 * t5362) * t5362) * t4 * t1 * st);
}

inline double Y_19_12 (double st, double ct)
{
  double t5370;
  double t5371;
  double t7;
  double t8;
  double t9;
  t5370 = ct * ct;
  t5371 = t5370 * t5370;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.3129935364572139d1 * t9 * t8 * (-0.231d3 * t5371 - 0.1d1 + (0.407d3 * t5371 + 0.33d2) * t5370) * ct);
}

inline double Y_19_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5377;
  double t5378;
  t5377 = ct * ct;
  t5378 = t5377 * t5377;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.2091276031602917d0 * (-0.1155d4 * t5378 - 0.1d1 + (0.2849d4 * t5378 + 0.99d2) * t5377) * t4 * t2 * st);
}

inline double Y_19_14 (double st, double ct)
{
  double t5385;
  double t6;
  double t7;
  double t9;
  t5385 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t9 = t7 * t7;
  return(0.9808954056771320d0 * t9 * t7 * t6 * (0.3d1 + (-0.70d2 + 0.259d3 * t5385) * t5385) * ct);
}

inline double Y_19_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t5392;
  t5392 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.7523124338755984e-1 * (0.3d1 + (-0.210d3 + 0.1295d4 * t5392) * t5392) * t5 * t3 * t1 * st);
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
  double t5420;
  double t5421;
  double t5422;
  double t5423;
  double t5424;
  double t5425;
  double t5427;
  t5420 = ct * ct;
  t5421 = t5420 * t5420;
  t5423 = t5421 * t5421;
  t5427 = t5423 * t5423;
  t5422 = t5420 * t5421;
  t5425 = t5422 * t5422;
  t5424 = t5420 * t5423;
  return(0.1324172688388824d7 * t5427 + 0.1043287572669983d7 * t5425 + 0.1148892877578735d6 * t5423 - 0.1702063522338867d5 * t5422 + 0.1276547641754150d4 * t5421 + 0.1761970520019531d0 + (-0.4442385793304443d6 + 0.1314606941413879d6 * t5424) * t5424 + (-0.6404495355606079d6 * t5427 - 0.1513340215301514d7 * t5425 - 0.3700138092041016d2) * t5420);
}

inline double Y_20_1 (double st, double ct)
{
  double t1;
  double t5430;
  double t5431;
  double t5432;
  double t5433;
  double t5437;
  double t5439;
  t5430 = ct * ct;
  t5431 = t5430 * t5430;
  t5432 = t5431 * t5430;
  t1 = t5432 * t5432;
  t5439 = 0.8058212058212058d1 * t1;
  t5433 = t5431 * t5431;
  t5437 = t5433 * t5433;
  return(-0.1282925010024453d6 * ct * (-0.4384615384615385d1 * t5437 - 0.1689625108979948d1 * t5433 + 0.3495776087544719d0 * t5432 - 0.3884195652827466e-1 * t5431 - 0.2814634531034396e-4 - t5439 + (t5437 + 0.4761670761670762d1 * t5433 + 0.1942097826413733e-2 + t5439) * t5430) * st);
}

inline double Y_20_2 (double st, double ct)
{
  double t1;
  double t5440;
  double t5441;
  double t5442;
  double t5443;
  double t5445;
  double t5447;
  t5440 = ct * ct;
  t5441 = t5440 * t5440;
  t5443 = t5441 * t5441;
  t5447 = t5443 * t5443;
  t5442 = t5441 * t5440;
  t5445 = t5442 * t5442;
  t1 = st * st;
  return(0.7991768010728420e-3 * (-0.585262485d9 * t5447 - 0.822531060d9 * t5445 - 0.119399670d9 * t5443 + 0.19213740d8 * t5442 - 0.1524900d7 * t5441 - 0.221d3 + (0.149184555d9 * t5447 + 0.949074300d9 * t5445 + 0.411265530d9 * t5443 + 0.45747d5) * t5440) * t1);
}

inline double Y_20_3 (double st, double ct)
{
  double t1;
  double t5449;
  double t5450;
  double t5451;
  double t5452;
  double t5454;
  t5449 = ct * ct;
  t5450 = t5449 * t5449;
  t5451 = t5450 * t5449;
  t5454 = t5451 * t5451;
  t5452 = t5450 * t5450;
  t1 = st * st;
  return(-0.5420280779734475e-2 * (0.96282900d8 * t5454 - 0.6921720d7 * t5451 + 0.835380d6 * t5450 + 0.663d3 + (0.29801850d8 + 0.19458855d8 * t5452) * t5452 + (-0.67856520d8 * t5454 - 0.71524440d8 * t5452 - 0.44200d5) * t5449) * t1 * st * ct);
}

inline double Y_20_4 (double st, double ct)
{
  double t1;
  double t2;
  double t5459;
  double t5460;
  double t5461;
  double t5462;
  double t5464;
  t5459 = ct * ct;
  t5460 = t5459 * t5459;
  t5461 = t5460 * t5459;
  t5464 = t5461 * t5461;
  t5462 = t5460 * t5460;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1368553812555935e-1 * (0.24542700d8 * t5464 - 0.950040d6 * t5461 + 0.81900d5 * t5460 + 0.13d2 + (0.5259150d7 + 0.6486285d7 * t5462) * t5462 + (-0.19957800d8 * t5464 - 0.15426840d8 * t5462 - 0.2600d4) * t5459) * t2);
}

inline double Y_20_5 (double st, double ct)
{
  double t1;
  double t2;
  double t5469;
  double t5470;
  double t5471;
  double t5472;
  double t5474;
  t5469 = ct * ct;
  t5470 = t5469 * t5469;
  t5471 = t5470 * t5469;
  t5474 = t5471 * t5471;
  t5472 = t5470 * t5470;
  t1 = st * st;
  t2 = t1 * t1;
  return(-0.5474215250223738e-1 * (-0.3492615d7 * t5474 - 0.1928355d7 * t5472 + 0.525915d6 * t5471 - 0.71253d5 * t5470 - 0.65d2 + (0.1297257d7 * t5474 + 0.3681405d7 * t5472 + 0.4095d4) * t5469) * ct * t2 * st);
}

inline double Y_20_6 (double st, double ct)
{
  double t1;
  double t2;
  double t5479;
  double t5480;
  double t5481;
  double t5482;
  double t5484;
  t5479 = ct * ct;
  t5480 = t5479 * t5479;
  t5481 = t5480 * t5479;
  t5484 = t5481 * t5481;
  t5482 = t5480 * t5480;
  t1 = st * st;
  t2 = t1 * t1;
  return(0.1801784818532187d0 * (-0.698523d6 * t5484 - 0.267003d6 * t5482 + 0.56637d5 * t5481 - 0.5481d4 * t5480 - 0.1d1 + (0.299367d6 * t5484 + 0.623007d6 * t5482 + 0.189d3) * t5479) * t2 * t1);
}

inline double Y_20_7 (double st, double ct)
{
  double t10;
  double t12;
  double t5489;
  double t5490;
  double t5491;
  double t5492;
  t5489 = ct * ct;
  t5490 = t5489 * t5489;
  t5492 = t5490 * t5490;
  t5491 = t5490 * t5489;
  t10 = st * st;
  t12 = t10 * t10;
  return(-0.3884087314602047d5 * t12 * t10 * st * (0.1486486486486486d1 * t5492 + 0.8108108108108108e-1 * t5490 + 0.9019030153624147e-4 + (-0.5096525096525097d0 + t5491) * t5491 + (-0.2d1 * t5492 - 0.5231037489102005e-2) * t5489) * ct);
}

inline double Y_20_8 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5499;
  double t5500;
  double t5501;
  double t5502;
  t5499 = ct * ct;
  t5500 = t5499 * t5499;
  t5502 = t5500 * t5500;
  t5501 = t5499 * t5500;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.6120358711483149e-1 * (0.445005d6 * t5502 + 0.13485d5 * t5500 + 0.3d1 + (-0.118668d6 + 0.432419d6 * t5501) * t5501 + (-0.731786d6 * t5502 - 0.522d3) * t5499) * t3);
}

inline double Y_20_9 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5508;
  double t5509;
  double t5511;
  t5508 = ct * ct;
  t5509 = t5508 * t5508;
  t5511 = t5509 * t5509;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(-0.3805793709525172d0 * (-0.63085d5 * t5511 - 0.6138d4 * t5509 - 0.9d1 + (0.44733d5 * t5511 + 0.30690d5 * t5509 + 0.465d3) * t5508) * t3 * st * ct);
}

inline double Y_20_10 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5517;
  double t5518;
  double t5520;
  t5517 = ct * ct;
  t5518 = t5517 * t5517;
  t5520 = t5518 * t5518;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.6285061457599578e-1 * (-0.189255d6 * t5520 - 0.10230d5 * t5518 - 0.3d1 + (0.164021d6 * t5520 + 0.71610d5 * t5518 + 0.465d3) * t5517) * t3 * t1);
}

inline double Y_20_11 (double st, double ct)
{
  double t1;
  double t3;
  double t4;
  double t5526;
  double t5527;
  t5526 = ct * ct;
  t5527 = t5526 * t5526;
  t1 = st * st;
  t3 = t1 * t1;
  t4 = t3 * t3;
  return(-0.1106599260482274d1 * (-0.132d3 * t5526 + 0.3d1 + (-0.4884d4 * t5526 + 0.1386d4 + 0.5291d4 * t5527) * t5527) * t4 * t1 * st * ct);
}

inline double Y_20_12 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t5535;
  double t5536;
  t5535 = ct * ct;
  t5536 = t5535 * t5535;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  return(0.1956209602857587d0 * (-0.132d3 * t5535 + 0.1d1 + (-0.11396d5 * t5535 + 0.2310d4 + 0.15873d5 * t5536) * t5536) * t3 * t2);
}

inline double Y_20_13 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5543;
  double t5544;
  t5543 = ct * ct;
  t5544 = t5543 * t5543;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(-0.3178464388226539d1 * (-0.259d3 * t5544 - 0.1d1 + (0.481d3 * t5544 + 0.35d2) * t5543) * t4 * t2 * st * ct);
}

inline double Y_20_14 (double st, double ct)
{
  double t1;
  double t2;
  double t4;
  double t5551;
  double t5552;
  t5551 = ct * ct;
  t5552 = t5551 * t5551;
  t1 = st * st;
  t2 = t1 * t1;
  t4 = t2 * t2;
  return(0.2060292451626395d0 * (-0.1295d4 * t5552 - 0.1d1 + (0.3367d4 * t5552 + 0.105d3) * t5551) * t4 * t2 * t1);
}

inline double Y_20_15 (double st, double ct)
{
  double t1;
  double t3;
  double t5;
  double t5559;
  t5559 = ct * ct;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  return(-0.1990431608256557d0 * (0.15d2 + (-0.370d3 + 0.1443d4 * t5559) * t5559) * t5 * t3 * t1 * st * ct);
}

inline double Y_20_16 (double st, double ct)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t5567;
  t5567 = ct * ct;
  t1 = st * st;
  t2 = t1 * t1;
  t3 = t2 * t2;
  t4 = t3 * t3;
  return(0.2225370190312947d0 * (0.1d1 + (-0.74d2 + 0.481d3 * t5567) * t5567) * t4);
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
  double t5594;
  t5594 = ct * ct;
  return((0.3700138092041016d1 + (-0.2836772537231445d3 + (0.6382738208770752d4 + (-0.6565102157592773d5 + (0.3701988161087036d6 + (-0.1251945087203979d7 + (0.2648345376777649d7 + (-0.3531127169036865d7 + (0.2882022910022736d7 + (0.2566613552284241d6 * t5594 - 0.1314606941413879d7) * t5594) * t5594) * t5594) * t5594) * t5594) * t5594) * t5594) * t5594) * t5594) * ct);
}

inline double Y_21_1 (double st, double ct)
{
  double t5605;
  double t5606;
  double t5607;
  double t5608;
  double t5609;
  double t5610;
  double t5612;
  t5605 = ct * ct;
  t5606 = t5605 * t5605;
  t5608 = t5606 * t5606;
  t5612 = t5608 * t5608;
  t5607 = t5605 * t5606;
  t5610 = t5607 * t5607;
  t5609 = t5605 * t5608;
  return(-0.4099690486946999e-4 * (0.55599936075d11 * t5612 + 0.39070225350d11 * t5610 + 0.3780989550d10 * t5608 - 0.521515800d9 * t5607 + 0.36216375d8 * t5606 + 0.4199d4 + (-0.15628090140d11 + 0.6116566755d10 * t5609) * t5609 + (-0.28345065450d11 * t5612 - 0.60108039000d11 * t5610 - 0.965770d6) * t5605) * st);
}

inline double Y_21_2 (double st, double ct)
{
  double t13;
  double t5615;
  double t5616;
  double t5617;
  double t5618;
  double t5620;
  double t5622;
  t5615 = ct * ct;
  t5616 = t5615 * t5615;
  t5618 = t5616 * t5616;
  t5622 = t5618 * t5618;
  t5617 = t5616 * t5615;
  t5620 = t5617 * t5617;
  t13 = st * st;
  return(0.8792856510162842e-3 * t13 * (-0.1109154735d10 * t5622 - 0.1829375100d10 * t5620 - 0.339741090d9 * t5618 + 0.65756340d8 * t5617 - 0.6802380d7 * t5616 - 0.4199d4 + (0.265937685d9 * t5622 + 0.1933910820d10 * t5620 + 0.1019223270d10 * t5618 + 0.314925d6) * t5615) * ct);
}

inline double Y_21_3 (double st, double ct)
{
  double t12;
  double t5624;
  double t5625;
  double t5626;
  double t5627;
  double t5629;
  double t5631;
  t5624 = ct * ct;
  t5625 = t5624 * t5624;
  t5627 = t5625 * t5625;
  t5631 = t5627 * t5627;
  t5626 = t5625 * t5624;
  t5629 = t5626 * t5626;
  t12 = st * st;
  return(-0.7823501418157635e-3 * t12 * st * (-0.992401605d9 * t5631 - 0.1251677700d10 * t5629 - 0.160929990d9 * t5627 + 0.24226020d8 * t5626 - 0.1790100d7 * t5625 - 0.221d3 + (0.265937685d9 * t5631 + 0.1526771700d10 * t5629 + 0.590076630d9 * t5627 + 0.49725d5) * t5624));
}

inline double Y_21_4 (double st, double ct)
{
  double t13;
  double t14;
  double t5635;
  double t5636;
  double t5637;
  double t5638;
  double t5640;
  t5635 = ct * ct;
  t5636 = t5635 * t5635;
  t5637 = t5636 * t5635;
  t5640 = t5637 * t5637;
  t5638 = t5636 * t5636;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.3319230543241101e-2 * t14 * (0.237497820d9 * t5640 - 0.14304888d8 * t5637 + 0.1615068d7 * t5636 + 0.1105d4 + (0.65564070d8 + 0.53187537d8 * t5638) * t5638 + (-0.176426952d9 * t5640 - 0.166890360d9 * t5638 - 0.79560d5) * t5635) * ct);
}

inline double Y_21_5 (double st, double ct)
{
  double t12;
  double t13;
  double t5645;
  double t5646;
  double t5647;
  double t5648;
  double t5650;
  t5645 = ct * ct;
  t5646 = t5645 * t5645;
  t5647 = t5646 * t5645;
  t5650 = t5647 * t5647;
  t5648 = t5646 * t5646;
  t12 = st * st;
  t13 = t12 * t12;
  return(-0.3489141297812256e-1 * t13 * st * (0.13970460d8 * t5650 - 0.453096d6 * t5647 + 0.36540d5 * t5646 + 0.5d1 + (0.2670030d7 + 0.4091349d7 * t5648) * t5648 + (-0.11974680d8 * t5650 - 0.8306760d7 * t5648 - 0.1080d4) * t5645));
}

inline double Y_21_6 (double st, double ct)
{
  double t11;
  double t12;
  double t5656;
  double t5657;
  double t5658;
  double t5659;
  double t5661;
  t5656 = ct * ct;
  t5657 = t5656 * t5656;
  t5658 = t5657 * t5656;
  t5661 = t5658 * t5658;
  t5659 = t5657 * t5657;
  t11 = st * st;
  t12 = t11 * t11;
  return(0.8057826670130188e-1 * t12 * t11 * (-0.1730575d7 * t5659 + 0.445005d6 * t5658 - 0.56637d5 * t5657 - 0.45d2 - 0.3492615d7 * t5661 + (0.1363783d7 * t5661 + 0.3045d4 + 0.3492615d7 * t5659) * t5656) * ct);
}

inline double Y_21_7 (double st, double ct)
{
  double t10;
  double t12;
  double t5666;
  double t5667;
  double t5668;
  double t5669;
  double t5671;
  t5666 = ct * ct;
  t5667 = t5666 * t5666;
  t5668 = t5667 * t5666;
  t5671 = t5668 * t5668;
  t5669 = t5667 * t5667;
  t10 = st * st;
  t12 = t10 * t10;
  return(-0.5897725226390013e-1 * t12 * t10 * st * (-0.3026933d7 * t5671 - 0.1038345d7 * t5669 + 0.207669d6 * t5668 - 0.18879d5 * t5667 - 0.3d1 + (0.1363783d7 * t5671 + 0.2561251d7 * t5669 + 0.609d3) * t5666));
}

inline double Y_21_8 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t5677;
  double t5678;
  double t5679;
  double t5680;
  t5677 = ct * ct;
  t5678 = t5677 * t5677;
  t5680 = t5678 * t5678;
  t5679 = t5677 * t5678;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1188358704915096d1 * t13 * (0.63085d5 * t5680 + 0.3069d4 * t5678 + 0.3d1 + (-0.20460d5 + 0.47027d5 * t5679) * t5679 + (-0.89466d5 * t5680 - 0.186d3) * t5677) * ct);
}

inline double Y_21_9 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t5686;
  double t5687;
  double t5688;
  double t5689;
  t5686 = ct * ct;
  t5687 = t5686 * t5686;
  t5689 = t5687 * t5687;
  t5688 = t5686 * t5687;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.6017488213420399e-1 * t12 * st * (0.567765d6 * t5689 + 0.15345d5 * t5687 + 0.3d1 + (-0.143220d6 + 0.611351d6 * t5688) * t5688 + (-0.984126d6 * t5689 - 0.558d3) * t5686));
}

inline double Y_21_10 (double st, double ct)
{
  double t10;
  double t11;
  double t5696;
  double t5697;
  double t5699;
  double t9;
  t5696 = ct * ct;
  t5697 = t5696 * t5696;
  t5699 = t5697 * t5697;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1160611095772356d1 * t11 * t9 * (-0.26455d5 * t5699 - 0.2310d4 * t5697 - 0.3d1 + (0.19721d5 * t5699 + 0.12210d5 * t5697 + 0.165d3) * t5696) * ct);
}

inline double Y_21_11 (double st, double ct)
{
  double t10;
  double t11;
  double t5705;
  double t5706;
  double t5708;
  double t8;
  t5705 = ct * ct;
  t5706 = t5705 * t5705;
  t5708 = t5706 * t5706;
  t8 = st * st;
  t10 = t8 * t8;
  t11 = t10 * t10;
  return(-0.6186077925723404e-1 * t11 * t8 * st * (-0.238095d6 * t5708 - 0.11550d5 * t5706 - 0.3d1 + (0.216931d6 * t5708 + 0.85470d5 * t5706 + 0.495d3) * t5705));
}

inline double Y_21_12 (double st, double ct)
{
  double t10;
  double t5715;
  double t5716;
  double t8;
  double t9;
  t5715 = ct * ct;
  t5716 = t5715 * t5715;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.3745856204458228d0 * t10 * t9 * (-0.420d3 * t5715 + 0.9d1 + (-0.17316d5 * t5715 + 0.4662d4 + 0.19721d5 * t5716) * t5716) * ct);
}

inline double Y_21_13 (double st, double ct)
{
  double t10;
  double t5723;
  double t5724;
  double t7;
  double t8;
  t5723 = ct * ct;
  t5724 = t5723 * t5723;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.1927227117635623d0 * t10 * t8 * st * (-0.140d3 * t5723 + 0.1d1 + (-0.13468d5 * t5723 + 0.2590d4 + 0.19721d5 * t5724) * t5724));
}

inline double Y_21_14 (double st, double ct)
{
  double t10;
  double t5732;
  double t5733;
  double t7;
  double t8;
  t5732 = ct * ct;
  t5733 = t5732 * t5732;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(0.9213907950732632e-1 * t10 * t8 * t7 * (-0.10101d5 * t5733 - 0.35d2 + (0.19721d5 * t5733 + 0.1295d4) * t5732) * ct);
}

inline double Y_21_15 (double st, double ct)
{
  double t10;
  double t5740;
  double t5741;
  double t6;
  double t8;
  t5740 = ct * ct;
  t5741 = t5740 * t5740;
  t6 = st * st;
  t8 = t6 * t6;
  t10 = t8 * t8;
  return(-0.4062951506779886e-1 * t10 * t8 * t6 * st * (-0.7215d4 * t5741 - 0.5d1 + (0.19721d5 * t5741 + 0.555d3) * t5740));
}

inline double Y_21_16 (double st, double ct)
{
  double t5749;
  double t6;
  double t7;
  double t8;
  double t9;
  t5749 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.6053661402912106d0 * t9 * (0.5d1 + (-0.130d3 + 0.533d3 * t5749) * t5749) * ct);
}

inline double Y_21_17 (double st, double ct)
{
  double t5;
  double t5755;
  double t6;
  double t7;
  double t8;
  t5755 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(-0.2195893787010194d0 * t8 * st * (0.1d1 + (-0.78d2 + 0.533d3 * t5755) * t5755));
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
  double t5784;
  double t5785;
  double t5786;
  double t5787;
  double t5788;
  double t5789;
  double t5791;
  double t5793;
  t5784 = ct * ct;
  t5785 = t5784 * t5784;
  t5787 = t5785 * t5785;
  t5788 = t5784 * t5787;
  t5793 = t5788 * t5788;
  t5791 = t5787 * t5787;
  t5786 = t5784 * t5785;
  t5789 = t5786 * t5786;
  return(-0.2694944229898453d7 * t5793 - 0.8165731578397751d7 * t5791 - 0.3442848989810944d7 * t5789 + 0.1147616329936981d7 * t5788 - 0.2379849532127380d6 * t5787 + 0.2872232193946838d5 * t5786 - 0.1772982835769653d4 * t5785 - 0.1681880950927734d0 + (0.5016562852191925d6 * t5793 + 0.6244382971715927d7 * t5791 + 0.6620863441944122d7 * t5789 + 0.4255158805847168d2) * t5784);
}

inline double Y_22_1 (double st, double ct)
{
  double t5795;
  double t5796;
  double t5797;
  double t5798;
  double t5799;
  double t5800;
  double t5802;
  t5795 = ct * ct;
  t5796 = t5795 * t5795;
  t5798 = t5796 * t5796;
  t5802 = t5798 * t5798;
  t5797 = t5795 * t5796;
  t5800 = t5797 * t5797;
  t5799 = t5795 * t5798;
  return(-0.4290474654846952e-4 * ct * (0.116461247175d12 * t5802 + 0.96042192750d11 * t5800 + 0.11890938150d11 * t5798 - 0.1972690200d10 * t5797 + 0.178562475d9 * t5796 + 0.88179d5 + (-0.42807377340d11 + 0.11435320455d11 * t5799) * t5799 + (-0.55846913850d11 * t5802 - 0.135373757400d12 * t5800 - 0.7348250d7) * t5795) * st);
}

inline double Y_22_2 (double st, double ct)
{
  double t14;
  double t5805;
  double t5806;
  double t5807;
  double t5808;
  double t5809;
  double t5810;
  double t5812;
  t5805 = ct * ct;
  t5806 = t5805 * t5805;
  t5808 = t5806 * t5806;
  t5812 = t5808 * t5808;
  t5807 = t5806 * t5805;
  t5810 = t5807 * t5807;
  t5809 = t5805 * t5808;
  t14 = st * st;
  return(0.4013371546268619e-4 * t14 * (0.94278152475d11 * t5812 + 0.59454690750d11 * t5810 + 0.5096116350d10 * t5808 - 0.657563400d9 * t5807 + 0.42514875d8 * t5806 + 0.4199d4 + (-0.22422911940d11 + 0.11435320455d11 * t5809) * t5809 + (-0.50528160150d11 * t5812 - 0.96695541000d11 * t5810 - 0.1049750d7) * t5805));
}

inline double Y_22_3 (double st, double ct)
{
  double t13;
  double t5815;
  double t5816;
  double t5817;
  double t5818;
  double t5820;
  double t5822;
  t5815 = ct * ct;
  t5816 = t5815 * t5815;
  t5818 = t5816 * t5816;
  t5822 = t5818 * t5818;
  t5817 = t5816 * t5815;
  t5820 = t5817 * t5817;
  t13 = st * st;
  return(-0.1794834319284015e-3 * t13 * st * ct * (-0.9095068827d10 * t5822 - 0.13537375740d11 * t5820 - 0.2242291194d10 * t5818 + 0.407689308d9 * t5817 - 0.39453804d8 * t5816 - 0.20995d5 + (0.2287064091d10 * t5822 + 0.15084504396d11 * t5820 + 0.7134562890d10 * t5818 + 0.1700595d7) * t5815));
}

inline double Y_22_4 (double st, double ct)
{
  double t12;
  double t13;
  double t5826;
  double t5827;
  double t5828;
  double t5829;
  double t5831;
  double t5833;
  t5826 = ct * ct;
  t5827 = t5826 * t5826;
  t5829 = t5827 * t5827;
  t5833 = t5829 * t5829;
  t5828 = t5827 * t5826;
  t5831 = t5828 * t5828;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.1994609319790330e-2 * t13 * (-0.625976397d9 * t5833 - 0.712493460d9 * t5831 - 0.81702918d8 * t5829 + 0.11553948d8 * t5828 - 0.798660d6 * t5827 - 0.85d2 + (0.175928007d9 * t5833 + 0.916063020d9 * t5831 + 0.317733570d9 * t5829 + 0.20655d5) * t5826));
}

inline double Y_22_5 (double st, double ct)
{
  double t13;
  double t14;
  double t5837;
  double t5838;
  double t5839;
  double t5840;
  double t5842;
  t5837 = ct * ct;
  t5838 = t5837 * t5837;
  t5839 = t5838 * t5837;
  t5842 = t5839 * t5839;
  t5840 = t5838 * t5838;
  t13 = st * st;
  t14 = t13 * t13;
  return(-0.4885775069686146e-2 * t14 * st * ct * (0.237497820d9 * t5842 - 0.12104136d8 * t5839 + 0.1283772d7 * t5838 + 0.765d3 + (0.58839550d8 + 0.58642669d8 * t5840) * t5840 + (-0.185474488d9 * t5842 - 0.158331880d9 * t5840 - 0.59160d5) * t5837));
}

inline double Y_22_6 (double st, double ct)
{
  double t12;
  double t13;
  double t5848;
  double t5849;
  double t5850;
  double t5851;
  double t5853;
  t5848 = ct * ct;
  t5849 = t5848 * t5848;
  t5850 = t5849 * t5848;
  t5853 = t5850 * t5850;
  t5851 = t5849 * t5849;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.3806965263719316e-2 * t13 * t12 * (0.181615980d9 * t5853 - 0.4984056d7 * t5850 + 0.377580d6 * t5849 + 0.45d2 + (0.31150350d8 + 0.58642669d8 * t5851) * t5851 + (-0.163653960d9 * t5853 - 0.102450040d9 * t5851 - 0.10440d5) * t5848));
}

inline double Y_22_7 (double st, double ct)
{
  double t11;
  double t13;
  double t5859;
  double t5860;
  double t5861;
  double t5862;
  double t5864;
  t5859 = ct * ct;
  t5860 = t5859 * t5859;
  t5861 = t5860 * t5859;
  t5864 = t5861 * t5861;
  t5862 = t5860 * t5860;
  t11 = st * st;
  t13 = t11 * t11;
  return(-0.8200454144065914e-1 * t13 * t11 * st * ct * (-0.4937835d7 * t5864 - 0.2207975d7 * t5862 + 0.537075d6 * t5861 - 0.64449d5 * t5860 - 0.45d2 + (0.2022161d7 * t5864 + 0.4696965d7 * t5862 + 0.3255d4) * t5859));
}

inline double Y_22_8 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t5870;
  double t5871;
  double t5872;
  double t5873;
  double t5875;
  t5870 = ct * ct;
  t5871 = t5870 * t5870;
  t5872 = t5870 * t5871;
  t5875 = t5872 * t5872;
  t5873 = t5871 * t5871;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5798596734078333e-1 * t12 * (-0.4279457d7 * t5875 - 0.1324785d7 * t5873 + 0.250635d6 * t5872 - 0.21483d5 * t5871 - 0.3d1 + (0.2022161d7 * t5875 + 0.3444441d7 * t5873 + 0.651d3) * t5870));
}

inline double Y_22_9 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t5880;
  double t5881;
  double t5882;
  double t5883;
  t5880 = ct * ct;
  t5881 = t5880 * t5880;
  t5883 = t5881 * t5881;
  t5882 = t5880 * t5881;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.1208002328336222d1 * t13 * st * ct * (0.79365d5 * t5883 + 0.3465d4 * t5881 + 0.3d1 + (-0.24420d5 + 0.65231d5 * t5882) * t5882 + (-0.118326d6 * t5883 - 0.198d3) * t5880));
}

inline double Y_22_10 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t5890;
  double t5891;
  double t5892;
  double t5893;
  t5890 = ct * ct;
  t5891 = t5890 * t5890;
  t5893 = t5891 * t5891;
  t5892 = t5890 * t5891;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5922718696780686e-1 * t12 * t10 * (0.714285d6 * t5893 + 0.17325d5 * t5891 + 0.3d1 + (-0.170940d6 + 0.848003d6 * t5892) * t5892 + (-0.1301586d7 * t5893 - 0.594d3) * t5890));
}

inline double Y_22_11 (double st, double ct)
{
  double t11;
  double t12;
  double t5900;
  double t5901;
  double t5903;
  double t9;
  t5900 = ct * ct;
  t5901 = t5900 * t5900;
  t5903 = t5901 * t5901;
  t9 = st * st;
  t11 = t9 * t9;
  t12 = t11 * t11;
  return(-0.3571533755644409e-1 * t12 * t9 * st * ct * (-0.1084655d7 * t5903 - 0.85470d5 * t5901 - 0.99d2 + (0.848003d6 * t5903 + 0.476190d6 * t5901 + 0.5775d4) * t5900));
}

inline double Y_22_12 (double st, double ct)
{
  double t10;
  double t5910;
  double t5911;
  double t5913;
  double t8;
  double t9;
  t5910 = ct * ct;
  t5911 = t5910 * t5910;
  t5913 = t5911 * t5911;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.2031475753389943e-1 * t10 * t9 * (-0.887445d6 * t5913 - 0.38850d5 * t5911 - 0.9d1 + (0.848003d6 * t5913 + 0.303030d6 * t5911 + 0.1575d4) * t5910));
}

inline double Y_22_13 (double st, double ct)
{
  double t11;
  double t5919;
  double t5920;
  double t8;
  double t9;
  t5919 = ct * ct;
  t5920 = t5919 * t5919;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(-0.1085869465531948e-1 * t11 * t9 * st * ct * (-0.15540d5 * t5919 + 0.315d3 + (-0.709956d6 * t5919 + 0.181818d6 + 0.848003d6 * t5920) * t5920));
}

inline double Y_22_14 (double st, double ct)
{
  double t10;
  double t5928;
  double t5929;
  double t7;
  double t8;
  t5928 = ct * ct;
  t5929 = t5928 * t5928;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(0.5429347327659740e-2 * t10 * t8 * t7 * (-0.5180d4 * t5928 + 0.35d2 + (-0.552188d6 * t5928 + 0.101010d6 + 0.848003d6 * t5929) * t5929));
}

inline double Y_22_15 (double st, double ct)
{
  double t11;
  double t5937;
  double t5938;
  double t7;
  double t9;
  t5937 = ct * ct;
  t5938 = t5937 * t5937;
  t7 = st * st;
  t9 = t7 * t7;
  t11 = t9 * t9;
  return(-0.9341002340055552e-1 * t11 * t9 * t7 * st * ct * (-0.11193d5 * t5938 - 0.35d2 + (0.22919d5 * t5938 + 0.1365d4) * t5937));
}

inline double Y_22_16 (double st, double ct)
{
  double t5946;
  double t5947;
  double t6;
  double t7;
  double t8;
  double t9;
  t5946 = ct * ct;
  t5947 = t5946 * t5946;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.4009135203436427e-1 * t9 * (-0.7995d4 * t5947 - 0.5d1 + (0.22919d5 * t5947 + 0.585d3) * t5946));
}

inline double Y_22_17 (double st, double ct)
{
  double t5953;
  double t6;
  double t7;
  double t8;
  double t9;
  t5953 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.2044265863495411d0 * t9 * st * ct * (0.15d2 + (-0.410d3 + 0.1763d4 * t5953) * t5953));
}

inline double Y_22_18 (double st, double ct)
{
  double t5;
  double t5960;
  double t6;
  double t7;
  double t8;
  t5960 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.7227571273128896e-1 * t8 * t5 * (0.3d1 + (-0.246d3 + 0.1763d4 * t5960) * t5960));
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
  double t5990;
  t5990 = ct * ct;
  return((-0.3868326187133789d1 + (0.3545965671539307d3 + (-0.9574107313156128d4 + (0.1189924766063690d6 + (-0.8197259499549866d6 + (0.3442848989810944d7 + (-0.9269208818721771d7 + (0.1633146315679550d8 + (-0.1873314891514778d8 + (0.1347472114949226d8 + (0.9815014276027679d6 * t5990 - 0.5518219137411118d7) * t5990) * t5990) * t5990) * t5990) * t5990) * t5990) * t5990) * t5990) * t5990) * t5990) * ct);
}

inline double Y_23_1 (double st, double ct)
{
  double t6002;
  double t6003;
  double t6004;
  double t6005;
  double t6006;
  double t6007;
  double t6009;
  double t6011;
  t6002 = ct * ct;
  t6003 = t6002 * t6002;
  t6005 = t6003 * t6003;
  t6006 = t6002 * t6005;
  t6011 = t6006 * t6006;
  t6009 = t6005 * t6005;
  t6004 = t6002 * t6003;
  t6007 = t6004 * t6004;
  return(-0.5601568281398168e-5 * (-0.880519675035d12 * t6011 - 0.2419805913525d13 * t6009 - 0.915602237550d12 * t6007 + 0.287760703230d12 * t6006 - 0.56057279850d11 * t6005 + 0.6329047725d10 * t6004 - 0.363738375d9 * t6003 - 0.29393d5 + (0.171529806825d12 * t6011 + 0.1945334165775d13 * t6009 + 0.1861389164250d13 * t6007 + 0.8083075d7) * t6002) * st);
}

inline double Y_23_2 (double st, double ct)
{
  double t15;
  double t6013;
  double t6014;
  double t6015;
  double t6016;
  double t6017;
  double t6018;
  double t6020;
  t6013 = ct * ct;
  t6014 = t6013 * t6013;
  t6016 = t6014 * t6014;
  t6020 = t6016 * t6016;
  t6015 = t6014 * t6013;
  t6018 = t6015 * t6015;
  t6017 = t6013 * t6016;
  t15 = st * st;
  return(0.1313684207339850e-3 * t15 * (0.63665481789d11 * t6020 + 0.47380815090d11 * t6018 + 0.5232012786d10 * t6016 - 0.815378616d9 * t6015 + 0.69044157d8 * t6014 + 0.29393d5 + (-0.19976776092d11 + 0.6861192273d10 * t6017) * t6017 + (-0.32018897274d11 * t6020 - 0.70394353848d11 * t6018 - 0.2645370d7) * t6013) * ct);
}

inline double Y_23_3 (double st, double ct)
{
  double t14;
  double t6023;
  double t6024;
  double t6025;
  double t6026;
  double t6027;
  double t6028;
  double t6030;
  t6023 = ct * ct;
  t6024 = t6023 * t6023;
  t6026 = t6024 * t6024;
  t6030 = t6026 * t6026;
  t6025 = t6024 * t6023;
  t6028 = t6025 * t6025;
  t6027 = t6023 * t6026;
  t14 = st * st;
  return(-0.5116064957430432e-3 * t14 * st * (0.11893551543d11 * t6030 + 0.6768687870d10 * t6028 + 0.517451814d9 * t6026 - 0.62721432d8 * t6025 + 0.3793635d7 * t6024 + 0.323d3 + (-0.2414775132d10 + 0.1583352063d10 * t6027) * t6027 + (-0.6685264266d10 * t6030 - 0.11603464920d11 * t6028 - 0.87210d5) * t6023));
}

inline double Y_23_4 (double st, double ct)
{
  double t13;
  double t14;
  double t6035;
  double t6036;
  double t6037;
  double t6038;
  double t6040;
  double t6042;
  t6035 = ct * ct;
  t6036 = t6035 * t6035;
  t6038 = t6036 * t6036;
  t6042 = t6038 * t6038;
  t6037 = t6036 * t6035;
  t6040 = t6037 * t6037;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.2377732125389211e-2 * t14 * (-0.1114210711d10 * t6042 - 0.1504152860d10 * t6040 - 0.223590290d9 * t6038 + 0.38329764d8 * t6037 - 0.3484524d7 * t6036 - 0.1615d4 + (0.293213345d9 * t6042 + 0.1762007636d10 * t6040 + 0.752076430d9 * t6038 + 0.140505d6) * t6035) * ct);
}

inline double Y_23_5 (double st, double ct)
{
  double t12;
  double t13;
  double t6046;
  double t6047;
  double t6048;
  double t6049;
  double t6051;
  double t6053;
  t6046 = ct * ct;
  t6047 = t6046 * t6046;
  t6049 = t6047 * t6047;
  t6053 = t6049 * t6049;
  t6048 = t6047 * t6046;
  t6051 = t6048 * t6048;
  t12 = st * st;
  t13 = t12 * t12;
  return(-0.1958667469243622e-2 * t13 * st * (-0.996925373d9 * t6053 - 0.1029157220d10 * t6051 - 0.105911190d9 * t6049 + 0.14121492d8 * t6048 - 0.916980d6 * t6047 - 0.85d2 + (0.293213345d9 * t6053 + 0.1391058660d10 * t6051 + 0.435412670d9 * t6049 + 0.22185d5) * t6046));
}

inline double Y_23_6 (double st, double ct)
{
  double t13;
  double t14;
  double t6058;
  double t6059;
  double t6060;
  double t6061;
  double t6063;
  t6058 = ct * ct;
  t6059 = t6058 * t6058;
  t6060 = t6059 * t6058;
  t6063 = t6060 * t6060;
  t6061 = t6059 * t6059;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.4972255678532033e-2 * t14 * t13 * (0.335772780d9 * t6063 - 0.14608440d8 * t6060 + 0.1460844d7 * t6059 + 0.765d3 + (0.75071150d8 + 0.90997245d8 * t6061) * t6061 + (-0.275013896d9 * t6063 - 0.212929080d9 * t6061 - 0.63240d5) * t6058) * ct);
}

inline double Y_23_7 (double st, double ct)
{
  double t12;
  double t14;
  double t6069;
  double t6070;
  double t6071;
  double t6072;
  double t6074;
  t6069 = ct * ct;
  t6070 = t6069 * t6069;
  t6071 = t6070 * t6069;
  t6074 = t6071 * t6071;
  t6072 = t6070 * t6070;
  t12 = st * st;
  t14 = t12 * t12;
  return(-0.5614467145614525e-1 * t14 * t12 * st * (0.17117828d8 * t6074 - 0.401016d6 * t6071 + 0.28644d5 * t6070 + 0.3d1 + (0.2649570d7 + 0.6066483d7 * t6072) * t6072 + (-0.16177288d8 * t6074 - 0.9185176d7 * t6072 - 0.744d3) * t6069));
}

inline double Y_23_8 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t6081;
  double t6082;
  double t6083;
  double t6084;
  double t6086;
  t6081 = ct * ct;
  t6082 = t6081 * t6081;
  t6083 = t6081 * t6082;
  t6086 = t6083 * t6083;
  t6084 = t6082 * t6082;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1250401203585302d1 * t13 * (-0.456617d6 * t6086 - 0.185185d6 * t6084 + 0.42735d5 * t6083 - 0.4851d4 * t6082 - 0.3d1 + (0.195693d6 * t6086 + 0.414141d6 * t6084 + 0.231d3) * t6081) * ct);
}

inline double Y_23_9 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t6091;
  double t6092;
  double t6093;
  double t6094;
  double t6096;
  t6091 = ct * ct;
  t6092 = t6091 * t6091;
  t6093 = t6091 * t6092;
  t6096 = t6093 * t6093;
  t6094 = t6092 * t6092;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(-0.5707274542793994e-1 * t12 * st * (-0.5936021d7 * t6096 - 0.1666665d7 * t6094 + 0.299145d6 * t6093 - 0.24255d5 * t6092 - 0.3d1 + (0.2935395d7 * t6096 + 0.4555551d7 * t6094 + 0.693d3) * t6091));
}

inline double Y_23_10 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t6102;
  double t6103;
  double t6104;
  double t6105;
  t6102 = ct * ct;
  t6103 = t6102 * t6102;
  t6105 = t6103 * t6103;
  t6104 = t6102 * t6103;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.1115211057760582d0 * t13 * t11 * (0.1084655d7 * t6105 + 0.42735d5 * t6103 + 0.33d2 + (-0.317460d6 + 0.978465d6 * t6104) * t6104 + (-0.1696006d7 * t6105 - 0.2310d4) * t6102) * ct);
}

inline double Y_23_11 (double st, double ct)
{
  double t10;
  double t12;
  double t13;
  double t6112;
  double t6113;
  double t6114;
  double t6115;
  t6112 = ct * ct;
  t6113 = t6112 * t6112;
  t6115 = t6113 * t6113;
  t6114 = t6112 * t6113;
  t10 = st * st;
  t12 = t10 * t10;
  t13 = t12 * t12;
  return(-0.5304518059214348e-2 * t13 * t10 * st * (0.9761895d7 * t6115 + 0.213675d6 * t6113 + 0.33d2 + (-0.2222220d7 + 0.12720045d8 * t6114) * t6114 + (-0.18656066d8 * t6115 - 0.6930d4) * t6112));
}

inline double Y_23_12 (double st, double ct)
{
  double t10;
  double t11;
  double t6123;
  double t6124;
  double t6126;
  double t9;
  t6123 = ct * ct;
  t6124 = t6123 * t6123;
  t6126 = t6124 * t6124;
  t9 = st * st;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.5176679560944095e-2 * t11 * t10 * (-0.9328033d7 * t6126 - 0.666666d6 * t6124 - 0.693d3 + (0.7632027d7 * t6126 + 0.3904758d7 * t6124 + 0.42735d5) * t6123) * ct);
}

inline double Y_23_13 (double st, double ct)
{
  double t1;
  double t10;
  double t6132;
  double t6133;
  double t6142;
  double t7;
  double t8;
  t6132 = ct * ct;
  t6133 = t6132 * t6132;
  t1 = t6133 * t6133;
  t6142 = 0.848003d6 * t1;
  t7 = st * st;
  t8 = t7 * t7;
  t10 = t8 * t8;
  return(-0.2575365564532994e-1 * t10 * t8 * st * (-0.33670d5 * t6133 - 0.7d1 - t6142 + (0.276094d6 * t6133 + 0.1295d4 + t6142) * t6132));
}

inline double Y_23_14 (double st, double ct)
{
  double t11;
  double t6143;
  double t6144;
  double t8;
  double t9;
  t6143 = ct * ct;
  t6144 = t6143 * t6143;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(0.9907629146599035e-1 * t11 * t9 * t8 * (-0.1820d4 * t6143 + 0.35d2 + (-0.91676d5 * t6143 + 0.22386d5 + 0.114595d6 * t6144) * t6144) * ct);
}

inline double Y_23_15 (double st, double ct)
{
  double t11;
  double t6152;
  double t6153;
  double t7;
  double t9;
  t6152 = ct * ct;
  t6153 = t6152 * t6152;
  t7 = st * st;
  t9 = t7 * t7;
  t11 = t9 * t9;
  return(-0.5357432267326198e-2 * t11 * t9 * t7 * st * (-0.5460d4 * t6152 + 0.35d2 + (-0.641732d6 * t6152 + 0.111930d6 + 0.1031355d7 * t6153) * t6153));
}

inline double Y_23_16 (double st, double ct)
{
  double t10;
  double t6162;
  double t6163;
  double t7;
  double t8;
  double t9;
  t6162 = ct * ct;
  t6163 = t6162 * t6162;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.9463112128514717e-1 * t10 * (-0.12341d5 * t6163 - 0.35d2 + (0.26445d5 * t6163 + 0.1435d4) * t6162) * ct);
}

inline double Y_23_17 (double st, double ct)
{
  double t6;
  double t6169;
  double t6170;
  double t7;
  double t8;
  double t9;
  t6169 = ct * ct;
  t6170 = t6169 * t6169;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.1979351911134514d0 * t9 * st * (-0.1763d4 * t6170 - 0.1d1 + (0.5289d4 * t6170 + 0.123d3) * t6169));
}

inline double Y_23_18 (double st, double ct)
{
  double t6;
  double t6177;
  double t7;
  double t8;
  double t9;
  t6177 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1034830722107360d1 * t9 * t6 * (0.3d1 + (-0.86d2 + 0.387d3 * t6177) * t6177) * ct);
}

inline double Y_23_19 (double st, double ct)
{
  double t5;
  double t6184;
  double t7;
  double t8;
  double t9;
  t6184 = ct * ct;
  t5 = st * st;
  t7 = t5 * t5;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(-0.2142303123227002d0 * t9 * t5 * st * (0.1d1 + (-0.86d2 + 0.645d3 * t6184) * t6184));
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
  double t6216;
  double t6217;
  double t6218;
  double t6219;
  double t6220;
  double t6221;
  double t6223;
  double t6225;
  t6216 = ct * ct;
  t6217 = t6216 * t6216;
  t6219 = t6217 * t6217;
  t6220 = t6216 * t6219;
  t6225 = t6220 * t6220;
  t6223 = t6219 * t6219;
  t6218 = t6216 * t6217;
  t6221 = t6218 * t6218;
  return(0.2897065047140837d8 * t6225 + 0.3980794144468904d8 * t6223 - 0.2705095634851456d7 * t6220 + 0.4610958468496799d6 * t6219 - 0.4627485201358795d5 * t6218 + 0.2393526828289032d4 * t6217 + 0.1611802577972412d0 + (0.1004164288694859d8 + 0.1922106962388754d7 * t6221) * t6221 + (-0.1128726641743183d8 * t6225 - 0.4266995030672550d8 * t6223 - 0.2449719473519325d8 * t6221 - 0.4835407733917236d2) * t6216);
}

inline double Y_24_1 (double st, double ct)
{
  double t6228;
  double t6229;
  double t6230;
  double t6231;
  double t6232;
  double t6233;
  double t6235;
  double t6237;
  t6228 = ct * ct;
  t6229 = t6228 * t6228;
  t6231 = t6229 * t6229;
  t6232 = t6228 * t6231;
  t6237 = t6232 * t6232;
  t6235 = t6231 * t6231;
  t6230 = t6228 * t6229;
  t6233 = t6230 * t6230;
  return(-0.5840038639982171e-5 * ct * (-0.1735881645069d13 * t6237 - 0.5369122297539d13 * t6235 - 0.2397469243554d13 * t6233 + 0.842354058546d12 * t6232 - 0.189099890694d12 * t6231 + 0.25786348731d11 * t6230 - 0.1940907969d10 * t6229 - 0.676039d6 + (0.322476036831d12 * t6237 + 0.4050390505161d13 * t6235 + 0.4452442880886d13 * t6233 + 0.66927861d8) * t6228) * st);
}

inline double Y_24_2 (double st, double ct)
{
  double t14;
  double t6239;
  double t6240;
  double t6241;
  double t6242;
  double t6243;
  double t6244;
  double t6246;
  double t6248;
  t6239 = ct * ct;
  t6240 = t6239 * t6239;
  t6242 = t6240 * t6240;
  t6243 = t6239 * t6242;
  t6248 = t6243 * t6243;
  t6246 = t6242 * t6242;
  t6241 = t6240 * t6239;
  t6244 = t6241 * t6241;
  t14 = st * st;
  return(0.7140626493392913e-4 * t14 * (-0.121918108851d12 * t6248 - 0.305267822937d12 * t6246 - 0.104237793198d12 * t6244 + 0.30989614194d11 * t6243 - 0.5691969954d10 * t6242 + 0.603693783d9 * t6241 - 0.32456655d8 * t6240 - 0.2261d4 + (0.24805848987d11 * t6248 + 0.257382674241d12 * t6246 + 0.223366699710d12 * t6244 + 0.671517d6) * t6239));
}

inline double Y_24_3 (double st, double ct)
{
  double t15;
  double t6250;
  double t6251;
  double t6252;
  double t6253;
  double t6254;
  double t6255;
  double t6257;
  t6250 = ct * ct;
  t6251 = t6250 * t6250;
  t6253 = t6251 * t6251;
  t6257 = t6253 * t6253;
  t6252 = t6251 * t6250;
  t6255 = t6252 * t6252;
  t6254 = t6250 * t6253;
  t15 = st * st;
  return(-0.5801072386548504e-3 * t15 * st * ct * (0.23398424931d11 * t6257 + 0.15793605030d11 * t6255 + 0.1565132030d10 * t6253 - 0.229978584d9 * t6252 + 0.18293751d8 * t6251 + 0.6783d4 + (-0.6317442012d10 + 0.2756205443d10 * t6254) * t6254 + (-0.12314960490d11 * t6257 - 0.24668106904d11 * t6255 - 0.655690d6) * t6250));
}

inline double Y_24_4 (double st, double ct)
{
  double t14;
  double t15;
  double t6262;
  double t6263;
  double t6264;
  double t6265;
  double t6266;
  double t6267;
  double t6269;
  t6262 = ct * ct;
  t6263 = t6262 * t6262;
  t6265 = t6263 * t6263;
  t6269 = t6265 * t6265;
  t6264 = t6263 * t6262;
  t6267 = t6264 * t6264;
  t6266 = t6262 * t6265;
  t14 = st * st;
  t15 = t14 * t14;
  return(0.5023876055943425e-3 * t15 * (0.18941582087d11 * t6269 + 0.9776993590d10 * t6267 + 0.670770870d9 * t6265 - 0.76659528d8 * t6264 + 0.4355655d7 * t6263 + 0.323d3 + (-0.3309136292d10 + 0.2756205443d10 * t6266) * t6266 + (-0.11142107110d11 * t6269 - 0.17620076360d11 * t6267 - 0.93670d5) * t6262));
}

inline double Y_24_5 (double st, double ct)
{
  double t13;
  double t14;
  double t6274;
  double t6275;
  double t6276;
  double t6277;
  double t6279;
  double t6281;
  t6274 = ct * ct;
  t6275 = t6274 * t6274;
  t6277 = t6275 * t6275;
  t6281 = t6277 * t6277;
  t6276 = t6275 * t6274;
  t6279 = t6276 * t6276;
  t13 = st * st;
  t14 = t13 * t13;
  return(-0.2419819147190911e-2 * t14 * st * ct * (-0.1728947655d10 * t6281 - 0.2126560940d10 * t6279 - 0.285270370d9 * t6277 + 0.46260060d8 * t6276 - 0.3965148d7 * t6275 - 0.1615d4 + (0.475207835d9 * t6281 + 0.2612632012d10 * t6279 + 0.1011413130d10 * t6277 + 0.150195d6) * t6274));
}

inline double Y_24_6 (double st, double ct)
{
  double t12;
  double t13;
  double t6286;
  double t6287;
  double t6288;
  double t6289;
  double t6291;
  double t6293;
  t6286 = ct * ct;
  t6287 = t6286 * t6286;
  t6289 = t6287 * t6287;
  t6293 = t6289 * t6289;
  t6288 = t6287 * t6286;
  t6291 = t6288 * t6288;
  t12 = st * st;
  t13 = t12 * t12;
  return(0.9628731718019915e-2 * t13 * t12 * (-0.309390633d9 * t6293 - 0.291003076d9 * t6291 - 0.27025614d8 * t6289 + 0.3408636d7 * t6288 - 0.208692d6 * t6287 - 0.17d2 + (0.95041567d8 * t6293 + 0.412520844d9 * t6291 + 0.117110994d9 * t6289 + 0.4743d4) * t6286));
}

inline double Y_24_7 (double st, double ct)
{
  double t13;
  double t15;
  double t6298;
  double t6299;
  double t6300;
  double t6301;
  double t6303;
  t6298 = ct * ct;
  t6299 = t6298 * t6298;
  t6300 = t6299 * t6298;
  t6303 = t6300 * t6300;
  t6301 = t6299 * t6299;
  t13 = st * st;
  t15 = t13 * t13;
  return(-0.7581670936443608e-1 * t15 * t13 * st * ct * (0.31049956d8 * t6303 - 0.1162392d7 * t6300 + 0.109956d6 * t6299 + 0.51d2 + (0.6296290d7 + 0.9197571d7 * t6301) * t6301 + (-0.26614248d8 * t6303 - 0.18774392d8 * t6301 - 0.4488d4) * t6298));
}

inline double Y_24_8 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t6310;
  double t6311;
  double t6312;
  double t6313;
  double t6315;
  t6310 = ct * ct;
  t6311 = t6310 * t6310;
  t6312 = t6310 * t6311;
  t6315 = t6312 * t6312;
  t6313 = t6311 * t6311;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(0.5526044814118675e-1 * t14 * (0.23744084d8 * t6315 - 0.478632d6 * t6312 + 0.32340d5 * t6311 + 0.3d1 + (0.3333330d7 + 0.9197571d7 * t6313) * t6313 + (-0.23483160d8 * t6315 - 0.12148136d8 * t6313 - 0.792d3) * t6310));
}

inline double Y_24_9 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t6321;
  double t6322;
  double t6323;
  double t6324;
  double t6326;
  t6321 = ct * ct;
  t6322 = t6321 * t6321;
  t6323 = t6321 * t6322;
  t6326 = t6323 * t6323;
  t6324 = t6322 * t6322;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(-0.3847843711791675e-1 * t13 * st * ct * (-0.20547765d8 * t6326 - 0.7592585d7 * t6324 + 0.1666665d7 * t6323 - 0.179487d6 * t6322 - 0.99d2 + (0.9197571d7 * t6326 + 0.17808063d8 * t6324 + 0.8085d4) * t6321));
}

inline double Y_24_10 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t6332;
  double t6333;
  double t6334;
  double t6335;
  double t6337;
  t6332 = ct * ct;
  t6333 = t6332 * t6332;
  t6334 = t6332 * t6333;
  t6337 = t6334 * t6334;
  t6335 = t6333 * t6333;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.5111561502591838e-2 * t12 * t10 * (-0.89040315d8 * t6337 - 0.22777755d8 * t6335 + 0.3888885d7 * t6334 - 0.299145d6 * t6333 - 0.33d2 + (0.45987855d8 * t6337 + 0.65296231d8 * t6335 + 0.8085d4) * t6332));
}

inline double Y_24_11 (double st, double ct)
{
  double t11;
  double t13;
  double t14;
  double t6343;
  double t6344;
  double t6345;
  double t6346;
  t6343 = ct * ct;
  t6344 = t6343 * t6343;
  t6346 = t6344 * t6344;
  t6345 = t6343 * t6344;
  t11 = st * st;
  t13 = t11 * t11;
  t14 = t13 * t13;
  return(-0.1616417674822289e-1 * t14 * t11 * st * ct * (0.9328033d7 * t6346 + 0.333333d6 * t6344 + 0.231d3 + (-0.2603172d7 + 0.9197571d7 * t6345) * t6345 + (-0.15264054d8 * t6346 - 0.17094d5) * t6343));
}

inline double Y_24_12 (double st, double ct)
{
  double t10;
  double t11;
  double t12;
  double t6354;
  double t6355;
  double t6356;
  double t6357;
  t6354 = ct * ct;
  t6355 = t6354 * t6354;
  t6357 = t6355 * t6355;
  t6356 = t6354 * t6355;
  t10 = st * st;
  t11 = t10 * t10;
  t12 = t11 * t11;
  return(0.2241568003514630e-2 * t12 * t11 * (0.27984099d8 * t6357 + 0.555555d6 * t6355 + 0.77d2 + (-0.6074068d7 + 0.39856141d8 * t6356) * t6356 + (-0.55968198d8 * t6357 - 0.17094d5) * t6354));
}

inline double Y_24_13 (double st, double ct)
{
  double t10;
  double t12;
  double t6364;
  double t6365;
  double t6367;
  double t9;
  t6364 = ct * ct;
  t6365 = t6364 * t6364;
  t6367 = t6365 * t6365;
  t9 = st * st;
  t10 = t9 * t9;
  t12 = t10 * t10;
  return(-0.4723276869700707e-1 * t12 * t10 * st * ct * (-0.1260545d7 * t6367 - 0.82082d5 * t6365 - 0.77d2 + (0.1077193d7 * t6367 + 0.504218d6 * t6365 + 0.5005d4) * t6364));
}

inline double Y_24_14 (double st, double ct)
{
  double t11;
  double t6374;
  double t6375;
  double t6377;
  double t8;
  double t9;
  t6374 = ct * ct;
  t6375 = t6374 * t6374;
  t6377 = t6375 * t6375;
  t8 = st * st;
  t9 = t8 * t8;
  t11 = t9 * t9;
  return(0.2541253256224630e-1 * t11 * t9 * t8 * (-0.1031355d7 * t6377 - 0.37310d5 * t6375 - 0.7d1 + (0.1077193d7 * t6377 + 0.320866d6 * t6375 + 0.1365d4) * t6374));
}

inline double Y_24_15 (double st, double ct)
{
  double t10;
  double t12;
  double t6384;
  double t6385;
  double t8;
  t6384 = ct * ct;
  t6385 = t6384 * t6384;
  t8 = st * st;
  t10 = t8 * t8;
  t12 = t10 * t10;
  return(-0.3345715378600709e-1 * t12 * t10 * t8 * st * ct * (-0.5740d4 * t6384 + 0.105d3 + (-0.317340d6 * t6384 + 0.74046d5 + 0.414305d6 * t6385) * t6385));
}

inline double Y_24_16 (double st, double ct)
{
  double t10;
  double t6394;
  double t6395;
  double t7;
  double t8;
  double t9;
  t6394 = ct * ct;
  t6395 = t6394 * t6394;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.2645020249757705e-1 * t10 * (-0.1148d4 * t6394 + 0.7d1 + (-0.148092d6 * t6394 + 0.24682d5 + 0.248583d6 * t6395) * t6395));
}

inline double Y_24_17 (double st, double ct)
{
  double t10;
  double t6402;
  double t6403;
  double t7;
  double t8;
  double t9;
  t6402 = ct * ct;
  t6403 = t6402 * t6402;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.4790335411945686d0 * t10 * st * ct * (-0.2709d4 * t6403 - 0.7d1 + (0.6063d4 * t6403 + 0.301d3) * t6402));
}

inline double Y_24_18 (double st, double ct)
{
  double t6;
  double t6410;
  double t6411;
  double t7;
  double t8;
  double t9;
  t6410 = ct * ct;
  t6411 = t6410 * t6410;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.1955646242675331d0 * t9 * t6 * (-0.1935d4 * t6411 - 0.1d1 + (0.6063d4 * t6411 + 0.129d3) * t6410));
}

inline double Y_24_19 (double st, double ct)
{
  double t10;
  double t6;
  double t6418;
  double t8;
  double t9;
  t6418 = ct * ct;
  t6 = st * st;
  t8 = t6 * t6;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.3141232997462073d1 * t10 * t6 * st * ct * (0.1d1 + (-0.30d2 + 0.141d3 * t6418) * t6418));
}

inline double Y_24_20 (double st, double ct)
{
  double t5;
  double t6;
  double t6426;
  double t7;
  double t8;
  t6426 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t7 = t6 * t6;
  t8 = t7 * t7;
  return(0.2117818854853927d0 * t8 * t6 * (0.1d1 + (-0.90d2 + 0.705d3 * t6426) * t6426));
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
  double t6457;
  t6457 = ct * ct;
  return((0.4029506444931030d1 + (-0.4351866960525513d3 + (0.1388245560407639d5 + (-0.2049314874887466d6 + (0.1690684771782160d7 + (-0.8607122474527359d7 + (0.2858006052439213d8 + (-0.6369270631150246d8 + (0.9600738819013238d8 + (-0.9656883490469456d8 + (0.6207996529587507d8 + (0.3767329646281958d7 * t6457 - 0.2306528354866505d8) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * t6457) * ct);
}

inline double Y_25_1 (double st, double ct)
{
  double t6470;
  double t6471;
  double t6472;
  double t6473;
  double t6474;
  double t6475;
  double t6477;
  double t6479;
  t6470 = ct * ct;
  t6471 = t6470 * t6470;
  t6473 = t6471 * t6471;
  t6474 = t6470 * t6473;
  t6479 = t6474 * t6474;
  t6477 = t6473 * t6473;
  t6472 = t6470 * t6471;
  t6475 = t6472 * t6472;
  return(-0.3039252468104830e-5 * (0.16824699021438d14 * t6479 + 0.21063479782653d14 * t6477 - 0.1221876216792d13 * t6474 + 0.196372963413d12 * t6473 - 0.18513276012d11 * t6472 + 0.895803678d9 * t6471 + 0.52003d5 + (0.4794938487108d13 + 0.1215486600363d13 * t6475) * t6475 + (-0.6846414320412d13 * t6479 - 0.23679206030172d14 * t6477 - 0.12329841823992d14 * t6475 - 0.16848972d8) * t6470) * st);
}

inline double Y_25_2 (double st, double ct)
{
  double t15;
  double t6482;
  double t6483;
  double t6484;
  double t6485;
  double t6486;
  double t6487;
  double t6489;
  double t6491;
  t6482 = ct * ct;
  t6483 = t6482 * t6482;
  t6485 = t6483 * t6483;
  t6486 = t6482 * t6485;
  t6491 = t6486 * t6486;
  t6489 = t6485 * t6485;
  t6484 = t6483 * t6482;
  t6487 = t6484 * t6484;
  t15 = st * st;
  return(0.2578891235921852e-4 * t15 * (-0.697319977079d12 * t6491 - 0.1973267169181d13 * t6489 - 0.799156414518d12 * t6487 + 0.266385471506d12 * t6486 - 0.56568343370d11 * t6485 + 0.7273072719d10 * t6484 - 0.514257667d9 * t6483 - 0.156009d6 + (0.135054066707d12 * t6491 + 0.1557842501985d13 * t6489 + 0.1560257761678d13 * t6487 + 0.16588957d8) * t6482) * ct);
}

inline double Y_25_3 (double st, double ct)
{
  double t14;
  double t6493;
  double t6494;
  double t6495;
  double t6496;
  double t6497;
  double t6498;
  double t6500;
  double t6502;
  t6493 = ct * ct;
  t6494 = t6493 * t6493;
  t6496 = t6494 * t6494;
  t6497 = t6493 * t6496;
  t6502 = t6497 * t6497;
  t6500 = t6496 * t6496;
  t6495 = t6494 * t6493;
  t6498 = t6495 * t6495;
  t14 = st * st;
  return(-0.1636123070769006e-3 * t14 * st * (-0.90954779619d11 * t6502 - 0.208357402957d12 * t6500 - 0.64528157694d11 * t6498 + 0.18200249606d11 * t6497 - 0.3162205530d10 * t6496 + 0.316220553d9 * t6495 - 0.15970735d8 * t6494 - 0.969d3 + (0.19293438101d11 * t6502 + 0.183844767315d12 * t6500 + 0.145365629970d12 * t6498 + 0.309111d6) * t6493));
}

inline double Y_25_4 (double st, double ct)
{
  double t15;
  double t16;
  double t6506;
  double t6507;
  double t6508;
  double t6509;
  double t6510;
  double t6511;
  double t6513;
  t6506 = ct * ct;
  t6507 = t6506 * t6506;
  t6509 = t6507 * t6507;
  t6513 = t6509 * t6509;
  t6508 = t6507 * t6506;
  t6511 = t6508 * t6508;
  t6510 = t6506 * t6509;
  t15 = st * st;
  t16 = t15 * t15;
  return(0.4132627943965270e-2 * t16 * (0.5186842965d10 * t6513 + 0.3189841410d10 * t6511 + 0.285270370d9 * t6509 - 0.39651480d8 * t6508 + 0.2973861d7 * t6507 + 0.969d3 + (-0.1213695756d10 + 0.665290969d9 * t6510) * t6510 + (-0.2851247010d10 * t6513 - 0.5225264024d10 * t6511 - 0.100130d6) * t6506) * ct);
}

inline double Y_25_5 (double st, double ct)
{
  double t14;
  double t15;
  double t6518;
  double t6519;
  double t6520;
  double t6521;
  double t6522;
  double t6523;
  double t6525;
  t6518 = ct * ct;
  t6519 = t6518 * t6518;
  t6521 = t6519 * t6519;
  t6525 = t6521 * t6521;
  t6520 = t6519 * t6518;
  t6523 = t6520 * t6520;
  t6522 = t6518 * t6521;
  t14 = st * st;
  t15 = t14 * t14;
  return(-0.4939435150362062e-3 * t15 * st * (0.29392110135d11 * t6525 + 0.13822646110d11 * t6523 + 0.855811110d9 * t6521 - 0.92520120d8 * t6520 + 0.4956435d7 * t6519 + 0.323d3 + (-0.4450217772d10 + 0.4657036783d10 * t6522) * t6522 + (-0.18057897730d11 * t6525 - 0.26126320120d11 * t6523 - 0.100130d6) * t6518));
}

inline double Y_25_6 (double st, double ct)
{
  double t13;
  double t14;
  double t6531;
  double t6532;
  double t6533;
  double t6534;
  double t6536;
  double t6538;
  t6531 = ct * ct;
  t6532 = t6531 * t6531;
  t6534 = t6532 * t6532;
  t6538 = t6534 * t6534;
  t6533 = t6532 * t6531;
  t6536 = t6533 * t6533;
  t13 = st * st;
  t14 = t13 * t13;
  return(0.1229909433855681e-1 * t14 * t13 * (-0.524261547d9 * t6538 - 0.589949164d9 * t6536 - 0.71777706d8 * t6534 + 0.11042724d8 * t6533 - 0.895356d6 * t6532 - 0.323d3 + (0.150226993d9 * t6538 + 0.758506068d9 * t6536 + 0.267535086d9 * t6534 + 0.31977d5) * t6531) * ct);
}

inline double Y_25_7 (double st, double ct)
{
  double t12;
  double t14;
  double t6543;
  double t6544;
  double t6545;
  double t6546;
  double t6548;
  double t6550;
  t6543 = ct * ct;
  t6544 = t6543 * t6543;
  t6546 = t6544 * t6544;
  t6550 = t6546 * t6546;
  t6545 = t6544 * t6543;
  t6548 = t6545 * t6545;
  t12 = st * st;
  t14 = t12 * t12;
  return(-0.9477088670554510e-2 * t14 * t12 * st * (-0.469076121d9 * t6550 - 0.403649428d9 * t6548 - 0.33999966d8 * t6546 + 0.4068372d7 * t6545 - 0.235620d6 * t6544 - 0.17d2 + (0.150226993d9 * t6550 + 0.598820580d9 * t6548 + 0.154888734d9 * t6546 + 0.5049d4) * t6543));
}

inline double Y_25_8 (double st, double ct)
{
  double t13;
  double t14;
  double t15;
  double t6556;
  double t6557;
  double t6558;
  double t6559;
  double t6561;
  t6556 = ct * ct;
  t6557 = t6556 * t6556;
  t6558 = t6556 * t6557;
  t6561 = t6558 * t6558;
  t6559 = t6557 * t6557;
  t13 = st * st;
  t14 = t13 * t13;
  t15 = t14 * t14;
  return(0.2333097949203793e-2 * t15 * (0.1397248020d10 * t6561 - 0.45333288d8 * t6558 + 0.4068372d7 * t6557 + 0.1683d4 + (0.258147890d9 + 0.450680979d9 * t6559) * t6559 + (-0.1250869656d10 * t6561 - 0.807298856d9 * t6559 - 0.157080d6) * t6556) * ct);
}

inline double Y_25_9 (double st, double ct)
{
  double t12;
  double t13;
  double t14;
  double t6567;
  double t6568;
  double t6569;
  double t6570;
  double t6572;
  t6567 = ct * ct;
  t6568 = t6567 * t6567;
  t6569 = t6567 * t6568;
  t6572 = t6569 * t6569;
  t6570 = t6568 * t6568;
  t12 = st * st;
  t13 = t12 * t12;
  t14 = t13 * t13;
  return(-0.1649749381054429e-2 * t14 * st * (0.1068483780d10 * t6572 - 0.18666648d8 * t6569 + 0.1196580d7 * t6568 + 0.99d2 + (0.136666530d9 + 0.450680979d9 * t6570) * t6570 + (-0.1103708520d10 * t6572 - 0.522369848d9 * t6570 - 0.27720d5) * t6567));
}

inline double Y_25_10 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t6579;
  double t6580;
  double t6581;
  double t6582;
  double t6584;
  t6579 = ct * ct;
  t6580 = t6579 * t6579;
  t6581 = t6579 * t6580;
  t6584 = t6581 * t6581;
  t6582 = t6580 * t6580;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.7808039168349771e-2 * t13 * t11 * (-0.137963565d9 * t6584 - 0.46640165d8 * t6582 + 0.9761895d7 * t6581 - 0.999999d6 * t6580 - 0.495d3 + (0.64382997d8 * t6584 + 0.114480405d9 * t6582 + 0.42735d5) * t6579) * ct);
}

inline double Y_25_11 (double st, double ct)
{
  double t10;
  double t12;
  double t13;
  double t6590;
  double t6591;
  double t6592;
  double t6593;
  double t6595;
  t6590 = ct * ct;
  t6591 = t6590 * t6590;
  t6592 = t6590 * t6591;
  t6595 = t6592 * t6592;
  t6593 = t6591 * t6591;
  t10 = st * st;
  t12 = t10 * t10;
  t13 = t12 * t12;
  return(-0.1512020283277694e-1 * t13 * t10 * st * (-0.39856141d8 * t6595 - 0.9328033d7 * t6593 + 0.1518517d7 * t6592 - 0.111111d6 * t6591 - 0.11d2 + (0.21460999d8 * t6595 + 0.27984099d8 * t6593 + 0.2849d4) * t6590));
}

inline double Y_25_12 (double st, double ct)
{
  double t11;
  double t12;
  double t13;
  double t6602;
  double t6603;
  double t6604;
  double t6605;
  t6602 = ct * ct;
  t6603 = t6602 * t6602;
  t6605 = t6603 * t6603;
  t6604 = t6602 * t6603;
  t11 = st * st;
  t12 = t11 * t11;
  t13 = t12 * t12;
  return(0.4916142432860395e-1 * t13 * t12 * (0.3781635d7 * t6605 + 0.123123d6 * t6603 + 0.77d2 + (-0.1008436d7 + 0.4060189d7 * t6604) * t6604 + (-0.6463158d7 * t6605 - 0.6006d4) * t6602) * ct);
}

inline double Y_25_13 (double st, double ct)
{
  double t10;
  double t11;
  double t13;
  double t6612;
  double t6613;
  double t6614;
  double t6615;
  t6612 = ct * ct;
  t6613 = t6612 * t6612;
  t6615 = t6613 * t6613;
  t6614 = t6612 * t6613;
  t10 = st * st;
  t11 = t10 * t10;
  t13 = t11 * t11;
  return(-0.2211877050166839e-2 * t13 * t11 * st * (0.34034715d8 * t6615 + 0.615615d6 * t6613 + 0.77d2 + (-0.7059052d7 + 0.52782457d8 * t6614) * t6614 + (-0.71094738d8 * t6615 - 0.18018d5) * t6612));
}

inline double Y_25_14 (double st, double ct)
{
  double t10;
  double t12;
  double t6623;
  double t6624;
  double t6626;
  double t9;
  t6623 = ct * ct;
  t6624 = t6623 * t6623;
  t6626 = t6624 * t6624;
  t9 = st * st;
  t10 = t9 * t9;
  t12 = t10 * t10;
  return(0.1595007223879715e-1 * t12 * t10 * t9 * (-0.4557355d7 * t6626 - 0.271502d6 * t6624 - 0.231d3 + (0.4060189d7 * t6626 + 0.1745370d7 * t6624 + 0.15785d5) * t6623) * ct);
}

inline double Y_25_15 (double st, double ct)
{
  double t10;
  double t12;
  double t6633;
  double t6634;
  double t6636;
  double t8;
  t6633 = ct * ct;
  t6634 = t6633 * t6633;
  t6636 = t6634 * t6634;
  t8 = st * st;
  t10 = t8 * t8;
  t12 = t10 * t10;
  return(-0.8364288446501775e-2 * t12 * t10 * t8 * st * (-0.3728745d7 * t6636 - 0.123410d6 * t6634 - 0.21d2 + (0.4060189d7 * t6636 + 0.1110690d7 * t6634 + 0.4305d4) * t6633));
}

inline double Y_25_16 (double st, double ct)
{
  double t10;
  double t11;
  double t6644;
  double t6645;
  double t8;
  double t9;
  t6644 = ct * ct;
  t6645 = t6644 * t6644;
  t8 = st * st;
  t9 = t8 * t8;
  t10 = t9 * t9;
  t11 = t10 * t10;
  return(0.1693639326972424d0 * t11 * (-0.1204d4 * t6644 + 0.21d2 + (-0.72756d5 * t6644 + 0.16254d5 + 0.99029d5 * t6645) * t6645) * ct);
}

inline double Y_25_17 (double st, double ct)
{
  double t10;
  double t6652;
  double t6653;
  double t7;
  double t8;
  double t9;
  t6652 = ct * ct;
  t6653 = t6652 * t6652;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.1829339552455714d0 * t10 * st * (-0.172d3 * t6652 + 0.1d1 + (-0.24252d5 * t6652 + 0.3870d4 + 0.42441d5 * t6653) * t6653));
}

inline double Y_25_18 (double st, double ct)
{
  double t10;
  double t6661;
  double t6662;
  double t7;
  double t8;
  double t9;
  t6661 = ct * ct;
  t6662 = t6661 * t6661;
  t7 = st * st;
  t8 = t7 * t7;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(0.3392919421639027d1 * t10 * t7 * (-0.423d3 * t6662 - 0.1d1 + (0.987d3 * t6662 + 0.45d2) * t6661) * ct);
}

inline double Y_25_19 (double st, double ct)
{
  double t10;
  double t6;
  double t6669;
  double t6670;
  double t8;
  double t9;
  t6669 = ct * ct;
  t6670 = t6669 * t6669;
  t6 = st * st;
  t8 = t6 * t6;
  t9 = t8 * t8;
  t10 = t9 * t9;
  return(-0.1933295265855425d0 * t10 * t6 * st * (-0.2115d4 * t6670 - 0.1d1 + (0.6909d4 * t6670 + 0.135d3) * t6669));
}

inline double Y_25_20 (double st, double ct)
{
  double t6;
  double t6678;
  double t7;
  double t8;
  double t9;
  t6678 = ct * ct;
  t6 = st * st;
  t7 = t6 * t6;
  t8 = t7 * t7;
  t9 = t8 * t8;
  return(0.2117818854853927d0 * t9 * t7 * (0.15d2 + (-0.470d3 + 0.2303d4 * t6678) * t6678) * ct);
}

inline double Y_25_21 (double st, double ct)
{
  double t5;
  double t6;
  double t6685;
  double t8;
  double t9;
  t6685 = ct * ct;
  t5 = st * st;
  t6 = t5 * t5;
  t8 = t6 * t6;
  t9 = t8 * t8;
  return(-0.6982241995400533e-1 * t9 * t6 * st * (0.3d1 + (-0.282d3 + 0.2303d4 * t6685) * t6685));
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
  double t3;
  double t5;
  double t6;
  double t8;
  t1 = st * st;
  t3 = t1 * t1;
  t5 = t3 * t3;
  t6 = t5 * t5;
  t8 = ct * ct;
  return(-0.2393391972844051d0 * (0.49d2 * t8 - 0.1d1) * t6 * t3 * t1 * st);
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

