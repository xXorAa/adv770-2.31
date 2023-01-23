/* adv03.c: Adv770 - copyright Mike Arnautov 2022. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

#include "adv0.h"
#include "adv3.h"
int p340(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(anyof(755,201,-1));
if(value[0]){
value[1224]=747;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(532,0,-745); if (loop) return(0);
move(202,0,-746); if (loop) return(0);
move(203,0,747,755,-201); if (loop) return(0);
move(518,0,-748); if (loop) return(0);
move(534,0,-749); if (loop) return(0);
move(544,0,750,751,-752); if (loop) return(0);
}
return 0;
}
int p341(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(anyof(755,201,-1));
if(value[0]){
value[1224]=747;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(533,0,-745); if (loop) return(0);
move(203,0,-746); if (loop) return(0);
move(518,0,747,755,-201); if (loop) return(0);
move(537,0,-748); if (loop) return(0);
move(544,0,749,750,751,-752); if (loop) return(0);
}
return 0;
}
int p342(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(anyof(755,201,-1));
if(value[0]){
value[1224]=751;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(541,0,-745); if (loop) return(0);
move(528,0,-746); if (loop) return(0);
move(530,0,-747); if (loop) return(0);
move(544,0,-748); if (loop) return(0);
move(536,0,-749); if (loop) return(0);
move(203,0,-750); if (loop) return(0);
move(202,0,751,755,-201); if (loop) return(0);
move(201,0,-752); if (loop) return(0);
}
return 0;
}
int p343(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(anyof(755,201,-1));
if(value[0]){
value[1224]=751;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(535,0,-745); if (loop) return(0);
move(530,0,-746); if (loop) return(0);
move(544,0,747,-748); if (loop) return(0);
move(537,0,-749); if (loop) return(0);
move(518,0,-750); if (loop) return(0);
move(203,0,751,755,-201); if (loop) return(0);
move(202,0,-752); if (loop) return(0);
}
return 0;
}
int p345(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(anyof(755,201,-1));
if(value[0]){
value[1224]=751;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(536,0,-745); if (loop) return(0);
move(544,0,746,747,748,-749); if (loop) return(0);
move(518,0,751,755,-201); if (loop) return(0);
move(534,0,-750); if (loop) return(0);
move(203,0,-752); if (loop) return(0);
}
return 0;
}
int p178(void)
{
p474();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(538));
if(value[0]){
p329(-1,543,-1,748,-1,529,-1,752);
if (loop) return (0);
}
move(529,0,-752); if (loop) return(0);
move(543,0,-748); if (loop) return(0);
move(544,0,745,746,747,749,750,-751); if (loop) return(0);
}
return 0;
}
int p179(void)
{
p474();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(538));
if(value[0]){
p329(-1,545,-1,748,-1,542,-1,752);
if (loop) return (0);
}
move(542,0,-752); if (loop) return(0);
move(545,0,-748); if (loop) return(0);
move(544,0,745,746,747,749,750,-751); if (loop) return(0);
}
return 0;
}
int p175(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
p474();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(745,746,747,748,749,750,751,752,-1));
if(value[0]){
lval[1]=747;lbts[1*VARSIZE]= -1;
set('L',0,'v',1144,lval, lbts);
value[0]=(value[1178]>1);
if(value[0]){
set('L',0,'v',1145,lval, lbts);
}
lval[0] -= lval[1];
value[0]=(value[1249]<0);
value[0]&=(irand(100)<20);
if(value[0]){
set('V',1249,'l',0,lval, lbts);
}
value[0]=(value[1249]==lval[0]);
if(value[0]){
say(64,2043,0);
 if (loop) return(0);}
p401();
if (loop) return (0);
set('V',1249,'c',-1,NULL,NULL);
set('L',0,'v',1250,lval, lbts);
value[0]=(irand(100)<lval[0]);
if(value[0]){
value[1250] -= 10;
value[0]=(value[1250]<1);
if(value[0]){
set('V',1250,'c',1,NULL,NULL);
}
move(544,-2); if (loop) return(0);
}
value[1250] = irand(160-120+1)+120;
value[1155] = irand(537-519+1)+519;
*bitword(1155)= -1;
p240(-1,518);
if (loop) return (0);
move(value[1155],-2); if (loop) return(0);
}}
return 0;
}
int p133(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(975,-1))say(72,2676,975);
 if (loop) return(0);if (anyof(545,-1))say(72,2696,0);
 if (loop) return(0);if (anyof(894,-1))say(72,2695,0);
 if (loop) return(0);if (anyof(131,974,-1))say(72,2695,1);
 if (loop) return(0);value[0]=(KEY(917));
if(value[0]){
value[0]=(value[1198]==3);
if(value[0]){
say(72,2392,0);
 if (loop) return(0);}
say(72,2393,0);
 if (loop) return(0);}
if (anyof(981,980,755,-1))say(72,2392,1);
 if (loop) return(0);if (anyof(546,-1))say(64,2389,0);
 if (loop) return(0);if (anyof(538,-1))say(72,2674,0);
 if (loop) return(0);if (anyof(480,-1))say(72,2674,1);
 if (loop) return(0);if (anyof(1137,-1))say(72,2696,1);
 if (loop) return(0);if (anyof(1131,983,-1))say(64,2697,0);
 if (loop) return(0);if (anyof(982,-1))say(72,2698,1);
 if (loop) return(0);if (anyof(8,-1))say(72,2729,4);
 if (loop) return(0);if (anyof(920,-1))say(72,2734,0);
 if (loop) return(0);if (anyof(475,-1))say(64,2391,0);
 if (loop) return(0);if (anyof(936,-1))say(72,2729,0);
 if (loop) return(0);if (anyof(993,-1))say(64,2390,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(8));
if(value[0]){
if (anyof(767,-1))say(72,2733,0);
 if (loop) return(0);if (anyof(769,-1))say(76,2506,8);
 if (loop) return(0);if (value[ARG1] == 8) value[ARG1]=169;
if (value[ARG2] == 8) value[ARG2]=169;
}
value[0]=(KEY(920));
if(value[0]){
if (anyof(792,815,992,-1))say(72,2735,0);
 if (loop) return(0);if (anyof(800,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(767,769,-1))say(72,2736,767);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(762));
value[0]&=(anyof(757,917,755,-1));
if(value[0]){
value[0]=(value[1198]==8);
if(value[0]){
p224(0,1);
if (loop) return (0);
}else{
move(489,-3495); if (loop) return(0);
}}
value[0]=(keyword(757,546,-1));
value[0]|=(keyword(848,755,-1));
value[0]|=(keyword(755,917,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(752));
value[0]|=(KEY(538));
if(value[0]){
set('E',529,'c',1,NULL,NULL);
move(543,-2); if (loop) return(0);
}
value[0]=(anyof(757,750,546,-1));
if(value[0]){
say(8,2732,0);
move(546,-2); if (loop) return(0);
}
value[0]=(anyof(848,755,917,-1));
if(value[0]){
value[0]=(value[1198]==8);
if(value[0]){
move(672,-2881); if (loop) return(0);
}else{
move(489,-2); if (loop) return(0);
}}
move(544,0,745,746,747,748,749,-751); if (loop) return(0);
}
value[0]=(anyof(975,545,894,131,974,917,981,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(546,538,480,1137,1131,982,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(920,475,936,993,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=489;*bitword(1150)= -1;
value[1151]=2394;*bitword(1151)= -1;
return 0;
}
int p772(void)
{
value[0]=(KEY(992));
if(value[0]){
if (anyof(822,-1))say(64,2730,0);
 if (loop) return(0);if (anyof(775,785,765,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(8,936,1137,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(920,-1))say(72,2735,1);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(8));
if(value[0]){
if (anyof(767,-1))say(72,2733,1);
 if (loop) return(0);if (anyof(769,-1))say(76,2506,8);
 if (loop) return(0);if (value[ARG1] == 8) value[ARG1]=169;
if (value[ARG2] == 8) value[ARG2]=169;
}
value[0]=(KEY(546));
if(value[0]){
if (anyof(822,-1))say(64,2389,0);
 if (loop) return(0);if (anyof(759,757,-1))say(76,2620,546);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(72,2729,0);
 if (loop) return(0);if (anyof(1137,-1))say(72,2729,1);
 if (loop) return(0);if (anyof(376,475,-1))say(72,2729,2);
 if (loop) return(0);if (anyof(169,-1))say(72,2729,3);
 if (loop) return(0);if (anyof(758,545,920,-1))say(72,2734,1);
 if (loop) return(0);if (anyof(993,-1))say(64,2390,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(920));
if(value[0]){
if (anyof(792,815,-1))say(64,2735,0);
 if (loop) return(0);if (anyof(800,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(767,769,-1))say(72,2736,767);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(757,-1))say(76,2620,546);
 if (loop) return(0);value[0]=(anyof(758,746,545,-1));
if(value[0]){
say(8,2732,1);
move(545,-2); if (loop) return(0);
}}
value[0]=(anyof(475,920,936,169,1137,993,546,992,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(KEY(545));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p43(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[318]==1);
value[0]|=(value[318]==2);
if(value[0]){
bitmod('s',593,4);
}
value[0]=(KEY(593));
if(value[0]){
value[0]=(KEY(822));
value[0]&=(value[318]==3);
if(value[0]){
say(64,2691,0);
 if (loop) return(0);}}
value[0]=(value[318]==0);
if(value[0]){
value[0]=(anyof(593,937,1030,781,-1));
if(value[0]){
return 0;
}
}else{value[0]=(value[318]==1);
if(value[0]){
value[0]=(anyof(1029,781,853,979,-1));
if(value[0]){
return 0;
}
}else{value[0]=(value[318]==2);
if(value[0]){
value[0]=(anyof(937,1030,1029,979,-1));
if(value[0]){
return 0;
}
}else{
value[0]=(anyof(937,1030,1029,593,-1));
if(value[0]){
return 0;
}}}}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1073,891,-1))say(64,2693,0);
 if (loop) return(0);if (anyof(902,319,893,-1))say(72,2903,902);
 if (loop) return(0);if (anyof(800,913,-1))say(72,2622,0);
 if (loop) return(0);if (anyof(439,1022,-1))say(72,2622,1);
 if (loop) return(0);if (anyof(593,-1))say(76,2593,593);
 if (loop) return(0);if (anyof(950,-1))say(76,2621,318);
 if (loop) return(0);if (anyof(979,-1))say(76,2692,318);
 if (loop) return(0);if (anyof(1029,-1))say(64,2694,0);
 if (loop) return(0);if (anyof(853,-1))say(76,2689,318);
 if (loop) return(0);if (anyof(937,-1))say(64,2687,0);
 if (loop) return(0);if (anyof(1030,-1))say(72,2686,1);
 if (loop) return(0);if (anyof(781,-1))say(64,2688,0);
 if (loop) return(0);return 0;
}
if (anyof(763,-1))say(72,2622,2);
 if (loop) return(0);if (anyof(848,-1))say(64,3492,0);
 if (loop) return(0);value[0]=(KEY(793));
if(value[0]){
value[0]=(KEY(102));
value[0]&=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(6<=lval[0] && lval[0]<=8);
if(value[0]){
say(64,2300,0);
 if (loop) return(0);}}
value[1151]=1684;*bitword(1151)= -1;
value[1150]=702;*bitword(1150)= -1;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(439,1022,-1))say(64,1424,0);
 if (loop) return(0);value[0]=(have(102,-1,-1));
value[0]&=(anyof(319,757,893,902,747,-1));
if(value[0]){
value[1224]=747;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(319,0,747,902,893,319,-757); if (loop) return(0);
if (anyof(593,439,-1))say(64,2638,0);
 if (loop) return(0);value[0]=(KEY(762));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(have(102,-1,-1));
value[0]&=(6<=lval[0] && lval[0]<=8);
if(value[0]){
say(64,2298,0);
 if (loop) return(0);}
move(702,-1);
p803();
if (loop) return (0);
}}
value[0]=(anyof(979,902,893,439,800,913,950,593,921,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1022,1073,891,937,1029,853,977,1030,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p922(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(940,-1))say(64,2976,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(614,0,-745); if (loop) return(0);
move(616,0,-752); if (loop) return(0);
move(617,0,-751); if (loop) return(0);
move(615,0,-749); if (loop) return(0);
move(587,0,-746); if (loop) return(0);
move(589,0,-748); if (loop) return(0);
if (anyof(747,-1))say(72,2564,747);
 if (loop) return(0);if (anyof(940,-1))say(64,2638,0);
 if (loop) return(0);}
value[0]=(KEY(940));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p621(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(940,-1))say(64,2977,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(614,0,-745); if (loop) return(0);
move(609,0,-746); if (loop) return(0);
move(610,0,-747); if (loop) return(0);
move(617,0,-751); if (loop) return(0);
move(616,0,-752); if (loop) return(0);
move(588,0,-748); if (loop) return(0);
move(590,0,-750); if (loop) return(0);
if (anyof(749,-1))say(72,2564,749);
 if (loop) return(0);}
value[0]=(KEY(940));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p254(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(977,-1))say(64,3158,0);
 if (loop) return(0);if (anyof(1014,17,-1))say(76,3155,593);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(614,0,-745); if (loop) return(0);
move(615,0,-749); if (loop) return(0);
move(611,0,-748); if (loop) return(0);
move(610,0,-747); if (loop) return(0);
move(609,0,-746); if (loop) return(0);
move(587,0,-752); if (loop) return(0);
move(589,0,-750); if (loop) return(0);
if (anyof(751,-1))say(72,2564,751);
 if (loop) return(0);}
return 0;
}
int p791(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(940));
if(value[0]){
say(0,3274,0);
say(64,1266,0);
 if (loop) return(0);}
return 0;
}
value[0]=(anyof(754,848,-1));
value[0]&=(anyof(593,940,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(754,848,940,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(6<=lval[0] && lval[0]<=8);
if(value[0]){
say(8,2565,754);
say(72,2295,751);
 if (loop) return(0);}else{value[0]=(value[102]==1);
if(value[0]){
say(8,2565,754);
say(72,2307,752);
 if (loop) return(0);}else{value[0]=(value[102]==2);
if(value[0]){
say(8,2565,754);
say(72,2307,745);
 if (loop) return(0);}}}}
move(591,-2); if (loop) return(0);
}
move(610,0,-747); if (loop) return(0);
move(611,0,-748); if (loop) return(0);
move(615,0,-749); if (loop) return(0);
move(617,0,-751); if (loop) return(0);
move(588,0,-746); if (loop) return(0);
move(590,0,-752); if (loop) return(0);
if (anyof(745,-1))say(72,2564,745);
 if (loop) return(0);value[0]=(irand(100)<50);
if(value[0]){
move(615,0,-750); if (loop) return(0);
}else{
move(617,0,-750); if (loop) return(0);
}}
value[0]=(KEY(940));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p802(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(822));
if(value[0]){
if (anyof(1000,-1))say(64,3022,0);
 if (loop) return(0);if (anyof(445,940,-1))say(64,3016,0);
 if (loop) return(0);if (anyof(755,-1))say(64,3017,0);
 if (loop) return(0);if (anyof(1072,1072,-1))say(72,3007,0);
 if (loop) return(0);if (anyof(754,-1))say(64,3020,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(1072));
if(value[0]){
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (value[ARG1] == 1072) value[ARG1]=762;
if (value[ARG2] == 1072) value[ARG2]=762;
}}
value[0]=(KEY(762));
if(value[0]){
value[0]=(anyof(755,778,980,954,1072,1072,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(6<=lval[0] && lval[0]<=8);
if(value[0]){
say(72,2299,751);
 if (loop) return(0);}}
value[102] = irand(8-1+1)+1;
say(8,2304,0);
move(590,-2); if (loop) return(0);
}}
value[0]=(KEY(766));
if(value[0]){
p800();
if (loop) return (0);
}
value[0]=(anyof(848,754,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(940));
value[0]&=(value[1147]==592);
value[0]|=(anyof(755,749,1072,954,980,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(4<=lval[0] && lval[0]<=6);
if(value[0]){
say(8,2565,755);
say(72,2295,749);
 if (loop) return(0);}else{value[0]=(value[102]==3);
if(value[0]){
say(8,2565,755);
say(72,2307,748);
 if (loop) return(0);}else{value[0]=(value[102]==2);
if(value[0]){
move(589,-2577); if (loop) return(0);
}}}}
move(589,-2); if (loop) return(0);
}
value[0]=(KEY(940));
value[0]&=(value[1147]==589);
value[0]|=(anyof(754,746,848,1071,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(1<=lval[0] && lval[0]<=3);
if(value[0]){
say(8,2565,754);
say(72,2295,746);
 if (loop) return(0);}else{value[0]=(value[102]==4);
if(value[0]){
say(8,2565,754);
say(72,2307,747);
 if (loop) return(0);}}}
move(592,-2); if (loop) return(0);
}}
value[0]=(anyof(1000,940,1071,980,1072,954,1072,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1151]=1686;*bitword(1151)= -1;
value[1150]=702;*bitword(1150)= -1;
return 0;
}
int p801(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(822));
if(value[0]){
if (anyof(1000,-1))say(72,3022,0);
 if (loop) return(0);if (anyof(445,940,-1))say(64,3015,0);
 if (loop) return(0);if (anyof(754,1071,-1))say(64,3019,0);
 if (loop) return(0);if (anyof(1072,1072,-1))say(72,3007,0);
 if (loop) return(0);if (anyof(755,980,-1))say(64,3018,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
value[0]=(anyof(778,755,954,1072,1072,980,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
value[0]=(value[102]==1);
value[0]|=(value[102]==2);
value[0]|=(value[102]==8);
if(value[0]){
say(72,2299,745);
 if (loop) return(0);}}}
value[102] = irand(7-1+1)+1;
value[0]=(value[102]==3);
if(value[0]){
set('E',102,'c',8,NULL,NULL);
}
say(8,2304,1);
bitmod('s',102,14);
move(587,-2); if (loop) return(0);
}
value[0]=(KEY(766));
if(value[0]){
p800();
if (loop) return (0);
}
value[0]=(anyof(848,754,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(940));
value[0]&=(value[1147]==593);
value[0]|=(anyof(755,751,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(6<=lval[0] && lval[0]<=8);
if(value[0]){
say(8,2565,755);
say(72,2295,751);
 if (loop) return(0);}else{value[0]=(value[102]==5);
if(value[0]){
say(8,2565,755);
say(72,2307,750);
 if (loop) return(0);}}}
move(591,-2); if (loop) return(0);
}
value[0]=(KEY(761));
value[0]&=(value[1147]==593);
if(value[0]){
if (value[ARG1] == 761) value[ARG1]=754;
if (value[ARG2] == 761) value[ARG2]=754;
}
value[0]=(KEY(940));
value[0]&=(value[1147]==591);
value[0]|=(anyof(754,748,1071,848,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(3<=lval[0] && lval[0]<=5);
if(value[0]){
say(8,2565,754);
say(72,2295,748);
 if (loop) return(0);}else{value[0]=(value[102]==6);
if(value[0]){
say(8,2565,754);
say(72,2307,749);
 if (loop) return(0);}}}
value[0]=(bitest(593,16));
if(value[0]){
bitmod('c',593,16);
bitmod('c',593,4);
}
move(593,-2); if (loop) return(0);
}
if (anyof(921,-1))say(64,2638,0);
 if (loop) return(0);if (anyof(980,1072,954,1072,-1))say(64,3023,0);
 if (loop) return(0);}
value[0]=(anyof(1000,940,1071,980,921,1072,954,1072,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1151]=1686;*bitword(1151)= -1;
value[1150]=702;*bitword(1150)= -1;
return 0;
}
int p799(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(173));
if(value[0]){
if (value[ARG1] == 173) value[ARG1]=101;
if (value[ARG2] == 173) value[ARG2]=101;
apport(173,value[1146]);
}
value[0]=(keyword(848,101,-1));
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(593,451,-1))say(64,3012,0);
 if (loop) return(0);if (anyof(445,940,-1))say(64,3014,0);
 if (loop) return(0);if (anyof(755,-1))say(64,3021,0);
 if (loop) return(0);if (anyof(1072,1072,-1))say(72,3007,1);
 if (loop) return(0);return 0;
}
value[0]=(KEY(766));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
default_to(0,703,-1);
}
value[0]=(KEY(143));
value[0]&=(have(143,0,1));
if(value[0]){
set('E',143,'c',2,NULL,NULL);
set('E',101,'c',1,NULL,NULL);
say(64,2628,0);
 if (loop) return(0);}}
value[0]=(KEY(762));
if(value[0]){
value[0]=(anyof(755,778,-1));
value[0]|=(value[1178]==1);
if(value[0]){
say(8,2304,2);
move(702,-1);
p803();
if (loop) return (0);
}}
value[0]=(keyword(765,102,-1));
if(value[0]){
value[0]=(value[102]==0);
if(value[0]){
set('E',102,'c',2,NULL,NULL);
}}
value[0]=(keyword(848,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(755,940,761,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',0,'e',102,lval, lbts);
value[0]=(2<=lval[0] && lval[0]<=4);
if(value[0]){
say(64,2308,0);
 if (loop) return(0);}
value[0]=(value[102]==1);
value[0]|=(value[102]==8);
if(value[0]){
say(8,2565,755);
say(72,2295,745);
 if (loop) return(0);}else{value[0]=(value[102]==7);
if(value[0]){
say(8,2565,755);
say(72,2307,752);
 if (loop) return(0);}}
bitmod('c',593,8);
bitmod('s',592,8);
}
move(592,-2); if (loop) return(0);
}
value[0]=(anyof(745,746,747,748,749,750,751,752,-1));
if(value[0]){
set('V',1157,'v',1144,NULL,NULL);
value[0]=(value[1178]>1);
if(value[0]){
set('V',1157,'v',1145,NULL,NULL);
}
set('V',1224,'v',1157,NULL,NULL);
p152(*bitword(1224),value[1224]);
if (loop) return (0);
say(12,2296,1157);
loop=1; return(0);
}
if (anyof(921,-1))say(64,2638,0);
 if (loop) return(0);if (anyof(1072,1072,954,-1))say(64,3023,0);
 if (loop) return(0);if (anyof(593,451,1071,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(1000,1072,1072,1071,593,451,940,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1151]=1686;*bitword(1151)= -1;
value[1150]=702;*bitword(1150)= -1;
return 0;
}
int p44(void)
{
bitmod('s',593,4);
value[0]=(KEY(822));
if(value[0]){
if (anyof(620,1130,954,954,1001,-1))say(64,2978,0);
 if (loop) return(0);if (anyof(913,-1))say(64,3199,0);
 if (loop) return(0);if (anyof(319,902,893,-1))say(64,3200,0);
 if (loop) return(0);if (anyof(1022,1130,-1))say(64,2709,0);
 if (loop) return(0);if (anyof(1073,1073,891,-1))say(64,1971,0);
 if (loop) return(0);if (anyof(1072,-1))say(72,3007,2);
 if (loop) return(0);return 0;
}
if (anyof(439,950,-1))say(76,1319,1145);
 if (loop) return(0);p138();
if (loop) return (0);
value[0]=(KEY(848));
value[0]&=(anyof(620,1001,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(102,-1,-1));
value[0]&=(KEY(755));
if(value[0]){
value[1224]=751;*bitword(1224)= -1;
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}
move(621,0,751,755,-620); if (loop) return(0);
move(620,0,-752); if (loop) return(0);
move(622,0,-750); if (loop) return(0);
}
value[0]=(anyof(1001,620,1022,1130,319,902,893,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1130,954,954,1073,1073,891,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p749(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(620,1001,-1))say(64,2978,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(620,1001,754,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(623,0,-745); if (loop) return(0);
move(594,0,-752); if (loop) return(0);
move(595,0,-751); if (loop) return(0);
move(596,0,-750); if (loop) return(0);
move(621,0,-749); if (loop) return(0);
value[0]=(anyof(754,848,748,-1));
if(value[0]){
p152(-1,748);
if (loop) return (0);
}
move(627,0,848,754,748,-620); if (loop) return(0);
}
p138();
if (loop) return (0);
value[0]=(anyof(1001,620,1072,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p750(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(620,1001,-1))say(64,2978,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(620,1001,754,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(620,0,-745); if (loop) return(0);
move(622,0,-749); if (loop) return(0);
move(597,0,-750); if (loop) return(0);
move(596,0,-751); if (loop) return(0);
move(595,0,-752); if (loop) return(0);
value[0]=(anyof(754,747,848,-1));
if(value[0]){
p152(-1,747);
if (loop) return (0);
}
move(627,0,848,747,754,-620); if (loop) return(0);
}
p138();
if (loop) return (0);
value[0]=(anyof(1001,620,1072,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p751(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(620,1001,-1))say(64,2978,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(620,1001,754,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(621,0,-745); if (loop) return(0);
move(596,0,-752); if (loop) return(0);
move(597,0,-751); if (loop) return(0);
move(598,0,-750); if (loop) return(0);
move(624,0,-749); if (loop) return(0);
value[0]=(anyof(754,746,848,-1));
if(value[0]){
p152(-1,746);
if (loop) return (0);
}
move(627,0,848,754,746,-620); if (loop) return(0);
}
p138();
if (loop) return (0);
value[0]=(anyof(1001,620,1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p134(void)
{
p138();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(594,0,-751); if (loop) return(0);
move(595,0,-750); if (loop) return(0);
move(620,0,-749); if (loop) return(0);
}
value[0]=(anyof(1072,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p135(void)
{
p138();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(622,0,-745); if (loop) return(0);
move(597,0,-752); if (loop) return(0);
move(598,0,-751); if (loop) return(0);
move(599,0,-750); if (loop) return(0);
move(625,0,-749); if (loop) return(0);
}
value[0]=(anyof(1072,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p136(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(919,919,-1))say(72,3427,2);
 if (loop) return(0);if (anyof(635,-1))say(64,3057,0);
 if (loop) return(0);}
p138();
if (loop) return (0);
value[0]=(keyword(848,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(624,0,-745); if (loop) return(0);
move(598,0,-752); if (loop) return(0);
move(599,0,-751); if (loop) return(0);
move(619,0,-750); if (loop) return(0);
move(618,0,755,-749); if (loop) return(0);
}
value[0]=(anyof(1072,954,919,919,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p722(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(889,893,902,-1))say(64,3059,0);
 if (loop) return(0);if (anyof(635,-1))say(64,3057,0);
 if (loop) return(0);if (anyof(919,-1))say(72,3427,1);
 if (loop) return(0);return 0;
}
p138();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(625,0,-745); if (loop) return(0);
move(599,0,-752); if (loop) return(0);
move(619,0,-751); if (loop) return(0);
move(626,0,-749); if (loop) return(0);
value[0]=(KEY(754));
if(value[0]){
value[0]=(irand(100)<50);
if(value[0]){
move(626,-2); if (loop) return(0);
}else{
move(625,-2); if (loop) return(0);
}}
value[0]=(anyof(747,757,893,902,889,-1));
if(value[0]){
p152(-1,747);
if (loop) return (0);
value[0]=(value[102]>5);
if(value[0]){
say(72,2317,1);
 if (loop) return(0);}else{
say(72,2317,0);
 if (loop) return(0);}}
if (anyof(919,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(1072,954,893,889,919,902,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p137(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(889,893,898,902,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(919,919,-1))say(72,3427,3);
 if (loop) return(0);if (anyof(635,-1))say(64,3057,0);
 if (loop) return(0);}
p138();
if (loop) return (0);
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(618,0,745,-755); if (loop) return(0);
move(619,0,-752); if (loop) return(0);
value[0]=(anyof(747,757,893,902,889,-1));
if(value[0]){
p152(-1,747);
if (loop) return (0);
}
move(628,2361,747,757,893,902,-889); if (loop) return(0);
if (anyof(749,750,751,-1))say(64,2412,0);
 if (loop) return(0);}
value[0]=(anyof(1072,954,919,893,902,889,898,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p189(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(600,0,-750); if (loop) return(0);
move(595,0,-749); if (loop) return(0);
move(620,0,-748); if (loop) return(0);
move(623,0,-747); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p200(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(594,0,-745); if (loop) return(0);
move(600,0,-751); if (loop) return(0);
move(601,0,-750); if (loop) return(0);
move(596,0,-749); if (loop) return(0);
move(621,0,-748); if (loop) return(0);
move(620,0,-747); if (loop) return(0);
move(623,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p204(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(595,0,-745); if (loop) return(0);
move(600,0,-752); if (loop) return(0);
move(601,0,-751); if (loop) return(0);
move(602,0,-750); if (loop) return(0);
move(597,0,-749); if (loop) return(0);
move(622,0,-748); if (loop) return(0);
move(621,0,-747); if (loop) return(0);
move(620,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p205(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(596,0,-745); if (loop) return(0);
move(601,0,-752); if (loop) return(0);
move(602,0,-751); if (loop) return(0);
move(603,0,-750); if (loop) return(0);
move(598,0,-749); if (loop) return(0);
move(624,0,-748); if (loop) return(0);
move(622,0,-747); if (loop) return(0);
move(621,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p206(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(597,0,-745); if (loop) return(0);
move(602,0,-752); if (loop) return(0);
move(603,0,-751); if (loop) return(0);
move(599,0,-749); if (loop) return(0);
move(625,0,-748); if (loop) return(0);
move(624,0,-747); if (loop) return(0);
move(622,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p207(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(598,0,-745); if (loop) return(0);
move(603,0,-752); if (loop) return(0);
move(619,0,755,-749); if (loop) return(0);
move(618,0,-748); if (loop) return(0);
move(625,0,-747); if (loop) return(0);
move(624,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p723(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(635,-1))say(64,3057,0);
 if (loop) return(0);if (anyof(1132,-1))say(64,3058,0);
 if (loop) return(0);if (anyof(919,-1))say(72,3427,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(848,754,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(599,0,745,848,-754); if (loop) return(0);
move(626,0,-748); if (loop) return(0);
move(618,0,-747); if (loop) return(0);
move(625,0,-746); if (loop) return(0);
if (anyof(919,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(919,1132,1131,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p208(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(604,0,-752); if (loop) return(0);
move(606,0,-751); if (loop) return(0);
move(607,0,-750); if (loop) return(0);
move(601,0,-749); if (loop) return(0);
move(596,0,-748); if (loop) return(0);
move(595,0,-747); if (loop) return(0);
move(594,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p209(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(600,0,-745); if (loop) return(0);
move(606,0,-752); if (loop) return(0);
move(607,0,-751); if (loop) return(0);
move(608,0,-750); if (loop) return(0);
move(602,0,-749); if (loop) return(0);
move(597,0,-748); if (loop) return(0);
move(596,0,-747); if (loop) return(0);
move(595,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p210(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(601,0,-745); if (loop) return(0);
move(607,0,-752); if (loop) return(0);
move(608,0,-751); if (loop) return(0);
move(603,0,-749); if (loop) return(0);
move(598,0,-748); if (loop) return(0);
move(597,0,-747); if (loop) return(0);
move(596,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p190(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(602,0,-745); if (loop) return(0);
move(608,0,-752); if (loop) return(0);
move(599,0,-748); if (loop) return(0);
move(598,0,-747); if (loop) return(0);
move(597,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p191(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(72,3024,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(605,0,752,-1003); if (loop) return(0);
move(609,0,-750); if (loop) return(0);
move(606,0,-749); if (loop) return(0);
move(600,0,-748); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,921,1003,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p728(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(64,3025,0);
 if (loop) return(0);if (anyof(1132,-1))say(64,3026,0);
 if (loop) return(0);if (anyof(950,1072,1072,-1))say(64,3027,0);
 if (loop) return(0);if (anyof(1000,-1))say(64,3022,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(604,0,748,1003,-1072); if (loop) return(0);
}
value[0]=(anyof(1000,921,1136,977,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1072,1072,1003,1132,1131,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p192(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(604,0,-745); if (loop) return(0);
move(609,0,-751); if (loop) return(0);
move(610,0,-750); if (loop) return(0);
move(607,0,-749); if (loop) return(0);
move(601,0,-748); if (loop) return(0);
move(600,0,-747); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p193(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(606,0,-745); if (loop) return(0);
move(609,0,-752); if (loop) return(0);
move(610,0,-751); if (loop) return(0);
move(611,0,-750); if (loop) return(0);
move(608,0,-749); if (loop) return(0);
move(602,0,-748); if (loop) return(0);
move(601,0,-747); if (loop) return(0);
move(600,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p194(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(607,0,-745); if (loop) return(0);
move(610,0,-752); if (loop) return(0);
move(611,0,-751); if (loop) return(0);
move(612,0,-750); if (loop) return(0);
move(603,0,-748); if (loop) return(0);
move(602,0,-747); if (loop) return(0);
move(601,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p195(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(613,0,-752); if (loop) return(0);
move(614,0,-751); if (loop) return(0);
move(588,0,-750); if (loop) return(0);
move(610,0,-749); if (loop) return(0);
move(607,0,-748); if (loop) return(0);
move(606,0,-747); if (loop) return(0);
move(604,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p196(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(609,0,-745); if (loop) return(0);
move(614,0,-752); if (loop) return(0);
move(588,0,-751); if (loop) return(0);
move(615,0,-750); if (loop) return(0);
move(611,0,-749); if (loop) return(0);
move(608,0,-748); if (loop) return(0);
move(607,0,-747); if (loop) return(0);
move(606,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p197(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(610,0,-745); if (loop) return(0);
move(588,0,-752); if (loop) return(0);
move(615,0,-751); if (loop) return(0);
move(612,0,-749); if (loop) return(0);
move(608,0,-747); if (loop) return(0);
move(607,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p198(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(72,3024,1);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(611,0,-745); if (loop) return(0);
move(615,0,-752); if (loop) return(0);
move(608,0,-746); if (loop) return(0);
move(676,0,-750); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,1003,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p656(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(64,2368,0);
 if (loop) return(0);if (anyof(950,1072,1072,-1))say(64,3027,0);
 if (loop) return(0);if (anyof(1000,-1))say(64,3022,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(612,0,746,1003,-1072); if (loop) return(0);
}
value[0]=(anyof(1000,921,1136,977,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1072,1072,1003,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p655(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(64,2368,0);
 if (loop) return(0);if (anyof(950,1072,1072,-1))say(64,3027,0);
 if (loop) return(0);if (anyof(1000,-1))say(64,3022,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(613,0,748,1003,-1072); if (loop) return(0);
}
value[0]=(anyof(1000,921,1136,977,954,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1072,1072,1003,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p199(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1003,-1))say(72,3024,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(616,0,-750); if (loop) return(0);
move(614,0,-749); if (loop) return(0);
move(609,0,-748); if (loop) return(0);
move(675,0,-752); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,1003,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p201(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(613,0,-745); if (loop) return(0);
move(616,0,-751); if (loop) return(0);
move(617,0,-750); if (loop) return(0);
move(587,0,-749); if (loop) return(0);
move(610,0,-748); if (loop) return(0);
move(609,0,-747); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p202(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(589,0,-745); if (loop) return(0);
move(617,0,-752); if (loop) return(0);
move(612,0,-748); if (loop) return(0);
move(611,0,-747); if (loop) return(0);
move(610,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p203(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(617,0,-749); if (loop) return(0);
move(590,0,-748); if (loop) return(0);
move(614,0,-747); if (loop) return(0);
move(613,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p211(void)
{
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1072,-1))say(64,1297,0);
 if (loop) return(0);move(616,0,-745); if (loop) return(0);
move(615,0,-748); if (loop) return(0);
move(590,0,-747); if (loop) return(0);
move(614,0,-746); if (loop) return(0);
}
value[0]=(anyof(1072,954,1136,977,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p109(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(308,897,898,-1))say(76,2903,308);
 if (loop) return(0);if (anyof(439,950,-1))say(64,3032,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(626,2362,751,439,-950); if (loop) return(0);
move(629,0,-747); if (loop) return(0);
move(629,0,308,897,-898); if (loop) return(0);
}
value[0]=(anyof(308,897,898,439,950,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p110(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(779,-1))say(64,3031,0);
 if (loop) return(0);value[0]=(anyof(308,897,898,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(628,0,-751); if (loop) return(0);
move(630,0,-747); if (loop) return(0);
value[0]=(KEY(759));
value[0]&=(anyof(308,897,898,-1));
if(value[0]){
p329(-1,628,-1,751,-1,630,-1,747);
if (loop) return (0);
}}
value[0]=(anyof(308,897,898,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p111(void)
{
value[0]=(have(136,-1,-1));
if(value[0]){
value[0]=(value[136]==3);
value[0]|=(value[136]>=7);
if(value[0]){
bitmod('s',evar(1218),10);
}}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);value[0]=(anyof(308,897,898,1017,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(629,0,-751); if (loop) return(0);
move(632,0,-746); if (loop) return(0);
value[0]=(anyof(308,897,898,-1));
if(value[0]){
p329(-1,629,-1,751,-1,632,-1,746);
if (loop) return (0);
}
if (anyof(1017,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(308,897,898,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p112(void)
{
value[0]=(KEY(11));
if(value[0]){
apport(11,value[1146]);
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(897,898,308,-1))say(72,2903,897);
 if (loop) return(0);if (anyof(902,-1))say(72,2593,902);
 if (loop) return(0);if (anyof(1063,-1))say(64,3056,0);
 if (loop) return(0);value[0]=(KEY(889));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,1);
if (loop) return (0);
}
value[0]=(KEY(761));
value[0]&=(value[1147]==631);
if(value[0]){
if (value[ARG1] == 761) {value[ARG1]=745; (void)fake(1,745);}
if (value[ARG2] == 761) {value[ARG2]=745; (void)fake(2,745);}
}
value[0]=(anyof(745,763,793,-1));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(630,0,750,308,897,-898); if (loop) return(0);
move(635,0,747,635,899,913,-849); if (loop) return(0);
value[0]=(KEY(11));
if(value[0]){
p75();
if (loop) return (0);
}
if (anyof(889,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(1063,902,897,898,308,889,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p113(void)
{
value[0]=(KEY(11));
if(value[0]){
apport(11,value[1146]);
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(897,308,898,-1))say(72,2903,897);
 if (loop) return(0);if (anyof(1063,-1))say(64,3056,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,1);
if (loop) return (0);
}
value[0]=(KEY(761));
value[0]&=(value[1147]==632);
if(value[0]){
if (value[ARG1] == 761) {value[ARG1]=749; (void)fake(1,749);}
if (value[ARG2] == 761) {value[ARG2]=749; (void)fake(2,749);}
}
value[0]=(anyof(749,763,793,-1));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(11));
if(value[0]){
p75();
if (loop) return (0);
}
move(633,0,754,745,308,898,-897); if (loop) return(0);
value[0]=(anyof(747,635,899,913,849,-1));
if(value[0]){
bitmod('s',636,16);
move(636,-2); if (loop) return(0);
}}
value[0]=(anyof(1063,308,897,898,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p114(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);value[0]=(anyof(308,1001,897,898,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(631,0,749,-755); if (loop) return(0);
move(634,0,745,-754); if (loop) return(0);
value[0]=(anyof(1001,308,897,898,-1));
if(value[0]){
p329(-1,634,-1,745,-1,631,-1,749);
if (loop) return (0);
}}
value[0]=(anyof(1001,897,308,898,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p115(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(897,308,898,758,-1))say(76,2903,308);
 if (loop) return(0);value[0]=(KEY(156));
if(value[0]){
value[0]=(value[144]==0);
if(value[0]){
say(64,144,0);
 if (loop) return(0);}
say(64,3336,0);
 if (loop) return(0);}
value[0]=(KEY(889));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(633,0,758,308,897,898,-749); if (loop) return(0);
if (anyof(889,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(758,308,897,898,156,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p116(void)
{
p185(-1,74);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);if (anyof(74,-1))say(72,2624,798);
 if (loop) return(0);value[0]=(KEY(159));
value[0]&=(value[2624]==0);
if(value[0]){
set('T',2624,'c',1,NULL,NULL);
}
value[0]=(anyof(575,111,-1));
if(value[0]){
say(0,3283,0);
say(64,1266,0);
 if (loop) return(0);}
return 0;
}
value[0]=(KEY(811));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(KEY(159));
if(value[0]){
say(64,2547,0);
 if (loop) return(0);}}
value[0]=(KEY(159));
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,0);
if (loop) return (0);
}
value[0]=(KEY(793));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(anyof(798,774,-1));
if(value[0]){
value[0]=(KEY(74));
value[0]|=(value[1178]==1);
if(value[0]){
say(76,2624,1144);
 if (loop) return(0);}}
value[0]=(KEY(74));
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(635,899,913,-1));
value[0]|=(anyof(850,751,761,-1));
if(value[0]){
say(0,2546,0);
move(637,-2); if (loop) return(0);
}}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p117(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,0);
if (loop) return (0);
}
value[0]=(KEY(793));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(638,0,747,-849); if (loop) return(0);
move(636,0,751,-850); if (loop) return(0);
value[0]=(anyof(635,899,913,-1));
if(value[0]){
p329(-1,638,-1,747,-1,636,-1,751);
if (loop) return (0);
}}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p721(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,0);
if (loop) return (0);
}
value[0]=(KEY(793));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(632,0,751,635,899,913,-850); if (loop) return(0);
}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p725(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,936,376,-1))say(76,3030,1145);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
p724(0,0);
if (loop) return (0);
}
value[0]=(KEY(793));
if(value[0]){
p75();
if (loop) return (0);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(635,899,913,-1));
value[0]&=(value[1147]==631);
value[0]|=(anyof(747,849,-1));
if(value[0]){
bitmod('s',637,16);
move(637,-2); if (loop) return(0);
}
value[0]=(anyof(635,899,913,-1));
value[0]|=(anyof(751,850,-1));
if(value[0]){
move(631,-2); if (loop) return(0);
}}
value[0]=(anyof(635,899,913,899,1064,1064,996,1002,1010,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p488(void)
{
if (value[ARG1] == 131) value[ARG1]=154;
if (value[ARG2] == 131) value[ARG2]=154;
bitmod('s',155,4);
apport(154,value[1146]);
p50();
if (loop) return (0);
p679(0,0);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(200,565,1005,-1))say(76,2593,1145);
 if (loop) return(0);if (anyof(1003,-1))say(72,2593,1005);
 if (loop) return(0);if (anyof(922,-1))say(64,2419,0);
 if (loop) return(0);if (anyof(1014,17,-1))say(64,2866,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(757,727,-1));
value[0]&=(anyof(1014,17,-1));
if(value[0]){
say(64,2867,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(548,0,-749); if (loop) return(0);
move(554,0,-745); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,554,-1,745,-1,548,-1,749);
if (loop) return (0);
}
if (anyof(958,-1))say(64,2630,0);
 if (loop) return(0);if (anyof(1014,-1))say(64,2867,0);
 if (loop) return(0);value[0]=(KEY(761));
value[0]&=(value[1147]==586);
if(value[0]){
say(72,1387,2);
 if (loop) return(0);}}
value[0]=(anyof(200,1003,565,1005,958,922,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(17,1014,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p502(void)
{
if (value[ARG1] == 131) value[ARG1]=154;
if (value[ARG2] == 131) value[ARG2]=154;
apport(154,value[1146]);
p50();
if (loop) return (0);
p679(0,1);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1001,571,-1))say(72,2854,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(1014,17,-1))say(64,2866,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(757,727,-1));
value[0]&=(anyof(1014,17,-1));
if(value[0]){
say(64,2867,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(547,0,-746); if (loop) return(0);
move(549,0,-750); if (loop) return(0);
move(571,0,752,571,754,-1001); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,547,-1,746,-1,549,-1,750);
if (loop) return (0);
}
if (anyof(958,-1))say(64,2630,0);
 if (loop) return(0);if (anyof(1014,-1))say(64,2867,0);
 if (loop) return(0);}
value[0]=(anyof(1001,958,571,1014,17,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p501(void)
{
p50();
if (loop) return (0);
p679(0,1);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,1001,-1))say(72,2854,2);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(548,0,-747); if (loop) return(0);
move(550,0,-751); if (loop) return(0);
move(558,0,745,958,1001,754,-848); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,548,-1,747,-1,550,-1,751);
if (loop) return (0);
}}
value[0]=(anyof(1001,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p503(void)
{
p50();
if (loop) return (0);
p679(0,0);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1001,-1))say(72,2855,1);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(549,0,-748); if (loop) return(0);
move(551,0,-752); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,549,-1,748,-1,551,-1,752);
if (loop) return (0);
}
if (anyof(1001,754,958,-1))say(72,2855,1);
 if (loop) return(0);}
value[0]=(anyof(1001,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p504(void)
{
p50();
if (loop) return (0);
p679(0,1);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1001,-1))say(72,2854,1);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(1003,-1))say(72,2773,1003);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(550,0,-749); if (loop) return(0);
move(552,0,-745); if (loop) return(0);
move(555,0,747,754,848,1001,958,-1003); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,552,-1,745,-1,550,-1,749);
if (loop) return (0);
}}
value[0]=(anyof(1001,1003,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p500(void)
{
p50();
if (loop) return (0);
p679(0,0);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,1001,-1))say(72,2855,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(1001,754,958,-1))say(72,2855,0);
 if (loop) return(0);move(551,0,-750); if (loop) return(0);
move(553,0,-746); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,553,-1,746,-1,551,-1,750);
if (loop) return (0);
}}
value[0]=(anyof(1001,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p498(void)
{
p50();
if (loop) return (0);
p679(0,1);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1001,-1))say(72,2854,2);
 if (loop) return(0);if (anyof(1002,-1))say(64,2763,0);
 if (loop) return(0);if (anyof(1003,-1))say(72,2593,1003);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(554,0,-747); if (loop) return(0);
move(552,0,-751); if (loop) return(0);
move(562,0,749,754,1001,958,-848); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,554,-1,747,-1,552,-1,751);
if (loop) return (0);
}}
value[0]=(anyof(1001,1003,958,975,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p499(void)
{
value[0]=(anyof(790,796,-1));
value[0]|=(keyword(765,120,-1));
if(!value[0]){
p50();
if (loop) return (0);
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(120,-1))say(64,2859,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,1130,223,-1))say(64,2857,0);
 if (loop) return(0);if (anyof(1003,-1))say(64,2858,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(899,-1))say(64,2417,0);
 if (loop) return(0);if (anyof(975,-1))say(64,2870,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(848,1003,-1));
if(value[0]){
if (anyof(1003,-1))say(64,2858,0);
 if (loop) return(0);}
value[0]=(keyword(757,899,-1));
if(value[0]){
say(64,2710,0);
 if (loop) return(0);}
value[0]=(KEY(899));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(763,-1))say(64,1968,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(547,0,-748); if (loop) return(0);
move(553,0,-752); if (loop) return(0);
move(566,0,750,849,-899); if (loop) return(0);
value[0]=(anyof(439,1002,-1));
if(value[0]){
p329(-1,553,-1,752,-1,547,-1,748);
if (loop) return (0);
}
if (anyof(850,-1))say(72,1713,3);
 if (loop) return(0);}
value[0]=(anyof(223,1130,1003,899,958,975,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p720(void)
{
p679(0,1);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(755,1010,934,573,-1))say(64,2527,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(1001,-1))say(72,2854,0);
 if (loop) return(0);if (anyof(439,-1))say(76,2951,439);
 if (loop) return(0);if (anyof(1001,-1))say(64,2999,0);
 if (loop) return(0);if (anyof(575,-1))say(64,2998,0);
 if (loop) return(0);value[0]=(KEY(571));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(548,0,748,1001,-439); if (loop) return(0);
if (anyof(958,-1))say(64,2630,0);
 if (loop) return(0);if (anyof(571,-1))say(64,1425,0);
 if (loop) return(0);value[0]=(anyof(755,934,573,1010,-1));
if(value[0]){
value[0]=(have(45,-1,-1));
if(value[0]){
value[0]=(bitest(569,16));
if(!value[0]){
say(64,2436,0);
 if (loop) return(0);}
move(572,-2443); if (loop) return(0);
}else{
say(64,2438,0);
 if (loop) return(0);}}}
value[0]=(anyof(439,1010,571,1001,958,573,934,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(575,1001,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p57(void)
{
p679(0,3);
if (loop) return (0);
value[0]=(KEY(790));
value[0]&=(value[1178]==1);
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
return 0;
}}
if (anyof(120,790,-1))say(64,3046,0);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(573,934,-1))say(72,2774,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,0);
 if (loop) return(0);if (anyof(975,975,-1))say(64,3045,0);
 if (loop) return(0);if (anyof(1010,-1))say(72,3047,0);
 if (loop) return(0);if (anyof(996,-1))say(64,3048,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(anyof(763,757,-1));
value[0]&=(KEY(934));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(754,761,-1));
value[0]&=(value[1147]==571);
if(value[0]){
say(64,2439,0);
 if (loop) return(0);}
if (anyof(958,-1))say(64,2630,0);
 if (loop) return(0);value[0]=(anyof(761,763,745,934,573,752,-1));
if(value[0]){
value[0]=(have(45,0,2));
if(value[0]){
move(573,-2437); if (loop) return(0);
}
say(64,2440,0);
 if (loop) return(0);}}
value[0]=(anyof(573,934,958,922,1135,975,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1010,996,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p85(void)
{
p679(0,3);
if (loop) return (0);
value[0]=(KEY(790));
value[0]&=(value[1178]==1);
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
return 0;
}}
if (anyof(120,790,-1))say(64,3049,0);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(934,573,-1))say(72,2774,1);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(936,754,921,-1))say(72,2991,1);
 if (loop) return(0);if (anyof(1010,-1))say(72,3047,1);
 if (loop) return(0);if (anyof(575,-1))say(64,2998,0);
 if (loop) return(0);return 0;
}
value[0]=(anyof(921,1130,754,936,-1));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(848,-1))say(72,1826,1);
 if (loop) return(0);}
value[0]=(anyof(757,763,-1));
value[0]&=(KEY(934));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(746,1010,575,-1));
if(value[0]){
value[0]=(have(45,0,2));
if(value[0]){
say(76,2104,45);
 if (loop) return(0);}
move(574,-2); if (loop) return(0);
}
value[0]=(KEY(761));
value[0]&=(value[1147]==572);
value[0]|=(anyof(763,749,934,573,748,-1));
if(value[0]){
value[0]=(have(45,0,2));
if(value[0]){
move(572,-2437); if (loop) return(0);
}
say(64,2440,0);
 if (loop) return(0);}
if (anyof(958,-1))say(72,1826,1);
 if (loop) return(0);}
value[0]=(anyof(934,573,936,921,1010,575,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p84(void)
{
p679(0,3);
if (loop) return (0);
if (anyof(848,-1))say(72,1826,2);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(120,575,-1))say(72,2490,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(754,936,921,-1))say(72,2991,0);
 if (loop) return(0);if (anyof(1130,-1))say(64,2988,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(573,0,-750); if (loop) return(0);
if (anyof(848,958,-1))say(72,1826,2);
 if (loop) return(0);value[0]=(anyof(757,746,575,-1));
if(value[0]){
value[0]=(bitest(575,4));
if(value[0]){
move(575,-2489); if (loop) return(0);
}
set('V',1180,'c',47,NULL,NULL);
say(64,1321,0);
 if (loop) return(0);}}
value[0]=(anyof(958,1130,575,1130,921,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p905(void)
{
p185(-1,8);
if (loop) return (0);
value[0]=(KEY(798));
value[0]&=(anyof(8,74,134,129,1018,30,-1));
if(value[0]){
say(64,1880,0);
 if (loop) return(0);}
if (value[ARG1] == 8) value[ARG1]=19;
if (value[ARG2] == 8) value[ARG2]=19;
set('E',19,'c',0,NULL,NULL);
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(64,3378,0);
 if (loop) return(0);if (anyof(74,-1))say(64,1880,0);
 if (loop) return(0);if (anyof(120,1074,937,575,-1))say(72,2490,1);
 if (loop) return(0);if (anyof(206,-1))say(76,1849,206);
 if (loop) return(0);if (anyof(1075,376,-1))say(64,2996,0);
 if (loop) return(0);value[0]=(value[575]>0);
if(value[0]){
if (anyof(897,898,308,-1))say(64,2981,0);
 if (loop) return(0);}
return 0;
}
value[0]=(keyword(765,206,-1));
if(value[0]){
say(76,1849,206);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(574,0,748,-758); if (loop) return(0);
value[0]=(value[575]==1);
if(value[0]){
value[0]=(value[1262]==0);
if(value[0]){
p147();
if (loop) return (0);
loop=1; return(0);
}
set('E',576,'c',1,NULL,NULL);
bitmod('c',575,8);
move(576,0,757,576,308,897,898,-752); if (loop) return(0);
}
if (anyof(752,757,-1))say(72,2503,752);
 if (loop) return(0);}
value[0]=(anyof(8,74,134,129,1018,30,-1));
value[0]|=(anyof(206,575,1075,376,74,1074,937,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(897,898,308,576,-1));
value[0]&=(value[575]>0);
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
return 0;
}
int p594(void)
{
value[0]=(value[576]==0);
if(value[0]){
set('E',19,'c',1,NULL,NULL);
}else{
set('E',19,'c',0,NULL,NULL);
}
p185(-1,19);
if (loop) return (0);
if (value[ARG1] == 8) value[ARG1]=19;
if (value[ARG2] == 8) value[ARG2]=19;
value[0]=(value[576]==1);
if(value[0]){
value[0]=(anyof(8,74,1018,134,129,30,-1));
if(value[0]){
value[0]=(anyof(798,822,-1));
value[0]|=(keyword(798,8,-1));
if(value[0]){
say(64,1880,0);
 if (loop) return(0);}
bitmod('s',evar(1180),1);
}
value[0]=(value[1262]==0);
if(value[0]){
p147();
if (loop) return (0);
loop=1; return(0);
}}
if (anyof(74,1018,134,129,30,-1))say(76,1319,1145);
 if (loop) return(0);value[0]=(KEY(798));
if(value[0]){
if (anyof(19,-1))say(76,1560,8);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(898,897,308,576,-1))say(72,2903,898);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(748,758,-1));
if(value[0]){
value[0]=(value[576]==1);
if(value[0]){
move(575,0,748,-758); if (loop) return(0);
}else{
say(72,2503,752);
 if (loop) return(0);}}
move(577,0,752,754,898,897,-576); if (loop) return(0);
}
value[0]=(anyof(898,897,308,576,758,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p595(void)
{
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(309));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
if (anyof(898,308,897,-1))say(72,2902,897);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(578,0,-745); if (loop) return(0);
move(576,0,755,-748); if (loop) return(0);
move(579,0,754,-751); if (loop) return(0);
value[0]=(anyof(898,897,308,-1));
if(value[0]){
p329(-1,576,-1,748,-1,579,-1,751);
if (loop) return (0);
}
if (anyof(309,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(898,308,897,309,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p598(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(898,897,308,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(1026,-1))say(64,3050,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(577,0,758,750,308,898,-897); if (loop) return(0);
}
value[0]=(anyof(898,897,308,1026,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p596(void)
{
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(309));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
if (anyof(308,898,897,-1))say(72,2902,898);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(577,0,-747); if (loop) return(0);
move(580,0,750,-754); if (loop) return(0);
value[0]=(anyof(755,745,-1));
if(value[0]){
set('E',639,'c',0,NULL,NULL);
move(639,-2); if (loop) return(0);
if (anyof(898,308,897,-1))say(72,2904,898);
 if (loop) return(0);}
if (anyof(309,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(309,898,897,308,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p807(void)
{
p185(-1,74);
if (loop) return (0);
value[0]=(anyof(129,74,936,1018,30,134,-1));
if(value[0]){
value[0]=(anyof(798,822,-1));
if(value[0]){
say(64,2653,0);
 if (loop) return(0);}
if (anyof(792,-1))say(64,1329,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(981,902,893,-1))say(72,2478,0);
 if (loop) return(0);if (anyof(308,898,897,-1))say(76,2903,308);
 if (loop) return(0);if (anyof(1067,936,-1))say(72,3051,1067);
 if (loop) return(0);return 0;
}
value[0]=(keyword(852,1067,-1));
if(value[0]){
if (value[ARG1] == 852) value[ARG1]=848;
if (value[ARG2] == 852) value[ARG2]=848;
}
value[0]=(anyof(981,893,902,-1));
value[0]&=(anyof(848,755,-1));
value[0]|=(keyword(848,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(640,2537,755,848,893,981,-902); if (loop) return(0);
move(579,0,750,897,898,-308); if (loop) return(0);
}
value[0]=(anyof(129,74,936,1018,30,134,-1));
value[0]|=(anyof(1067,981,897,898,308,893,902,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p804(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(898,897,308,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(754,893,902,981,-1))say(64,2479,0);
 if (loop) return(0);if (anyof(1067,-1))say(76,3051,1145);
 if (loop) return(0);if (anyof(936,-1))say(72,3051,1067);
 if (loop) return(0);return 0;
}
value[0]=(keyword(852,1067,-1));
if(value[0]){
if (value[ARG1] == 852) value[ARG1]=848;
if (value[ARG2] == 852) value[ARG2]=848;
}
value[0]=(KEY(848));
value[0]&=(anyof(981,754,-1));
value[0]|=(keyword(754,981,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(754,848,981,893,902,-1));
if(value[0]){
set('E',639,'c',1,NULL,NULL);
move(639,-2537); if (loop) return(0);
}
move(641,0,747,898,897,-308); if (loop) return(0);
}
value[0]=(anyof(1067,981,936,898,897,308,893,902,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p19(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(376,754,-1))say(72,2019,19);
 if (loop) return(0);if (anyof(936,-1))say(64,3429,0);
 if (loop) return(0);if (anyof(898,897,308,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(1010,-1))say(64,3053,0);
 if (loop) return(0);if (anyof(451,-1))say(64,3054,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
value[0]&=(anyof(755,757,641,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(747,641,1010,-1));
if(value[0]){
value[0]=(bitest(642,4));
if(value[0]){
move(642,-2426); if (loop) return(0);
}
set('V',1180,'c',20,NULL,NULL);
say(64,2554,0);
 if (loop) return(0);}
move(640,0,751,898,897,-308); if (loop) return(0);
value[0]=(KEY(762));
if(value[0]){
say(8,2447,0);
move(702,-1);
p154();
if (loop) return (0);
}}
value[0]=(anyof(1010,376,898,897,308,451,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=702;*bitword(1150)= -1;
value[1151]=2427;*bitword(1151)= -1;
return 0;
}
int p9(void)
{
value[0]=(value[642]==0);
if(value[0]){
set('E',642,'c',1,NULL,NULL);
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(64,3429,0);
 if (loop) return(0);p22(0,0);
if (loop) return (0);
return 0;
}
p21(0,0);
if (loop) return (0);
return 0;
}
int p10(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
p21(0,1);
if (loop) return (0);
return 0;
}
int p11(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
p21(0,1);
if (loop) return (0);
return 0;
}
int p12(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
p21(0,2);
if (loop) return (0);
return 0;
}
int p13(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
p21(0,2);
if (loop) return (0);
return 0;
}
int p14(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(651,0,-750); if (loop) return(0);
}
p21(0,1);
if (loop) return (0);
return 0;
}
int p15(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
p21(0,1);
if (loop) return (0);
return 0;
}
int p16(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(376,754,-1))say(76,2593,376);
 if (loop) return(0);if (anyof(16,-1))say(64,3041,0);
 if (loop) return(0);return 0;
}
p21(0,3);
if (loop) return (0);
value[0]=(KEY(16));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p18(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(376,754,-1))say(72,2019,20);
 if (loop) return(0);if (anyof(31,-1))say(64,2046,0);
 if (loop) return(0);if (anyof(911,899,-1))say(64,2047,0);
 if (loop) return(0);if (anyof(16,1022,-1))say(64,2048,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(31));
if(value[0]){
if (anyof(773,-1))say(64,1446,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(762));
value[0]&=(anyof(755,641,31,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(451,0,-747); if (loop) return(0);
move(649,0,-751); if (loop) return(0);
value[0]=(KEY(762));
if(value[0]){
say(8,2447,3);
move(702,-1);
p154();
if (loop) return (0);
}}
value[0]=(anyof(376,31,911,16,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=702;*bitword(1150)= -1;
value[1148]=702;*bitword(1148)= -1;
value[1151]=2427;*bitword(1151)= -1;
value[1149]=2428;*bitword(1149)= -1;
return 0;
}
int p597(void)
{
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(309));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
if (anyof(898,308,897,-1))say(72,2902,897);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(581,0,745,-308); if (loop) return(0);
move(582,0,754,-750); if (loop) return(0);
move(579,0,755,-746); if (loop) return(0);
value[0]=(anyof(898,897,308,-1));
if(value[0]){
p329(-1,582,-1,750,-1,579,-1,746);
if (loop) return (0);
}
if (anyof(897,898,308,-1))say(72,2904,897);
 if (loop) return(0);if (anyof(309,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(308,898,309,897,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p599(void)
{
value[0]=(anyof(268,137,-1));
if(value[0]){
value[0]=(KEY(822));
if(value[0]){
say(64,2538,0);
 if (loop) return(0);}else{
if (anyof(848,-1))say(64,1541,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}}
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(300));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
if (anyof(898,308,897,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(1066,1015,-1))say(64,3052,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(580,0,758,898,897,308,-748); if (loop) return(0);
if (anyof(300,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(1015,1066,897,898,308,300,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p600(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(898,897,308,-1))say(72,2903,898);
 if (loop) return(0);if (anyof(922,902,-1))say(64,3042,0);
 if (loop) return(0);if (anyof(900,-1))say(64,3043,0);
 if (loop) return(0);if (anyof(958,1001,538,480,-1))say(64,3044,0);
 if (loop) return(0);value[0]=(KEY(576));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(keyword(900,758,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(556,2539,758,755,749,902,-1001); if (loop) return(0);
move(556,2539,922,900,538,-480); if (loop) return(0);
move(580,0,746,898,897,308,757,-576); if (loop) return(0);
}
value[0]=(anyof(576,898,897,308,900,902,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(922,958,1001,538,480,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=556;*bitword(1150)= -1;
value[1151]=2566;*bitword(1151)= -1;
return 0;
}
int p489(void)
{
p679(0,4);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1001,-1))say(72,2854,2);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(120,1000,-1))say(64,2753,0);
 if (loop) return(0);if (anyof(439,-1))say(72,2743,1);
 if (loop) return(0);if (anyof(1003,-1))say(72,2773,1003);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(551,0,751,-755); if (loop) return(0);
move(556,0,-748); if (loop) return(0);
move(557,0,747,754,1001,-958); if (loop) return(0);
if (anyof(439,-1))say(72,2160,0);
 if (loop) return(0);if (anyof(1003,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(439,1003,958,1001,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p490(void)
{
p679(0,4);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
value[0]=(anyof(928,932,1130,45,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(value[556]==1);
value[0]|=(value[1178]==1);
value[0]|=(KEY(932));
value[0]&=!(bitest(45,4));
if(value[0]){
bitmod('s',571,8);
set('E',556,'c',2,NULL,NULL);
apport(45,value[1146]);
bitmod('s',45,4);
say(64,2497,0);
 if (loop) return(0);}
value[0]=(KEY(45));
value[0]|=(value[1178]==1);
if(!value[0]){
value[0]=(KEY(928));
if(value[0]){
value[0]=(value[556]==1);
value[0]&=!(bitest(45,4));
if(value[0]){
if (value[ARG1] == 928) {value[ARG1]=45; (void)fake(1,45);}
if (value[ARG2] == 928) {value[ARG2]=45; (void)fake(2,45);}
return 0;
}
say(64,2007,0);
 if (loop) return(0);}
value[0]=(KEY(1130));
if(!value[0]){
say(76,2033,1145);
 if (loop) return(0);}}}
if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(1001,-1))say(64,2856,0);
 if (loop) return(0);if (anyof(131,973,1015,-1))say(64,2876,0);
 if (loop) return(0);if (anyof(1130,-1))say(64,2878,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
if(value[0]){
if (anyof(131,-1))say(64,2877,0);
 if (loop) return(0);value[0]=(anyof(754,755,958,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(848,958,1001,754,-1))say(64,2856,0);
 if (loop) return(0);value[0]=(anyof(752,755,761,-1));
if(value[0]){
value[0]=(value[556]==0);
if(value[0]){
set('E',556,'c',1,NULL,NULL);
say(64,2498,0);
 if (loop) return(0);}
move(555,-2); if (loop) return(0);
}}
value[0]=(anyof(958,1001,1015,131,973,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p491(void)
{
p679(0,4);
if (loop) return (0);
if (value[ARG1] == 131) value[ARG1]=153;
if (value[ARG2] == 131) value[ARG2]=153;
if (anyof(153,-1))say(76,1445,153);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(439,-1))say(72,2743,1);
 if (loop) return(0);if (anyof(1001,-1))say(72,2854,2);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(555,0,751,755,-1001); if (loop) return(0);
move(564,0,746,754,-958); if (loop) return(0);
move(558,0,-749); if (loop) return(0);
if (anyof(439,-1))say(72,2160,0);
 if (loop) return(0);}
value[0]=(anyof(439,1001,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p492(void)
{
p679(0,4);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(439,-1))say(72,2743,1);
 if (loop) return(0);if (anyof(1000,-1))say(64,2753,0);
 if (loop) return(0);if (anyof(934,573,755,31,766,-1))say(64,2527,0);
 if (loop) return(0);if (anyof(1001,-1))say(72,2854,1);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(899,575,-1))say(76,2593,1145);
 if (loop) return(0);return 0;
}
value[0]=(KEY(762));
if(value[0]){
value[0]=(anyof(755,934,573,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(702,-1);
say(0,2837,0);
p154();
if (loop) return (0);
}}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(557,0,752,754,1001,848,-958); if (loop) return(0);
move(549,0,748,-755); if (loop) return(0);
if (anyof(934,573,-1))say(64,1773,0);
 if (loop) return(0);if (anyof(439,-1))say(72,2160,0);
 if (loop) return(0);if (anyof(575,899,-1))say(64,2630,0);
 if (loop) return(0);}
value[0]=(anyof(439,950,1000,934,573,1001,958,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(899,575,31,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=702;*bitword(1150)= -1;
value[1151]=2567;*bitword(1151)= -1;
return 0;
}
int p493(void)
{
if (value[ARG1] == 131) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 131) {value[ARG2]=153; (void)fake(2,153);}
p679(0,4);
if (loop) return (0);
if (value[ARG1] == 202) {value[ARG1]=197; (void)fake(1,197);}
if (value[ARG2] == 202) {value[ARG2]=197; (void)fake(2,197);}
value[0]=(value[153]==1);
if(value[0]){
set('E',559,'c',1,NULL,NULL);
}
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(1013));
if(value[0]){
value[0]=(value[153]==1);
if(value[0]){
say(72,2864,1);
 if (loop) return(0);}else{
say(72,2864,0);
 if (loop) return(0);}}
if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(445,872,-1))say(76,2979,445);
 if (loop) return(0);if (anyof(197,755,-1))say(64,1764,0);
 if (loop) return(0);if (anyof(11,-1))say(76,1765,153);
 if (loop) return(0);if (anyof(1001,-1))say(64,2856,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(755,197,-1));
if(value[0]){
say(64,1764,0);
 if (loop) return(0);}
value[0]=(value[153]==1);
if(value[0]){
if (value[ARG1] == 11) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 11) {value[ARG2]=153; (void)fake(2,153);}
}
value[0]=(anyof(749,763,-1));
value[0]&=(value[153]==0);
value[0]|=(KEY(762));
if(value[0]){
say(64,2434,0);
 if (loop) return(0);}
value[0]=(KEY(848));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(anyof(754,958,1001,-1));
if(value[0]){
say(64,2836,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=(KEY(153));
value[0]&=(value[153]!=1);
if(value[0]){
say(64,2432,0);
 if (loop) return(0);}}
value[0]=(KEY(763));
value[0]&=(KEY(197));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(153));
if(value[0]){
value[0]=(anyof(763,848,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(120));
if(value[0]){
say(64,2835,0);
 if (loop) return(0);}
value[0]=(KEY(757));
if(value[0]){
value[0]=(value[153]==1);
if(value[0]){
set('T',3229,'c',1,NULL,NULL);
move(560,-2433); if (loop) return(0);
}else{
bitmod('s',evar(1180),1);
return 0;
}}}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(563,0,747,-1013); if (loop) return(0);
value[0]=(anyof(749,763,848,-1));
if(value[0]){
set('T',3229,'c',1,NULL,NULL);
move(560,-2433); if (loop) return(0);
}}
value[0]=(anyof(1001,958,197,1013,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=702;*bitword(1150)= -1;
value[1151]=2568;*bitword(1151)= -1;
return 0;
}
int p494(void)
{
if (value[ARG1] == 131) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 131) {value[ARG2]=153; (void)fake(2,153);}
p679(0,4);
if (loop) return (0);
if (value[ARG1] == 202) {value[ARG1]=197; (void)fake(1,197);}
if (value[ARG2] == 202) {value[ARG2]=197; (void)fake(2,197);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(975,-1))say(64,3435,0);
 if (loop) return(0);if (anyof(197,755,-1))say(64,1764,0);
 if (loop) return(0);if (anyof(11,-1))say(76,1765,153);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(1013,-1))say(72,2864,2);
 if (loop) return(0);return 0;
}
if (anyof(975,-1))say(76,3322,153);
 if (loop) return(0);value[0]=(KEY(848));
value[0]&=(anyof(755,197,-1));
if(value[0]){
say(64,1764,0);
 if (loop) return(0);}
if (anyof(762,-1))say(64,2434,0);
 if (loop) return(0);value[0]=(KEY(11));
if(value[0]){
if (value[ARG1] == 11) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 11) {value[ARG2]=153; (void)fake(2,153);}
}
value[0]=(KEY(763));
value[0]&=(anyof(197,153,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(153));
if(value[0]){
value[0]=(KEY(848));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(757));
if(value[0]){
value[0]=(value[153]==1);
if(value[0]){
set('T',3229,'c',0,NULL,NULL);
move(559,-2433); if (loop) return(0);
}else{
bitmod('s',evar(1180),1);
return 0;
}}
value[0]=(KEY(120));
if(value[0]){
say(64,2835,0);
 if (loop) return(0);}}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(745,848,763,-1));
if(value[0]){
set('T',3229,'c',0,NULL,NULL);
move(559,-2433); if (loop) return(0);
}
move(561,0,747,1013,-565); if (loop) return(0);
}
value[0]=(anyof(197,958,11,1013,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=702;*bitword(1150)= -1;
value[1151]=2568;*bitword(1151)= -1;
return 0;
}
int p495(void)
{
p679(0,2);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(1001,-1))say(72,2854,1);
 if (loop) return(0);if (anyof(1137,975,-1))say(64,2870,0);
 if (loop) return(0);if (anyof(922,-1))say(72,2860,922);
 if (loop) return(0);if (anyof(950,-1))say(64,2595,0);
 if (loop) return(0);if (anyof(921,-1))say(72,2594,921);
 if (loop) return(0);return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(950,439,921,-1))say(64,2638,0);
 if (loop) return(0);move(553,0,752,-755); if (loop) return(0);
move(563,0,748,-754); if (loop) return(0);
}
value[0]=(anyof(958,1001,975,922,950,921,975,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p496(void)
{
p679(0,2);
if (loop) return (0);
if (value[ARG1] == 131) value[ARG1]=974;
if (value[ARG2] == 131) value[ARG2]=974;
value[0]=(KEY(822));
if(value[0]){
if (anyof(1013,-1))say(72,2894,1);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(1001,-1))say(72,2854,1);
 if (loop) return(0);if (anyof(950,-1))say(64,2595,0);
 if (loop) return(0);if (anyof(922,-1))say(72,2860,922);
 if (loop) return(0);if (anyof(197,-1))say(76,2952,197);
 if (loop) return(0);return 0;
}
value[0]=(KEY(974));
if(value[0]){
if (anyof(848,-1))say(72,2669,1);
 if (loop) return(0);say(72,2431,974);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(761));
value[0]&=(value[1147]==570);
if(value[0]){
say(64,2525,0);
 if (loop) return(0);}
value[0]=(anyof(749,754,197,-1));
if(value[0]){
set('T',3229,'c',0,NULL,NULL);
move(559,-2); if (loop) return(0);
}
move(562,0,745,-755); if (loop) return(0);
move(564,0,-752); if (loop) return(0);
move(566,2486,-747); if (loop) return(0);
value[0]=(KEY(1013));
if(value[0]){
set('T',3229,'c',0,NULL,NULL);
p329(-1,564,-1,752,-1,559,-1,749);
if (loop) return (0);
}}
value[0]=(KEY(773));
if(value[0]){
value[0]=(KEY(899));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,2871,0);
 if (loop) return(0);}}
value[0]=(anyof(1013,958,197,1001,950,922,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[1150]=566;*bitword(1150)= -1;
value[1151]=2569;*bitword(1151)= -1;
return 0;
}
int p497(void)
{
value[0]=(ishere(165,-1,-1));
if(value[0]){
value[165] += 1;
}
p679(0,4);
if (loop) return (0);
if (value[ARG1] == 131) {value[ARG1]=974; (void)fake(1,974);}
if (value[ARG2] == 131) {value[ARG2]=974; (void)fake(2,974);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1013,-1))say(72,2894,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(974,-1))say(76,2670,1145);
 if (loop) return(0);if (anyof(973,-1))say(64,2025,0);
 if (loop) return(0);if (anyof(1001,-1))say(64,2895,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(974));
if(value[0]){
if (anyof(848,-1))say(72,2669,0);
 if (loop) return(0);say(72,1445,974);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
if (anyof(754,755,745,746,748,749,751,752,1001,-1))say(64,2895,0);
 if (loop) return(0);value[0]=(anyof(750,755,747,1013,761,-1));
if(value[0]){
value[0]=(ishere(165,-1,-1));
if(value[0]){
set('E',165,'c',3,NULL,NULL);
say(0,165,0);
apport(165,702);
}
move(557,0,750,-755); if (loop) return(0);
move(563,0,-747); if (loop) return(0);
value[0]=(KEY(1013));
if(value[0]){
p329(-1,557,-1,750,-1,563,-1,747);
if (loop) return (0);
}}}
value[0]=(anyof(1013,958,974,973,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p83(void)
{
p679(0,4);
if (loop) return (0);
p185(-1,74);
if (loop) return (0);
value[0]=(anyof(74,1018,134,129,30,-1));
if(value[0]){
value[0]=(anyof(798,822,-1));
if(value[0]){
set('T',2643,'c',2,NULL,NULL);
bitmod('s',evar(1218),5);
say(64,2483,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
bitmod('s',evar(1178),5);
say(76,1507,1144);
 if (loop) return(0);}
say(76,1885,74);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(172,899,755,-1))say(64,2775,0);
 if (loop) return(0);if (anyof(565,-1))say(64,1382,0);
 if (loop) return(0);if (anyof(757,751,966,-1))say(64,1383,0);
 if (loop) return(0);if (anyof(439,-1))say(72,2743,1);
 if (loop) return(0);if (anyof(1001,-1))say(64,2856,0);
 if (loop) return(0);if (anyof(1011,-1))say(72,2851,1);
 if (loop) return(0);if (anyof(475,-1))say(64,2982,0);
 if (loop) return(0);if (anyof(936,-1))say(64,2983,0);
 if (loop) return(0);if (anyof(1010,934,573,-1))say(64,1747,0);
 if (loop) return(0);if (anyof(921,-1))say(64,2985,0);
 if (loop) return(0);if (anyof(891,1073,-1))say(64,2986,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
if(value[0]){
if (anyof(1001,754,-1))say(64,2856,0);
 if (loop) return(0);if (anyof(565,936,475,-1))say(64,2984,0);
 if (loop) return(0);}
value[1150]=702;*bitword(1150)= -1;
value[1151]=2570;*bitword(1151)= -1;
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(565,0,757,751,-565); if (loop) return(0);
value[0]=(KEY(745));
if(value[0]){
set('T',3229,'c',1,NULL,NULL);
move(560,-2); if (loop) return(0);
}
if (anyof(439,-1))say(72,2160,0);
 if (loop) return(0);if (anyof(573,934,-1))say(64,1773,0);
 if (loop) return(0);}
value[0]=(anyof(74,1018,134,129,30,-1));
value[0]|=(anyof(565,1073,966,439,573,934,1001,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p830(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(KEY(822));
if(value[0]){
if (anyof(376,754,-1))say(72,2019,18);
 if (loop) return(0);}
value[0]=(value[565]<3);
value[0]&=(have(67,-1,-1));
if(value[0]){
value[565] += 1;
}
value[0]=(anyof(758,747,-1));
value[0]&=(value[565]<4);
value[0]&=(isnear(67,-1,-1));
if(value[0]){
p831(0,0);
if (loop) return (0);
loop=1; return(0);
}
value[0]=(value[565]==4);
if(value[0]){
if (anyof(758,747,-1))say(64,2423,0);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(893,-1))say(72,1385,3);
 if (loop) return(0);if (anyof(755,757,7,-1))say(64,2528,0);
 if (loop) return(0);}
value[0]=(anyof(755,757,7,759,893,-1));
if(value[0]){
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
apport(67,565);
set('E',565,'c',5,NULL,NULL);
apport(147,572);
value[0]=(have(107,-1,-1));
if(value[0]){
apport(107,547);
}
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(have(value[1154],-1,-1));
if(value[0]){
set('L',2,'c',1,lval, lbts);
value[0]=(bitest(evar(1154),16));
if(value[0]){
lval[0]=value[value[1154]];lbts[0*VARSIZE]= *bitword(1154);value[0]=(lval[0]==2);
if(value[0]){
set('L',2,'c',0,lval, lbts);
}}
value[0]=(lval[2]==1);
if(value[0]){
lval[1] = irand(5);
value[0]=(lval[1]==4);
if(value[0]){
apport(value[1154],548);
}else{value[0]=(lval[1]==3);
if(value[0]){
apport(value[1154],566);
}else{value[0]=(lval[1]==2);
if(value[0]){
apport(value[1154],547);
}else{value[0]=(lval[1]==1);
if(value[0]){
apport(value[1154],561);
}else{
apport(value[1154],565);
}}}}
value[0]=(value[1154]==119);
if(value[0]){
set('E',119,'c',2,NULL,NULL);
}}}}
move(547,-1);
bitmod('c',evar(1178),0);
say(0,2422,0);
p400();
if (loop) return (0);
loop=1; return(0);
}
say(64,1403,0);
 if (loop) return(0);}}
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(565));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
if (anyof(960,-1))say(72,1385,0);
 if (loop) return(0);if (anyof(475,376,-1))say(72,1385,1);
 if (loop) return(0);if (anyof(920,-1))say(72,1385,2);
 if (loop) return(0);if (anyof(1137,-1))say(72,1385,4);
 if (loop) return(0);if (anyof(936,-1))say(72,1385,5);
 if (loop) return(0);if (anyof(758,966,-1))say(64,2777,0);
 if (loop) return(0);if (anyof(1011,-1))say(72,2851,0);
 if (loop) return(0);if (anyof(1012,-1))say(64,2852,0);
 if (loop) return(0);return 0;
}
value[0]=(anyof(936,1137,960,1011,-1));
if(value[0]){
if (anyof(808,-1))say(76,2493,1145);
 if (loop) return(0);value[0]=(KEY(1011));
if(value[0]){
if (anyof(792,-1))say(64,1329,0);
 if (loop) return(0);}
if (anyof(792,-1))say(76,2850,1145);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(561,0,758,761,-747); if (loop) return(0);
value[0]=(keyword(759,565,-1));
if(value[0]){
say(76,2620,565);
 if (loop) return(0);}
value[0]=(KEY(757));
if(value[0]){
value[0]=(KEY(565));
value[0]|=(value[1178]==1);
if(value[0]){
say(76,2620,565);
 if (loop) return(0);}}}
value[0]=(value[565]==4);
value[0]&=(KEY(7));
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(anyof(960,475,376,936,920,1137,966,1011,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(KEY(1012));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p81(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(790));
if(value[0]){
(*procs[790])();
if (loop) return (0);
}
p679(0,0);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1131,1132,-1))say(64,2872,0);
 if (loop) return(0);if (anyof(922,-1))say(64,2419,0);
 if (loop) return(0);if (anyof(1130,921,-1))say(72,2640,0);
 if (loop) return(0);if (anyof(1001,747,-1))say(72,2855,1);
 if (loop) return(0);if (anyof(538,-1))say(64,2874,0);
 if (loop) return(0);if (anyof(899,120,-1))say(64,2875,0);
 if (loop) return(0);if (anyof(172,-1))say(64,2873,0);
 if (loop) return(0);if (anyof(950,-1))say(72,2952,950);
 if (loop) return(0);if (anyof(996,-1))say(64,3272,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(757,899,-1));
if(value[0]){
say(64,2710,0);
 if (loop) return(0);}
value[0]=(KEY(848));
value[0]&=(anyof(754,751,1130,921,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(554,0,745,755,-850); if (loop) return(0);
move(567,0,754,749,-849); if (loop) return(0);
value[0]=(anyof(899,1131,-1));
if(value[0]){
p329(-1,554,-1,745,-1,567,-1,749);
if (loop) return (0);
}
value[0]=(anyof(754,848,751,-1));
if(value[0]){
set('L',0,'v',1202,lval, lbts);
lval[0] += 2;
value[0]=(lval[0]>9);
if(value[0]){
set('L',0,'c',9,lval, lbts);
}
lval[0] *= 10;
value[0]=(irand(100)<lval[0]);
if(value[0]){
move(563,-2484); if (loop) return(0);
}
say(64,2485,0);
 if (loop) return(0);}
if (anyof(538,-1))say(64,2874,0);
 if (loop) return(0);}
value[0]=(KEY(763));
if(value[0]){
if (value[1144]<LPROC && value[1144]>= 0) (*procs[value[1144]])(); else pcall(value[1144]);
if (loop) return (0);
}
value[0]=(anyof(899,922,1131,1130,921,1001,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p82(void)
{
value[0]=(KEY(790));
if(value[0]){
(*procs[790])();
if (loop) return (0);
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1131,1132,-1))say(64,2872,0);
 if (loop) return(0);if (anyof(899,120,-1))say(64,2875,0);
 if (loop) return(0);if (anyof(172,-1))say(64,2873,0);
 if (loop) return(0);if (anyof(921,-1))say(72,2640,1);
 if (loop) return(0);if (anyof(996,-1))say(64,2639,0);
 if (loop) return(0);if (anyof(1017,-1))say(64,2980,0);
 if (loop) return(0);return 0;
}
value[0]=(keyword(757,899,-1));
if(value[0]){
say(64,2710,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(899,1131,-1));
if(value[0]){
p329(-1,566,-1,746,-1,568,-1,752);
if (loop) return (0);
}
move(566,0,746,755,-850); if (loop) return(0);
move(568,0,752,754,172,-849); if (loop) return(0);
}
value[0]=(KEY(763));
if(value[0]){
if (value[1144]<LPROC && value[1144]>= 0) (*procs[value[1144]])(); else pcall(value[1144]);
if (loop) return (0);
}
value[0]=(anyof(899,172,996,921,1017,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p66(void)
{
p679(0,3);
if (loop) return (0);
value[0]=(KEY(822));
if(value[0]){
if (anyof(1131,1132,-1))say(64,2872,0);
 if (loop) return(0);if (anyof(172,748,-1))say(64,2873,0);
 if (loop) return(0);if (anyof(899,120,-1))say(64,2875,0);
 if (loop) return(0);if (anyof(921,-1))say(72,2640,2);
 if (loop) return(0);if (anyof(751,750,749,934,-1))say(64,2527,0);
 if (loop) return(0);if (anyof(1130,1130,-1))say(64,2988,0);
 if (loop) return(0);if (anyof(754,888,-1))say(64,2987,0);
 if (loop) return(0);value[0]=(KEY(1010));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(anyof(848,754,-1));
value[0]&=(anyof(754,888,921,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(keyword(757,899,-1));
if(value[0]){
say(64,2710,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(567,0,899,755,850,1131,172,-748); if (loop) return(0);
move(569,0,754,-848); if (loop) return(0);
value[0]=(anyof(751,849,750,752,934,-1));
if(value[0]){
value[0]=(have(45,-1,-1));
if(value[0]){
value[0]=(bitest(569,16));
if(value[0]){
say(72,2630,2);
 if (loop) return(0);}
say(72,2630,1);
 if (loop) return(0);}
say(72,2630,0);
 if (loop) return(0);}
if (anyof(1010,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(1131,1132,1130,1010,1130,921,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(934,899,172,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p890(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(571,-1))say(64,2868,0);
 if (loop) return(0);if (anyof(913,-1))say(64,2869,0);
 if (loop) return(0);value[0]=(anyof(934,573,755,-1));
if(value[0]){
bitmod('s',569,16);
set('T',1878,'c',0,NULL,NULL);
say(64,2526,0);
 if (loop) return(0);}
return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(754,755,571,763,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(570,0,754,747,571,-763); if (loop) return(0);
move(568,0,755,-848); if (loop) return(0);
if (anyof(934,573,-1))say(64,1773,0);
 if (loop) return(0);value[0]=(KEY(762));
if(value[0]){
move(702,-1);
say(0,1768,0);
p154();
if (loop) return (0);
}}
value[0]=(irand(100)<50);
if(value[0]){
value[1150]=568;*bitword(1150)= -1;
}else{
value[1150]=702;*bitword(1150)= -1;
}
value[1151]=2567;*bitword(1151)= -1;
value[0]=(anyof(934,573,571,913,1130,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p891(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(439,-1))say(72,2743,1);
 if (loop) return(0);if (anyof(950,120,1000,-1))say(64,2753,0);
 if (loop) return(0);if (anyof(958,-1))say(72,1767,1);
 if (loop) return(0);if (anyof(921,-1))say(64,2985,0);
 if (loop) return(0);if (anyof(755,1010,480,1013,-1))say(64,2990,0);
 if (loop) return(0);if (anyof(571,-1))say(64,2992,0);
 if (loop) return(0);if (anyof(1073,-1))say(76,2993,1145);
 if (loop) return(0);if (anyof(1001,-1))say(64,2994,0);
 if (loop) return(0);if (anyof(451,-1))say(64,2995,0);
 if (loop) return(0);return 0;
}
value[0]=(KEY(848));
if(value[0]){
if (anyof(754,921,958,-1))say(64,2989,0);
 if (loop) return(0);value[0]=(value[1178]==1);
if(value[0]){
value[1145]=571;*bitword(1145)= -1;
}else{value[0]=(anyof(755,480,1013,1010,571,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}}}
value[0]=(keyword(762,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(569,0,751,-571); if (loop) return(0);
move(563,3467,-762); if (loop) return(0);
move(563,0,755,747,1010,1013,-480); if (loop) return(0);
if (anyof(958,-1))say(64,2989,0);
 if (loop) return(0);if (anyof(439,-1))say(72,2160,0);
 if (loop) return(0);if (anyof(451,-1))say(64,1425,0);
 if (loop) return(0);}
value[1150]=563;*bitword(1150)= -1;
value[1151]=2571;*bitword(1151)= -1;
value[0]=(value[1178]==1);
if(value[0]){
if (anyof(950,120,1000,-1))say(64,2753,0);
 if (loop) return(0);if (anyof(1073,891,-1))say(76,2993,1145);
 if (loop) return(0);}
value[0]=(anyof(439,950,571,480,1013,1000,958,921,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(anyof(1010,1073,1001,451,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p483(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(755,917,-1))say(72,2393,1);
 if (loop) return(0);if (anyof(754,-1))say(64,2882,0);
 if (loop) return(0);return 0;
}
if (anyof(781,-1))say(64,2893,0);
 if (loop) return(0);value[0]=(anyof(766,762,-1));
value[0]&=(anyof(755,757,778,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(545,2880,754,761,-758); if (loop) return(0);
value[0]=(anyof(762,766,766,766,-1));
if(value[0]){
p224(0,0);
if (loop) return (0);
}}
return 0;
}
int p941(void)
{
bitmod('s',674,4);
value[0]=(value[671]<3);
if(value[0]){
value[671] += 1;
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(72,2033,936);
 if (loop) return(0);if (anyof(120,-1))say(64,2885,0);
 if (loop) return(0);if (anyof(1016,-1))say(64,2889,0);
 if (loop) return(0);if (anyof(202,899,-1))say(64,2888,0);
 if (loop) return(0);if (anyof(754,376,-1))say(72,2019,12);
 if (loop) return(0);return 0;
}
value[0]=(anyof(730,757,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(200,2886,706,-710); if (loop) return(0);
if (anyof(745,746,747,748,749,750,751,752,936,-1))say(64,2884,0);
 if (loop) return(0);if (anyof(761,849,202,899,-1))say(64,2887,0);
 if (loop) return(0);if (anyof(837,120,-1))say(72,1713,0);
 if (loop) return(0);if (anyof(850,-1))say(64,3388,0);
 if (loop) return(0);}
if (anyof(1016,-1))say(64,2891,0);
 if (loop) return(0);value[0]=(anyof(899,202,376,936,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p709(void)
{
p185(-1,1080);
if (loop) return (0);
p297(-1,1933,-1,1080);
if (loop) return (0);
value[0]=(KEY(117));
if(value[0]){
if (anyof(765,822,-1))say(64,3434,0);
 if (loop) return(0);}
value[0]=(KEY(193));
if(value[0]){
value[0]=(KEY(775));
if(value[0]){
say(0,1845,0);
p154();
if (loop) return (0);
}
say(64,3487,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(1016,-1))say(64,2890,0);
 if (loop) return(0);if (anyof(376,754,-1))say(72,2019,12);
 if (loop) return(0);value[0]=(KEY(447));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(765));
if(value[0]){
if (anyof(13,139,-1))say(76,1408,1145);
 if (loop) return(0);if (anyof(1016,-1))say(64,2891,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(448,0,-750); if (loop) return(0);
if (anyof(447,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(447,1016,193,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p62(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(1137,1039,206,-1))say(64,3175,0);
 if (loop) return(0);if (anyof(893,902,-1))say(72,2903,893);
 if (loop) return(0);if (anyof(936,-1))say(64,3176,0);
 if (loop) return(0);value[0]=(KEY(447));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(448,0,-750); if (loop) return(0);
move(450,0,746,893,-902); if (loop) return(0);
if (anyof(447,-1))say(64,1425,0);
 if (loop) return(0);}
value[0]=(anyof(447,1039,1137,206,893,902,936,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p819(void)
{
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(112));
value[0]&=!(bitest(112,18));
if(value[0]){
if (value[ARG1] == 112) value[ARG1]=1134;
if (value[ARG2] == 112) value[ARG2]=1134;
}
if (anyof(376,754,-1))say(72,2019,12);
 if (loop) return(0);if (anyof(209,-1))say(64,3188,0);
 if (loop) return(0);if (anyof(1016,-1))say(64,2890,0);
 if (loop) return(0);value[0]=(KEY(447));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
return 0;
}
value[0]=(keyword(765,1016,-1));
if(value[0]){
say(64,2891,0);
 if (loop) return(0);}
value[0]=(KEY(209));
value[0]&=(anyof(848,755,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(KEY(746));
if(value[0]){
value[0]=(bitest(450,4));
if(value[0]){
move(449,-2); if (loop) return(0);
}
move(447,-2); if (loop) return(0);
}
if (anyof(447,-1))say(64,1425,0);
 if (loop) return(0);if (anyof(209,-1))say(64,3189,0);
 if (loop) return(0);}
value[0]=(anyof(447,209,1016,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p176(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
move(449,0,-750); if (loop) return(0);
move(585,0,746,754,749,751,-745); if (loop) return(0);
value[0]=(anyof(747,748,755,752,-1));
if(value[0]){
p872();
if (loop) return (0);
}}
return 0;
}
int p177(void)
{
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(745,746,747,748,749,750,751,752,754,755,-1));
if(value[0]){
value[0]=(irand(100)<25);
if(value[0]){
move(450,-2); if (loop) return(0);
}
value[0]=(irand(100)<40);
if(value[0]){
move(585,-2); if (loop) return(0);
}
p872();
if (loop) return (0);
}}
return 0;
}
int p449(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(652,0,-752); if (loop) return(0);
move(653,0,-746); if (loop) return(0);
move(647,0,-748); if (loop) return(0);
}
p467(0,2);
if (loop) return (0);
return 0;
}
int p450(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(651,0,-748); if (loop) return(0);
}
p467(0,2);
if (loop) return (0);
return 0;
}
int p451(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(651,0,-750); if (loop) return(0);
move(654,0,-746); if (loop) return(0);
move(656,0,-752); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p452(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(655,0,-746); if (loop) return(0);
move(653,0,-750); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p453(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(654,0,-750); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p454(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(653,0,-748); if (loop) return(0);
move(657,0,-752); if (loop) return(0);
move(658,0,-751); if (loop) return(0);
}
p467(0,2);
if (loop) return (0);
return 0;
}
int p455(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(656,0,-748); if (loop) return(0);
move(655,0,-747); if (loop) return(0);
}
p467(0,2);
if (loop) return (0);
return 0;
}
int p456(void)
{
if (anyof(1068,-1))say(64,3033,0);
 if (loop) return(0);value[0]=(keyword(765,1069,-1));
if(value[0]){
say(64,3035,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
p22(0,2);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(bitest(670,4));
if(!value[0]){
move(652,0,-749); if (loop) return(0);
}
move(661,0,-750); if (loop) return(0);
move(659,0,-751); if (loop) return(0);
move(657,0,-745); if (loop) return(0);
}
p467(0,2);
if (loop) return (0);
return 0;
}
int p457(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(658,0,-747); if (loop) return(0);
move(660,0,-751); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p458(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(659,0,-747); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p459(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(658,0,-746); if (loop) return(0);
move(662,0,-750); if (loop) return(0);
move(663,0,-751); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p460(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(661,0,-752); if (loop) return(0);
value[0]=(bitest(670,4));
if(!value[0]){
move(651,0,-747); if (loop) return(0);
}}
p467(0,1);
if (loop) return (0);
return 0;
}
int p461(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(661,0,-747); if (loop) return(0);
move(664,0,-751); if (loop) return(0);
move(665,0,-752); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p462(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(663,0,-747); if (loop) return(0);
move(662,0,-750); if (loop) return(0);
}
p467(0,0);
if (loop) return (0);
return 0;
}
int p463(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(666,0,-746); if (loop) return(0);
move(663,0,-748); if (loop) return(0);
move(668,0,-750); if (loop) return(0);
move(669,0,-752); if (loop) return(0);
}
p467(0,0);
if (loop) return (0);
return 0;
}
int p464(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,1);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(value[1147]==665);
if(value[0]){
move(657,0,-747); if (loop) return(0);
}
move(665,0,-750); if (loop) return(0);
move(667,0,-752); if (loop) return(0);
}
p467(0,1);
if (loop) return (0);
return 0;
}
int p465(void)
{
value[0]=(KEY(822));
if(value[0]){
p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(666,0,-748); if (loop) return(0);
move(670,0,-751); if (loop) return(0);
value[0]=(value[1147]==666);
if(value[0]){
move(655,0,-747); if (loop) return(0);
}}
p467(0,0);
if (loop) return (0);
return 0;
}
int p468(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(64,3429,0);
 if (loop) return(0);p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(665,0,-746); if (loop) return(0);
}
p467(0,0);
if (loop) return (0);
return 0;
}
int p469(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(64,3429,0);
 if (loop) return(0);p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(665,0,-748); if (loop) return(0);
}
p467(0,0);
if (loop) return (0);
return 0;
}
int p466(void)
{
value[0]=(value[170]>1);
if(value[0]){
set('E',170,'c',1,NULL,NULL);
value[0]=(anyof(745,857,-1));
if(value[0]){
set('V',1172,'c',3,NULL,NULL);
say(64,3397,0);
 if (loop) return(0);}
value[0]=(KEY(856));
if(value[0]){
say(64,3477,0);
 if (loop) return(0);}}
value[0]=(KEY(767));
if(value[0]){
value[0]=(KEY(170));
value[0]|=(value[1178]==1);
if(value[0]){
if (value[ARG1] == 767) value[ARG1]=798;
if (value[ARG2] == 767) value[ARG2]=798;
}}
value[0]=(KEY(170));
if(value[0]){
if (value[ARG1] == 822) value[ARG1]=798;
if (value[ARG2] == 822) value[ARG2]=798;
}
p185(-1,170);
if (loop) return (0);
value[0]=(KEY(170));
value[0]|=(value[1178]==1);
value[0]&=(KEY(798));
if(value[0]){
value[0]=(value[1172]==0);
if(value[0]){
set('V',1172,'c',1,NULL,NULL);
}
say(64,2784,0);
 if (loop) return(0);}
value[0]=(KEY(170));
value[0]|=(value[1178]==1);
value[0]&=(KEY(765));
if(value[0]){
value[0]=(value[1172]==3);
if(value[0]){
say(64,3398,0);
 if (loop) return(0);}
say(0,2782,0);
value[0]=(value[1172]==1);
if(value[0]){
set('V',1172,'c',2,NULL,NULL);
}
value[0]=(value[1172]==2);
if(value[0]){
set('E',170,'c',2,NULL,NULL);
}
loop=1; return(0);
}
value[0]=(KEY(170));
if(value[0]){
value[0]=(anyof(808,807,-1));
if(value[0]){
say(76,2783,1144);
 if (loop) return(0);}
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(822));
if(value[0]){
if (anyof(936,-1))say(64,3429,0);
 if (loop) return(0);p22(0,0);
if (loop) return (0);
return 0;
}
value[0]=(anyof(759,762,-1));
value[0]|=(value[1178]==1);
if(value[0]){
move(667,0,-747); if (loop) return(0);
}
p467(0,0);
if (loop) return (0);
value[0]=(KEY(1018));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p402(void)
{
value[0]=(anyof(745,746,747,748,749,750,751,752,754,755,758,-1));
if(value[0]){
move(515,-2); if (loop) return(0);
}
return 0;
}
int p625(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(lbitest(0,0,lval,lbts));
if(value[0]){
value[0]=(ishere(lval[0],-1,-1));
if(value[0]){
say(72,3463,lval[0]);
 if (loop) return(0);}
say(72,1513,lval[0]);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);return 0;
}
int p397(void)
{
value[0]=(isnear(123,0,4));
value[0]|=(isnear(119,0,4));
value[0]|=(ishere(121,-1,-1));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
bitmod('s',evar(1178),5);
say(76,1507,121);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);}
say(76,1319,121);
 if (loop) return(0);return 0;
}
int p398(void)
{
value[0]=(isnear(136,-1,-1));
value[0]&=(value[136]>=7);
value[0]|=(isnear(136,0,3));
value[0]|=(isnear(123,0,3));
value[0]|=(isnear(119,0,3));
value[0]|=(bitest(evar(1146),17));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
bitmod('s',evar(1178),5);
say(76,1507,1144);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);}
say(76,1319,120);
 if (loop) return(0);return 0;
}
int p364(void)
{
value[0]=(value[1178]==1);
value[0]|=(bitest(evar(1145),0));
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1180),2));
value[0]&=!(KEY(822));
if(value[0]){
say(64,3320,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1180),1));
if(value[0]){
if (anyof(765,-1))say(76,3065,1145);
 if (loop) return(0);if (anyof(808,807,-1))say(64,1329,0);
 if (loop) return(0);if (anyof(783,800,785,-1))say(64,3315,0);
 if (loop) return(0);}
value[0]=(anyof(798,774,796,804,769,768,767,769,-1));
value[0]|=(anyof(815,801,795,771,788,789,790,775,772,-1));
value[0]|=(anyof(791,799,802,803,811,813,814,-1));
if(value[0]){
value[0]=(value[3313]==0);
if(value[0]){
say(12,3313,1145);
say(76,3314,1144);
 if (loop) return(0);}else{
say(12,3313,1144);
say(76,3314,1145);
 if (loop) return(0);}}
return 0;
}
int p39(void)
{
value[0]=(KEY(121));
if(value[0]){
p397();
if (loop) return (0);
}
value[0]=(KEY(120));
if(value[0]){
p398();
if (loop) return (0);
}
value[0]=(anyof(1099,93,1100,-1));
value[0]&=(ishere(85,-1,-1));
if(value[0]){
if (anyof(93,-1))say(72,3443,0);
 if (loop) return(0);if (anyof(1099,-1))say(72,3443,1);
 if (loop) return(0);if (anyof(1100,-1))say(72,3443,2);
 if (loop) return(0);}
if (anyof(928,-1))say(64,2007,0);
 if (loop) return(0);value[0]=(anyof(376,475,-1));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]|=(bitest(evar(1146),18));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}}
if (anyof(1023,-1))say(64,2957,0);
 if (loop) return(0);value[0]=(KEY(977));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
bitmod('s',evar(1180),2);
}}
value[0]=(KEY(936));
value[0]&=!(bitest(evar(1146),7));
if(value[0]){
if (anyof(848,-1))say(64,3456,0);
 if (loop) return(0);if (anyof(822,-1))say(72,2033,936);
 if (loop) return(0);if (anyof(783,784,785,-1))say(72,3455,889);
 if (loop) return(0);say(64,1403,0);
 if (loop) return(0);}
value[0]=(anyof(1014,17,-1));
value[0]&=(bitest(evar(1146),7));
value[0]&=!(586<=value[1146] && value[1146]<=702);
if(value[0]){
say(64,3156,0);
 if (loop) return(0);}
value[0]=(KEY(954));
if(value[0]){
value[0]=(isnear(33,-1,-1));
value[0]|=(547<=value[1146] && value[1146]<=554);
value[0]|=(594<=value[1146] && value[1146]<=619);
value[0]|=(587<=value[1146] && value[1146]<=590);
value[0]|=(620<=value[1146] && value[1146]<=626);
value[0]|=(440<=value[1146] && value[1146]<=442);
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
bitmod('s',evar(1178),5);
say(76,1507,1144);
 if (loop) return(0);}else{value[0]=(KEY(765));
if(value[0]){
say(72,1849,954);
 if (loop) return(0);}else{value[0]=(KEY(822));
if(value[0]){
value[0]=(isnear(33,-1,-1));
if(value[0]){
say(32,33,0);
loop=1; return(0);
}
value[0]=(547<=value[1146] && value[1146]<=554);
if(value[0]){
say(64,2612,0);
 if (loop) return(0);}
value[0]=(440<=value[1146] && value[1146]<=442);
if(value[0]){
say(64,2614,0);
 if (loop) return(0);}
say(64,2613,0);
 if (loop) return(0);}else{
flush_command();
say(64,1403,0);
 if (loop) return(0);}}}}}
value[0]=(bitest(evar(1146),15));
if(value[0]){
if (anyof(1000,-1))say(64,3444,0);
 if (loop) return(0);}
value[0]=(KEY(1058));
value[0]&=(have(49,-1,-1));
if(value[0]){
if (anyof(822,-1))say(64,3445,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
}
value[0]=(anyof(992,988,-1));
if(value[0]){
value[0]=(bitest(evar(1146),7));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
say(76,1849,1144);
 if (loop) return(0);}
say(76,1849,1145);
 if (loop) return(0);}else{
say(64,2931,0);
 if (loop) return(0);}}
value[0]=(KEY(967));
value[0]&=!(bitest(evar(1146),7));
if(value[0]){
say(64,3385,0);
 if (loop) return(0);}
value[0]=(KEY(1008));
value[0]&=(isnear(148,-1,-1));
if(value[0]){
value[0]=(value[1178]==2);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
bitmod('s',evar(1178),5);
say(76,1507,1144);
 if (loop) return(0);}
value[0]=(KEY(1057));
if(value[0]){
value[0]=(value[HERE]==220||value[HERE]==462||value[HERE]==463||value[HERE]==464||value[HERE]==473);
value[0]|=(value[HERE]==474||value[HERE]==475||value[HERE]==282||value[HERE]==448);
value[0]|=(isnear(110,-1,-1));
value[0]|=(isnear(112,-1,-1));
value[0]|=(isnear(111,-1,-1));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}}
value[0]=(KEY(779));
value[0]&=(value[1178]>1);
value[0]&=!(KEY(107));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
value[0]=(KEY(1027));
if(value[0]){
value[0]=(value[1144]==1027);
if(value[0]){
say(76,2970,1144);
 if (loop) return(0);}else{
say(76,2970,1145);
 if (loop) return(0);}}
if (anyof(994,995,-1))say(64,3486,0);
 if (loop) return(0);if (anyof(946,-1))say(64,3121,0);
 if (loop) return(0);if (anyof(945,-1))say(64,3120,0);
 if (loop) return(0);value[0]=(bitest(evar(1180),1));
if(value[0]){
if (anyof(922,-1))say(72,2380,922);
 if (loop) return(0);if (anyof(89,-1))say(76,2380,89);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(bitest(evar(1144),0));
value[0]&=(isnear(value[1144],-1,-1));
if(value[0]){
value[0]=(bitest(evar(1144),8));
if(value[0]){
say(76,1772,1144);
 if (loop) return(0);}else{
bitmod('s',evar(1178),5);
say(76,1507,1144);
 if (loop) return(0);}}
value[0]=(764<=value[1144] && value[1144]<=820);
value[0]|=(KEY(730));
if(value[0]){
bitmod('s',evar(1178),5);
say(64,2608,0);
 if (loop) return(0);}
value[0]=(887<=value[1144] && value[1144]<=903);
if(value[0]){
say(64,1424,0);
 if (loop) return(0);}
value[0]=(904<=value[1144] && value[1144]<=1128);
value[0]&=!(bitest(evar(1180),1));
value[0]&=!(bitest(evar(1180),2));
if(value[0]){
say(76,1319,1144);
 if (loop) return(0);}else{
say(76,1349,1144);
 if (loop) return(0);}
}else{value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(1052));
value[0]&=(bitest(evar(1146),7));
if(value[0]){
say(72,3139,1052);
 if (loop) return(0);}
value[0]=(KEY(1051));
value[0]&=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
say(72,3139,1051);
 if (loop) return(0);}}}
if (anyof(939,-1))say(64,1403,0);
 if (loop) return(0);value[0]=(value[1178]==2);
value[0]&=(bitest(evar(1145),0));
if(value[0]){
value[0]=(bitest(evar(1180),1));
if(value[0]){
value[0]=(anyof(785,800,783,-1));
if(value[0]){
say(64,3315,0);
 if (loop) return(0);}
say(64,1352,0);
 if (loop) return(0);}
value[0]=(KEY(120));
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
say(64,2080,0);
 if (loop) return(0);}
}else{value[0]=(KEY(168));
if(value[0]){
value[0]=(KEY(765));
if(value[0]){
say(72,2679,0);
 if (loop) return(0);}
if (anyof(766,-1))say(72,2679,1);
 if (loop) return(0);}else{value[0]=(KEY(3));
if(value[0]){
value[0]=(KEY(765));
if(value[0]){
say(72,2682,0);
 if (loop) return(0);}
if (anyof(766,-1))say(72,2682,1);
 if (loop) return(0);}}}
value[0]=(isnear(value[1145],-1,-1));
value[0]|=(bitest(evar(1180),1));
value[0]|=(bitest(evar(1180),2));
if(value[0]){
p364();
if (loop) return (0);
say(12,1997,1144);
say(76,1998,1145);
 if (loop) return(0);}else{value[0]=(bitest(evar(1145),4));
value[0]|=(bitest(evar(1145),10));
value[0]|=(bitest(evar(1145),8));
value[0]|=(KEY(13));
if(value[0]){
say(76,1319,1145);
 if (loop) return(0);}else{
say(64,1493,0);
 if (loop) return(0);}}}
value[0]=(bitest(evar(1145),1));
if(value[0]){
value[0]=(KEY(547));
if(value[0]){
say(76,1319,1145);
 if (loop) return(0);}}
value[0]=(value[1145]==781);
if(value[0]){
say(72,3201,781);
 if (loop) return(0);}
value[0]=(904<=value[1145] && value[1145]<=1138);
if(value[0]){
if (anyof(1007,-1))say(64,2820,0);
 if (loop) return(0);if (anyof(1006,-1))say(64,1403,0);
 if (loop) return(0);value[0]=(anyof(784,1130,1137,-1));
if(value[0]){
say(0,1403,0);
}else{value[0]=(anyof(936,376,475,-1));
value[0]&=!(bitest(evar(1146),7));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}else{
value[0]=(904<=value[1145] && value[1145]<=1128);
if(value[0]){
value[0]=(bitest(evar(1180),1));
value[0]|=(bitest(evar(1180),2));
if(value[0]){
p364();
if (loop) return (0);
say(64,1403,0);
 if (loop) return(0);}else{
say(12,1319,1145);
}
}else{
value[0]=(KEY(1136));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(!value[0]){
say(72,1319,1136);
 if (loop) return(0);}}
p364();
if (loop) return (0);
say(12,1997,1144);
say(12,1998,1145);
}}}
}else{
say(0,1493,0);
}
loop=1; return(0);
return 0;
}
int p888(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
lval[0]=value[value[1251]];lbts[0*VARSIZE]= *bitword(1251);value[0]=(lval[0]==3);
value[0]|=(value[136]>=7);
if(value[0]){
value[1253]=120;*bitword(1253)= -1;
}else{
value[0]=(lval[0]==4);
if(value[0]){
value[1253]=121;*bitword(1253)= -1;
}else{
value[0]=(lval[0]==5);
if(value[0]){
value[1253]=122;*bitword(1253)= -1;
}else{
value[0]=(lval[0]==value[87]);
if(value[0]){
value[1253]=87;*bitword(1253)= -1;
}else{
set('V',1253,'c',0,NULL,NULL);
}}}}
value[1154]=120;*bitword(1154)= -1;
value[1154] += lval[0];
if (lbts[0*VARSIZE]==-1) *bitword(1154*VARSIZE)= -1;
return 0;
}
int p218(void)
{
value[0]=(value[1251]==0);
if(value[0]){
say(64,3240,0);
 if (loop) return(0);}
p888();
if (loop) return (0);
value[0]=(value[1253]==122);
if(value[0]){
value[0]=(isnear(194,-1,-1));
if(value[0]){
say(64,3352,0);
 if (loop) return(0);}
say(0,2255,0);
}
value[value[1251]]=2;
value[0]=(value[1251]==123);
if(!value[0]){
bitmod('s',evar(1148),13);
}
value[0]=(value[1255]==1);
if(value[0]){
set('V',1255,'c',0,NULL,NULL);
return 0;
}
say(12,1370,1253);
say(12,1371,1251);
value[0]=(value[1251]==123);
if(value[0]){
say(64,1266,0);
 if (loop) return(0);}else{
bitmod('s',evar(1148),13);
value[0]=(value[1148]==value[1146]);
if(value[0]){
say(64,1372,0);
 if (loop) return(0);}else{
say(64,1266,0);
 if (loop) return(0);}}
return 0;
}
int p321(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(have(136,-1,-1));
if(value[0]){
value[0]=(value[136]==3);
value[0]|=(value[136]>=7);
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
return 0;
}}
value[0]=(have(119,0,3));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
return 0;
}
value[0]=(have(123,0,3));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
return 0;
}
value[0]=(ishere(136,-1,-1));
if(value[0]){
value[0]=(value[136]==3);
value[0]|=(value[136]>=7);
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
return 0;
}}
value[0]=(ishere(119,0,3));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
return 0;
}
value[0]=(ishere(123,0,3));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
return 0;
}
value[0]=(lval[0]==1);
if(value[0]){
say(76,1513,120);
 if (loop) return(0);}
set('V',1251,'c',0,NULL,NULL);
return 0;
}
int p903(void)
{
value[0]=(value[1251]==0);
if(value[0]){
p321(0,1);
if (loop) return (0);
}
value[0]=(isnear(139,-1,-1));
if(value[0]){
say(64,2088,0);
 if (loop) return(0);}
value[value[1251]]=2;
value[0]=(value[1251]==123);
if(value[0]){
say(76,1839,123);
 if (loop) return(0);}
say(12,1373,120);
say(12,1557,1251);
value[0]=(value[13]==2);
if(value[0]){
set('E',13,'c',0,NULL,NULL);
bitmod('s',14,10);
say(0,2085,0);
}else{
value[0]=(value[13]==1);
if(value[0]){
set('E',13,'c',2,NULL,NULL);
say(0,2084,0);
}else{
set('E',13,'c',1,NULL,NULL);
say(0,2083,0);
}
bitmod('c',14,10);
}
set('E',14,'e',13,NULL,NULL);
say(0,1266,0);
say(64,13,0);
 if (loop) return(0);return 0;
}
int p304(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(isnear(13,-1,-1));
if(value[0]){
say(64,2089,0);
 if (loop) return(0);}
value[0]=(isnear(139,0,2));
if(value[0]){
say(64,3450,0);
 if (loop) return(0);}
value[0]=(have(136,0,6));
value[0]|=(have(151,-1,-1));
if(!value[0]){
say(64,1755,0);
 if (loop) return(0);}
value[0]=(have(151,-1,-1));
value[0]&=!(anyof(136,87,-1));
if(value[0]){
value[0]=(value[151]==2);
value[0]|=(anyof(767,813,-1));
if(!value[0]){
say(0,2386,0);
}
apport(151,702);
apport(152,INHAND);
set('L',0,'c',1,lval, lbts);
}else{
set('E',136,'c',1,NULL,NULL);
apport(85,702);
set('V',1169,'c',0,NULL,NULL);
set('L',0,'c',0,lval, lbts);
}
set('V',1169,'c',0,NULL,NULL);
value[0]=(value[139]==0);
if(value[0]){
say(8,2086,lval[0]);
set('E',139,'c',1,NULL,NULL);
set('E',441,'c',1,NULL,NULL);
set('E',442,'c',1,NULL,NULL);
set('E',440,'c',1,NULL,NULL);
set('V',1201,'c',0,NULL,NULL);
}else{
bitmod('c',443,8);
say(8,2087,lval[0]);
set('E',139,'c',2,NULL,NULL);
set('E',140,'c',2,NULL,NULL);
bitmod('c',140,10);
set('E',441,'c',2,NULL,NULL);
set('E',442,'c',2,NULL,NULL);
set('E',440,'c',2,NULL,NULL);
}
say(0,1266,0);
say(64,139,0);
 if (loop) return(0);return 0;
}
int p127(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(test("doall"));
if(value[0]){
set('L',1,'c',1,lval, lbts);
}
value[0]=(bitest(evar(1145),16));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]>1);
if(value[0]){
value[0]=(lval[1]==0);
if(value[0]){
say(12,2104,1145);
}
loop=1; return(0);
}}
return 0;
}
int p320(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(have(119,0,4));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
return 0;
}
value[0]=(have(123,0,4));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
return 0;
}
value[0]=(ishere(119,0,4));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
return 0;
}
value[0]=(ishere(123,0,4));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
return 0;
}
value[0]=(lval[0]==1);
if(value[0]){
say(76,1513,121);
 if (loop) return(0);}
set('V',1251,'c',0,NULL,NULL);
return 0;
}
int p634(void)
{
value[0]=(value[1251]==0);
if(value[0]){
p320(0,1);
if (loop) return (0);
}
value[value[1251]]=2;
value[0]=(value[1251]==123);
if(!value[0]){
bitmod('s',evar(1146),13);
}
value[0]=(value[8]==0);
if(value[0]){
set('E',8,'c',1,NULL,NULL);
say(64,1407,0);
 if (loop) return(0);}
say(12,1987,121);
say(76,1988,8);
 if (loop) return(0);return 0;
}
int p904(void)
{
value[0]=(value[1251]==0);
if(value[0]){
p321(0,1);
if (loop) return (0);
}
value[value[1251]]=2;
value[0]=(value[1251]==123);
if(!value[0]){
bitmod('s',evar(1146),13);
}
value[0]=(value[8]==1);
if(value[0]){
set('E',8,'c',0,NULL,NULL);
say(64,1406,0);
 if (loop) return(0);}
say(12,1987,120);
say(76,1988,8);
 if (loop) return(0);return 0;
}
int p487(void)
{
value[0]=(isnear(107,-1,-1));
value[0]&=(value[107]>0);
value[0]|=(bitest(evar(1146),3));
value[0]|=(isnear(100,0,3));
if(value[0]){
bitmod('s',evar(1178),8);
return 0;
}
value[0]=(473<=value[1146] && value[1146]<=476);
if(value[0]){
value[0]=(value[162]==1);
value[0]|=(value[161]==1);
if(value[0]){
bitmod('s',evar(1178),8);
return 0;
}}
bitmod('c',evar(1178),8);
return 0;
}
int p945(void)
{
apport(109,702);
value[0]=(getloc(9)==214);
if(value[0]){
bitmod('s',214,8);
}
return 0;
}
int p902(int typ0,int par0,int typ1,int par1,int typ2,int par2)
{
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = par2;
   lbts [2] = typ2;
   lval[3] = 0;
   lbts [3] = 0;
value[0]=(value[120]>0);
if(value[0]){
if (anyof(791,-1))say(72,2282,1);
 if (loop) return(0);say(0,1362,0);
}else{
if (anyof(791,-1))say(72,2282,0);
 if (loop) return(0);value[0]=(lval[2]==0);
if(value[0]){
say(8,lval[1],lval[2]);
}}
value[0]=(lval[2]==136);
value[0]&=(value[136]<9);
if(value[0]){
value[0]=(value[120]==0);
if(value[0]){
say(0,3011,0);
}
value[0]=(value[136]==3);
if(value[0]){
set('E',136,'c',7,NULL,NULL);
}else{
value[136] += 1;
}
}else{value[0]=(lval[2]>0);
if(value[0]){
say(8,lval[1],lval[2]);
value[lval[2]]=2;
}}
lval[3] = irand(300);
value[1246] += lval[0];
if (lbts[0*VARSIZE]==-1) *bitword(1246*VARSIZE)= -1;
value[1246] += lval[3];
if (lbts[3*VARSIZE]==-1) *bitword(1246*VARSIZE)= -1;
value[0]=(value[1246]>1800);
if(value[0]){
set('V',1246,'c',1800,NULL,NULL);
}
set('E',120,'c',0,NULL,NULL);
loop=1; return(0);
return 0;
}
int p547(void)
{
value[0]=(value[1196]<9);
value[0]&=(irand(100)<50);
if(value[0]){
value[1196] += 1;
}
value[0]=(getloc(118)==701);
value[0]&=!(value[HERE]==495);
if(value[0]){
apport(118,495);
bitmod('c',118,4);
}
return 0;
}
int p131(void)
{
   int lval [4];
   short lbts [4];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
set('V',1166,'c',0,NULL,NULL);
value[0]=(value[1196]<1);
if(value[0]){
return 0;
}
set('L',0,'c',0,lval, lbts);
lbts[3*VARSIZE]= -1; lval[3]=FOBJ-1; while (++lval[3]<=LOBJ) {
if (!isat(lval[3],-1,-1,473)) continue;
if (!lbitest(3,3,lval,lbts)) continue;
lval[0] += 1;
}
set('L',1,'l',0,lval, lbts);
lval[1] *= 100;
lval[1] /= value[1196];
lval[1] *= value[193];
value[0]=(irand(100)<lval[1]);
if(value[0]){
lval[2] = irand(lval[0]);
lval[2] += 1;
lbts[3*VARSIZE]= -1; lval[3]=FOBJ-1; while (++lval[3]<=LOBJ) {
if (!isat(lval[3],-1,-1,473)) continue;
if (!lbitest(3,3,lval,lbts)) continue;
lval[2] -= 1;
value[0]=(lval[2]==0);
if(value[0]){
set('V',1166,'l',3,lval, lbts);
return 0;
}}}
return 0;
}
int p517(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
lbts[1*VARSIZE]= -1;lval[1]=1-1; while(++lval[1]<=10) {
value[0]=(lval[0]!=-1);
if(value[0]){
value[0]=(value[1166]==0);
if(value[0]){
p131();
if (loop) return (0);
}
value[0]=(value[1166]>0);
if(value[0]){
apport(value[1166],value[1146]);
value[0]=(bitest(evar(1178),8));
if(value[0]){
glue_text();
say(0,3472,0);
say(2,1166,0);
}
set('V',1166,'c',0,NULL,NULL);
}
value[1196] -= 1;
}
value[193] -= 1;
value[0]=(value[193]==0);
if(value[0]){
apport(193,701);
return 0;
}
value[0]=(lval[0]!=0);
value[0]&=(value[193]>0);
if(!value[0]){
return 0;
}}
return 0;
}
int p940(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
lval[0] = irand(5);
value[0]=(lval[0]==0);
if(value[0]){
lval[0]=227;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==1);
if(value[0]){
lval[0]=250;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==2);
if(value[0]){
lval[0]=210;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==3);
if(value[0]){
lval[0]=271;lbts[0*VARSIZE]= -1;
}else{
lval[0]=381;lbts[0*VARSIZE]= -1;
}}}}
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!isat(lval[2],-1,-1,value[1146])) continue;
if (!lbitest(2,3,lval,lbts)) continue;
value[0]=(lval[2]==81);
if(!value[0]){
apport(lval[2],lval[0]);
set('L',1,'c',1,lval, lbts);
}}
value[0]=(getloc(81)==462);
if(value[0]){
apport(82,463);
}
say(8,1701,lval[1]);
value[0]=(lval[1]==0);
if(value[0]){
move(210,-2); if (loop) return(0);
}
flush_command();
move(lval[0],-2); if (loop) return(0);
return 0;
}
int p401(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[1146])) continue;
if (!lbitest(0,3,lval,lbts)) continue;
apport(lval[0],700);
}
return 0;
}
int p240(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
lbts[1*VARSIZE]= -1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
if (!isat(lval[1],-1,-1,700)) continue;
apport(lval[1],lval[0]);
value[0]=(lval[1]==108||lval[1]==109);
value[0]&=(value[109]==1);
if(value[0]){
value[0]=(getloc(108)==700);
if(value[0]){
apport(108,lval[0]);
}else{
apport(109,lval[0]);
}}}
return 0;
}
int p626(int typ0,int par0,int typ1,int par1)
{
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!isat(lval[2],-1,-1,703)) continue;
if (!lbitest(2,15,lval,lbts)) continue;
say(72,lval[0],lval[1]);
 if (loop) return(0);}
return 0;
}
int p846(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]==1);
if(value[0]){
default_to(0,703,-1);
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}}
value[0]=(bitest(evar(1145),15));
if(value[0]){
say(76,3468,1145);
 if (loop) return(0);}
lval[0]=1699;lbts[0*VARSIZE]= -1;
value[0]=(irand(100)<10);
value[0]&=(getloc(81)==462);
if(value[0]){
lval[0]=1700;lbts[0*VARSIZE]= -1;
apport(81,502);
apport(82,702);
set('L',1,'c',1,lval, lbts);
}
say(12,2036,1145);
value[0]=(bitest(evar(1145),11));
if(value[0]){
say(8,lval[0],1);
}else{
say(8,lval[0],0);
}
apport(value[1145],502);
value[0]=(lval[1]>0);
if(value[0]){
say(0,2788,0);
}
loop=1; return(0);
return 0;
}
int p410(int typ0,int par0)
{
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
set('V',1253,'c',0,NULL,NULL);
value[0]=(value[1198]==8);
if(value[0]){
return 0;
}
set('L',1,'c',0,lval, lbts);
bitmod('c',100,5);
bitmod('c',67,5);
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!lbitest(2,5,lval,lbts)) continue;
value[0]=(getloc(lval[2])==200);
value[0]|=(getloc(lval[2])==702);
value[0]|=(lval[2]==170);
if(!value[0]){
value[0]=(lval[2]==143);
value[0]&=!(bitest(143,4));
if(value[0]){
set('L',1,'c',1,lval, lbts);
}else{
bitmod('s',67,5);
bitmod('s',100,5);
return 0;
}}}
bitmod('s',67,5);
bitmod('s',100,5);
value[0]=(getloc(100)==200);
value[0]|=(getloc(100)==199);
value[0]|=(getloc(100)==702);
if(!value[0]){
return 0;
}
value[0]=(have(67,-1,-1));
value[0]|=(getloc(67)==200);
value[0]|=(getloc(67)==702);
if(value[0]){
value[0]=(lval[1]==0);
if(value[0]){
value[0]=(lval[0]==0);
if(value[0]){
set('V',1198,'c',4,NULL,NULL);
}else{
set('V',1253,'c',4,NULL,NULL);
}
}else{
set('V',1253,'c',-1,NULL,NULL);
}}
return 0;
}
int p892(void)
{
set('T',1877,'c',0,NULL,NULL);
p410(0,1);
if (loop) return (0);
value[0]=(value[1253]==4);
if(value[0]){
set('T',1877,'c',26,NULL,NULL);
}else{
set('T',1877,'c',25,NULL,NULL);
}
value[0]=(bitest(143,4));
if(!value[0]){
set('T',1877,'c',24,NULL,NULL);
}
value[0]=(bitest(98,13));
if(!value[0]){
set('T',1877,'c',23,NULL,NULL);
}
value[0]=(bitest(473,4));
if(!value[0]){
set('T',1877,'c',22,NULL,NULL);
}
value[0]=(bitest(565,4));
if(!value[0]){
set('T',1877,'c',21,NULL,NULL);
}
value[0]=(bitest(547,4));
if(!value[0]){
set('T',1877,'c',20,NULL,NULL);
}
value[0]=(bitest(63,13));
if(!value[0]){
set('T',1877,'c',19,NULL,NULL);
}
value[0]=(bitest(158,4));
if(!value[0]){
set('T',1877,'c',18,NULL,NULL);
}
value[0]=(bitest(102,14));
if(!value[0]){
set('T',1877,'c',17,NULL,NULL);
}
value[0]=(bitest(63,5));
if(!value[0]){
set('T',1877,'c',16,NULL,NULL);
}
value[0]=(value[139]==2);
if(!value[0]){
set('T',1877,'c',15,NULL,NULL);
}
value[0]=(bitest(85,4));
if(!value[0]){
set('T',1877,'c',14,NULL,NULL);
}
value[0]=(value[453]==1);
if(!value[0]){
set('T',1877,'c',13,NULL,NULL);
}
value[0]=(bitest(145,4));
if(!value[0]){
set('T',1877,'c',12,NULL,NULL);
}
value[0]=(bitest(136,4));
if(!value[0]){
set('T',1877,'c',11,NULL,NULL);
}
value[0]=(bitest(46,4));
if(!value[0]){
set('T',1877,'c',10,NULL,NULL);
}
value[0]=(bitest(59,4));
if(!value[0]){
set('T',1877,'c',9,NULL,NULL);
}
value[0]=(value[32]==0);
if(value[0]){
set('T',1877,'c',8,NULL,NULL);
}
value[0]=(bitest(312,4));
if(!value[0]){
set('T',1877,'c',7,NULL,NULL);
}
value[0]=(bitest(67,4));
if(!value[0]){
set('T',1877,'c',6,NULL,NULL);
}
value[0]=(getloc(25)==385);
if(value[0]){
set('T',1877,'c',5,NULL,NULL);
}
value[0]=(value[125]==0);
if(value[0]){
set('T',1877,'c',4,NULL,NULL);
}
value[0]=(getloc(90)==457);
if(value[0]){
set('T',1877,'c',3,NULL,NULL);
}
value[0]=(bitest(454,4));
if(!value[0]){
set('T',1877,'c',2,NULL,NULL);
}
value[0]=(bitest(279,4));
if(!value[0]){
set('T',1877,'c',1,NULL,NULL);
}
value[0]=(value[1877]==value[1216]);
if(value[0]){
value[0]=(irand(100)<75);
if(value[0]){
set('T',1877,'c',0,NULL,NULL);
}else{
value[1877] = jrand(27 - 0) + 0;
value[0]=(value[1877]<value[1216]);
if(value[0]){
set('T',1877,'c',0,NULL,NULL);
}}
}else{
set('V',1216,'e',1877,NULL,NULL);
}
say(64,1877,0);
 if (loop) return(0);return 0;
}
int p659(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
bitmod('s',88,4);
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(0,1778,0);
say(0,1266,0);
}
set('V',1155,'v',1146,NULL,NULL);
lval[0] = irand(3-1+1)+1;
value[0]=(irand(100)<50);
if(value[0]){
value[1155] += lval[0];
if (lbts[0*VARSIZE]==-1) *bitword(1155*VARSIZE)= -1;
}else{
value[1155] -= lval[0];
}
value[0]=(bitest(evar(1155),3));
value[0]|=(bitest(evar(1155),7));
value[0]|=(bitest(evar(1155),5));
if(value[0]){
set('V',1155,'v',1163,NULL,NULL);
}
apport(88,value[1155]);
value[0]=(isnear(88,-1,-1));
if(value[0]){
value[0]=(value[HERE]==264);
if(value[0]){
apport(88,262);
}else{
apport(88,264);
}}
return 0;
}
int p658(int typ0,int par0,int typ1,int par1)
{
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
value[0]=(isnear(22,-1,-1));
value[0]&=(value[22]>0);
value[0]|=(isnear(90,-1,-1));
if(!value[0]){
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(64,2011,0);
 if (loop) return(0);return 0;
}
value[0]=(irand(100)<lval[1]);
if(value[0]){
say(64,1780,0);
 if (loop) return(0);return 0;
}}
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(64,1779,0);
 if (loop) return(0);}else{
value[0]=(isnear(90,-1,-1));
if(value[0]){
say(0,1782,0);
apport(90,702);
set('T',3438,'c',1,NULL,NULL);
set('T',3439,'c',0,NULL,NULL);
set('E',89,'c',1,NULL,NULL);
bitmod('s',91,4);
value[0]=(value[124]==2);
if(value[0]){
set('E',124,'c',0,NULL,NULL);
}
}else{value[0]=(isnear(22,-1,-1));
value[0]&=(value[22]>0);
if(value[0]){
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!isat(lval[2],-1,-1,703)) continue;
if (!lbitest(2,17,lval,lbts)) continue;
say(64,2791,0);
 if (loop) return(0);}
value[0]=(value[HERE]==303);
if(value[0]){
move(304,-1);
}else{
move(303,-1);
}
say(64,2790,0);
 if (loop) return(0);}else{value[0]=(isnear(193,-1,-1));
if(value[0]){
say(0,1782,0);
p517(0,1);
if (loop) return (0);
}else{value[0]=(isnear(21,0,0));
if(value[0]){
apport(88,702);
value[0]=(bitest(91,4));
if(value[0]){
say(72,1938,0);
 if (loop) return(0);}else{
say(72,1938,1);
 if (loop) return(0);}
}else{
say(0,1781,0);
}}}}
value[1163]=getloc(88);*bitword(1163)= -1;
apport(88,value[1146]);
}
loop=1; return(0);
return 0;
}
int p105(void)
{
   int lval [5];
   short lbts [5];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
value[0]=(value[1178]==1);
value[0]|=(744<=value[1144] && value[1144]<=753);
if(value[0]){
set('V',1224,'v',1144,NULL,NULL);
}else{
set('V',1224,'v',1145,NULL,NULL);
}
set('L',0,'v',1146,lval, lbts);
lval[4]=335;lbts[4*VARSIZE]= -1;
lval[0] -= lval[4];
lval[1]=1225;lbts[1*VARSIZE]= -1;
lval[1] += lval[0];
if (lbts[0*VARSIZE]==-1) lbts[1*VARSIZE]= -1;
lval[3]=value[lval[1]];lbts[3*VARSIZE]=lbts[1*VARSIZE];lval[2]=745;lbts[2*VARSIZE]= -1;
value[0]=(lval[3]==0);
if(value[0]){
bitmod('s',evar(1146),8);
set('L',3,'v',1224,lval, lbts);
value[lval[1]]=value[1224];
set('V',1221,'c',0,NULL,NULL);
}else{
lval[3] += value[1221];
if (*bitword(1221*VARSIZE)==-1) lbts[3*VARSIZE]= -1;
lval[3] -= 8;
value[0]=(lval[3]<lval[2]);
if(value[0]){
lval[3] += 8;
}}
value[0]=(lval[3]==value[1224]);
if(value[0]){
value[0]=(value[HERE]==350);
if(value[0]){
value[1221] += 1;
value[0]=(value[1221]==8);
if(value[0]){
set('V',1221,'c',0,NULL,NULL);
}
move(330,-2); if (loop) return(0);
}
set('L',4,'v',1146,lval, lbts);
lval[4] += 1;
move(lval[4],-2); if (loop) return(0);
}else{value[0]=(value[HERE]==347);
if(value[0]){
value[0]=(value[1223]==0);
if(value[0]){
set('V',1223,'v',1224,NULL,NULL);
set('L',0,'v',1224,lval, lbts);
}else{
set('L',0,'v',1223,lval, lbts);
lval[0] += value[1221];
if (*bitword(1221*VARSIZE)==-1) lbts[0*VARSIZE]= -1;
lval[0] -= 9;
value[0]=(lval[0]<lval[2]);
if(value[0]){
lval[0] += 8;
}
value[0]=(lval[0]<lval[2]);
if(value[0]){
lval[0] += 8;
}}
value[0]=(lval[0]==value[1224]);
if(value[0]){
move(334,-2); if (loop) return(0);
}else{
move(346,-2); if (loop) return(0);
}
}else{value[0]=(value[HERE]==335);
if(value[0]){
set('V',1222,'l',3,lval, lbts);
value[1222] -= 4;
value[0]=(value[1222]<lval[2]);
if(value[0]){
value[1222] += 8;
}
value[0]=(value[1222]==value[1224]);
if(value[0]){
set('V',1222,'l',3,lval, lbts);
set('E',333,'v',1222,NULL,NULL);
value[333] -= lval[2];
move(333,-2); if (loop) return(0);
}else{
move(335,-2); if (loop) return(0);
}
}else{
set('L',4,'v',1146,lval, lbts);
lval[4] -= 1;
move(lval[4],-2); if (loop) return(0);
}}}
return 0;
}
int p122(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('E',84,'c',0,NULL,NULL);
value[0]=(value[HERE]==200||value[HERE]==259||value[HERE]==495||value[HERE]==333);
if(value[0]){
say(64,1746,0);
 if (loop) return(0);}
lval[0] = irand(750-600+1)+600;
value[1246] += lval[0];
if (lbts[0*VARSIZE]==-1) *bitword(1246*VARSIZE)= -1;
value[0]=(value[1246]>1800);
if(value[0]){
set('V',1246,'c',1800,NULL,NULL);
}
set('E',120,'c',0,NULL,NULL);
value[0]=(bitest(evar(1179),10));
if(value[0]){
say(64,2184,0);
 if (loop) return(0);}
set('L',0,'c',0,lval, lbts);
value[0]=(bitest(evar(1179),9));
if(value[0]){
say(0,2609,0);
set('L',0,'c',2,lval, lbts);
}else{value[0]=(bitest(67,4));
if(value[0]){
say(8,1748,1);
}else{
say(8,1748,0);
}}
set('T',2643,'c',1,NULL,NULL);
bitmod('s',evar(1179),9);
set('V',1180,'c',24,NULL,NULL);
say(72,1749,lval[0]);
 if (loop) return(0);return 0;
}
int p26(void)
{
value[0]=(bitest(evar(1178),8));
value[0]&=!(test("doall"));
if(!value[0]){
set('V',1253,'c',1,NULL,NULL);
return 0;
}
set('V',1253,'c',0,NULL,NULL);
value[0]=(bitest(evar(1178),7));
value[0]|=(value[1198]>3);
value[0]|=(bitest(evar(1146),7));
value[0]|=(bitest(evar(1146),5));
value[0]|=(bitest(evar(1146),11));
value[0]|=(bitest(20,13));
value[0]|=(isnear(193,-1,-1));
value[0]|=(isnear(21,-1,-1));
value[0]|=(isnear(23,-1,-1));
value[0]|=(isnear(9,-1,-1));
value[0]|=(isnear(25,-1,-1));
value[0]|=(isnear(5,-1,-1));
value[0]|=(isnear(33,-1,-1));
value[0]|=(value[1195]>0);
value[0]|=(bitest(46,12));
if(value[0]){
set('V',1253,'c',1,NULL,NULL);
}
return 0;
}
int p609(void)
{
value[1243] -= 1;
value[0]=(value[1243]<1);
value[0]&=(irand(100)<25);
if(value[0]){
value[0]=(bitest(evar(1146),3));
if(value[0]){
return 0;
}
p26();
if (loop) return (0);
value[0]=(value[1253]==1);
if(value[0]){
return 0;
}
set('V',1242,'c',-1,NULL,NULL);
value[0]=(bitest(evar(1242),0));
value[0]|=(irand(100)<75);
value[0]|=(getloc(84)==702);
value[0]|=(bitest(67,4));
if(!value[0]){
set('V',1242,'c',0,NULL,NULL);
bitmod('s',evar(1242),0);
}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),1));
value[0]|=(irand(100)<75);
value[0]|=(bitest(454,4));
if(!value[0]){
set('V',1242,'c',1,NULL,NULL);
bitmod('s',evar(1242),1);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),9));
value[0]|=(irand(100)<75);
value[0]|=(bitest(128,4));
value[0]|=!(bitest(125,4));
if(!value[0]){
set('V',1242,'c',9,NULL,NULL);
bitmod('s',evar(1242),9);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),2));
value[0]|=(irand(100)<75);
value[0]|=(bitest(312,4));
value[0]|=!(bitest(309,4));
if(!value[0]){
set('V',1242,'c',2,NULL,NULL);
bitmod('s',evar(1242),2);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),3));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(322,4));
value[0]|=(bitest(28,13));
if(!value[0]){
set('V',1242,'c',3,NULL,NULL);
bitmod('s',evar(1242),3);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),4));
value[0]|=(irand(100)<75);
value[0]|=(bitest(312,4));
if(!value[0]){
set('V',1242,'c',4,NULL,NULL);
bitmod('s',evar(1242),4);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),6));
value[0]|=(irand(100)<75);
value[0]|=(getloc(100)==199);
value[0]|=!(bitest(100,4));
if(!value[0]){
set('V',1242,'c',6,NULL,NULL);
bitmod('s',evar(1242),6);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),7));
value[0]|=(irand(100)<75);
value[0]|=(bitest(583,4));
value[0]|=!(bitest(335,4));
if(!value[0]){
set('V',1242,'c',7,NULL,NULL);
bitmod('s',evar(1242),7);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),8));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(386,4));
if(!value[0]){
set('V',1242,'c',8,NULL,NULL);
bitmod('s',evar(1242),8);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),11));
value[0]|=(irand(100)<75);
value[0]|=(bitest(61,4));
value[0]|=(bitest(287,8));
if(!value[0]){
set('V',1242,'c',11,NULL,NULL);
bitmod('s',evar(1242),11);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),10));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(59,4));
if(!value[0]){
set('V',1242,'c',10,NULL,NULL);
bitmod('s',evar(1242),10);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),12));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(498,4));
value[0]|=(bitest(503,4));
if(!value[0]){
set('V',1242,'c',12,NULL,NULL);
bitmod('s',evar(1242),12);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),13));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(318,4));
value[0]|=(bitest(627,4));
if(!value[0]){
set('V',1242,'c',13,NULL,NULL);
bitmod('s',evar(1242),13);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),14));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(144,4));
if(!value[0]){
value[0]=(getloc(144)==631);
value[0]|=(getloc(144)==633);
value[0]|=(getloc(144)==634);
if(value[0]){
set('V',1242,'c',14,NULL,NULL);
bitmod('s',evar(1242),14);
}}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),16));
value[0]|=(irand(100)<75);
value[0]|=!(bitest(85,4));
value[0]|=(getloc(85)==702);
value[0]|=(bitest(87,4));
if(!value[0]){
set('V',1242,'c',16,NULL,NULL);
bitmod('s',evar(1242),16);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),15));
value[0]|=(irand(100)<75);
value[0]|=(bitest(63,5));
if(!value[0]){
set('V',1242,'c',15,NULL,NULL);
bitmod('s',evar(1242),15);
}}
value[0]=(value[1242]==-1);
value[0]&=(bitest(332,4));
value[0]&=!(value[HERE]==332);
if(value[0]){
value[0]=(bitest(evar(1242),17));
value[0]|=(irand(100)<75);
value[0]|=(bitest(334,4));
if(!value[0]){
set('V',1242,'c',17,NULL,NULL);
bitmod('s',evar(1242),17);
}}
value[0]=(value[1242]==-1);
if(value[0]){
value[0]=(bitest(evar(1242),5));
value[0]|=(irand(100)<85);
if(!value[0]){
set('V',1242,'c',5,NULL,NULL);
bitmod('s',evar(1242),5);
}}
value[1243] = irand(100-20+1)+20;
value[0]=(value[1242]>-1);
if(value[0]){
set('T',1757,'v',1242,NULL,NULL);
say(0,1757,0);
value[1243] += 100;
}}
return 0;
}
int p542(void)
{
value[0]=(irand(100)<20);
if(value[0]){
move(517,-2); if (loop) return(0);
}
move(515,-2); if (loop) return(0);
return 0;
}
int p702(void)
{
set('E',517,'c',1,NULL,NULL);
say(64,1813,0);
 if (loop) return(0);return 0;
}
int p380(void)
{
   int lval [8];
   short lbts [8];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
   lval[5] = 0;
   lbts [5] = 0;
   lval[6] = 0;
   lbts [6] = 0;
   lval[7] = 0;
   lbts [7] = 0;
value[0]=(value[1196]<1);
if(value[0]){
return 0;
}
set('L',6,'c',0,lval, lbts);
bitmod('s',100,15);
bitmod('s',118,15);
value[0]=(getloc(116)==295);
if(value[0]){
bitmod('s',116,15);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!lbitest(0,3,lval,lbts)) continue;
value[0]=(lbitest(0,15,lval,lbts));
if(!value[0]){
lbitmod(8,'c',0,18,lval,lbts);
value[0]=(lbitest(0,4,lval,lbts));
value[0]&=!(lbitest(0,15,lval,lbts));
value[0]&=!(isnear(lval[0],-1,-1));
value[0]&=!(lval[0]==124);
if(value[0]){
set('L',7,'c',1,lval, lbts);
value[0]=(lbitest(0,7,lval,lbts));
if(value[0]){
lval[7]=value[lval[0]];lbts[7*VARSIZE]=lbts[0*VARSIZE];}
value[0]=(lval[7]>0);
if(value[0]){
lval[1]=getloc(lval[0]);lbts[1*VARSIZE]= -1;
value[0]=(lbitest(1,7,lval,lbts));
value[0]|=(lbitest(1,5,lval,lbts));
value[0]|=(lbitest(1,10,lval,lbts));
if(!value[0]){
lval[6] += 1;
lbitmod(8,'s',0,18,lval,lbts);
}}}}}
bitmod('c',100,15);
bitmod('c',116,15);
bitmod('c',118,15);
value[0]=(lval[6]>0);
if(value[0]){
lval[5] = irand(lval[6]);
lval[5] += 1;
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!lbitest(2,18,lval,lbts)) continue;
lval[3] += 1;
value[0]=(lval[5]>0);
if(value[0]){
lval[5] -= 1;
value[0]=(lval[5]==0);
if(value[0]){
lval[1]=getloc(lval[2]);lbts[1*VARSIZE]= -1;
set('L',0,'l',2,lval, lbts);
}}}
set('L',4,'l',3,lval, lbts);
lval[4] *= 100;
lval[4] /= value[1196];
lval[4] *= value[193];
value[0]=(irand(100)<lval[4]);
if(value[0]){
value[0]=(lbitest(0,5,lval,lbts));
if(!value[0]){
return 0;
}
lval[5] = irand(lval[3]);
lval[5] += 1;
lbts[2*VARSIZE]= -1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
if (!isat(lval[2],-1,-1,473)) continue;
value[0]=(lval[5]>0);
if(value[0]){
lval[5] -= 1;
value[0]=(lval[5]==0);
if(value[0]){
value[0]=(lbitest(2,5,lval,lbts));
value[0]|=(lval[2]==value[1166]);
if(value[0]){
return 0;
}
apport(lval[2],lval[1]);
}}}}
apport(lval[0],473);
}
return 0;
}
int p820(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]==1);
if(value[0]){
set('L',0,'v',1144,lval, lbts);
}else{
set('L',0,'v',1145,lval, lbts);
}
value[0]=(744<=lval[0] && lval[0]<=753);
if(value[0]){
lval[0] += 4;
lval[1]=753;lbts[1*VARSIZE]= -1;
value[0]=(lval[0]>=lval[1]);
if(value[0]){
lval[0] -= 8;
}
value[0]=(value[1178]==1);
if(value[0]){
set('V',1144,'l',0,lval, lbts);
}else{
set('V',1145,'l',0,lval, lbts);
}}
return 0;
}
int p805(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(KEY(110));
value[0]&=(value[HERE]==448);
if(value[0]){
return 0;
}
set('V',1173,'c',0,NULL,NULL);
value[0]=(value[1178]==1);
if(value[0]){
set('L',0,'v',1144,lval, lbts);
}else{
set('L',0,'v',1145,lval, lbts);
}
value[0]=(lbitest(0,0,lval,lbts));
value[0]&=(lbitest(0,3,lval,lbts));
value[0]&=!(lbitest(0,5,lval,lbts));
value[0]|=(lval[0]==139);
value[0]|=(lval[0]==9);
value[0]|=(lval[0]==193);
if(!value[0]){
return 0;
}
value[0]=(isnear(lval[0],-1,-1));
value[0]&=!(KEY(765));
if(value[0]){
return 0;
}
value[0]=(KEY(28));
if(value[0]){
return 0;
}
value[0]=(isnear(lval[0],-1,-1));
if(value[0]){
return 0;
}
set('L',1,'c',0,lval, lbts);
value[0]=(lbitest(0,13,lval,lbts));
value[0]&=(value[HERE]==447);
if(value[0]){
set('L',1,'c',1,lval, lbts);
}
value[0]=(lbitest(0,14,lval,lbts));
value[0]&=(value[HERE]==448);
if(value[0]){
set('L',1,'c',1,lval, lbts);
}
value[0]=(isnear(value[1145],-1,-1));
value[0]|=(lval[1]==1);
if(!value[0]){
say(76,1319,1145);
 if (loop) return(0);}
value[0]=(KEY(765));
if(value[0]){
if (anyof(193,-1))say(64,1403,0);
 if (loop) return(0);value[0]=(bitest(evar(1145),11));
if(value[0]){
set('T',1850,'c',1,NULL,NULL);
}else{
set('T',1850,'c',0,NULL,NULL);
}
value[0]=(lbitest(0,18,lval,lbts));
if(value[0]){
say(76,1850,1145);
 if (loop) return(0);}
value[0]=(value[1187]<value[1202]);
if(value[0]){
lbitmod(2,'s',0,18,lval,lbts);
}else{
flush_command();
say(64,1388,0);
 if (loop) return(0);}}
set('V',1173,'l',0,lval, lbts);
apport(lval[0],value[1146]);
return 0;
}
int p809(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1173]==0);
if(!value[0]){
value[0]=(value[1178]==1);
if(value[0]){
set('L',0,'v',1144,lval, lbts);
}else{
set('L',0,'v',1145,lval, lbts);
}
value[0]=(lbitest(0,0,lval,lbts));
if(!value[0]){
return 0;
}
value[0]=(have(lval[0],-1,-1));
if(!value[0]){
apport(value[1173],473);
}}
return 0;
}
int p184(void)
{
value[0]=(value[HERE]==206||value[HERE]==502||value[HERE]==432||value[HERE]==449);
if(value[0]){
say(76,1849,206);
 if (loop) return(0);}
say(76,1330,206);
 if (loop) return(0);return 0;
}
int p378(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
set('V',1190,'c',0,NULL,NULL);
set('V',1191,'c',0,NULL,NULL);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!lbitest(0,5,lval,lbts)) continue;
value[0]=(getloc(lval[0])==200);
value[0]|=(getloc(lval[0])==302);
if(value[0]){
value[0]=(lval[0]==144);
value[0]|=(lval[0]==148);
if(value[0]){
lval[1]=value[lval[0]];lbts[1*VARSIZE]=lbts[0*VARSIZE];value[0]=(lval[1]>=2);
if(value[0]){
value[1190] += 9;
}else{
value[1190] += 14;
}
}else{
value[1190] += 14;
}
}else{
value[0]=(lbitest(0,4,lval,lbts));
if(value[0]){
value[1190] += 7;
}}
value[1191] += 14;
}
value[0]=(getloc(100)==200);
if(value[0]){
value[1190] += 7;
value[1190] -= 14;
}else{value[0]=(getloc(100)==199);
if(value[0]){
value[1190] += 14;
value[1190] -= 7;
}}
value[0]=(bitest(83,5));
if(!value[0]){
value[1191] += 14;
}
value[0]=(bitest(63,5));
if(!value[0]){
value[1191] += 14;
}
value[0]=(bitest(104,4));
if(value[0]){
value[1190] += 3;
value[0]=(getloc(104)==200);
value[0]|=(getloc(105)==200);
if(value[0]){
value[1190] += 3;
}}
value[0]=(getloc(116)==200);
value[0]|=(getloc(116)==302);
value[0]|=(getloc(116)==295);
if(value[0]){
value[1190] += 1;
}
value[1191] += 1;
value[0]=(bitest(170,5));
if(value[0]){
value[1190] += 7;
}
value[0]=(value[1198]<6);
if(value[0]){
value[0]=(bitest(195,4));
if(value[0]){
value[1190] += 1;
}
value[0]=(bitest(540,4));
if(value[0]){
value[1190] += 2;
}
value[0]=(bitest(199,4));
if(value[0]){
value[1190] += 2;
}
value[0]=(bitest(206,4));
value[0]|=(bitest(222,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(589,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(545,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(386,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(439,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(312,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(352,4));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(28,13));
if(value[0]){
value[1190] += 8;
}
value[0]=(bitest(158,4));
if(value[0]){
value[1190] += 10;
}
value[0]=(bitest(547,4));
if(value[0]){
value[1190] += 10;
}
value[0]=(bitest(483,4));
if(value[0]){
value[1190] += 10;
}
}else{
value[1190] += 99;
}
value[1191] += 99;
value[0]=(value[1198]>3);
if(value[0]){
set('L',1,'v',1198,lval, lbts);
lval[1] -= 3;
lval[1] *= 16;
value[1190] += lval[1];
if (lbts[1*VARSIZE]==-1) *bitword(1190*VARSIZE)= -1;
}
value[1191] += 96;
set('V',1253,'v',1191,NULL,NULL);
value[0]=(value[1172]==3);
if(value[0]){
value[1190] += 7;
value[1253] += 7;
}
set('V',1171,'v',1190,NULL,NULL);
value[0]=(value[1172]!=2);
if(value[0]){
set('V',1170,'v',1188,NULL,NULL);
value[1170] *= 10;
value[1170] += value[1189];
if (*bitword(1189*VARSIZE)==-1) *bitword(1170*VARSIZE)= -1;
value[1171] -= value[1170];
}
value[0]=(value[1171]<0);
if(value[0]){
set('V',1171,'c',0,NULL,NULL);
}
return 0;
}
int p322(void)
{
p378();
if (loop) return (0);
say(12,1520,1190);
value[0]=(value[1190]>770);
if(value[0]){
say(0,3399,0);
}
value[0]=(value[1170]>0);
if(value[0]){
say(12,1522,1170);
say(12,1523,1171);
}
say(12,1524,1191);
say(12,1525,1193);
say(0,1266,0);
set('V',1253,'v',1190,NULL,NULL);
value[1253] -= value[1170];
value[0]=(value[1171]<50);
if(value[0]){
say(0,1527,0);
value[1253] -= 50;
}else{value[0]=(value[1171]<150);
if(value[0]){
say(0,1528,0);
value[1253] -= 150;
}else{value[0]=(value[1171]<250);
if(value[0]){
say(0,1529,0);
value[1253] -= 250;
}else{value[0]=(value[1171]<350);
if(value[0]){
say(0,1530,0);
value[1253] -= 350;
}else{value[0]=(value[1171]<450);
if(value[0]){
say(0,1531,0);
value[1253] -= 450;
}else{value[0]=(value[1171]<550);
if(value[0]){
say(0,1532,0);
value[1253] -= 550;
}else{value[0]=(value[1171]<650);
if(value[0]){
say(0,1533,0);
value[1253] -= 650;
}else{value[0]=(value[1171]<750);
if(value[0]){
say(0,1534,0);
value[1253] -= 750;
}else{value[0]=(value[1171]<770);
if(value[0]){
say(0,1535,0);
value[1253] -= 770;
}else{value[0]=(value[1171]==770);
if(value[0]){
say(0,1536,0);
set('V',1253,'c',0,NULL,NULL);
}else{value[0]=(value[1171]<777);
if(value[0]){
say(0,3396,0);
set('V',1253,'c',0,NULL,NULL);
}else{
say(0,3395,0);
set('V',1253,'c',0,NULL,NULL);
}}}}}}}}}}}
say(0,1266,0);
value[1253] *= -1;
value[0]=(value[1253]>0);
if(value[0]){
value[0]=(value[1253]==1);
if(value[0]){
say(0,1537,0);
}else{
say(12,1538,1253);
}}
say(0,1266,0);
finita();
loop=1; return(0);
return 0;
}
int p154(void)
{
flush_command();
say(0,1266,0);
bitmod('c',evar(1179),2);
bitmod('c',evar(1179),0);
bitmod('c',100,13);
value[0]=(value[100]==2);
if(value[0]){
set('E',100,'c',3,NULL,NULL);
}
value[0]=(value[HERE]==515||value[HERE]==315);
if(value[0]){
move(702,-1);
}
set('E',18,'c',0,NULL,NULL);
apport(18,701);
value[0]=(getloc(130)==702);
if(!value[0]){
apport(130,701);
}
value[0]=(value[26]==1);
if(value[0]){
set('E',26,'c',0,NULL,NULL);
}else{
value[0]=(value[26]==3);
if(value[0]){
set('E',26,'c',2,NULL,NULL);
}}
value[0]=(value[46]>1);
if(value[0]){
set('E',46,'c',1,NULL,NULL);
}
value[0]=(value[36]==1);
if(value[0]){
set('E',36,'c',0,NULL,NULL);
set('V',1164,'c',0,NULL,NULL);
bitmod('c',36,13);
}
value[1188] += 1;
value[0]=(value[1198]>4);
if(value[0]){
value[0]=(value[1198]==5);
if(value[0]){
say(0,1422,0);
}else{
value[1188] -= 1;
}
p322();
if (loop) return (0);
}
set('E',120,'c',0,NULL,NULL);
value[1246] = irand(700-600+1)+600;
set('V',1180,'c',27,NULL,NULL);
say(64,1379,0);
 if (loop) return(0);return 0;
}
int p729(void)
{
set('T',1988,'c',0,NULL,NULL);
value[0]=(KEY(765));
if(value[0]){
value[0]=(ishere(110,-1,-1));
if(value[0]){
return 0;
}
value[0]=(have(112,-1,-1));
if(value[0]){
say(76,1314,1145);
 if (loop) return(0);}
value[0]=(isnear(112,-1,-1));
if(!value[0]){
value[0]=(value[HERE]==448);
if(value[0]){
value[0]=(bitest(112,4));
if(value[0]){
say(76,1850,1145);
 if (loop) return(0);}
}else{
return 0;
}}
bitmod('s',112,4);
value[0]=(value[1187]<value[1202]);
if(value[0]){
value[0]=(bitest(112,18));
if(!value[0]){
bitmod('s',112,18);
set('T',1988,'c',1,NULL,NULL);
}
apport(112,INHAND);
set('V',1173,'c',0,NULL,NULL);
say(12,1987,1144);
value[0]=(value[112]==0);
if(value[0]){
say(76,1988,110);
 if (loop) return(0);}else{
say(76,1988,1145);
 if (loop) return(0);}}
flush_command();
say(64,1388,0);
 if (loop) return(0);}
value[0]=(anyof(766,793,-1));
if(value[0]){
value[0]=(have(110,-1,-1));
if(value[0]){
set('V',1173,'c',0,NULL,NULL);
return 0;
}
value[0]=(have(112,-1,-1));
if(value[0]){
apport(112,HERE);
say(12,1987,1144);
value[0]=(value[112]==0);
if(value[0]){
say(76,1988,110);
 if (loop) return(0);}else{
say(76,1988,1145);
 if (loop) return(0);}}
say(76,1513,1145);
 if (loop) return(0);}
value[0]=(KEY(781));
if(value[0]){
value[0]=(have(110,-1,-1));
value[0]|=(have(112,-1,-1));
if(value[0]){
value[0]=(value[HERE]==448);
if(value[0]){
say(0,3475,0);
value[0]=(value[3475]==0);
if(value[0]){
p154();
if (loop) return (0);
}
loop=1; return(0);
}else{
say(64,1329,0);
 if (loop) return(0);}}
say(76,1513,1145);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
value[0]=(isnear(110,-1,-1));
value[0]&=(bitest(110,18));
value[0]&=!(have(112,-1,-1));
value[0]|=(have(110,-1,-1));
if(value[0]){
say(76,2033,1145);
 if (loop) return(0);}else{value[0]=(isnear(112,-1,-1));
if(value[0]){
say(72,2780,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==447);
if(value[0]){
say(64,2779,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==448);
if(value[0]){
say(72,2780,1);
 if (loop) return(0);}}}}
}else{
say(64,1869,0);
 if (loop) return(0);}
return 0;
}
int p660(void)
{
value[0]=(value[1198]==6);
if(!value[0]){
say(76,1560,115);
 if (loop) return(0);}
value[0]=(have(115,-1,-1));
if(!value[0]){
say(64,1561,0);
 if (loop) return(0);}
value[0]=(bitest(115,15));
if(value[0]){
say(76,1870,74);
 if (loop) return(0);}
say(8,1859,10);
set('V',1180,'c',26,NULL,NULL);
say(64,1860,0);
 if (loop) return(0);return 0;
}
int p667(void)
{
value[0]=(314<=value[1146] && value[1146]<=316);
if(!value[0]){
return 0;
}
value[315] = irand(8);
bitmod('c',315,3);
p487();
if (loop) return (0);
bitmod('s',315,3);
value[0]=(bitest(evar(1178),8));
if(value[0]){
set('E',16,'c',0,NULL,NULL);
}else{
value[16] = irand(9 - 1) + 1;
}
bitmod('s',evar(1178),8);
return 0;
}
int p24(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[163] -= 1;
set('L',2,'c',0,lval, lbts);
value[0]=(bitest(evar(1179),7));
value[0]|=(value[163]>8);
if(!value[0]){
value[0]=(value[163]<5);
value[0]|=(irand(100)<20);
value[0]|=(value[HERE]==472);
if(value[0]){
set('L',2,'c',1,lval, lbts);
}}
value[0]=(lval[2]>0);
if(value[0]){
bitmod('s',evar(1179),7);
say(0,2472,0);
value[0]=(467<=value[1146] && value[1146]<=479);
if(value[0]){
value[0]=(value[HERE]==475);
value[0]&=(value[162]==0);
if(value[0]){
return 0;
}
say(0,2473,0);
value[0]=(bitest(evar(1178),0));
if(value[0]){
say(0,1266,0);
}}
}else{value[0]=(value[163]==1);
if(value[0]){
set('E',477,'c',0,NULL,NULL);
value[0]=(value[HERE]==475);
value[0]&=(value[162]==0);
if(value[0]){
say(0,1887,0);
set('E',161,'c',0,NULL,NULL);
set('E',472,'c',0,NULL,NULL);
return 0;
}
value[0]=(value[HERE]==491);
if(value[0]){
set('E',161,'c',0,NULL,NULL);
say(0,1886,0);
return 0;
}
value[0]=(467<=value[1146] && value[1146]<=479);
if(value[0]){
set('L',0,'c',0,lval, lbts);
set('L',1,'c',0,lval, lbts);
value[0]=(value[HERE]==473||value[HERE]==474||value[HERE]==476||value[HERE]==475);
if(value[0]){
value[1155]=473;*bitword(1155)= -1;
}else{
value[1155]=491;*bitword(1155)= -1;
}
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
if (!isat(value[1154],-1,-1,703)) continue;
value[0]=(bitest(evar(1154),16));
value[0]&=(value[1154]==2);
if(!value[0]){
value[0]=(bitest(evar(1154),5));
if(value[0]){
set('L',0,'c',2,lval, lbts);
apport(value[1154],473);
}else{
set('L',1,'c',1,lval, lbts);
apport(value[1154],value[1155]);
}}}
value[1155]=getloc(147);*bitword(1155)= -1;
value[0]=(473<=value[1155] && value[1155]<=479);
value[0]|=(482<=value[1155] && value[1155]<=487);
if(value[0]){
apport(147,195);
}
say(0,1266,0);
value[0]=(value[HERE]==467);
if(value[0]){
lval[0] += lval[1];
if (lbts[1*VARSIZE]==-1) lbts[0*VARSIZE]= -1;
set('E',161,'c',0,NULL,NULL);
say(8,2452,lval[0]);
move(491,-2); if (loop) return(0);
}
value[0]=(value[HERE]==479);
if(value[0]){
say(8,2475,0);
}else{value[0]=(value[HERE]==475);
if(value[0]){
say(0,1888,0);
}else{value[0]=(value[HERE]==473);
if(value[0]){
value[0]=(value[161]==1);
if(value[0]){
say(8,1889,0);
}else{
say(8,1889,1);
}
}else{value[0]=(value[HERE]==474||value[HERE]==476);
if(value[0]){
value[0]=(value[162]==0);
if(value[0]){
say(8,2475,1);
}else{
say(8,2475,2);
}
}else{
say(0,2507,0);
}}}}
say(0,1266,0);
set('E',161,'c',0,NULL,NULL);
set('E',472,'c',0,NULL,NULL);
p154();
if (loop) return (0);
}}}
return 0;
}
int p784(void)
{
value[0]=(bitest(evar(1178),8));
if(!value[0]){
say(0,2091,0);
p154();
if (loop) return (0);
}
return 0;
}
int p392(void)
{
value[0]=(isnear(130,-1,-1));
if(value[0]){
value[0]=(value[130]==6);
if(value[0]){
p154();
if (loop) return (0);
}
value[130] += 1;
}
return 0;
}
int p400(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
set('V',1253,'c',0,NULL,NULL);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[1146])) continue;
value[0]=(lval[0]==16);
if(value[0]){
continue;
}
lbitmod(3,'s',0,4,lval,lbts);
value[0]=(lbitest(0,10,lval,lbts));
if(!value[0]){
lval[2] += 1;
value[0]=(lval[2]==1);
if(value[0]){
set('L',1,'l',0,lval, lbts);
say(0,1266,0);
}}
lbitmod(3,'s',0,4,lval,lbts);
value[0]=(lbitest(0,5,lval,lbts));
if(!value[0]){
value[0]=(lval[0]==193);
value[0]|=(lval[0]==194);
if(!value[0]){
say(0,lval[0],0);
value[1253] += 1;
}}}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[1146])) continue;
if (!lbitest(0,5,lval,lbts)) continue;
say(0,lval[0],0);
}
value[0]=(ishere(193,-1,-1));
if(value[0]){
say(0,193,0);
}
value[0]=(ishere(194,-1,-1));
if(value[0]){
say(0,194,0);
}
value[0]=(lval[2]==1);
if(value[0]){
set('E',166,'l',1,lval, lbts);
}
value[0]=(isnear(100,0,3));
if(value[0]){
bitmod('s',100,13);
}
value[0]=(value[HERE]==502);
value[0]&=(value[1253]>0);
if(value[0]){
say(12,3433,1253);
}
return 0;
}
int p534(int typ0,int par0)
{
   int lval [5];
   short lbts [5];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
set('L',1,'c',1,lval, lbts);
set('V',1253,'c',0,NULL,NULL);
lval[4]=value[value[1146]];lbts[4*VARSIZE]= *bitword(1146);value[0]=(lval[4]==0);
if(value[0]){
return 0;
}
lbts[2*VARSIZE]= -1;lval[2]=1-1; while(++lval[2]<=8) {
lval[4]=value[value[1146]];lbts[4*VARSIZE]= *bitword(1146);lval[4] &= lval[1];
value[0]=(lval[4]!=0);
if(value[0]){
value[1253] += 1;
value[0]=(lval[0]>0);
if(value[0]){
value[0]=(value[1253]==1);
if(value[0]){
set('T',3207,'c',0,NULL,NULL);
}else{value[0]=(value[1253]==lval[0]);
if(value[0]){
set('T',3207,'c',2,NULL,NULL);
}else{
set('T',3207,'c',1,NULL,NULL);
}}
say(8,3207,lval[3]);
}}
lval[3] += 1;
lval[1] += lval[1];
if (lbts[1*VARSIZE]==-1) lbts[1*VARSIZE]= -1;
}
return 0;
}
int p796(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=!(bitest(evar(1178),1));
value[0]&=!(bitest(evar(1178),2));
value[0]|=(KEY(822));
if(value[0]){
value[0]=(594<=value[1146] && value[1146]<=617);
value[0]&=!(value[1146]==605);
if(value[0]){
value[0]=(value[HERE]==596||value[HERE]==597||value[HERE]==601||value[HERE]==607||value[HERE]==610);
if(value[0]){
set('L',0,'c',0,lval, lbts);
}else{
set('L',0,'c',1,lval, lbts);
}
p534(0,0);
if (loop) return (0);
value[0]=(value[1253]>0);
if(value[0]){
lval[0] += 2;
}
glue_text();
say(8,3006,lval[0]);
value[0]=(value[HERE]==604||value[HERE]==613);
if(value[0]){
say(8,3381,0);
}
value[0]=(value[HERE]==612);
if(value[0]){
say(8,3381,1);
}
value[0]=(606<=value[1146] && value[1146]<=617);
if(value[0]){
set('L',1,'v',1146,lval, lbts);
lval[0]=594;lbts[0*VARSIZE]= -1;
lval[1] -= lval[0];
value[0]=(value[HERE]==606||value[HERE]==607||value[HERE]==608||value[HERE]==612||value[HERE]==613);
if(value[0]){
say(8,3210,lval[1]);
}else{
say(8,3211,lval[1]);
}}
value[0]=(irand(100)<50);
value[0]&=!(KEY(822));
if(value[0]){
say(0,3209,0);
}}
value[0]=(bitest(evar(1146),15));
value[0]|=(587<=value[1146] && value[1146]<=589);
value[0]|=(value[HERE]==605);
if(value[0]){
value[0]=(KEY(822));
value[0]&=!(value[HERE]==590);
if(value[0]){
say(0,2302,0);
}else{
say(0,1266,0);
}
bitmod('c',evar(1146),4);
}else{value[0]=(value[HERE]==592||value[HERE]==593);
if(value[0]){
say(0,2303,0);
}else{value[0]=(value[HERE]==209);
value[0]&=(value[210]==0);
if(value[0]){
say(0,1696,0);
}}}}
value[0]=(bitest(evar(1146),13));
if(value[0]){
say(0,1375,0);
}
return 0;
}
int p323(void)
{
value[0]=!(ishere(163,-1,-1));
value[0]&=(value[3260]==4);
if(value[0]){
set('E',491,'c',1,NULL,NULL);
say(0,1266,0);
say(32,163,0);
apport(163,value[1146]);
bitmod('s',163,4);
set('E',163,'c',1,NULL,NULL);
}
return 0;
}
int p188(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(value[HERE]==586);
if(value[0]){
return 0;
}
value[0]=(KEY(822));
value[0]|=(lval[0]==2);
if(value[0]){
say(34,1146,0);
}else{
say(2,1146,0);
}
value[0]=(519<=value[1146] && value[1146]<=543);
value[0]&=!(value[HERE]==538);
if(value[0]){
value[1153]=value[value[1146]];*bitword(1153)= *bitword(1146);value[0]=(value[1153]==0);
if(value[0]){
say(0,1266,0);
say(0,1355,0);
}
}else{value[0]=(value[HERE]==544);
value[0]&=!(bitest(544,16));
if(value[0]){
bitmod('s',544,16);
say(0,2482,0);
}}
p796();
if (loop) return (0);
value[0]=(value[HERE]==491);
if(value[0]){
p323();
if (loop) return (0);
}
p400();
if (loop) return (0);
value[0]=(have(39,-1,-1));
if(value[0]){
say(0,1426,0);
}
p392();
if (loop) return (0);
return 0;
}
int p374(void)
{
value[0]=(isnear(108,-1,-1));
if(value[0]){
value[0]=(value[1187]>=value[1202]);
if(value[0]){
say(0,1388,0);
flush_command();
loop=1; return(0);
}
value[0]=(have(108,-1,-1));
if(value[0]){
say(76,1314,108);
 if (loop) return(0);}
apport(108,INHAND);
say(12,1987,1144);
value[0]=(value[109]==1);
if(value[0]){
apport(109,INHAND);
value[0]=(value[1198]>=6);
if(value[0]){
bitmod('s',109,18);
bitmod('s',108,18);
}
say(64,2005,0);
 if (loop) return(0);}
say(76,1988,1145);
 if (loop) return(0);}
return 0;
}
int p373(void)
{
value[0]=(isnear(109,-1,-1));
if(value[0]){
value[0]=(have(109,-1,-1));
if(value[0]){
say(76,1314,109);
 if (loop) return(0);}
value[0]=(value[109]==1);
if(value[0]){
p374();
if (loop) return (0);
}
value[0]=(isnear(108,-1,-1));
if(value[0]){
value[0]=(have(110,-1,-1));
if(value[0]){
say(64,1316,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1218),3));
if(!value[0]){
say(64,2354,0);
 if (loop) return(0);}
bitmod('c',208,8);
value[0]=(have(108,-1,-1));
if(value[0]){
apport(109,INHAND);
}
set('E',109,'c',1,NULL,NULL);
say(64,1992,0);
 if (loop) return(0);}
say(64,1317,0);
 if (loop) return(0);}
return 0;
}
int p375(void)
{
value[0]=(ishere(193,-1,-1));
if(value[0]){
value[0]=(bitest(193,15));
if(value[0]){
say(76,2045,193);
 if (loop) return(0);}
say(64,1409,0);
 if (loop) return(0);}
return 0;
}
int p376(void)
{
value[0]=(ishere(81,-1,-1));
if(value[0]){
value[0]=(value[1187]<value[1202]);
if(value[0]){
apport(81,INHAND);
apport(82,702);
say(64,3423,0);
 if (loop) return(0);}
flush_command();
say(64,1388,0);
 if (loop) return(0);}
return 0;
}
int p379(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(isnear(100,-1,-1));
value[0]&=(value[1187]<value[1202]);
value[0]&=!(have(100,-1,-1));
if(value[0]){
value[0]=(value[100]==0);
if(value[0]){
set('E',100,'c',1,NULL,NULL);
apport(100,INHAND);
say(64,1828,0);
 if (loop) return(0);}
value[0]=(getloc(100)==value[1146]);
if(value[0]){
value[0]=(test("doall"));
if(value[0]){
say(64,2563,0);
 if (loop) return(0);}
say(64,1829,0);
 if (loop) return(0);}}
return 0;
}
int p235(void)
{
value[0]=(have(100,-1,-1));
if(value[0]){
value[0]=(value[1148]!=value[1146]);
value[0]&=(value[1148]==443);
if(value[0]){
value[1148]=442;*bitword(1148)= -1;
}
apport(100,value[1148]);
bitmod('c',100,13);
value[0]=(value[100]>1);
value[0]|=(value[HERE]==386);
if(value[0]){
set('E',100,'c',3,NULL,NULL);
value[0]=(value[HERE]==386);
if(value[0]){
say(0,1928,0);
value[0]=(bitest(evar(1178),8));
if(value[0]){
set('V',1253,'c',0,NULL,NULL);
}else{
bitmod('s',evar(1178),8);
set('V',1253,'c',1,NULL,NULL);
}
}else{
value[0]=(value[1148]!=value[1146]);
if(value[0]){
value[0]=(isnear(100,-1,-1));
if(value[0]){
set('E',100,'c',2,NULL,NULL);
}
value[0]=(642<=value[1146] && value[1146]<=650);
if(value[0]){
say(8,1929,1);
say(72,2428,0);
 if (loop) return(0);}else{
say(8,1929,2);
}
}else{
say(8,1929,0);
value[0]=(bitest(evar(1178),8));
if(!value[0]){
bitmod('s',evar(1178),8);
bitmod('s',evar(1178),0);
say(0,1266,0);
}}
say(64,1266,0);
 if (loop) return(0);}
value[0]=(isnear(88,-1,-1));
if(value[0]){
p659();
if (loop) return (0);
}
value[0]=(value[1253]==1);
if(value[0]){
say(0,1266,0);
p188(0,1);
if (loop) return (0);
}
}else{
value[0]=(value[1148]!=value[1146]);
if(value[0]){
value[0]=(642<=value[1146] && value[1146]<=650);
if(value[0]){
say(0,3345,0);
say(72,2428,0);
 if (loop) return(0);}
}else{
set('V',1148,'c',0,NULL,NULL);
}
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(76,1830,1148);
 if (loop) return(0);}else{
say(64,1831,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==462);
if(value[0]){
p940();
if (loop) return (0);
}
value[0]=(value[1148]==value[1146]);
if(value[0]){
loop=1; return(0);
}
value[0]=(value[1152]==1);
if(value[0]){
say(12,1988,100);
say(74,1149,0);
 if (loop) return(0);}else{
say(78,1149,100);
 if (loop) return(0);}}
return 0;
}
int p236(void)
{
value[0]=(have(102,-1,-1));
if(!value[0]){
return 0;
}
value[102] += 3;
value[0]=(value[102]>8);
if(value[0]){
value[102] -= 8;
}
apport(102,value[1148]);
value[0]=(isnear(102,-1,-1));
if(value[0]){
set('T',2561,'c',0,NULL,NULL);
}else{value[0]=(642<=value[1146] && value[1146]<=650);
if(value[0]){
set('T',2561,'c',3,NULL,NULL);
}else{value[0]=(value[1148]==443);
if(value[0]){
set('T',2561,'c',2,NULL,NULL);
}else{
set('T',2561,'c',1,NULL,NULL);
}}}
say(12,2561,102);
value[0]=(value[2561]==3);
if(value[0]){
glue_text();
say(8,2428,0);
loop=1; return(0);
}
value[0]=(value[102]==8);
value[0]&=!(bitest(102,13));
if(value[0]){
bitmod('s',102,13);
say(64,2301,0);
 if (loop) return(0);}
loop=1; return(0);
return 0;
}
int p232(void)
{
value[0]=(value[109]!=1);
value[0]|=!(isnear(108,-1,-1));
if(value[0]){
return 0;
}
apport(109,HERE);
set('E',109,'c',0,NULL,NULL);
value[0]=(isnear(9,-1,-1));
if(value[0]){
apport(9,702);
bitmod('c',214,8);
bitmod('c',214,5);
say(72,1320,0);
 if (loop) return(0);}
value[0]=(isnear(21,-1,-1));
if(value[0]){
value[0]=(value[21]==0);
if(value[0]){
p945();
if (loop) return (0);
say(72,1320,1);
 if (loop) return(0);}
say(76,1990,1145);
 if (loop) return(0);}
value[0]=(isnear(5,-1,-1));
if(value[0]){
say(72,1320,2);
 if (loop) return(0);}
value[0]=(isnear(23,-1,-1));
if(value[0]){
say(72,1320,3);
 if (loop) return(0);}
value[0]=(isnear(25,-1,-1));
if(value[0]){
p945();
if (loop) return (0);
say(72,1320,4);
 if (loop) return(0);}
value[0]=(isnear(39,-1,-1));
if(value[0]){
value[0]=(value[39]==0);
if(value[0]){
p945();
if (loop) return (0);
say(72,1320,5);
 if (loop) return(0);}
say(72,1320,6);
 if (loop) return(0);}
value[0]=(isnear(26,-1,-1));
value[0]&=(value[26]<2);
if(value[0]){
say(8,1320,7);
p945();
if (loop) return (0);
p154();
if (loop) return (0);
}
value[0]=(isnear(90,-1,-1));
if(value[0]){
p945();
if (loop) return (0);
say(72,1320,8);
 if (loop) return(0);}
value[0]=(isnear(193,-1,-1));
if(value[0]){
p945();
if (loop) return (0);
say(12,1452,193);
loop=1; return(0);
}
value[0]=(value[HERE]==448);
if(value[0]){
value[0]=(getloc(112)==702);
if(!value[0]){
say(8,1320,9);
say(0,1844,0);
p154();
if (loop) return (0);
}}
value[0]=(bitest(evar(1146),7));
value[0]&=!(587<=value[1146] && value[1146]<=627);
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
value[0]=(getloc(9)==214);
if(value[0]){
value[0]=(isnear(137,-1,-1));
if(value[0]){
say(72,2660,0);
 if (loop) return(0);}else{
say(72,2660,1);
 if (loop) return(0);}
}else{
p945();
if (loop) return (0);
value[0]=(isnear(137,-1,-1));
if(value[0]){
say(72,2660,2);
 if (loop) return(0);}else{
say(72,2660,3);
 if (loop) return(0);}}}
say(8,2660,1);
value[0]=(value[HERE]==462);
if(value[0]){
p940();
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p233(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(have(108,-1,-1));
if(value[0]){
apport(108,value[1148]);
say(12,1987,1144);
value[0]=(have(109,-1,-1));
if(value[0]){
apport(109,HERE);
say(0,2005,0);
value[0]=(value[1148]==value[1146]);
if(!value[0]){
value[0]=(value[HERE]==210);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{
set('L',0,'c',0,lval, lbts);
say(0,1266,0);
}
say(8,2035,lval[0]);
apport(109,value[1148]);
}
}else{
say(12,1988,1145);
}
value[0]=(value[HERE]==263);
if(value[0]){
apport(108,262);
}
value[0]=(value[HERE]==462);
if(value[0]){
p940();
if (loop) return (0);
}
loop=1; return(0);
}
return 0;
}
int p237(void)
{
value[0]=(have(56,-1,-1));
if(value[0]){
apport(56,value[1148]);
value[0]=(value[HERE]==284);
if(value[0]){
say(64,3423,0);
 if (loop) return(0);}else{
value[0]=(value[1148]==value[1146]);
if(value[0]){
value[0]=(ishere(113,-1,-1));
if(value[0]){
set('E',56,'c',1,NULL,NULL);
say(0,56,0);
set('E',56,'c',0,NULL,NULL);
}else{
set('E',56,'c',2,NULL,NULL);
say(0,56,0);
apport(56,702);
apport(57,value[1146]);
}
}else{
say(0,1687,0);
apport(56,702);
apport(57,value[1148]);
}}
value[0]=(value[HERE]==462);
if(value[0]){
p940();
if (loop) return (0);
}
loop=1; return(0);
}
return 0;
}
int p268(void)
{
value[0]=(value[1251]==0);
if(value[0]){
say(64,3240,0);
 if (loop) return(0);}
value[1256]=value[value[1251]];*bitword(1256)= *bitword(1251);value[0]=(value[1256]>2);
if(!value[0]){
say(76,1745,1251);
 if (loop) return(0);}
value[0]=(isnear(193,-1,-1));
value[0]&=(KEY(793));
if(value[0]){
p888();
if (loop) return (0);
value[value[1251]]=2;
bitmod('s',193,14);
say(12,2036,1253);
say(12,1557,1251);
say(76,1558,193);
 if (loop) return(0);}
value[0]=(value[1256]==6);
if(value[0]){
value[0]=(value[1251]==136);
if(value[0]){
value[value[1251]]=1;
}else{
value[value[1251]]=2;
}
apport(87,value[1148]);
say(64,1374,0);
 if (loop) return(0);}
p218();
if (loop) return (0);
return 0;
}
int p238(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(have(value[1145],-1,-1));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(value[1146]==value[1148]);
if(!value[0]){
value[0]=(value[1251]==136);
value[0]&=(value[136]==6);
if(value[0]){
set('E',136,'c',1,NULL,NULL);
}else{
set('E',136,'c',2,NULL,NULL);
}
value[0]=(value[1251]==123);
if(value[0]){
return 0;
}
value[0]=(value[1251]==136);
value[0]&=(lval[0]==6);
if(value[0]){
apport(87,value[1148]);
return 0;
}
value[0]=(lval[0]>2);
value[0]&=!(587<=value[1146] && value[1146]<=627);
if(value[0]){
bitmod('s',evar(1148),13);
}}
value[0]=(lval[0]>2);
value[0]&=(value[1148]==value[1146]);
if(value[0]){
apport(value[1145],HERE);
say(76,2246,1145);
 if (loop) return(0);}}
return 0;
}
int p514(void)
{
value[0]=(value[21]>0);
if(value[0]){
say(64,1464,0);
 if (loop) return(0);}
value[1156]=1337;*bitword(1156)= -1;
input_store('S', &value[1156]);
set('V',1180,'c',28,NULL,NULL);
say(66,1156,0);
 if (loop) return(0);return 0;
}
int p226(void)
{
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
set('E',21,'c',1,NULL,NULL);
value[0]=(value[HERE]==307);
if(value[0]){
value[1146]=306;*bitword(1146)= -1;
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
if (!isat(value[1154],-1,-1,307)) continue;
value[0]=(bitest(evar(1154),3));
if(value[0]){
apport(value[1154],value[1146]);
}}}
apport(126,value[1146]);
apport(63,value[1146]);
apport(21,value[1146]);
value[1204] = irand(5-0+1)+0;
value[1204] += 5;
bitmod('c',21,6);
set('E',63,'c',2,NULL,NULL);
say(0,1920,0);
say(0,21,0);
say(0,63,0);
say(64,126,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
input_store('R', &value[1156]);
say(12,1693,1144);
say(76,1694,1145);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);return 0;
}
int p513(void)
{
value[0]=(value[1198]<6);
if(value[0]){
p945();
if (loop) return (0);
say(64,1332,0);
 if (loop) return(0);}
say(64,1874,0);
 if (loop) return(0);return 0;
}
int p515(void)
{
set('V',1180,'c',29,NULL,NULL);
value[1156]=1338;*bitword(1156)= -1;
input_store('S', &value[1156]);
say(78,1156,193);
 if (loop) return(0);return 0;
}
int p247(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
set('L',0,'v',1202,lval, lbts);
lval[0] -= value[1187];
lval[0] += 2;
lval[0] *= 10;
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(0,1334,0);
p517(0,0);
if (loop) return (0);
loop=1; return(0);
}
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(64,1335,0);
 if (loop) return(0);}
say(0,1336,0);
p154();
if (loop) return (0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
input_store('R', &value[1156]);
say(12,1693,1144);
say(76,1694,193);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);return 0;
}
int p516(void)
{
set('V',1180,'c',30,NULL,NULL);
value[1156]=1338;*bitword(1156)= -1;
input_store('S', &value[1156]);
say(78,1156,25);
 if (loop) return(0);return 0;
}
int p632(void)
{
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
value[0]=(irand(100)<50);
if(value[0]){
say(64,1595,0);
 if (loop) return(0);}
say(0,1596,0);
p154();
if (loop) return (0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
input_store('R', &value[1156]);
say(12,1693,1144);
say(76,1694,25);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);return 0;
}
int p372(void)
{
value[0]=(isnear(39,-1,-1));
if(value[0]){
value[0]=(have(39,-1,-1));
if(value[0]){
say(64,2186,0);
 if (loop) return(0);}
value[0]=(value[HERE]==361);
value[0]&=(value[39]<2);
if(value[0]){
say(64,1466,0);
 if (loop) return(0);}
apport(39,INHAND);
say(64,2185,0);
 if (loop) return(0);}
return 0;
}
int p381(void)
{
value[0]=(isnear(125,-1,-1));
if(value[0]){
value[0]=(value[125]==0);
value[0]&=(value[1187]<value[1202]);
if(value[0]){
value[0]=(value[128]==2);
if(value[0]){
value[125] += 1;
apport(125,INHAND);
bitmod('c',517,8);
say(64,1578,0);
 if (loop) return(0);}
say(64,1579,0);
 if (loop) return(0);}}
return 0;
}
int p377(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(isnear(59,-1,-1));
if(value[0]){
value[0]=(value[59]==0);
value[0]&=(value[1187]<value[1202]);
if(value[0]){
apport(59,INHAND);
set('E',59,'c',1,NULL,NULL);
lval[0] = irand(4);
value[0]=(lval[0]==0);
if(value[0]){
value[1164]=720;*bitword(1164)= -1;
}else{value[0]=(lval[0]==1);
if(value[0]){
value[1164]=715;*bitword(1164)= -1;
}else{value[0]=(lval[0]==2);
if(value[0]){
value[1164]=714;*bitword(1164)= -1;
}else{
value[1164]=708;*bitword(1164)= -1;
}}}
apport(38,702);
value[0]=(value[36]==0);
if(value[0]){
say(76,1610,1164);
 if (loop) return(0);}
say(64,1611,0);
 if (loop) return(0);}}
return 0;
}
int p803(void)
{
say(12,1502,1188);
p154();
if (loop) return (0);
return 0;
}
int p220(void)
{
value[0]=(bitest(evar(1179),1));
if(value[0]){
return 0;
}
bitmod('s',evar(1179),1);
p26();
if (loop) return (0);
value[0]=(value[1253]==1);
if(value[0]){
return 0;
}
bitmod('s',evar(1178),7);
say(0,1667,0);
return 0;
}
int p148(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
say(0,1423,0);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
lbitmod(1,'c',0,18,lval,lbts);
value[0]=(lval[0]==28);
if(!value[0]){
lbitmod(1,'c',0,13,lval,lbts);
lbitmod(1,'c',0,14,lval,lbts);
}
value[0]=(lbitest(0,3,lval,lbts));
if(value[0]){
value[0]=(have(lval[0],-1,-1));
if(value[0]){
apport(lval[0],HERE);
}}}
apport(12,448);
set('E',136,'c',2,NULL,NULL);
set('E',119,'c',2,NULL,NULL);
set('E',123,'c',2,NULL,NULL);
bitmod('s',119,13);
set('E',119,'c',2,NULL,NULL);
bitmod('s',13,13);
bitmod('s',139,13);
bitmod('s',115,13);
set('E',115,'c',0,NULL,NULL);
bitmod('c',115,15);
bitmod('s',110,13);
bitmod('s',107,13);
set('E',107,'c',0,NULL,NULL);
set('V',1181,'c',0,NULL,NULL);
bitmod('s',193,13);
set('E',193,'c',0,NULL,NULL);
bitmod('s',112,14);
bitmod('s',9,14);
bitmod('s',108,14);
set('E',108,'c',1,NULL,NULL);
bitmod('s',109,14);
set('E',109,'c',1,NULL,NULL);
bitmod('s',113,14);
set('E',129,'c',2,NULL,NULL);
set('E',139,'c',0,NULL,NULL);
*bitword(1155)= -1; value[1155]=FLOC-1; while (++value[1155]<=LLOC) {
value[0]=(bitest(evar(1155),7));
if(value[0]){
bitmod('c',evar(1155),4);
}}
bitmod('s',110,4);
set('E',529,'c',1,NULL,NULL);
bitmod('s',302,8);
bitmod('s',544,4);
bitmod('s',302,4);
set('V',1198,'c',6,NULL,NULL);
set('E',202,'c',1,NULL,NULL);
set('V',1197,'c',999,NULL,NULL);
set('V',1147,'c',0,NULL,NULL);
move(447,-2); if (loop) return(0);
return 0;
}
int p149(void)
{
set('V',1198,'c',5,NULL,NULL);
set('E',6,'c',0,NULL,NULL);
say(0,1420,0);
value[0]=(isnear(193,-1,-1));
if(value[0]){
say(12,1526,193);
}
apport(193,701);
set('E',193,'c',0,NULL,NULL);
set('V',1196,'c',0,NULL,NULL);
set('V',1166,'c',0,NULL,NULL);
set('E',10,'c',0,NULL,NULL);
set('E',31,'c',0,NULL,NULL);
apport(23,702);
apport(21,702);
set('E',23,'c',4,NULL,NULL);
apport(24,303);
bitmod('s',10,10);
bitmod('s',31,10);
apport(85,702);
set('E',161,'c',0,NULL,NULL);
set('E',164,'c',0,NULL,NULL);
set('E',478,'c',0,NULL,NULL);
set('E',477,'c',1,NULL,NULL);
set('E',453,'c',2,NULL,NULL);
set('E',163,'c',1000,NULL,NULL);
set('V',1197,'c',30,NULL,NULL);
return 0;
}
int p671(int typ0,int par0)
{
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
value[0]=(lval[0]==0);
if(value[0]){
p26();
if (loop) return (0);
value[0]=(value[1253]>0);
if(value[0]){
return 0;
}}
bitmod('c',20,13);
set('L',2,'c',0,lval, lbts);
bitmod('c',100,5);
lbts[1*VARSIZE]= -1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
if (!lbitest(1,5,lval,lbts)) continue;
value[0]=(isnear(lval[1],-1,-1));
if(value[0]){
lval[3]=value[lval[1]];lbts[3*VARSIZE]=lbts[1*VARSIZE];value[0]=(lbitest(1,16,lval,lbts));
value[0]&=(lval[3]==2);
value[0]&=(have(lval[1],-1,-1));
if(!value[0]){
apport(lval[1],251);
set('L',2,'c',1,lval, lbts);
}}}
bitmod('s',100,5);
value[0]=(lval[2]==0);
if(value[0]){
value[0]=(bitest(20,4));
value[0]|=(value[1194]<150);
if(value[0]){
value[0]=(bitest(evar(1178),0));
if(value[0]){
say(0,1266,0);
}
say(0,1418,0);
bitmod('s',20,13);
value[1197] = irand(13-4+1)+4;
}else{
apport(52,251);
apport(30,373);
bitmod('s',20,4);
say(0,1486,0);
}
}else{
say(0,1419,0);
value[0]=(bitest(20,4));
if(!value[0]){
bitmod('s',20,4);
apport(52,251);
apport(30,373);
}}
bitmod('s',evar(1178),7);
return 0;
}
int p246(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(lval[0]==0);
if(value[0]){
p26();
if (loop) return (0);
value[0]=(value[1253]==1);
if(value[0]){
return 0;
}}
apport(124,value[1146]);
bitmod('s',193,4);
bitmod('s',124,4);
say(0,1285,0);
bitmod('s',evar(1178),7);
return 0;
}
int p272(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
bitmod('s',evar(1178),7);
value[0]=(value[46]>1);
value[0]|=(value[HERE]==302);
if(value[0]){
return 0;
}
value[0]=(value[1198]<4);
if(value[0]){
value[1197] = irand(39-30+1)+30;
value[0]=(value[69]>0);
if(value[0]){
value[69] = irand(20 - 1) + 1;
}
value[0]=(value[125]>0);
if(value[0]){
value[125] = irand(15 - 1) + 1;
}
value[0]=(value[21]>0);
value[0]&=(value[21]<3);
if(value[0]){
value[1204] -= 1;
value[0]=(value[1204]==4);
value[0]|=(value[1204]==0);
if(value[0]){
value[21] += 1;
}}
value[0]=(bitest(28,13));
value[0]&=!(bitest(28,14));
value[0]&=!(isnear(193,-1,-1));
if(value[0]){
bitmod('s',28,14);
say(0,1648,0);
set('V',1197,'c',5,NULL,NULL);
set('V',1206,'v',1197,NULL,NULL);
return 0;
}
value[0]=(value[128]==2);
if(value[0]){
value[1203] -= value[1206];
value[0]=(value[1203]<0);
if(value[0]){
set('E',128,'c',3,NULL,NULL);
set('V',1203,'c',40,NULL,NULL);
say(0,128,0);
set('E',128,'c',0,NULL,NULL);
set('V',1202,'c',8,NULL,NULL);
value[1202] += 1;
set('V',1197,'c',8,NULL,NULL);
set('V',1206,'v',1197,NULL,NULL);
return 0;
}}
value[0]=(bitest(210,4));
value[0]|=(bitest(222,4));
value[0]&=(getloc(9)==702);
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]|=(bitest(evar(1146),5));
if(value[0]){
value[1197] = irand(17-8+1)+8;
}else{
value[0]=(bitest(evar(1178),8));
value[0]&=(value[1194]>150);
value[0]&=!(bitest(20,4));
value[0]|=(bitest(20,13));
value[0]|=(irand(100)<10);
value[0]&=!(bitest(52,4));
value[0]&=!(isnear(193,-1,-1));
value[0]&=!(bitest(evar(1146),3));
value[0]&=!(bitest(46,12));
if(value[0]){
p671(0,1);
if (loop) return (0);
}else{
set('L',0,'v',1196,lval, lbts);
lval[0] += 2;
lval[0] *= 7;
value[0]=(isnear(193,-1,-1));
value[0]|=(irand(100)<lval[0]);
value[0]&=(value[193]<value[1196]);
if(value[0]){
value[0]=(bitest(124,4));
if(value[0]){
apport(193,value[1146]);
value[193] += 1;
value[0]=(value[193]==1);
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(0,193,0);
}
bitmod('s',193,13);
bitmod('c',193,14);
}
value[0]=(value[1166]==0);
if(value[0]){
p131();
if (loop) return (0);
}
}else{
value[0]=(bitest(evar(1146),11));
if(!value[0]){
value[0]=(bitest(222,4));
value[0]|=!(getloc(9)==214);
value[0]&=(bitest(evar(1178),8));
if(value[0]){
p246(0,1);
if (loop) return (0);
}}}}}}}
}else{
value[0]=(value[1198]==4);
if(value[0]){
p149();
if (loop) return (0);
}else{
value[0]=(bitest(evar(1179),3));
if(value[0]){
bitmod('c',evar(1179),3);
set('V',1197,'c',15,NULL,NULL);
}else{
p148();
if (loop) return (0);
}}}
set('V',1206,'v',1197,NULL,NULL);
return 0;
}
int p522(void)
{
value[0]=(value[1181]>0);
if(value[0]){
value[0]=(value[40]==3);
if(value[0]){
say(0,1489,0);
}else{
value[0]=(isnear(40,-1,-1));
if(value[0]){
say(0,1488,0);
set('E',40,'c',3,NULL,NULL);
set('V',1181,'c',400,NULL,NULL);
}else{
value[0]=(bitest(40,4));
if(value[0]){
say(0,1487,0);
}else{
set('E',107,'c',2,NULL,NULL);
value[0]=(227<=value[1146] && value[1146]<=252);
if(value[0]){
say(8,1483,1);
}else{
value[0]=(362<=value[1146] && value[1146]<=373);
if(value[0]){
say(8,1483,2);
}else{
say(8,1483,0);
}}}}}
}else{
value[0]=(value[1198]==5);
if(value[0]){
p148();
if (loop) return (0);
}else{
value[0]=(isnear(40,0,1));
if(value[0]){
say(0,1488,0);
set('E',40,'c',3,NULL,NULL);
value[1181] += 400;
}else{
say(0,1484,0);
set('E',107,'c',0,NULL,NULL);
p487();
if (loop) return (0);
bitmod('s',evar(1179),5);
}}}
return 0;
}
int p936(void)
{
bitmod('s',evar(1146),9);
value[0]=(391<=value[1146] && value[1146]<=426);
value[0]|=(value[HERE]==390);
if(value[0]){
bitmod('s',390,9);
*bitword(1155)= -1; value[1155]=390; while (++value[1155]<=426) {
bitmod('s',evar(1155),9);
}}
value[0]=(bitest(evar(1146),15));
if(value[0]){
*bitword(1155)= -1; value[1155]=593; while (++value[1155]<=617) {
bitmod('s',evar(1155),9);
}}
value[0]=(334<=value[1146] && value[1146]<=350);
if(value[0]){
*bitword(1155)= -1; value[1155]=333; while (++value[1155]<=350) {
bitmod('s',evar(1155),9);
}}
value[0]=(454<=value[1146] && value[1146]<=459);
if(value[0]){
*bitword(1155)= -1; value[1155]=453; while (++value[1155]<=459) {
bitmod('s',evar(1155),9);
}}
value[0]=(227<=value[1146] && value[1146]<=252);
if(value[0]){
*bitword(1155)= -1; value[1155]=226; while (++value[1155]<=252) {
bitmod('s',evar(1155),9);
}}
value[0]=(362<=value[1146] && value[1146]<=373);
if(value[0]){
*bitword(1155)= -1; value[1155]=361; while (++value[1155]<=373) {
bitmod('s',evar(1155),9);
}}
say(64,1871,0);
 if (loop) return(0);return 0;
}
int p405(void)
{
value[0]=(isnear(85,-1,-1));
value[0]&=(bitest(87,4));
value[0]&=!(bitest(evar(1146),8));
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1146),8));
if(!value[0]){
return 0;
}
value[0]=(bitest(evar(1146),9));
value[0]&=!(KEY(832));
if(value[0]){
return 0;
}
set('V',1156,'c',0,NULL,NULL);
value[0]=(value[HERE]==517);
value[0]&=(KEY(832));
if(value[0]){
set('V',1201,'c',0,NULL,NULL);
say(64,2666,0);
 if (loop) return(0);}
value[0]=(value[HERE]==203);
value[0]&=(value[6]==0);
value[0]&=!(have(106,-1,-1));
if(value[0]){
value[1156]=1353;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==444);
if(value[0]){
value[1156]=2581;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==208);
value[0]&=(isnear(109,0,0));
if(value[0]){
value[0]=(have(110,-1,-1));
if(value[0]){
value[1156]=1304;*bitword(1156)= -1;
}else{
value[0]=(bitest(evar(1218),3));
if(!value[0]){
value[1156]=1306;*bitword(1156)= -1;
}}
}else{value[0]=(value[HERE]==214);
value[0]&=(isnear(9,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1217),0));
if(value[0]){
value[0]=(KEY(832));
value[0]&=!(bitest(evar(1146),9));
if(!value[0]){
value[1156]=2071;*bitword(1156)= -1;
}
}else{
value[0]=(getloc(109)==702);
if(value[0]){
value[1156]=1310;*bitword(1156)= -1;
}else{
value[1156]=1308;*bitword(1156)= -1;
}}
}else{value[0]=(value[HERE]==295);
if(value[0]){
value[1156]=1480;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==287||value[HERE]==286||value[HERE]==288);
value[0]&=(bitest(287,4));
value[0]&=!(bitest(61,4));
if(value[0]){
value[1156]=1478;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==315);
if(value[0]){
value[1156]=1618;*bitword(1156)= -1;
}else{value[0]=(227<=value[1146] && value[1146]<=252);
value[0]|=(362<=value[1146] && value[1146]<=373);
value[0]|=(454<=value[1146] && value[1146]<=459);
if(value[0]){
value[1156]=1475;*bitword(1156)= -1;
}else{value[0]=(390<=value[1146] && value[1146]<=426);
if(value[0]){
value[1156]=1688;*bitword(1156)= -1;
}else{value[0]=(335<=value[1146] && value[1146]<=350);
if(value[0]){
value[0]=(KEY(832));
value[0]&=!(bitest(evar(1146),9));
if(value[0]){
return 0;
}else{
value[1156]=1800;*bitword(1156)= -1;
}
}else{value[0]=(isnear(85,-1,-1));
value[0]&=!(bitest(87,4));
if(value[0]){
value[1156]=2404;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==500);
if(value[0]){
value[1156]=3390;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==510||value[HERE]==511);
if(value[0]){
value[0]=(bitest(evar(1217),7));
if(value[0]){
value[1156]=3430;*bitword(1156)= -1;
}else{value[0]=(bitest(evar(1217),6));
if(value[0]){
value[1156]=2154;*bitword(1156)= -1;
}else{
value[1156]=2152;*bitword(1156)= -1;
}}
}else{value[0]=(value[HERE]==298);
if(value[0]){
value[1156]=1798;*bitword(1156)= -1;
}else{value[0]=(isnear(17,-1,-1));
if(value[0]){
value[1156]=1906;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==311);
if(value[0]){
value[1156]=1910;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==325);
if(value[0]){
value[1156]=2008;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==313);
if(value[0]){
value[0]=(bitest(evar(1217),1));
if(value[0]){
value[0]=(KEY(832));
value[0]&=!(bitest(evar(1146),9));
if(!value[0]){
value[1156]=1912;*bitword(1156)= -1;
}
}else{
value[1156]=1912;*bitword(1156)= -1;
bitmod('s',evar(1217),1);
}
}else{value[0]=(isnear(25,-1,-1));
if(value[0]){
value[1156]=1915;*bitword(1156)= -1;
}else{value[0]=(isnear(36,-1,-1));
if(value[0]){
value[1156]=1917;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==322);
if(value[0]){
value[0]=(KEY(832));
if(value[0]){
value[1156]=1926;*bitword(1156)= -1;
}else{
return 0;
}
}else{value[0]=(value[HERE]==198);
value[0]&=(value[194]>4);
if(value[0]){
value[1156]=2402;*bitword(1156)= -1;
set('V',1153,'v',1156,NULL,NULL);
value[1153] += 1;
value[value[1153]]=1;
value[0]=(bitest(95,4));
if(value[0]){
value[value[1153]]=0;
}
}else{value[0]=(value[HERE]==453);
if(value[0]){
value[0]=(value[453]==0);
if(value[0]){
value[1156]=2398;*bitword(1156)= -1;
}else{
value[0]=(value[194]<2);
if(value[0]){
value[1156]=2400;*bitword(1156)= -1;
}}
}else{value[0]=(value[HERE]==631);
if(value[0]){
value[1156]=2407;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==443);
if(value[0]){
value[1156]=2395;*bitword(1156)= -1;
set('V',1153,'v',1156,NULL,NULL);
value[1153] += 1;
value[0]=(value[139]==1);
if(value[0]){
value[value[1153]]=1;
}else{
value[value[1153]]=0;
}
}else{value[0]=(value[HERE]==559);
if(value[0]){
value[1156]=1760;*bitword(1156)= -1;
}else{value[0]=(bitest(evar(1146),15));
if(value[0]){
value[1156]=2649;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==571);
if(value[0]){
value[1156]=1504;*bitword(1156)= -1;
value[0]=(value[556]==2);
if(value[0]){
set('T',1878,'c',1,NULL,NULL);
}
}else{value[0]=(value[HERE]==302);
if(value[0]){
value[0]=(value[1198]<3);
if(value[0]){
value[1156]=1277;*bitword(1156)= -1;
}else{value[0]=(value[1207]==0);
if(value[0]){
value[1156]=2664;*bitword(1156)= -1;
}}
}else{value[0]=(value[HERE]==641);
if(value[0]){
value[1156]=2651;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==593);
if(value[0]){
value[1156]=2808;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==592);
if(value[0]){
value[1156]=2810;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==482);
if(value[0]){
value[1156]=2812;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==575);
if(value[0]){
value[1156]=2814;*bitword(1156)= -1;
}else{value[0]=(467<=value[1146] && value[1146]<=478);
if(value[0]){
value[1156]=2816;*bitword(1156)= -1;
}else{value[0]=(value[HERE]==432);
if(value[0]){
value[1156]=3369;*bitword(1156)= -1;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
value[0]=(value[1156]==0);
if(value[0]){
return 0;
}
set('V',1201,'c',0,NULL,NULL);
set('V',1180,'c',5,NULL,NULL);
say(0,1266,0);
say(66,1156,0);
 if (loop) return(0);return 0;
}
int p404(void)
{
value[0]=(value[1180]==5);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
say(8,1473,10);
set('V',1180,'c',6,NULL,NULL);
say(64,1474,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
p936();
if (loop) return (0);
say(64,1872,0);
 if (loop) return(0);}
say(0,1268,0);
say(66,1156,0);
 if (loop) return(0);}
value[0]=(value[1180]==6);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
value[0]=(value[1198]==6);
value[0]&=(value[1156]==2404);
if(value[0]){
value[1156] += 1;
}
value[1156] += 1;
say(2,1156,0);
value[1189] += 10;
bitmod('c',evar(1146),8);
bitmod('c',evar(1146),9);
value[1156] -= 1;
value[0]=(value[1156]==3386);
if(value[0]){
bitmod('s',evar(1217),10);
loop=1; return(0);
}
value[0]=(value[HERE]==511||value[HERE]==510);
if(value[0]){
value[0]=(bitest(evar(1217),6));
value[0]|=(bitest(evar(1217),7));
if(!value[0]){
bitmod('s',511,8);
bitmod('s',510,8);
bitmod('s',evar(1217),6);
}
value[0]=(bitest(evar(1217),7));
if(value[0]){
bitmod('c',511,8);
bitmod('c',510,8);
}}
value[0]=(isnear(9,-1,-1));
if(value[0]){
value[0]=(value[1156]==2071);
if(value[0]){
bitmod('c',evar(1217),0);
}else{
bitmod('s',evar(1146),8);
bitmod('s',evar(1217),0);
}}
value[0]=(value[HERE]==313);
if(value[0]){
value[0]=(value[1156]==2003);
if(value[0]){
bitmod('c',evar(1217),1);
}else{
bitmod('s',evar(1146),8);
bitmod('s',evar(1217),1);
}}
value[0]=(value[HERE]==571);
value[0]&=(value[556]==2);
if(value[0]){
set('T',1878,'c',1,NULL,NULL);
}
value[0]=(value[HERE]==287||value[HERE]==286);
value[0]|=(value[HERE]==288);
if(value[0]){
bitmod('c',287,8);
bitmod('c',288,8);
bitmod('c',286,8);
}
value[0]=(value[HERE]==313);
value[0]&=(bitest(256,4));
value[0]&=(bitest(evar(1217),1));
if(value[0]){
say(0,1914,0);
}
value[0]=(isnear(36,-1,-1));
if(value[0]){
bitmod('c',376,8);
bitmod('c',377,8);
}
value[0]=(value[HERE]==295);
value[0]&=(value[1158]>30);
if(value[0]){
set('V',1158,'c',30,NULL,NULL);
}
value[0]=(390<=value[1146] && value[1146]<=426);
value[0]|=(value[HERE]==390);
if(value[0]){
bitmod('c',390,8);
*bitword(1155)= -1; value[1155]=390; while (++value[1155]<=426) {
bitmod('c',evar(1155),8);
}}
value[0]=(334<=value[1146] && value[1146]<=350);
if(value[0]){
*bitword(1155)= -1; value[1155]=333; while (++value[1155]<=350) {
bitmod('c',evar(1155),8);
}}
value[0]=(454<=value[1146] && value[1146]<=459);
if(value[0]){
*bitword(1155)= -1; value[1155]=453; while (++value[1155]<=459) {
bitmod('c',evar(1155),8);
}}
value[0]=(227<=value[1146] && value[1146]<=252);
if(value[0]){
value[0]=(value[227]==0);
if(value[0]){
say(0,1477,0);
}else{
say(0,1266,0);
}
*bitword(1155)= -1; value[1155]=226; while (++value[1155]<=252) {
bitmod('c',evar(1155),8);
}}
value[0]=(362<=value[1146] && value[1146]<=373);
if(value[0]){
*bitword(1155)= -1; value[1155]=361; while (++value[1155]<=373) {
bitmod('c',evar(1155),8);
}}
value[0]=(bitest(evar(1146),15));
if(value[0]){
*bitword(1155)= -1; value[1155]=593; while (++value[1155]<=617) {
bitmod('c',evar(1155),8);
}}
value[0]=(isnear(17,-1,-1));
if(value[0]){
bitmod('c',224,8);
bitmod('c',225,8);
}
value[0]=(467<=value[1146] && value[1146]<=476);
if(value[0]){
*bitword(1155)= -1;value[1155]=467-1; while(++value[1155]<=476) {
bitmod('c',evar(1155),8);
}}
set('V',1180,'c',0,NULL,NULL);
loop=1; return(0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
p936();
if (loop) return (0);
say(64,1871,0);
 if (loop) return(0);}
say(0,1268,0);
say(0,1474,0);
loop=1; return(0);
}
return 0;
}
int p614(void)
{
value[0]=(value[1178]==2);
if(value[0]){
flush_command();
say(64,1352,0);
 if (loop) return(0);}
value[0]=(KEY(759));
if(value[0]){
set('V',1156,'v',1145,NULL,NULL);
}else{
set('V',1156,'v',1144,NULL,NULL);
}
value[0]=(bitest(evar(1178),8));
if(value[0]){
value[0]=(227<=value[1146] && value[1146]<=252);
value[0]&=!(bitest(evar(1146),11));
if(value[0]){
say(64,1345,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),15));
if(value[0]){
say(76,1295,1156);
 if (loop) return(0);}else{value[0]=(642<=value[1146] && value[1146]<=650);
if(value[0]){
if (anyof(745,746,748,749,750,752,-1))say(76,2425,1156);
 if (loop) return(0);if (anyof(755,-1))say(64,2555,0);
 if (loop) return(0);}}
say(76,1294,1156);
 if (loop) return(0);}
value[0]=(irand(100)<25);
value[0]&=!(value[HERE]==462);
value[0]&=(value[1198]<6);
if(value[0]){
value[0]=(bitest(evar(1146),7));
if(value[0]){
say(8,1312,0);
}else{
say(8,1312,1);
p154();
if (loop) return (0);
}}
say(76,1296,1156);
 if (loop) return(0);return 0;
}
int p73(void)
{
apport(127,702);
say(0,1581,0);
value[0]=(isnear(34,-1,-1));
if(value[0]){
apport(34,702);
say(72,2823,5);
 if (loop) return(0);}else{
value[0]=(isnear(193,-1,-1));
if(value[0]){
say(0,1266,0);
say(12,2822,193);
p517(0,-1);
if (loop) return (0);
loop=1; return(0);
}
value[0]=(isnear(23,-1,-1));
if(value[0]){
say(72,2823,0);
 if (loop) return(0);}
value[0]=(isnear(39,-1,-1));
if(value[0]){
value[0]=(value[39]>0);
if(value[0]){
say(72,2823,2);
 if (loop) return(0);}
say(72,2823,1);
 if (loop) return(0);}
value[0]=(isnear(9,-1,-1));
if(value[0]){
say(72,2823,3);
 if (loop) return(0);}
value[0]=(isnear(109,-1,-1));
if(value[0]){
say(72,2823,4);
 if (loop) return(0);}
value[0]=(isnear(21,-1,-1));
value[0]&=(value[21]==0);
if(value[0]){
say(72,2823,6);
 if (loop) return(0);}
value[0]=(isnear(28,-1,-1));
if(value[0]){
say(72,2823,7);
 if (loop) return(0);}
value[0]=(isnear(26,-1,-1));
value[0]&=(value[26]<2);
if(value[0]){
say(72,2823,8);
 if (loop) return(0);}
value[0]=(isnear(130,-1,-1));
if(value[0]){
say(72,2823,9);
 if (loop) return(0);apport(130,701);
}
value[0]=(isnear(90,-1,-1));
if(value[0]){
say(72,2823,10);
 if (loop) return(0);}
value[0]=(isnear(25,-1,-1));
if(value[0]){
say(72,2823,11);
 if (loop) return(0);}
value[0]=(isnear(5,-1,-1));
if(value[0]){
say(72,2823,12);
 if (loop) return(0);}}
loop=1; return(0);
return 0;
}
int p239(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1146]==value[1148]);
if(value[0]){
value[0]=(have(127,-1,-1));
if(value[0]){
value[0]=(value[127]<16);
if(value[0]){
value[127] += 1;
}
set('L',0,'e',127,lval, lbts);
lval[0] -= 6;
value[0]=(lval[0]>0);
if(value[0]){
lval[0] *= lval[0];
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(0,1580,0);
apport(127,702);
p154();
if (loop) return (0);
}}
}else{
return 0;
}
}else{
apport(127,702);
value[0]=(value[1152]==1);
if(value[0]){
say(12,2036,127);
say(10,1149,0);
}else{
say(14,1149,127);
}
value[0]=(value[1149]==1776);
value[0]|=(value[1149]==2098);
if(value[0]){
loop=1; return(0);
}else{
say(64,2256,0);
 if (loop) return(0);}}
return 0;
}
int p245(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(bitest(evar(1178),8));
if(value[0]){
set('L',0,'e',193,lval, lbts);
lval[0] += 2;
lval[0] = irand(lval[0]);
lval[0] -= 1;
value[0]=(lval[0]<1);
if(value[0]){
return 0;
}
bitmod('c',193,15);
say(8,1286,lval[0]);
set('L',1,'v',1202,lval, lbts);
lval[1] -= value[1187];
lval[1] *= 5;
value[0]=(bitest(193,14));
if(value[0]){
lval[1] -= 20;
}
value[1210] += lval[1];
if (lbts[1*VARSIZE]==-1) *bitword(1210*VARSIZE)= -1;
value[1210] += 35;
value[1210] /= lval[0];
value[0]=(have(67,0,2));
if(value[0]){
lval[1] = irand(5);
value[0]=(lval[1]>0);
if(value[0]){
value[1156]=1288;*bitword(1156)= -1;
value[1156] += lval[1];
if (lbts[1*VARSIZE]==-1) *bitword(1156*VARSIZE)= -1;
say(10,1156,lval[0]);
return 0;
}}
value[0]=(irand(100)<value[1210]);
value[0]|=(bitest(193,13));
if(value[0]){
say(8,1287,lval[0]);
bitmod('c',193,13);
}else{
say(8,1288,lval[0]);
p154();
if (loop) return (0);
}}
return 0;
}
int p910(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(have(value[1145],-1,-1));
if(value[0]){
value[0]=(KEY(793));
value[0]&=!(value[HERE]==199);
if(value[0]){
apport(value[1145],HERE);
}
value[0]=(isnear(193,-1,-1));
if(value[0]){
set('L',0,'v',1202,lval, lbts);
lval[0] -= value[1187];
lval[0] *= 5;
set('L',1,'e',193,lval, lbts);
lval[1] += 2;
lval[1] *= 15;
lval[0] += lval[1];
if (lbts[1*VARSIZE]==-1) lbts[0*VARSIZE]= -1;
value[0]=(anyof(124,781,-1));
if(value[0]){
value[0]=(keyword(124,781,-1));
if(!value[0]){
lval[0] += 15;
}}
value[0]=(irand(100)<lval[0]);
if(value[0]){
value[0]=(irand(100)<5);
value[0]&=(value[193]==1);
value[0]&=!(bitest(evar(1218),8));
if(value[0]){
bitmod('s',evar(1218),8);
set('V',1215,'c',1,NULL,NULL);
say(12,1440,1145);
}else{
say(0,1439,0);
}
p517(0,0);
if (loop) return (0);
value[0]=(value[193]>0);
if(value[0]){
set('V',1210,'c',0,NULL,NULL);
set('V',1209,'c',100,NULL,NULL);
}
}else{
say(0,1335,0);
set('V',1210,'c',0,NULL,NULL);
set('V',1209,'c',100,NULL,NULL);
}
}else{
value[0]=(isnear(9,-1,-1));
if(value[0]){
value[0]=(KEY(793));
if(value[0]){
apport(value[1145],INHAND);
}
say(64,1333,0);
 if (loop) return(0);}
value[0]=(isnear(21,-1,-1));
if(value[0]){
say(76,1442,1145);
 if (loop) return(0);}
value[0]=(isnear(39,-1,-1));
if(value[0]){
value[0]=(value[39]==0);
if(value[0]){
value[0]=(KEY(793));
if(value[0]){
value[0]=(KEY(124));
if(value[0]){
set('E',124,'c',1,NULL,NULL);
say(64,1462,0);
 if (loop) return(0);}
say(76,1584,1145);
 if (loop) return(0);}
value[0]=(irand(100)<50);
if(value[0]){
say(64,1585,0);
 if (loop) return(0);}
say(0,1586,0);
p154();
if (loop) return (0);
}
say(76,1463,39);
 if (loop) return(0);}
value[0]=(isnear(23,-1,-1));
if(value[0]){
say(64,1455,0);
 if (loop) return(0);}
value[0]=(isnear(25,-1,-1));
if(value[0]){
value[0]=(KEY(781));
if(value[0]){
set('T',1592,'c',0,NULL,NULL);
value[0]=(KEY(54));
if(value[0]){
set('T',1592,'c',1,NULL,NULL);
}
say(12,1592,1145);
p154();
if (loop) return (0);
}
value[0]=(anyof(124,54,-1));
if(value[0]){
set('T',1593,'c',0,NULL,NULL);
value[0]=(KEY(54));
if(value[0]){
set('T',1593,'c',1,NULL,NULL);
}
say(12,1593,1145);
p154();
if (loop) return (0);
}
bitmod('c',385,8);
apport(25,702);
apport(125,HERE);
bitmod('c',385,5);
say(64,1594,0);
 if (loop) return(0);}
value[0]=(isnear(18,-1,-1));
if(value[0]){
say(76,1615,1145);
 if (loop) return(0);}
value[0]=(isnear(26,-1,-1));
if(value[0]){
value[0]=(value[26]>1);
if(value[0]){
value[0]=(KEY(793));
if(value[0]){
apport(value[1145],INHAND);
}
say(64,1464,0);
 if (loop) return(0);}
say(12,1624,1145);
p154();
if (loop) return (0);
}
value[0]=(isnear(28,-1,-1));
if(value[0]){
say(76,1625,1145);
 if (loop) return(0);}
value[0]=(isnear(130,-1,-1));
if(value[0]){
say(12,1626,1145);
p154();
if (loop) return (0);
}
value[0]=(isnear(194,-1,-1));
if(value[0]){
value[0]=(value[HERE]==199);
if(value[0]){
say(76,3353,1145);
 if (loop) return(0);}
say(12,1794,1145);
p154();
if (loop) return (0);
}
value[0]=(KEY(793));
if(value[0]){
apport(value[1145],INHAND);
return 0;
}
say(64,3423,0);
 if (loop) return(0);}
}else{
p625(*bitword(1145),value[1145]);
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p663(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(isnear(36,-1,-1));
if(value[0]){
bitmod('c',376,8);
bitmod('c',377,8);
value[0]=(value[36]==0);
if(value[0]){
value[0]=(value[1178]==2);
if(value[0]){
set('L',0,'v',1145,lval, lbts);
}else{
set('L',0,'v',1144,lval, lbts);
}
value[0]=(lval[0]==value[1164]);
if(value[0]){
set('E',36,'c',1,NULL,NULL);
bitmod('s',36,13);
say(64,1609,0);
 if (loop) return(0);}
value[0]=(bitest(36,13));
if(!value[0]){
set('E',36,'c',2,NULL,NULL);
set('E',18,'c',1,NULL,NULL);
bitmod('s',evar(1179),0);
bitmod('s',evar(1179),2);
set('E',6,'c',0,NULL,NULL);
say(64,1612,0);
 if (loop) return(0);}}}
value[0]=(isnear(98,-1,-1));
value[0]&=(bitest(evar(1217),9));
if(value[0]){
say(64,3330,0);
 if (loop) return(0);}
say(64,1329,0);
 if (loop) return(0);return 0;
}
int p848(void)
{
value[0]=(value[18]>0);
if(value[0]){
value[18] += 1;
value[0]=(value[18]>15);
if(value[0]){
apport(18,value[1146]);
}
say(0,2012,0);
value[0]=(value[18]==18);
if(value[0]){
p154();
if (loop) return (0);
}}
return 0;
}
int p685(void)
{
move(702,-1);
value[0]=(value[107]==1);
if(value[0]){
set('V',1181,'c',0,NULL,NULL);
value[0]=(have(107,-1,-1));
if(value[0]){
say(0,1636,0);
}else{
say(0,1637,0);
}
}else{
say(0,1637,0);
}
p154();
if (loop) return (0);
return 0;
}
int p852(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(value[HERE]==629);
if(value[0]){
say(8,3355,0);
}else{value[0]=(value[HERE]==495);
if(value[0]){
say(8,3355,1);
}else{value[0]=(value[HERE]==286||value[HERE]==334);
if(value[0]){
say(8,3355,2);
}else{value[0]=(value[HERE]==425);
if(value[0]){
say(8,3355,3);
}else{
say(0,1313,0);
}}}}
value[0]=(lval[0]!=0);
if(value[0]){
loop=1; return(0);
}
return 0;
}
int p878(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(109));
value[0]|=(KEY(39));
if(value[0]){
return 0;
}
value[0]=(value[1151]==0);
value[0]&=(value[1150]==value[1146]);
if(value[0]){
return 0;
}
value[0]=(value[1152]==1);
if(value[0]){
say(12,2036,1145);
value[0]=(bitest(evar(1145),11));
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{
set('L',0,'c',0,lval, lbts);
}
say(10,1151,lval[0]);
}else{
say(14,1151,1145);
}
apport(value[1145],value[1150]);
value[0]=(value[1145]==148);
if(value[0]){
set('E',148,'c',2,NULL,NULL);
}
value[0]=(KEY(56));
if(value[0]){
apport(56,702);
apport(57,value[1150]);
value[0]=(getloc(57)==702);
if(!value[0]){
say(64,1687,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==210);
if(value[0]){
value[0]=(KEY(47));
if(value[0]){
set('E',213,'c',1,NULL,NULL);
set('E',9,'c',1,NULL,NULL);
say(64,2170,0);
 if (loop) return(0);}}
value[0]=(KEY(119));
value[0]&=(value[119]>2);
if(value[0]){
set('E',119,'c',2,NULL,NULL);
value[0]=(587<=value[1150] && value[1150]<=627);
if(!value[0]){
bitmod('s',evar(1150),13);
}}
value[0]=(KEY(136));
value[0]&=(value[136]>2);
if(value[0]){
value[0]=(value[136]==6);
if(value[0]){
set('E',136,'c',1,NULL,NULL);
apport(87,value[1150]);
}else{
set('E',136,'c',2,NULL,NULL);
value[0]=(587<=value[1150] && value[1150]<=627);
if(!value[0]){
bitmod('s',evar(1150),13);
}}}
value[0]=(KEY(123));
value[0]&=(value[123]>2);
if(value[0]){
set('E',123,'c',2,NULL,NULL);
}
value[0]=(KEY(108));
value[0]&=(have(109,-1,-1));
if(value[0]){
apport(109,value[1150]);
value[0]=(getloc(109)==702);
if(!value[0]){
value[0]=(value[HERE]==210);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{
set('L',0,'c',0,lval, lbts);
say(0,1266,0);
}
say(8,2035,lval[0]);
}
loop=1; return(0);
}
value[0]=(KEY(107));
value[0]&=(value[107]==1);
if(value[0]){
set('E',107,'c',0,NULL,NULL);
p487();
if (loop) return (0);
value[0]=(bitest(evar(1178),8));
if(!value[0]){
p852(0,1);
if (loop) return (0);
}}
value[0]=(value[HERE]==210);
if(value[0]){
say(0,1266,0);
}
loop=1; return(0);
return 0;
}
int p394(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1178]==1);
if(value[0]){
say(72,1690,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
value[0]|=!(bitest(evar(1145),3));
if(value[0]){
return 0;
}
set('L',0,'v',1187,lval, lbts);
lval[0] -= value[1202];
lval[0] *= 5;
lval[0] += 60;
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(12,1691,1145);
p154();
if (loop) return (0);
}
say(76,1692,1145);
 if (loop) return(0);}
return 0;
}
int p690(void)
{
value[1214] += 1;
value[0]=(irand(100)<40);
if(value[0]){
value[1214] -= 2;
value[0]=(value[1214]<0);
if(value[0]){
set('V',1214,'c',1,NULL,NULL);
}}
say(0,1266,0);
value[0]=(value[1214]==7);
if(value[0]){
value[0]=(value[HERE]==503||value[HERE]==504);
if(value[0]){
value[1214] += 1;
}
value[0]=(have(118,-1,-1));
if(value[0]){
apport(118,701);
}
move(502,-1);
say(12,1708,1214);
p154();
if (loop) return (0);
}
say(12,1708,1214);
return 0;
}
int p383(int typ0,int par0)
{
   int lval [5];
   short lbts [5];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
value[0]=(have(95,-1,-1));
value[0]&=(value[95]==2);
if(value[0]){
set('L',4,'c',1,lval, lbts);
}
value[0]=(value[194]>4);
if(value[0]){
value[0]=(bitest(194,15));
if(value[0]){
bitmod('c',194,15);
}else{
return 0;
}
value[0]=(isnear(63,-1,-1));
value[0]&=(bitest(158,4));
if(value[0]){
value[0]=(lval[0]==1);
if(value[0]){
say(0,3344,0);
}else{value[0]=(value[194]==5);
if(value[0]){
set('E',194,'c',6,NULL,NULL);
value[0]=(value[1167]==-1);
if(value[0]){
value[0]=(have(63,-1,-1));
if(value[0]){
say(8,1758,lval[4]);
}
set('V',1167,'l',4,lval, lbts);
}else{value[0]=(value[1167]==lval[4]);
if(value[0]){
say(0,3227,0);
}else{value[0]=(value[1167]<2);
if(value[0]){
say(8,3228,lval[4]);
set('V',1167,'c',2,NULL,NULL);
}else{
say(0,3227,0);
}}}}}
return 0;
}else{value[0]=(lval[4]==1);
if(value[0]){
value[0]=(isnear(136,-1,-1));
if(value[0]){
value[0]=(value[136]==3);
value[0]|=(value[136]>=7);
value[0]|=(value[136]==5);
if(value[0]){
say(0,3308,0);
return 0;
}}
say(8,2264,lval[0]);
bitmod('c',198,8);
value[0]=(have(136,-1,-1));
if(value[0]){
value[0]=(value[136]==1);
value[0]|=(value[136]==6);
if(value[0]){
move(198,-2268); if (loop) return(0);
}
value[0]=(value[136]==2);
if(value[0]){
set('E',136,'c',5,NULL,NULL);
say(0,2266,0);
}else{
say(0,3230,0);
}
return 0;
}
value[0]=(getloc(136)==701);
if(value[0]){
set('E',136,'c',5,NULL,NULL);
bitmod('s',136,4);
value[0]=(value[1187]<value[1202]);
if(value[0]){
apport(136,INHAND);
say(8,2265,0);
return 0;
}else{
apport(136,value[1146]);
say(8,2265,1);
say(0,1266,0);
say(0,136,0);
}
}else{
say(0,2267,0);
}
}else{
move(198,-1835); if (loop) return(0);
}}
return 0;
}
value[0]=(have(91,-1,-1));
if(value[0]){
say(0,1787,0);
bitmod('c',194,13);
apport(86,value[1146]);
bitmod('s',86,4);
apport(141,446);
bitmod('s',198,8);
apport(194,199);
set('E',199,'c',1,NULL,NULL);
set('E',446,'c',1,NULL,NULL);
bitmod('c',199,4);
set('E',194,'c',5,NULL,NULL);
apport(91,702);
return 0;
}
value[0]=(have(53,-1,-1));
if(value[0]){
set('E',194,'c',2,NULL,NULL);
value[1244] = irand(60-40+1)+40;
say(8,1786,0);
say(0,1788,0);
apport(53,701);
}else{
value[0]=(value[194]==0);
if(value[0]){
value[0]=(bitest(194,4));
value[0]&=!(have(118,-1,-1));
value[0]&=!(bitest(194,13));
value[0]&=(irand(100)<4);
if(value[0]){
say(0,1795,0);
bitmod('s',194,13);
return 0;
}else{
set('L',2,'c',0,lval, lbts);
lbts[1*VARSIZE]= -1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
if (!isat(lval[1],-1,-1,703)) continue;
value[0]=(lval[1]==107);
if(!value[0]){
value[0]=(lval[1]==119);
value[0]&=(value[13]<2);
if(!value[0]){
value[0]=(lbitest(1,16,lval,lbts));
if(value[0]){
lval[3]=value[lval[1]];lbts[3*VARSIZE]=lbts[1*VARSIZE];value[0]=(lval[3]<2);
if(value[0]){
apport(lval[1],HERE);
lval[2] += 1;
}
}else{
apport(lval[1],HERE);
lval[2] += 1;
}}}}
value[0]=(isnear(118,-1,-1));
if(value[0]){
lval[2] -= 1;
}
say(8,1786,lval[2]);
flush_command();
value[0]=(isnear(118,-1,-1));
if(value[0]){
apport(118,701);
move(495,-1789); if (loop) return(0);
}else{
set('E',194,'c',1,NULL,NULL);
value[1244] = irand(8-5+1)+5;
value[0]=(value[1245]>-1);
if(value[0]){
value[1245] = irand(7-4+1)+4;
}
move(453,-1790); if (loop) return(0);
}}}
value[0]=(value[194]==1);
if(value[0]){
say(8,1786,0);
flush_command();
value[0]=(value[1244]>0);
if(value[0]){
move(453,-1790); if (loop) return(0);
}
say(0,1791,0);
set('E',194,'c',0,NULL,NULL);
p154();
if (loop) return (0);
}}
return 0;
}
int p243(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[194]==1);
if(value[0]){
value[0]=(value[1245]>-1);
if(value[0]){
value[1245] -= 1;
}
value[0]=(value[1245]==0);
if(value[0]){
say(0,1736,0);
bitmod('s',103,4);
set('V',1245,'c',-1,NULL,NULL);
}
value[0]=(value[1244]<1);
if(value[0]){
set('L',0,'c',9,lval, lbts);
lval[0] += value[1244];
if (*bitword(1244*VARSIZE)==-1) lbts[0*VARSIZE]= -1;
value[0]=(lval[0]<1);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}
lval[0] *= 10;
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(0,1792,0);
}else{
say(0,1793,0);
say(0,1791,0);
move(452,-1);
set('E',194,'c',0,NULL,NULL);
p154();
if (loop) return (0);
}}}
return 0;
}
int p835(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[120]==2);
if(value[0]){
value[0]=(bitest(120,13));
if(value[0]){
value[1246] -= value[1187];
}else{
value[1246] -= 1;
}
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
value[1246] -= 1;
}
value[0]=(value[1246]<1);
if(value[0]){
say(0,1822,0);
p154();
if (loop) return (0);
}
value[0]=(value[1246]<3);
if(value[0]){
say(0,1821,0);
}
return 0;
}
value[0]=(bitest(120,13));
if(value[0]){
set('L',0,'v',1187,lval, lbts);
lval[0] /= 3;
lval[0] += 4;
}else{
set('L',0,'c',2,lval, lbts);
}
lval[0] += lval[0];
if (lbts[0*VARSIZE]==-1) lbts[0*VARSIZE]= -1;
bitmod('c',120,13);
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
lval[0] += lval[0];
if (lbts[0*VARSIZE]==-1) lbts[0*VARSIZE]= -1;
}
value[1246] -= lval[0];
value[0]=(value[1246]<40);
if(value[0]){
value[0]=(value[120]<2);
if(value[0]){
say(0,1821,0);
set('E',120,'c',2,NULL,NULL);
set('V',1246,'v',1187,NULL,NULL);
value[1246] += 2;
value[1246] += value[1246];
if (*bitword(1246*VARSIZE)==-1) *bitword(1246*VARSIZE)= -1;
}
}else{value[0]=(value[1246]<140);
value[0]&=(value[120]==0);
if(value[0]){
say(12,1820,1187);
set('E',120,'c',1,NULL,NULL);
}}
return 0;
}
int p771(void)
{
value[0]=(bitest(17,14));
if(value[0]){
bitmod('s',17,13);
bitmod('c',17,14);
}
return 0;
}
int p331(void)
{
value[0]=(value[1195]>0);
if(value[0]){
set('V',1195,'c',0,NULL,NULL);
value[1199]=1264;*bitword(1199)= -1;
say(64,1562,0);
 if (loop) return(0);}
say(66,1199,0);
 if (loop) return(0);return 0;
}
int p876(void)
{
bitmod('c',evar(1145),7);
value[0]=(value[1145]==119);
if(value[0]){
set('E',119,'c',2,NULL,NULL);
}else{value[0]=(value[1145]==144);
if(value[0]){
value[144] += 1;
value[0]=(value[144]>2);
if(value[0]){
say(64,2776,0);
 if (loop) return(0);}
}else{
value[value[1145]]=1;
}}
return 0;
}
int p670(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(bitest(evar(1145),16));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]>1);
if(value[0]){
value[value[1145]]=1;
value[0]=(value[1145]==67);
if(!value[0]){
bitmod('c',evar(1145),12);
}}}
value[0]=(bitest(evar(1145),7));
if(value[0]){
p876();
if (loop) return (0);
}
return 0;
}
int p698(void)
{
value[0]=(value[94]>1);
if(value[0]){
if (anyof(788,-1))say(64,1360,0);
 if (loop) return(0);if (anyof(795,-1))say(64,1995,0);
 if (loop) return(0);if (anyof(783,-1))say(76,2828,94);
 if (loop) return(0);}
say(32,94,0);
loop=1; return(0);
return 0;
}
int p795(void)
{
set('E',126,'c',0,NULL,NULL);
value[0]=(KEY(793));
value[0]&=!(value[HERE]==462);
value[0]&=!(isnear(130,-1,-1));
if(value[0]){
p878();
if (loop) return (0);
}
say(0,2001,0);
apport(126,HERE);
value[0]=(value[HERE]==462);
if(value[0]){
p940();
if (loop) return (0);
}
value[0]=(isnear(130,-1,-1));
if(value[0]){
apport(126,702);
apport(130,702);
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(64,1629,0);
 if (loop) return(0);}else{
glue_text();
say(0,2558,0);
loop=1; return(0);
}}
loop=1; return(0);
return 0;
}
int p539(void)
{
value[0]=(isnear(10,-1,-1));
if(value[0]){
say(64,2030,0);
 if (loop) return(0);}
value[0]=(isnear(31,-1,-1));
if(value[0]){
say(64,2040,0);
 if (loop) return(0);}
value[0]=(isnear(22,-1,-1));
if(value[0]){
value[0]=(value[22]==0);
if(value[0]){
say(64,2031,0);
 if (loop) return(0);}
say(64,2032,0);
 if (loop) return(0);}
value[0]=(value[HERE]==632||value[HERE]==631);
if(value[0]){
say(64,2365,0);
 if (loop) return(0);}
say(76,1319,11);
 if (loop) return(0);return 0;
}
int p510(int typ0,int par0,int typ1,int par1)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
set('V',1161,'l',0,lval, lbts);
set('V',1162,'l',1,lval, lbts);
say(0,lval[0],0);
value[1161] += 1;
value[0]=(value[1161]>lval[1]);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
loop=1; return(0);
}
set('V',1180,'c',21,NULL,NULL);
say(64,1431,0);
 if (loop) return(0);return 0;
}
int p221(void)
{
say(64,1283,0);
 if (loop) return(0);return 0;
}
int p297(int typ0,int par0,int typ1,int par1)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
value[0]=(anyof(129,134,1080,30,74,1018,-1));
if(value[0]){
if (anyof(822,798,-1))say(72,lval[0],lval[1]);
 if (loop) return(0);if (anyof(765,800,785,808,807,-1))say(76,1885,1145);
 if (loop) return(0);bitmod('s',evar(1180),1);
p39();
if (loop) return (0);
}
return 0;
}
int p298(void)
{
value[0]=(KEY(758));
if(value[0]){
if (anyof(848,920,-1))say(64,2042,0);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
return 0;
}}
value[0]=(KEY(920));
if(value[0]){
if (anyof(822,-1))say(64,2134,0);
 if (loop) return(0);if (anyof(792,800,785,767,769,-1))say(76,2135,1144);
 if (loop) return(0);if (anyof(848,-1))say(64,2042,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
p39();
if (loop) return (0);
}
return 0;
}
int p872(void)
{
value[0]=(getloc(85)==448);
if(value[0]){
value[0]=(bitest(85,14));
if(value[0]){
value[0]=(bitest(85,13));
if(value[0]){
bitmod('c',85,13);
say(64,2074,0);
 if (loop) return(0);}else{
apport(85,702);
say(64,2076,0);
 if (loop) return(0);}
}else{
say(0,2074,0);
value[0]=(bitest(85,13));
if(value[0]){
bitmod('s',85,14);
say(64,2075,0);
 if (loop) return(0);}
bitmod('s',85,13);
loop=1; return(0);
}}
say(64,2074,0);
 if (loop) return(0);return 0;
}
int p651(void)
{
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
if(value[0]){
say(76,1413,1145);
 if (loop) return(0);}
value[0]=(have(54,-1,-1));
if(value[0]){
value[0]=(KEY(114));
if(value[0]){
apport(114,702);
apport(115,value[1146]);
apport(62,293);
say(72,1415,0);
 if (loop) return(0);}
say(72,1415,1);
 if (loop) return(0);}
say(76,1414,1145);
 if (loop) return(0);}
return 0;
}
int p125(void)
{
value[0]=(anyof(765,766,738,739,-1));
if(value[0]){
return 0;
}
value[0]=(value[1144]==3);
if(value[0]){
say(64,1984,0);
 if (loop) return(0);}
value[0]=(KEY(851));
if(value[0]){
say(64,2168,0);
 if (loop) return(0);}
say(12,1982,1144);
say(76,1983,1145);
 if (loop) return(0);return 0;
}
int p754(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(isnear(69,-1,-1));
if(!value[0]){
p39();
if (loop) return (0);
}
set('L',1,'v',1145,lval, lbts);
lval[0]=1106;lbts[0*VARSIZE]= -1;
lval[1] -= lval[0];
value[0]=(value[69]==0);
value[0]&=(lval[1]==1);
value[0]|=(value[69]==lval[1]);
if(value[0]){
value[1145]=69;*bitword(1145)= -1;
}else{
p39();
if (loop) return (0);
}
value[0]=(anyof(1107,1108,1109,1110,1111,1112,1113,-1));
value[0]|=(anyof(1114,1115,1116,1117,1118,-1));
value[0]|=(anyof(1119,1120,1121,1122,1123,1124,1125,-1));
if(value[0]){
say(64,1266,0);
 if (loop) return(0);}
return 0;
}
int p228(void)
{
value[0]=(KEY(791));
if(value[0]){
value[0]=(value[1252]<3);
if(value[0]){
value[1252] += 1;
say(64,2280,0);
 if (loop) return(0);}
say(64,2281,0);
 if (loop) return(0);}
say(64,2263,0);
 if (loop) return(0);return 0;
}
int p549(void)
{
value[0]=(have(95,0,2));
if(value[0]){
value[0]=(bitest(evar(1178),8));
value[0]&=!(bitest(95,13));
if(value[0]){
bitmod('s',95,13);
say(0,2270,0);
}}
value[0]=(value[HERE]==199);
if(value[0]){
return 0;
}
value[0]=(value[1205]>0);
if(value[0]){
value[1205] -= 1;
}
value[0]=(value[95]==2);
if(!value[0]){
return 0;
}
value[0]=(have(95,0,2));
if(value[0]){
value[0]=(value[1205]==4);
if(value[0]){
say(0,2275,0);
}else{value[0]=(value[1205]==2);
if(value[0]){
say(0,2276,0);
}else{value[0]=(value[1205]==0);
if(value[0]){
apport(95,702);
value[0]=(bitest(136,4));
value[0]&=!(value[HERE]==136||value[HERE]==199);
if(value[0]){
say(8,2274,1);
}else{
say(8,2274,0);
}}}}}
return 0;
}
int p152(int typ0,int par0)
{
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(lval[0]==0);
value[0]|=!(have(102,-1,-1));
if(value[0]){
return 0;
}
set('L',1,'l',0,lval, lbts);
lval[2]=745;lbts[2*VARSIZE]= -1;
lval[1] -= lval[2];
lval[1] += 1;
value[0]=(value[102]==lval[1]);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}else{
value[0]=(lval[1]==1);
if(value[0]){
set('L',1,'c',8,lval, lbts);
}else{
lval[1] -= 1;
}
value[0]=(value[102]==lval[1]);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}else{
value[0]=(lval[1]>6);
if(value[0]){
lval[1] -= 6;
}else{
lval[1] += 2;
}
value[0]=(value[102]==lval[1]);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}}}
value[0]=(lval[1]==0);
if(value[0]){
say(72,2294,lval[0]);
 if (loop) return(0);}
return 0;
}
int p808(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
lval[1] = irand(255-1+1)+1;
value[0]=(lval[0]==594);
if(value[0]){
lval[1] &= 48;
}else{value[0]=(lval[0]==595);
if(value[0]){
lval[1] &= 113;
}else{value[0]=(lval[0]==596);
value[0]|=(lval[0]==597);
if(value[0]){
lval[1] &= 241;
}else{value[0]=(lval[0]==598);
if(value[0]){
lval[1] &= 209;
}else{value[0]=(lval[0]==599);
if(value[0]){
lval[1] &= 129;
}else{value[0]=(lval[0]==600);
if(value[0]){
lval[1] &= 254;
}else{value[0]=(lval[0]==602);
if(value[0]){
lval[1] &= 223;
}else{value[0]=(lval[0]==603);
if(value[0]){
lval[1] &= 143;
}else{value[0]=(lval[0]==604);
if(value[0]){
lval[1] &= 56;
}else{value[0]=(lval[0]==606);
if(value[0]){
lval[1] &= 125;
}else{value[0]=(lval[0]==608);
if(value[0]){
lval[1] &= 239;
}else{value[0]=(lval[0]==609);
if(value[0]){
lval[1] &= 222;
}else{value[0]=(lval[0]==610);
if(value[0]){
lval[1] &= 191;
}else{value[0]=(lval[0]==611);
if(value[0]){
lval[1] &= 87;
}else{value[0]=(lval[0]==612);
if(value[0]){
lval[1] &= 131;
}else{value[0]=(lval[0]==613);
if(value[0]){
lval[1] &= 56;
}else{value[0]=(lval[0]==614);
if(value[0]){
lval[1] &= 109;
}else{value[0]=(lval[0]==615);
if(value[0]){
lval[1] &= 142;
}else{value[0]=(lval[0]==616);
if(value[0]){
lval[1] &= 22;
}else{value[0]=(lval[0]==617);
if(value[0]){
lval[1] &= 11;
}}}}}}}}}}}}}}}}}}}}
value[lval[0]]=lval[1];
return 0;
}
int p65(void)
{
value[0]=(bitest(evar(1178),0));
if(!value[0]){
say(0,1266,0);
}
say(0,2314,0);
value[0]=(bitest(evar(1178),0));
if(value[0]){
say(0,1266,0);
}
p808(*bitword(1146),value[1146]);
if (loop) return (0);
set('V',1257,'c',0,NULL,NULL);
set('V',1260,'c',0,NULL,NULL);
return 0;
}
int p212(void)
{
   int lval [4];
   short lbts [4];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
bitmod('c',evar(1146),4);
value[0]=(bitest(evar(1178),0));
if(value[0]){
lval[3]=value[value[1146]];lbts[3*VARSIZE]= *bitword(1146);value[0]=(lval[3]==0);
if(value[0]){
p808(*bitword(1146),value[1146]);
if (loop) return (0);
}}
value[0]=(bitest(evar(1257),0));
if(value[0]){
p65();
if (loop) return (0);
bitmod('c',evar(1257),0);
return 0;
}
value[0]=(bitest(evar(1147),15));
value[0]&=(bitest(evar(1178),0));
if(value[0]){
value[0]=(value[1146]==value[1257]);
if(value[0]){
set('V',1257,'v',1147,NULL,NULL);
return 0;
}
set('L',2,'c',0,lval, lbts);
value[0]=(744<=value[1144] && value[1144]<=753);
if(value[0]){
set('L',2,'v',1144,lval, lbts);
}else{
value[0]=(KEY(759));
value[0]&=(744<=value[1145] && value[1145]<=753);
if(value[0]){
set('L',2,'v',1145,lval, lbts);
}}
value[0]=(lval[2]==0);
if(value[0]){
return 0;
}
value[0]=(lval[2]!=value[1213]);
if(value[0]){
lval[1]=745;lbts[1*VARSIZE]= -1;
set('L',3,'l',2,lval, lbts);
lval[3] -= lval[1];
set('V',1259,'c',1,NULL,NULL);
value[0]=(lval[3]>0);
if(value[0]){
lbts[0*VARSIZE]= -1;lval[0]=1-1; while(++lval[0]<=lval[3]) {
value[1259] += value[1259];
if (*bitword(1259*VARSIZE)==-1) *bitword(1259*VARSIZE)= -1;
}}
value[1258]=value[value[1147]];*bitword(1258)= *bitword(1147);value[1258] &= value[1259];
value[0]=(value[1258]>0);
if(value[0]){
say(8,2313,lval[2]);
move(value[1147],-1);
set('V',1147,'v',1257,NULL,NULL);
bitmod('c',evar(1178),0);
set('V',1212,'l',2,lval, lbts);
}
}else{
set('V',1257,'v',1147,NULL,NULL);
set('V',1213,'c',0,NULL,NULL);
p808(*bitword(1146),value[1146]);
if (loop) return (0);
}}
value[0]=(value[1260]==6);
if(value[0]){
set('L',1,'c',100,lval, lbts);
}else{
set('L',1,'v',1260,lval, lbts);
lval[1] *= 5;
}
value[1260] += 1;
value[0]=(irand(100)<lval[1]);
if(value[0]){
p65();
if (loop) return (0);
}
say(0,1266,0);
return 0;
}
int p800(void)
{
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[1156]=2310;*bitword(1156)= -1;
set('V',1180,'c',7,NULL,NULL);
input_store('S', &value[1156]);
say(66,1156,0);
 if (loop) return(0);return 0;
}
int p223(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(102));
value[0]|=(irand(100)<50);
if(value[0]){
apport(value[1145],702);
set('L',0,'c',0,lval, lbts);
value[0]=(bitest(evar(1145),11));
if(value[0]){
set('L',0,'c',1,lval, lbts);
}
say(12,1987,1144);
say(12,1989,1145);
say(72,2320,lval[0]);
 if (loop) return(0);}else{
(*procs[766])();
if (loop) return (0);
}
return 0;
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
lval[0] = irand(4-0+1)+0;
say(72,2319,lval[0]);
 if (loop) return(0);}
input_store('R', &value[1156]);
say(0,1268,0);
say(66,1156,0);
 if (loop) return(0);return 0;
}
int p883(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('V',1154,'c',0,NULL,NULL);
value[0]=(anyof(119,123,136,-1));
if(value[0]){
set('V',1154,'v',1145,NULL,NULL);
value[0]=(have(value[1154],-1,-1));
if(!value[0]){
p625(*bitword(1154),value[1154]);
if (loop) return (0);
}
lval[0]=value[value[1154]];lbts[0*VARSIZE]= *bitword(1154);value[0]=(lval[0]>2);
if(!value[0]){
say(76,2351,1154);
 if (loop) return(0);}
value[0]=(lval[0]==3);
if(value[0]){
say(12,2341,1145);
say(64,2342,0);
 if (loop) return(0);}
value[0]=(lval[0]==4);
if(value[0]){
say(64,2343,0);
 if (loop) return(0);}
value[0]=(lval[0]==6);
if(value[0]){
say(64,2344,0);
 if (loop) return(0);}
value[0]=(lval[0]==5);
if(value[0]){
value[0]=(value[5]==2);
if(value[0]){
say(64,2778,0);
 if (loop) return(0);}
value[0]=(KEY(136));
if(value[0]){
set('E',136,'c',2,NULL,NULL);
apport(136,value[1146]);
set('E',5,'c',1,NULL,NULL);
say(64,2346,0);
 if (loop) return(0);}
say(64,2345,0);
 if (loop) return(0);}}
value[0]=(KEY(120));
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
if(value[0]){
say(76,1513,120);
 if (loop) return(0);}
say(12,2341,1251);
say(64,2342,0);
 if (loop) return(0);}
value[0]=(KEY(122));
if(value[0]){
value[0]=(value[5]==2);
if(value[0]){
say(64,2778,0);
 if (loop) return(0);}
value[0]=(have(136,0,5));
if(value[0]){
set('E',5,'c',1,NULL,NULL);
set('E',136,'c',2,NULL,NULL);
apport(136,value[1146]);
say(64,2346,0);
 if (loop) return(0);}
value[0]=(have(119,0,5));
value[0]|=(have(123,0,5));
if(value[0]){
say(64,2345,0);
 if (loop) return(0);}
say(76,1513,122);
 if (loop) return(0);}
value[0]=(KEY(121));
if(value[0]){
value[0]=(have(136,0,4));
value[0]|=(have(119,0,4));
value[0]|=(have(123,0,4));
if(value[0]){
say(64,2343,0);
 if (loop) return(0);}
say(76,1513,121);
 if (loop) return(0);}
say(12,2036,5);
say(76,2353,1145);
 if (loop) return(0);return 0;
}
int p884(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(bitest(145,4));
if(value[0]){
return 0;
}
apport(145,value[1146]);
bitmod('s',145,4);
set('E',5,'c',2,NULL,NULL);
lval[1]=145;lbts[1*VARSIZE]= -1;
set('E',166,'l',1,lval, lbts);
say(72,2347,lval[0]);
 if (loop) return(0);return 0;
}
int p935(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(anyof(95,116,64,132,138,-1));
if(value[0]){
value[0]=(anyof(138,95,-1));
if(value[0]){
set('L',0,'c',0,lval, lbts);
}else{
set('L',0,'c',1,lval, lbts);
}
say(12,2321,1145);
say(72,2322,lval[0]);
 if (loop) return(0);}
return 0;
}
int p305(void)
{
value[0]=(have(138,-1,-1));
if(value[0]){
apport(138,701);
value[0]=(have(110,-1,-1));
value[0]&=(ishere(109,0,0));
if(value[0]){
say(0,2358,0);
say(64,2359,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1218),3));
if(value[0]){
say(64,2355,0);
 if (loop) return(0);}else{
bitmod('s',evar(1218),3);
say(72,2356,0);
 if (loop) return(0);}}
say(64,1396,0);
 if (loop) return(0);return 0;
}
int p75(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(KEY(822));
if(value[0]){
return 0;
}
value[0]=(KEY(793));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=!(have(value[1145],-1,-1));
if(value[0]){
return 0;
}
value[0]=(KEY(144));
if(value[0]){
set('E',144,'c',2,NULL,NULL);
bitmod('s',144,7);
value[1150]=619;*bitword(1150)= -1;
}else{
set('V',1150,'e',702,NULL,NULL);
}
value[1151]=2366;*bitword(1151)= -1;
return 0;
}
value[0]=(value[HERE]==632);
if(value[0]){
set('V',1261,'c',0,NULL,NULL);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
if (!lbitest(0,5,lval,lbts)) continue;
value[1261] += 1;
}
say(0,2363,0);
move(631,-2); if (loop) return(0);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
if (!lbitest(0,5,lval,lbts)) continue;
lval[1] += 1;
}
value[0]=(lval[1]>value[1261]);
if(value[0]){
say(0,2364,0);
value[0]=(have(144,-1,-1));
if(value[0]){
apport(144,619);
}
move(702,-1);
p154();
if (loop) return (0);
}
say(0,2363,0);
move(632,-2); if (loop) return(0);
return 0;
}
int p929(void)
{
   int lval [5];
   short lbts [5];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
bitmod('c',298,8);
value[0]=(have(109,-1,-1));
if(value[0]){
apport(109,702);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
lval[1]=value[lval[0]];lbts[1*VARSIZE]=lbts[0*VARSIZE];value[0]=(lval[0]==67||lval[0]==65);
value[0]&=(lval[1]==2);
if(value[0]){
set('L',2,'c',1,lval, lbts);
}else{value[0]=(lval[0]==107);
if(!value[0]){
apport(lval[0],702);
set('L',3,'c',1,lval, lbts);
}}}
value[0]=(lval[3]==0);
if(value[0]){
set('L',2,'c',0,lval, lbts);
}
lval[4] += lval[3];
if (lbts[3*VARSIZE]==-1) lbts[4*VARSIZE]= -1;
lval[4] += lval[2];
if (lbts[2*VARSIZE]==-1) lbts[4*VARSIZE]= -1;
lval[4] -= 1;
set('T',1645,'c',0,NULL,NULL);
value[0]=(have(107,-1,-1));
if(value[0]){
lval[4] += 2;
set('V',1187,'c',1,NULL,NULL);
value[0]=(lval[3]==0);
if(value[0]){
set('L',3,'c',1,lval, lbts);
set('L',4,'c',4,lval, lbts);
}
value[0]=(value[107]==1);
if(value[0]){
set('T',1645,'c',1,NULL,NULL);
}
}else{
set('V',1187,'c',0,NULL,NULL);
}
say(0,1645,0);
value[0]=(lval[3]>0);
if(value[0]){
say(8,1646,lval[4]);
}else{
say(0,1266,0);
}
set('V',1180,'c',0,NULL,NULL);
move(299,-1647); if (loop) return(0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1267,0);
 if (loop) return(0);}
input_store('R', &value[1156]);
say(0,1268,0);
say(66,1156,0);
 if (loop) return(0);return 0;
}
int p687(void)
{
value[0]=(value[1180]==10);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
set('V',1180,'c',11,NULL,NULL);
say(64,1569,0);
 if (loop) return(0);}
if (anyof(823,857,745,-1))say(64,1267,0);
 if (loop) return(0);}
set('V',1180,'c',0,NULL,NULL);
value[1189] += 10;
say(72,1570,0);
 if (loop) return(0);return 0;
}
int p552(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
value[1189] += 10;
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
if (!lbitest(0,5,lval,lbts)) continue;
apport(lval[0],HERE);
}
value[0]=(have(83,-1,-1));
if(value[0]){
apport(83,HERE);
}
say(2,1165,0);
value[0]=(227<=value[1146] && value[1146]<=252);
if(value[0]){
move(226,-2); if (loop) return(0);
}
value[0]=(362<=value[1146] && value[1146]<=373);
if(value[0]){
move(254,-2); if (loop) return(0);
}
value[0]=(390<=value[1146] && value[1146]<=426);
if(value[0]){
move(389,-2); if (loop) return(0);
}}
if (anyof(823,857,745,-1))say(64,1267,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);return 0;
}
int p744(void)
{
set('V',1180,'c',0,NULL,NULL);
bitmod('c',evar(1146),4);
value[0]=(value[1145]==725);
if(value[0]){
special(11,&value[0]);
}
value[0]=(value[163]>1);
if(value[0]){
value[163] += 1;
}
special(1, &value[1253]);
value[0]=(value[1253]==0);
if(value[0]){
set('V',1180,'c',17,NULL,NULL);
say(8,1556,10);
say(64,1497,0);
 if (loop) return(0);}
value[0]=(value[1253]==2);
if(value[0]){
input_store('S', &value[1156]);
set('V',1180,'c',46,NULL,NULL);
say(64,1543,0);
 if (loop) return(0);}else{
set('V',1180,'c',0,NULL,NULL);
say(64,1544,0);
 if (loop) return(0);}
return 0;
}
int p743(void)
{
value[0]=(value[1180]==15);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
if (anyof(823,857,745,-1))say(64,1554,0);
 if (loop) return(0);value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
value[0]=(value[1178]<2);
if(value[0]){
set('V',1180,'c',16,NULL,NULL);
set('V',1178,'c',98,NULL,NULL);
say(64,1551,0);
 if (loop) return(0);}
p744();
if (loop) return (0);
}
say(72,1723,0);
 if (loop) return(0);}
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
value[1189] += 10;
set('V',1180,'c',0,NULL,NULL);
say(64,1267,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
say(0,1553,0);
p322();
if (loop) return (0);
}
say(0,1268,0);
say(8,1556,10);
say(64,1497,0);
 if (loop) return(0);return 0;
}
int p33(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1180]==18);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(anyof(856,829,-1));
if(value[0]){
lval[0] = memstore (1);
value[0]=(lval[0]==0);
if(value[0]){
say(64,2371,0);
 if (loop) return(0);}else{
say(64,2370,0);
 if (loop) return(0);}}
if (anyof(823,857,745,-1))say(64,1871,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
lval[0] = memstore (2);
value[0]=(lval[0]==0);
if(value[0]){
value[1189] += 1;
bitmod('s',evar(1178),0);
say(64,2372,0);
 if (loop) return(0);}
say(64,2373,0);
 if (loop) return(0);}
if (anyof(823,857,745,-1))say(64,1871,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}
return 0;
}
int p718(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(0,1380,0);
say(0,1266,0);
value[0]=(value[1188]==4);
if(value[0]){
p322();
if (loop) return (0);
}else{
value[0]=(have(56,-1,-1));
if(value[0]){
apport(56,702);
apport(57,INHAND);
}
value[0]=(have(119,-1,-1));
if(value[0]){
set('E',119,'c',2,NULL,NULL);
}
value[0]=(have(123,-1,-1));
value[0]&=!(value[123]==1);
if(value[0]){
set('E',123,'c',2,NULL,NULL);
}
lval[2]=getloc(110);lbts[2*VARSIZE]= -1;
value[0]=(587<=lval[2] && lval[2]<=638);
if(value[0]){
apport(110,195);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
apport(lval[0],HERE);
value[0]=(lbitest(0,16,lval,lbts));
if(value[0]){
lval[1]=value[lval[0]];lbts[1*VARSIZE]=lbts[0*VARSIZE];value[0]=(lval[1]==2);
if(value[0]){
value[lval[0]]=1;
}}
value[0]=(lval[0]==67);
value[0]|=(lval[0]==124);
if(value[0]){
apport(lval[0],195);
}}
set('V',1187,'c',0,NULL,NULL);
set('E',107,'c',0,NULL,NULL);
move(200,-1);
set('V',1147,'c',0,NULL,NULL);
apport(107,195);
value[0]=(value[1181]==0);
if(value[0]){
value[0]=(bitest(386,4));
if(!value[0]){
lval[2]=getloc(40);lbts[2*VARSIZE]= -1;
value[0]=(value[40]==3);
value[0]|=!(lbitest(2,7,lval,lbts));
if(value[0]){
apport(107,702);
}}}
apport(193,701);
set('E',193,'c',0,NULL,NULL);
bitmod('c',20,13);
loop=1; return(0);
}}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
p322();
if (loop) return (0);
}
say(0,1268,0);
say(64,1271,0);
 if (loop) return(0);return 0;
}
int p763(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
input_store('R', &value[1156]);
say(0,1720,0);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
value[0]=(lbitest(0,5,lval,lbts));
if(value[0]){
apport(lval[0],473);
}else{
apport(lval[0],HERE);
}}
p154();
if (loop) return (0);
return 0;
}
int p776(void)
{
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1871,0);
 if (loop) return(0);}
voc (0, 0, 0, 1944);
voc (163, 0, 4, 0);
voc (124, 0, 0, 0);
voc (43, 0, 4, 0);
voc (26, 0, 4, 0);
voc (40, 0, 4, 0);
voc (65, 0, 4, 0);
voc (39, 0, 4, 0);
voc (158, 0, 4, 0);
voc (109, 0, 4, 0);
voc (99, 499, 4, 0);
voc (170, 670, 4, 1945);
voc (119, 0, 0, 0);
voc (146, 0, 4, 1946);
voc (141, 0, 4, 1947);
voc (70, 0, 4, 0);
voc (11, 0, 4, 0);
voc (136, 0, 4, 0);
voc (148, 0, 4, 0);
voc (108, 0, 4, 0);
voc (908, 122, 4, 0);
voc (66, 0, 4, 0);
voc (84, 0, 4, 0);
voc (122, 0, 4, 0);
voc (22, 303, 4, 0);
voc (52, 0, 4, 1948);
voc (114, 0, 4, 0);
voc (4, 0, 4, 0);
voc (51, 0, 4, 0);
voc (46, 0, 4, 0);
voc (96, 0, 4, 0);
voc (76, 0, 4, 0);
voc (48, 0, 4, 0);
voc (42, 0, 4, 0);
voc (28, 0, 4, 0);
voc (91, 0, 4, 0);
voc (8, 0, 4, 0);
voc (104, 0, 4, 0);
voc (21, 0, 4, 0);
voc (80, 0, 4, 0);
voc (87, 0, 4, 0);
voc (193, 0, 4, 1949);
voc (53, 0, 4, 1950);
voc (58, 0, 4, 0);
voc (145, 0, 4, 0);
voc (123, 0, 4, 0);
voc (150, 0, 4, 0);
voc (937, 315, 4, 0);
voc (118, 0, 4, 0);
voc (98, 0, 4, 0);
voc (194, 0, 4, 0);
voc (130, 0, 4, 0);
voc (47, 0, 4, 1951);
voc (27, 0, 4, 0);
voc (6, 0, 4, 0);
voc (79, 0, 4, 0);
voc (55, 0, 4, 0);
voc (93, 0, 4, 0);
voc (159, 0, 4, 0);
voc (74, 0, 4, 1952);
voc (50, 0, 4, 0);
voc (106, 0, 0, 0);
voc (107, 0, 0, 0);
voc (35, 0, 4, 1953);
voc (116, 0, 4, 1954);
voc (95, 0, 4, 0);
voc (12, 0, 4, 0);
voc (937, 0, 0, 0);
voc (128, 0, 4, 0);
voc (142, 0, 4, 1955);
voc (129, 0, 4, 0);
voc (25, 0, 4, 0);
voc (121, 217, 4, 0);
voc (71, 0, 4, 1956);
voc (81, 0, 4, 1957);
voc (88, 0, 4, 0);
value[0]=(value[151]==2);
if(value[0]){
voc (151, 0, 4, 1958);
}else{
voc (151, 0, 4, 0);
}
voc (62, 0, 4, 0);
voc (113, 0, 4, 0);
voc (153, 559, 4, 0);
voc (20, 0, 4, 0);
value[0]=(bitest(13,4));
value[0]|=(bitest(139,4));
if(value[0]){
voc (13, 0, 4, 1959);
}else{
voc (13, 0, 0, 0);
}
voc (73, 0, 4, 0);
voc (111, 0, 4, 0);
voc (75, 0, 4, 0);
voc (57, 0, 4, 1960);
voc (61, 0, 4, 0);
voc (132, 0, 4, 0);
voc (94, 0, 4, 0);
voc (67, 0, 4, 0);
voc (110, 0, 4, 0);
voc (78, 0, 4, 0);
voc (1078, 475, 4, 0);
voc (146, 0, 4, 0);
voc (63, 0, 4, 0);
voc (36, 0, 4, 0);
voc (157, 0, 4, 0);
voc (86, 0, 4, 0);
voc (59, 0, 4, 0);
voc (69, 0, 4, 0);
voc (149, 0, 4, 0);
voc (45, 0, 4, 1962);
voc (49, 0, 4, 1963);
voc (38, 0, 4, 0);
voc (144, 0, 4, 0);
voc (34, 0, 4, 0);
voc (9, 0, 4, 0);
voc (64, 0, 4, 0);
voc (90, 0, 4, 0);
voc (593, 593, 4, 0);
voc (92, 0, 4, 0);
voc (68, 0, 4, 0);
voc (15, 0, 4, 0);
voc (100, 0, 4, 0);
voc (32, 0, 4, 0);
voc (7, 0, 4, 0);
voc (102, 0, 4, 0);
voc (125, 0, 4, 0);
voc (133, 0, 4, 0);
voc (126, 0, 4, 0);
voc (37, 0, 4, 0);
voc (147, 0, 4, 0);
voc (29, 0, 4, 0);
voc (162, 0, 4, 0);
voc (131, 0, 0, 0);
voc (54, 0, 4, 0);
voc (23, 0, 4, 0);
voc (83, 0, 4, 0);
voc (85, 0, 4, 0);
voc (5, 0, 4, 0);
voc (56, 0, 4, 0);
voc (127, 0, 4, 0);
voc (120, 0, 0, 0);
voc (89, 0, 4, 0);
voc (143, 0, 4, 1961);
voc (152, 0, 4, 0);
voc (60, 0, 4, 0);
say(0,1266,0);
value[0]=(value[1180]==0);
if(value[0]){
loop=1; return(0);
}
set('V',1180,'c',37,NULL,NULL);
say(64,1431,0);
 if (loop) return(0);return 0;
}
int p697(void)
{
value[1302] = jrand(3 - 0) + 0;
value[1303] = jrand(9 - 0) + 0;
value[1377] = jrand(10 - 0) + 0;
value[1350] = jrand(3 - 0) + 0;
value[1349] = jrand(8 - 0) + 0;
value[1351] = jrand(9 - 0) + 0;
value[1493] = jrand(8 - 0) + 0;
value[1294] = jrand(11 - 0) + 0;
value[1319] = jrand(3 - 0) + 0;
value[1295] = jrand(8 - 0) + 0;
value[1300] = jrand(5 - 0) + 0;
value[1934] = jrand(5 - 0) + 0;
value[2165] = jrand(7 - 0) + 0;
value[2535] = jrand(5 - 0) + 0;
value[2555] = jrand(6 - 0) + 0;
value[2564] = jrand(3 - 0) + 0;
value[2464] = jrand(8 - 0) + 0;
value[2739] = jrand(3 - 0) + 0;
value[1997] = jrand(10 - 0) + 0;
value[2860] = jrand(4 - 0) + 0;
value[3065] = jrand(3 - 0) + 0;
value[2903] = jrand(7 - 0) + 0;
value[2902] = jrand(5 - 0) + 0;
value[2748] = jrand(4 - 0) + 0;
value[2503] = jrand(5 - 0) + 0;
value[2297] = jrand(4 - 0) + 0;
value[2016] = jrand(3 - 0) + 0;
value[1314] = jrand(2 - 0) + 0;
value[1315] = jrand(3 - 0) + 0;
value[1331] = jrand(2 - 0) + 0;
value[1378] = jrand(3 - 0) + 0;
value[1403] = jrand(5 - 0) + 0;
value[1424] = jrand(3 - 0) + 0;
value[1453] = jrand(4 - 0) + 0;
value[1506] = jrand(3 - 0) + 0;
value[1507] = jrand(3 - 0) + 0;
value[2504] = jrand(4 - 0) + 0;
value[2534] = jrand(3 - 0) + 0;
value[2587] = jrand(3 - 0) + 0;
value[2596] = jrand(4 - 0) + 0;
value[2676] = jrand(3 - 0) + 0;
value[2720] = jrand(3 - 0) + 0;
value[2731] = jrand(5 - 0) + 0;
value[2773] = jrand(2 - 0) + 0;
value[3037] = jrand(4 - 0) + 0;
value[3217] = jrand(5 - 0) + 0;
value[3220] = jrand(6 - 0) + 0;
value[3315] = jrand(8 - 0) + 0;
value[3122] = jrand(7 - 0) + 0;
value[3221] = jrand(3 - 0) + 0;
value[3337] = jrand(5 - 0) + 0;
value[1269] = jrand(3 - 0) + 0;
value[3313] = jrand(6 - 0) + 0;
value[3375] = jrand(5 - 0) + 0;
value[3379] = jrand(6 - 0) + 0;
value[1809] = jrand(7 - 0) + 0;
value[3389] = jrand(3 - 0) + 0;
value[3412] = jrand(3 - 0) + 0;
value[3403] = jrand(4 - 0) + 0;
value[3426] = jrand(6 - 0) + 0;
value[2066] = jrand(4 - 0) + 0;
value[2339] = jrand(3 - 0) + 0;
set('T',3314,'e',3313,NULL,NULL);
value[2557] = jrand(16 - 0) + 0;
value[2557] /= 4;
value[2557] *= 4;
return 0;
}
int p716(void)
{
value[0]=(value[107]==1);
if(value[0]){
value[1181] += 1;
}
set('V',1180,'c',44,NULL,NULL);
say(64,1550,0);
 if (loop) return(0);return 0;
}
int p250(void)
{
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
value[1189] += 10;
p716();
if (loop) return (0);
}
value[0]=(anyof(857,745,-1));
if(value[0]){
say(0,1267,0);
}else{
say(8,1723,0);
}
special(28,&value[0]);
set('V',1180,'c',0,NULL,NULL);
loop=1; return(0);
return 0;
}
int p717(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('V',1180,'c',0,NULL,NULL);
value[0]=(725<=value[1164] && value[1164]<=740);
if(value[0]){
value[0]=(value[1164]==738);
value[0]|=(value[1164]==739);
if(value[0]){
value[1164]=720;*bitword(1164)= -1;
}else{value[0]=(value[1164]==734);
if(value[0]){
value[1164]=715;*bitword(1164)= -1;
}else{value[0]=(value[1164]==732);
if(value[0]){
value[1164]=714;*bitword(1164)= -1;
}else{value[0]=(value[1164]<=727);
if(value[0]){
value[1164]=708;*bitword(1164)= -1;
}}}}}
p697();
if (loop) return (0);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
say(0,1267,0);
}else{value[0]=(anyof(857,745,-1));
if(value[0]){
input_store('R', &value[0]);
special(3,&value[1253]);
value[0]=(value[1253]==0);
if(value[0]){
say(0,1555,0);
}else{
say(0,2833,0);
}
}else{
say(8,1723,1);
}}
move(value[1146],-1);
bitmod('c',evar(1146),4);
say(64,1266,0);
 if (loop) return(0);return 0;
}
int p765(void)
{
set('V',1198,'c',2,NULL,NULL);
set('V',1253,'c',1,NULL,NULL);
special(14,&value[1253]);
value[0]=(value[1253]!=1);
if(value[0]){
say(0,1276,0);
move(302,-1);
bitmod('c',evar(1178),0);
set('V',1147,'v',1146,NULL,NULL);
set('V',1180,'c',0,NULL,NULL);
loop=1; return(0);
}else{
bitmod('s',evar(1178),0);
move(195,-1);
set('V',1147,'v',1146,NULL,NULL);
say(0,1266,0);
set('V',1180,'c',22,NULL,NULL);
say(64,1273,0);
 if (loop) return(0);}
return 0;
}
int p652(void)
{
set('E',19,'c',0,NULL,NULL);
set('E',575,'c',1,NULL,NULL);
set('E',576,'c',1,NULL,NULL);
say(12,2502,1157);
bitmod('s',576,3);
value[0]=(value[HERE]==576);
value[0]&=!(bitest(evar(1178),8));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
value[1144]=822;*bitword(1144)= -1;
say(0,1266,0);
(*procs[822])();
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p147(void)
{
set('E',575,'c',0,NULL,NULL);
set('E',576,'c',0,NULL,NULL);
bitmod('c',576,3);
value[0]=(value[1262]==0);
value[0]|=(KEY(878));
if(value[0]){
value[0]=(value[1144]==878);
if(value[0]){
say(12,1349,1144);
}else{value[0]=(value[1178]>1);
if(value[0]){
say(12,1351,1145);
}}
say(0,1266,0);
value[0]=(KEY(767));
if(value[0]){
set('T',2499,'c',1,NULL,NULL);
}else{
set('T',2499,'c',0,NULL,NULL);
}
say(0,2500,0);
}else{
say(8,1987,769);
say(12,1988,8);
}
value[0]=(value[HERE]==576);
if(value[0]){
set('E',19,'c',1,NULL,NULL);
p487();
if (loop) return (0);
value[0]=(bitest(evar(1178),8));
if(!value[0]){
say(0,1266,0);
p852(0,1);
if (loop) return (0);
}}
return 0;
}
int p146(void)
{
set('E',472,'c',2,NULL,NULL);
set('E',161,'c',2,NULL,NULL);
say(64,1884,0);
 if (loop) return(0);return 0;
}
int p898(void)
{
value[0]=(KEY(822));
if(value[0]){
say(72,2529,0);
 if (loop) return(0);}else{value[0]=(KEY(848));
if(value[0]){
say(64,2530,0);
 if (loop) return(0);}else{value[0]=(KEY(759));
if(value[0]){
say(64,2531,0);
 if (loop) return(0);}else{
say(64,1403,0);
 if (loop) return(0);}}}
return 0;
}
int p306(void)
{
value[0]=(isnear(118,-1,-1));
if(value[0]){
value[0]=(getloc(87)==702);
value[0]|=!(bitest(87,4));
if(value[0]){
apport(118,701);
apport(87,value[1146]);
bitmod('s',87,4);
set('E',85,'c',1,NULL,NULL);
say(64,1756,0);
 if (loop) return(0);}else{
say(12,2036,85);
say(76,2353,118);
 if (loop) return(0);}}
say(64,1755,0);
 if (loop) return(0);return 0;
}
int p854(void)
{
value[0]=(isnear(126,-1,-1));
if(!value[0]){
value[0]=(bitest(126,4));
if(value[0]){
say(76,1319,126);
 if (loop) return(0);}
say(64,1493,0);
 if (loop) return(0);}
value[0]=(KEY(765));
value[0]&=(have(126,-1,-1));
if(value[0]){
say(76,1314,126);
 if (loop) return(0);}
value[0]=(anyof(766,793,-1));
value[0]&=!(have(126,-1,-1));
if(value[0]){
p625(-1,126);
if (loop) return (0);
}
say(76,2585,1144);
 if (loop) return(0);return 0;
}
int p50(void)
{
if (value[ARG1] == 1102) value[ARG1]=954;
if (value[ARG2] == 1102) value[ARG2]=954;
value[0]=(anyof(120,950,-1));
if(value[0]){
if (anyof(757,759,757,-1))say(72,1713,0);
 if (loop) return(0);if (anyof(765,-1))say(64,1365,0);
 if (loop) return(0);}
value[0]=(KEY(790));
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
return 0;
}
say(64,1365,0);
 if (loop) return(0);}
value[0]=(KEY(848));
if(value[0]){
value[0]=(KEY(154));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(isnear(154,-1,-1));
if(value[0]){
say(64,1827,0);
 if (loop) return(0);}
value[0]=(KEY(154));
if(value[0]){
p39();
if (loop) return (0);
}}}
value[0]=(KEY(796));
if(value[0]){
value[0]=(anyof(123,119,136,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1365,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==440||value[HERE]==441||value[HERE]==442);
if(value[0]){
value[0]=(KEY(139));
value[0]&=(value[139]>0);
if(value[0]){
say(76,2593,139);
 if (loop) return(0);}
if (anyof(206,-1))say(76,1849,1145);
 if (loop) return(0);if (anyof(993,-1))say(72,3222,993);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
if (anyof(950,781,120,-1))say(64,2751,0);
 if (loop) return(0);if (anyof(891,1000,-1))say(64,2756,0);
 if (loop) return(0);if (anyof(1002,-1))say(64,2762,0);
 if (loop) return(0);value[0]=(KEY(439));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
(*procs[822])();
if (loop) return (0);
loop=1; return(0);
}}
value[0]=(anyof(921,984,-1));
value[0]&=(438<=value[1146] && value[1146]<=446);
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
say(72,1772,921);
 if (loop) return(0);}
bitmod('s',evar(1180),1);
}
return 0;
}
int p140(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,703)) continue;
if (!lbitest(0,15,lval,lbts)) continue;
value[0]=(lval[0]==107);
if(!value[0]){
say(66,1156,0);
 if (loop) return(0);}
set('T',2461,'c',0,NULL,NULL);
value[0]=(have(107,-1,-1));
if(value[0]){
set('T',2461,'c',1,NULL,NULL);
}}
return 0;
}
int p858(void)
{
value[0]=(value[HERE]==475);
if(value[0]){
value[1156]=2514;*bitword(1156)= -1;
}else{
value[1156]=2463;*bitword(1156)= -1;
}
p140();
if (loop) return (0);
bitmod('s',evar(1146),16);
value[0]=(value[HERE]==475);
if(value[0]){
move(486,-2515); if (loop) return(0);
}else{
move(475,-2462); if (loop) return(0);
}
return 0;
}
int p529(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[161]==0);
if(value[0]){
set('E',161,'c',2,NULL,NULL);
set('E',472,'c',2,NULL,NULL);
set('E',163,'c',10,NULL,NULL);
lbts[0*VARSIZE]= -1; lval[0]=466; while (++lval[0]<=479) {
lbitmod(1,'c',0,4,lval,lbts);
}
say(64,2289,0);
 if (loop) return(0);}
say(64,2290,0);
 if (loop) return(0);return 0;
}
int p476(void)
{
value[0]=(KEY(975));
if(value[0]){
value[0]=(value[1144]==975);
if(value[0]){
if (anyof(975,-1))say(76,2676,1144);
 if (loop) return(0);}else{
if (anyof(975,-1))say(76,2676,1145);
 if (loop) return(0);}}
if (anyof(923,-1))say(64,2374,0);
 if (loop) return(0);value[0]=(KEY(822));
if(value[0]){
if (anyof(894,968,-1))say(64,1355,0);
 if (loop) return(0);if (anyof(157,157,-1))say(64,3303,0);
 if (loop) return(0);if (anyof(131,153,971,972,915,-1))say(64,2026,0);
 if (loop) return(0);if (anyof(973,973,-1))say(64,2025,0);
 if (loop) return(0);if (anyof(1136,754,-1))say(72,2027,0);
 if (loop) return(0);if (anyof(1137,755,-1))say(72,2027,1);
 if (loop) return(0);if (anyof(922,-1))say(72,2380,922);
 if (loop) return(0);}
value[0]=(KEY(848));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(anyof(131,971,153,-1));
if(value[0]){
value[0]=(value[HERE]==196);
if(value[0]){
say(72,1825,1);
 if (loop) return(0);}else{
say(72,1825,0);
 if (loop) return(0);}}
if (anyof(157,972,915,-1))say(64,2028,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(776));
if(value[0]){
value[0]=(anyof(131,971,972,915,157,157,-1));
if(value[0]){
return 0;
}
value[0]=(anyof(973,973,-1));
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}}
value[0]=(anyof(973,922,971,972,153,157,157,915,-1));
value[0]|=(anyof(131,971,915,157,157,973,1137,1136,922,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p80(void)
{
value[0]=(KEY(975));
if(value[0]){
value[0]=(value[1144]==975);
if(value[0]){
if (anyof(975,-1))say(76,2676,1144);
 if (loop) return(0);}else{
if (anyof(975,-1))say(76,2676,1145);
 if (loop) return(0);}}
value[0]=(KEY(200));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(value[HERE]==195);
if(value[0]){
return 0;
}
say(76,3339,1144);
 if (loop) return(0);}
if (anyof(822,-1))say(64,2137,0);
 if (loop) return(0);if (anyof(848,-1))say(64,2464,0);
 if (loop) return(0);value[0]=(anyof(757,759,-1));
if(value[0]){
value[0]=(value[HERE]==195);
if(value[0]){
return 0;
}else{
say(76,1319,8);
 if (loop) return(0);}}
say(64,1403,0);
 if (loop) return(0);}
value[0]=(KEY(894));
if(value[0]){
if (anyof(822,-1))say(64,2671,0);
 if (loop) return(0);value[0]=(value[1178]==1);
value[0]|=(anyof(759,757,-1));
if(value[0]){
say(64,2023,0);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]&=(anyof(131,971,153,922,475,970,-1));
if(value[0]){
special(11,&value[0]);
}
value[0]=(KEY(785));
if(value[0]){
if (anyof(200,936,970,-1))say(72,3426,936);
 if (loop) return(0);if (anyof(971,153,131,-1))say(76,3426,131);
 if (loop) return(0);}
value[0]=(anyof(131,971,153,922,475,970,936,200,-1));
value[0]&=(anyof(783,800,-1));
if(value[0]){
say(64,3315,0);
 if (loop) return(0);}
if (anyof(131,-1))say(76,2431,131);
 if (loop) return(0);if (anyof(971,153,-1))say(76,2431,1145);
 if (loop) return(0);if (anyof(922,-1))say(72,2380,922);
 if (loop) return(0);if (anyof(475,-1))say(64,2020,0);
 if (loop) return(0);if (anyof(970,-1))say(64,2021,0);
 if (loop) return(0);value[0]=(KEY(967));
if(value[0]){
if (anyof(822,-1))say(72,3384,2);
 if (loop) return(0);bitmod('s',evar(1180),1);
}
value[0]=(KEY(936));
if(value[0]){
if (anyof(822,-1))say(64,2022,0);
 if (loop) return(0);if (anyof(848,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(808,807,765,-1))say(64,2021,0);
 if (loop) return(0);if (anyof(800,-1))say(64,3315,0);
 if (loop) return(0);say(64,1403,0);
 if (loop) return(0);}
p476();
if (loop) return (0);
return 0;
}
int p475(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(894,-1))say(64,2597,0);
 if (loop) return(0);if (anyof(480,195,-1))say(72,2194,0);
 if (loop) return(0);value[0]=(anyof(1137,755,-1));
if(value[0]){
say(72,2194,1);
 if (loop) return(0);}
value[0]=(KEY(131));
if(value[0]){
if (value[ARG1] == 131) {value[ARG1]=974; (void)fake(1,974);}
if (value[ARG2] == 131) {value[ARG2]=974; (void)fake(2,974);}
}
if (anyof(974,-1))say(76,2670,1145);
 if (loop) return(0);if (anyof(973,-1))say(64,2025,0);
 if (loop) return(0);}
value[0]=(KEY(894));
if(value[0]){
value[0]=(anyof(759,757,-1));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,2023,0);
 if (loop) return(0);}
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(848));
value[0]&=(anyof(131,974,-1));
if(value[0]){
say(72,2669,0);
 if (loop) return(0);}
value[0]=(anyof(131,974,974,973,1137,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}
return 0;
}
int p474(void)
{
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(894));
if(value[0]){
say(0,3269,0);
say(64,1266,0);
 if (loop) return(0);}
if (anyof(754,1136,-1))say(72,2673,0);
 if (loop) return(0);if (anyof(755,1137,-1))say(72,2673,1);
 if (loop) return(0);value[0]=(KEY(131));
if(value[0]){
if (value[ARG1] == 131) {value[ARG1]=974; (void)fake(1,974);}
if (value[ARG2] == 131) {value[ARG2]=974; (void)fake(2,974);}
}
if (anyof(974,-1))say(76,2670,1145);
 if (loop) return(0);if (anyof(973,-1))say(64,2025,0);
 if (loop) return(0);value[0]=(anyof(538,480,-1));
if(value[0]){
value[0]=(value[HERE]==544);
value[0]&=(value[544]==0);
if(!value[0]){
value[0]=(KEY(538));
if(value[0]){
say(72,2674,0);
 if (loop) return(0);}else{
say(72,2674,1);
 if (loop) return(0);}}}}
if (anyof(848,-1))say(72,2669,0);
 if (loop) return(0);value[0]=(anyof(973,974,131,1137,1136,-1));
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(894));
if(value[0]){
value[0]=(anyof(759,757,-1));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,2023,0);
 if (loop) return(0);}
bitmod('s',evar(1180),1);
return 0;
}
return 0;
}
int p479(void)
{
value[0]=(KEY(975));
if(value[0]){
value[0]=(value[1144]==975);
if(value[0]){
if (anyof(975,-1))say(76,2676,1144);
 if (loop) return(0);}else{
if (anyof(975,-1))say(76,2676,1145);
 if (loop) return(0);}}
value[0]=(keyword(822,201,-1));
if(value[0]){
value[0]=(value[HERE]==518);
if(value[0]){
say(72,2718,1);
 if (loop) return(0);}
say(72,2718,0);
 if (loop) return(0);}
value[0]=(anyof(919,1130,-1));
if(value[0]){
if (anyof(822,-1))say(64,2709,0);
 if (loop) return(0);value[0]=(KEY(834));
if(value[0]){
return 0;
}
value[0]=(value[1178]>1);
if(value[0]){
bitmod('s',evar(1180),1);
return 0;
}}
if (anyof(131,971,153,-1))say(76,2431,1145);
 if (loop) return(0);if (anyof(922,-1))say(72,2380,922);
 if (loop) return(0);return 0;
}
int p20(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
if (anyof(641,-1))say(64,1403,0);
 if (loop) return(0);value[0]=(lval[0]==0);
if(value[0]){
if (anyof(936,203,1070,-1))say(64,1403,0);
 if (loop) return(0);}else{value[0]=(lval[0]==1);
if(value[0]){
if (anyof(978,779,-1))say(64,1403,0);
 if (loop) return(0);}else{value[0]=(lval[0]==2);
if(value[0]){
if (anyof(978,1069,-1))say(64,1403,0);
 if (loop) return(0);}}}
return 0;
}
int p467(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(KEY(762));
if(value[0]){
value[0]=(anyof(755,757,641,-1));
if(value[0]){
value[0]=(value[HERE]==668||value[HERE]==669||value[HERE]==670);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}else{
set('L',1,'c',1,lval, lbts);
}
say(8,2447,lval[1]);
move(702,-1);
p154();
if (loop) return (0);
}else{
say(64,2781,0);
 if (loop) return(0);}}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(745,746,747,748,749,750,751,752,-1));
if(value[0]){
value[0]=(value[1144]==759);
if(value[0]){
set('V',1144,'v',1145,NULL,NULL);
}
say(76,2425,1144);
 if (loop) return(0);}}
p20(-1,lval[0]);
if (loop) return (0);
value[1150]=702;*bitword(1150)= -1;
value[1148]=702;*bitword(1148)= -1;
value[1151]=2427;*bitword(1151)= -1;
value[1149]=2428;*bitword(1149)= -1;
return 0;
}
int p21(int typ0,int par0)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(KEY(762));
value[0]&=(anyof(755,757,641,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(anyof(747,751,-1));
if(value[0]){
set('V',1155,'v',1146,NULL,NULL);
value[0]=(KEY(747));
if(value[0]){
value[1155] += 1;
}else{
value[1155] -= 1;
}
move(value[1155],-2); if (loop) return(0);
}
value[0]=(KEY(762));
if(value[0]){
value[0]=(value[HERE]==642);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}else{value[0]=(value[HERE]==649);
if(value[0]){
set('L',1,'c',2,lval, lbts);
}else{
set('L',1,'c',1,lval, lbts);
}}
say(8,2447,lval[1]);
move(702,-1);
p154();
if (loop) return (0);
}}
p20(-1,lval[0]);
if (loop) return (0);
value[1150]=702;*bitword(1150)= -1;
value[1148]=702;*bitword(1148)= -1;
value[1151]=2427;*bitword(1151)= -1;
value[1149]=2428;*bitword(1149)= -1;
return 0;
}
int p396(void)
{
if (anyof(822,-1))say(64,2721,0);
 if (loop) return(0);if (anyof(765,-1))say(64,2464,0);
 if (loop) return(0);value[0]=(KEY(834));
if(value[0]){
return 0;
}
bitmod('s',evar(1180),1);
p39();
if (loop) return (0);
return 0;
}
int p329(int typ0,int par0,int typ1,int par1,int typ2,int par2,int typ3,int par3)
{
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = par2;
   lbts [2] = typ2;
   lval[3] = par3;
   lbts [3] = typ3;
value[0]=(lval[2]==0);
if(value[0]){
value[0]=(bitest(evar(1146),7));
if(value[0]){
p152(-1,lval[1]);
if (loop) return (0);
}
move(lval[0],-2); if (loop) return(0);
}
value[0]=(bitest(evar(1146),7));
if(value[0]){
value[0]=(value[1147]==lval[0]);
if(value[0]){
p152(-1,lval[3]);
if (loop) return (0);
}else{value[0]=(value[1147]==lval[2]);
if(value[0]){
p152(-1,lval[1]);
if (loop) return (0);
}}}
value[0]=(value[1147]==lval[0]);
if(value[0]){
move(lval[2],-2); if (loop) return(0);
}else{value[0]=(value[1147]==lval[2]);
if(value[0]){
move(lval[0],-2); if (loop) return(0);
}else{
say(64,1297,0);
 if (loop) return(0);}}
return 0;
}
int p129(void)
{
value[0]=(have(145,0,2));
if(value[0]){
say(64,2767,0);
 if (loop) return(0);}
say(64,1360,0);
 if (loop) return(0);return 0;
}
int p814(void)
{
if (anyof(822,-1))say(72,2165,899);
 if (loop) return(0);if (anyof(763,-1))say(64,1967,0);
 if (loop) return(0);if (anyof(757,837,-1))say(64,2710,0);
 if (loop) return(0);value[0]=(KEY(790));
if(value[0]){
(*procs[790])();
if (loop) return (0);
}
return 0;
}
int p126(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(isnear(87,-1,-1));
value[0]|=(isnear(136,0,6));
if(value[0]){
return 0;
}
value[0]=(lval[0]==1);
value[0]&=(isnear(136,0,1));
if(value[0]){
return 0;
}
value[0]=(value[1178]==2);
value[0]&=(value[1145]==87);
if(value[0]){
say(76,1319,1145);
 if (loop) return(0);}else{
say(76,1319,87);
 if (loop) return(0);}
return 0;
}
int p678(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
set('L',0,'c',1,lval, lbts);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
if (!isat(value[1154],-1,-1,700)) continue;
lval[0] += 2;
}
lval[1] = irand(lval[0]);
set('L',2,'c',0,lval, lbts);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
if (!isat(value[1154],-1,-1,700)) continue;
value[0]=(lval[1]==0);
if(value[0]){
set('L',2,'v',1154,lval, lbts);
}
lval[1] -= 1;
}
value[0]=(lval[2]>0);
if(value[0]){
apport(lval[2],value[1146]);
value[0]=(lval[2]==108||lval[2]==109);
value[0]&=(value[109]==1);
if(value[0]){
value[0]=(getloc(108)==700);
if(value[0]){
apport(108,value[1146]);
}else{
apport(109,value[1146]);
}}}
return 0;
}
int p724(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(value[1178]==1);
value[0]|=(KEY(763));
if(value[0]){
say(72,2839,lval[0]);
 if (loop) return(0);}
value[0]=(anyof(757,635,755,-1));
if(value[0]){
say(0,2838,0);
move(702,-1);
value[0]=(have(144,-1,-1));
if(value[0]){
set('E',144,'c',2,NULL,NULL);
apport(144,619);
}
p154();
if (loop) return (0);
}
return 0;
}
int p679(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(anyof(922,1135,13,-1));
if(!value[0]){
return 0;
}
value[0]=(KEY(822));
if(value[0]){
value[0]=(lval[0]==0);
if(value[0]){
say(64,2419,0);
 if (loop) return(0);}else{value[0]=(lval[0]==1);
if(value[0]){
say(64,2420,0);
 if (loop) return(0);}else{value[0]=(lval[0]==2);
if(value[0]){
say(72,2860,922);
 if (loop) return(0);}else{value[0]=(lval[0]==3);
if(value[0]){
say(64,2861,0);
 if (loop) return(0);}else{value[0]=(lval[0]==4);
if(value[0]){
say(72,2862,922);
 if (loop) return(0);}}}}}
return 0;
}
if (anyof(765,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(788,789,-1))say(64,2863,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
p39();
if (loop) return (0);
return 0;
}
int p22(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
if (anyof(641,-1))say(64,3034,0);
 if (loop) return(0);value[0]=(lval[0]==0);
if(value[0]){
if (anyof(936,-1))say(64,3038,0);
 if (loop) return(0);if (anyof(203,1070,-1))say(64,3039,0);
 if (loop) return(0);if (anyof(1065,-1))say(64,3055,0);
 if (loop) return(0);}else{value[0]=(lval[0]==1);
if(value[0]){
if (anyof(779,-1))say(64,3037,0);
 if (loop) return(0);if (anyof(978,-1))say(64,2827,0);
 if (loop) return(0);if (anyof(755,1065,-1))say(64,2827,0);
 if (loop) return(0);}else{value[0]=(lval[0]==2);
if(value[0]){
if (anyof(1069,961,-1))say(64,3036,0);
 if (loop) return(0);if (anyof(755,1065,-1))say(64,3040,0);
 if (loop) return(0);if (anyof(978,-1))say(64,2827,0);
 if (loop) return(0);}}}
return 0;
}
int p448(void)
{
value[0]=(KEY(822));
if(value[0]){
if (anyof(389,-1))say(64,3077,0);
 if (loop) return(0);if (anyof(376,475,754,-1))say(72,2019,11);
 if (loop) return(0);if (anyof(1137,-1))say(64,3079,0);
 if (loop) return(0);if (anyof(936,-1))say(64,3078,0);
 if (loop) return(0);value[0]=(anyof(897,308,898,-1));
if(value[0]){
value[0]=(value[HERE]==389);
if(value[0]){
say(72,2903,897);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),11));
if(value[0]){
say(72,2903,898);
 if (loop) return(0);}
say(72,2902,898);
 if (loop) return(0);}
return 0;
}
value[0]=(KEY(389));
if(value[0]){
if (anyof(765,-1))say(64,1403,0);
 if (loop) return(0);if (anyof(783,784,785,-1))say(76,3455,389);
 if (loop) return(0);if (anyof(776,808,807,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(819,-1))say(64,3478,0);
 if (loop) return(0);}
value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(value[HERE]==389);
if(!value[0]){
if (anyof(673,-1))say(64,1425,0);
 if (loop) return(0);}
return 0;
}
value[0]=(anyof(389,898,897,308,673,-1));
if(value[0]){
bitmod('s',evar(1180),1);
p39();
if (loop) return (0);
}
return 0;
}
