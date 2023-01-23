/* adv04.c: Adv770 - copyright Mike Arnautov 2022. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

#include "adv0.h"
#include "adv3.h"
int p362(void)
{
value[0]=(KEY(484));
if(value[0]){
value[0]=(KEY(822));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
return 0;
}else{value[0]=(KEY(759));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}}
bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(150));
value[0]&=!(isnear(150,-1,-1));
if(value[0]){
if (anyof(822,-1))say(64,3146,0);
 if (loop) return(0);if (anyof(765,776,-1))say(64,3147,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(1079));
if(value[0]){
if (anyof(822,-1))say(64,3146,0);
 if (loop) return(0);if (anyof(765,776,-1))say(64,3147,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(anyof(973,922,-1));
if(value[0]){
if (anyof(822,-1))say(64,3144,0);
 if (loop) return(0);if (anyof(776,-1))say(64,3148,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(1048));
if(value[0]){
if (anyof(822,-1))say(64,3143,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(anyof(975,976,-1));
if(value[0]){
if (anyof(822,-1))say(72,2676,975);
 if (loop) return(0);if (anyof(765,-1))say(64,3150,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
return 0;
}
value[0]=(KEY(538));
if(value[0]){
value[0]=(KEY(822));
if(value[0]){
value[0]=(value[HERE]==482||value[HERE]==485||value[HERE]==487);
if(value[0]){
say(72,3149,1);
 if (loop) return(0);}else{
say(72,3149,0);
 if (loop) return(0);}}
value[0]=(KEY(834));
if(value[0]){
(*procs[834])();
if (loop) return (0);
}}
value[0]=(KEY(1047));
if(value[0]){
if (anyof(822,-1))say(72,2676,1047);
 if (loop) return(0);if (anyof(765,-1))say(64,2760,0);
 if (loop) return(0);value[0]=(KEY(834));
if(value[0]){
(*procs[834])();
if (loop) return (0);
}
bitmod('s',evar(1180),1);
return 0;
}
return 0;
}
int p234(int typ0,int par0)
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
lbts[1*VARSIZE]= -1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
if (!isat(lval[1],-1,-1,703)) continue;
value[0]=(lval[0]==0);
value[0]|=(lbitest(1,5,lval,lbts));
if(value[0]){
value[0]=(lbitest(1,16,lval,lbts));
if(value[0]){
lval[3]=value[lval[1]];lbts[3*VARSIZE]=lbts[1*VARSIZE];value[0]=(lval[3]==2);
if(value[0]){
lval[2] += 1;
}else{
return 0;
}
}else{
return 0;
}}}
value[0]=(lval[2]==0);
if(value[0]){
value[0]=(KEY(168));
if(value[0]){
say(72,2679,1);
 if (loop) return(0);}
say(72,2682,1);
 if (loop) return(0);}
say(64,3216,0);
 if (loop) return(0);return 0;
}
int p291(void)
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
value[0]=(KEY(168));
if(value[0]){
set('L',3,'c',1,lval, lbts);
}
lval[2]=703;lbts[2*VARSIZE]= -1;
value[0]=(KEY(765));
if(value[0]){
set('L',2,'v',1146,lval, lbts);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
set('L',1,'l',0,lval, lbts);
special(32,&lval[1]);
value[0]=(lval[1]==1);
if(value[0]){
value[0]=(anyof(766,755,-1));
if(value[0]){
value[0]=(have(lval[0],-1,-1));
if(!value[0]){
say(0,3217,0);
value[0]=(lbitest(0,3,lval,lbts));
if(!value[0]){
say(72,3337,lval[0]);
 if (loop) return(0);}
value[0]=(irand(100)<50);
if(value[0]){
say(72,1318,lval[0]);
 if (loop) return(0);}
p625(-1,lval[0]);
if (loop) return (0);
}
}else{
value[0]=(have(lval[0],-1,-1));
if(value[0]){
say(72,1314,lval[0]);
 if (loop) return(0);}
value[0]=(isnear(lval[0],-1,-1));
if(!value[0]){
say(72,1319,lval[0]);
 if (loop) return(0);}}}
value[0]=(getloc(lval[0])==lval[2]);
if(value[0]){
value[0]=(lval[3]==0);
value[0]|=(lbitest(0,5,lval,lbts));
value[0]&=(lbitest(0,3,lval,lbts));
if(value[0]){
value[0]=(lval[1]==1);
if(value[0]){
lval[5] += 1;
}else{
set('L',7,'c',0,lval, lbts);
value[0]=(KEY(766));
value[0]&=(lbitest(0,16,lval,lbts));
if(value[0]){
lval[7]=value[lval[0]];lbts[7*VARSIZE]=lbts[0*VARSIZE];}
value[0]=(lval[7]==2);
if(value[0]){
lval[6] += 1;
}else{
lval[4] += 1;
}}}}}
value[0]=(lval[4]>0);
if(value[0]){
return 0;
}
value[0]=(lval[6]>0);
if(value[0]){
say(64,3216,0);
 if (loop) return(0);}
value[0]=(lval[2]==value[1146]);
if(value[0]){
value[0]=(lval[5]==0);
if(value[0]){
value[0]=(lval[3]==1);
if(value[0]){
say(72,2679,0);
 if (loop) return(0);}
say(72,2682,0);
 if (loop) return(0);}
value[0]=(lval[3]==1);
if(value[0]){
say(72,2680,0);
 if (loop) return(0);}
say(72,2681,0);
 if (loop) return(0);}
value[0]=(lval[5]==0);
if(value[0]){
value[0]=(lval[3]==1);
if(value[0]){
say(72,2679,1);
 if (loop) return(0);}
say(72,2682,1);
 if (loop) return(0);}
value[0]=(lval[3]==1);
if(value[0]){
say(72,2680,1);
 if (loop) return(0);}
say(72,2681,1);
 if (loop) return(0);return 0;
}
int p224(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
set('V',1198,'c',9,NULL,NULL);
p378();
if (loop) return (0);
say(8,2883,lval[0]);
set('V',1180,'c',39,NULL,NULL);
say(64,1863,0);
 if (loop) return(0);return 0;
}
int p831(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
set('E',565,'c',4,NULL,NULL);
apport(67,701);
set('E',67,'c',1,NULL,NULL);
bitmod('s',147,4);
say(8,2421,lval[0]);
return 0;
}
int p850(void)
{
tie (1505, 45);
tie (3255, 161);
tie (3254, 161);
tie (3063, 161);
tie (3256, 162);
tie (3257, 162);
tie (3258, 162);
tie (3259, 162);
tie (2512, 162);
tie (2532, 162);
tie (3246, 315);
tie (1386, 556);
tie (1710, 149);
tie (2012, 18);
tie (2717, 202);
tie (2782, 1172);
tie (2790, 2789);
tie (2791, 2789);
tie (2792, 586);
tie (2793, 586);
tie (1993, 94);
tie (2835, 153);
tie (2844, 139);
tie (2848, 139);
tie (3241, 210);
tie (1770, 158);
tie (3441, 71);
return 0;
}
int p602(void)
{
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(have(value[1154],-1,-1));
if(value[0]){
apport(value[1154],702);
}}
set('V',1198,'c',7,NULL,NULL);
bitmod('s',302,4);
move(302,-1852); if (loop) return(0);
return 0;
}
int p528(void)
{
set('V',1198,'c',8,NULL,NULL);
value[0]=(getloc(100)==199);
if(value[0]){
apport(100,302);
}else{
apport(100,702);
}
bitmod('c',100,3);
value[0]=(getloc(116)==295);
if(value[0]){
bitmod('c',116,3);
}
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(bitest(evar(1154),3));
if(value[0]){
value[0]=(getloc(value[1154])==200);
if(value[0]){
apport(value[1154],302);
}else{
apport(value[1154],702);
}}}
apport(194,702);
set('E',139,'c',0,NULL,NULL);
set('E',140,'c',0,NULL,NULL);
set('E',199,'c',0,NULL,NULL);
set('E',137,'c',1,NULL,NULL);
bitmod('c',203,8);
move(195,-1868); if (loop) return(0);
return 0;
}
int p536(void)
{
value[0]=(value[3304]==0);
value[0]|=(bitest(evar(1218),12));
value[0]|=!(bitest(evar(1146),7));
value[0]|=(547<=value[1146] && value[1146]<=702);
value[0]|=(isnear(152,-1,-1));
value[0]|=(getloc(152)==701||getloc(152)==702||getloc(152)==200);
value[0]|=!(bitest(evar(1178),8));
value[0]|=(value[1198]!=3);
if(value[0]){
return 0;
}
value[0]=(getloc(152)==700);
if(value[0]){
apport(152,702);
bitmod('s',evar(1218),12);
value[1189] += 5;
}else{
value[0]=(irand(100)<80);
if(value[0]){
return 0;
}
apport(152,700);
}
say(0,3304,0);
return 0;
}
int p185(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(KEY(798));
value[0]&=(value[1178]==1);
if(value[0]){
set('V',1145,'l',0,lval, lbts);
set('V',1178,'c',2,NULL,NULL);
}
return 0;
}
int p703(void)
{
value[0]=(isnear(63,-1,-1));
if(value[0]){
value[0]=(value[63]==0);
value[0]|=(value[63]==2);
if(value[0]){
value[0]=(KEY(822));
if(value[0]){
return 0;
}
say(76,3343,63);
 if (loop) return(0);}
value[0]=(KEY(822));
value[0]&=(bitest(63,14));
if(value[0]){
return 0;
}
value[0]=(anyof(63,173,-1));
if(value[0]){
bitmod('s',63,14);
say(64,2221,0);
 if (loop) return(0);}}
return 0;
}
int p817(int typ0,int par0,int typ1,int par1)
{
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',2,'e',102,lval, lbts);
value[0]=(6<=lval[2] && lval[2]<=8);
if(value[0]){
say(72,lval[0],lval[1]);
 if (loop) return(0);}}
return 0;
}
int p928(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('L',0,'c',0,lval, lbts);
special(34,&lval[0]);
value[0]=(lval[0]==1);
value[0]&=(value[1180]==0);
if(value[0]){
say(12,3205,1145);
return 0;
}
say(8,3380,lval[0]);
value[0]=(lval[0]==0);
if(value[0]){
value[0]=(value[1180]!=0);
if(value[0]){
say(0,3497,0);
}else{
say(64,1266,0);
 if (loop) return(0);}}
value[0]=(lval[0]>0);
value[0]&=!(test("cgi"));
if(value[0]){
special(34,&lval[0]);
}
value[0]=(value[1180]==0);
if(value[0]){
set('V',1180,'c',45,NULL,NULL);
set('V',1178,'c',98,NULL,NULL);
say(72,1552,lval[0]);
 if (loop) return(0);}
say(0,1266,0);
return 0;
}
int p222(void)
{
p550(-1,47,-1,1083);
if (loop) return (0);
p550(-1,96,-1,1083);
if (loop) return (0);
p550(-1,49,-1,1084);
if (loop) return (0);
p550(-1,149,-1,1085);
if (loop) return (0);
p550(-1,27,-1,1086);
if (loop) return (0);
p550(-1,46,-1,1087);
if (loop) return (0);
p550(-1,61,-1,1088);
if (loop) return (0);
p550(-1,65,-1,1089);
if (loop) return (0);
p550(-1,67,-1,1090);
if (loop) return (0);
p550(-1,70,-1,1091);
if (loop) return (0);
p550(-1,83,-1,1092);
if (loop) return (0);
p550(-1,96,-1,1093);
if (loop) return (0);
p550(-1,150,-1,1094);
if (loop) return (0);
p550(-1,152,-1,1095);
if (loop) return (0);
p550(-1,151,-1,1095);
if (loop) return (0);
p550(-1,160,-1,1096);
if (loop) return (0);
p550(-1,8,-1,1082);
if (loop) return (0);
p550(-1,961,-1,1082);
if (loop) return (0);
value[0]=(isnear(52,-1,-1));
value[0]|=(isnear(161,-1,-1));
value[0]&=!(isnear(98,-1,-1));
value[0]&=!(isnear(8,-1,-1));
value[0]&=(anyof(1082,961,1102,-1));
if(value[0]){
if (anyof(822,-1))say(64,3448,0);
 if (loop) return(0);bitmod('s',evar(1180),1);
}
return 0;
}
int p550(int typ0,int par0,int typ1,int par1)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
value[0]=(KEY(lval[1]));
value[0]&=(isnear(lval[0],-1,-1));
if(value[0]){
if (value[ARG1] == lval[1]) {value[ARG1]=lval[0]; (void)fake(1,lval[0]);}
if (value[ARG2] == lval[1]) {value[ARG2]=lval[0]; (void)fake(2,lval[0]);}
}
return 0;
}
int p868(int typ0,int par0,int typ1,int par1)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
p152(-1,lval[0]);
if (loop) return (0);
move(lval[1],-2); if (loop) return(0);
return 0;
}
int p756(void)
{
value[0]=(547<=value[1146] && value[1146]<=554);
value[0]|=(439<=value[1146] && value[1146]<=442);
if(value[0]){
say(64,1365,0);
 if (loop) return(0);}
return 0;
}
int p138(void)
{
value[0]=(KEY(848));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(anyof(921,754,-1));
if(value[0]){
say(64,3492,0);
 if (loop) return(0);}}
bitmod('s',evar(1180),1);
return 0;
}
int p938(void)
{
return 0;
return 0;
}
int p530(void)
{
value[0]=(KEY(6));
if(value[0]){
value[0]=(isnear(6,-1,-1));
if(value[0]){
value[0]=(value[6]==1);
if(value[0]){
say(76,1605,6);
 if (loop) return(0);}
say(12,2188,1144);
value[0]=(value[1198]>3);
if(value[0]){
say(64,3310,0);
 if (loop) return(0);}else{
say(64,1266,0);
 if (loop) return(0);}}
return 0;
}
(*procs[765])();
if (loop) return (0);
return 0;
}
int p366(void)
{
value[0]=(anyof(790,844,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
if (value[1145]<LPROC && value[1145]>= 0) (*procs[value[1145]])(); else pcall(value[1145]);
if (loop) return (0);
}
return 0;
}
int p367(void)
{
value[0]=(bitest(evar(1178),8));
if(!value[0]){
value[0]=(KEY(88));
value[0]&=(isnear(88,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
value[0]=(value[HERE]==264);
if(value[0]){
apport(88,262);
}else{
apport(88,264);
}}
say(64,1784,0);
 if (loop) return(0);}
p394();
if (loop) return (0);
}
return 0;
}
int p368(void)
{
if (!KEY(120)) return 0;
value[0]=(value[HERE]==443);
if(value[0]){
say(64,2849,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),17));
if(!value[0]){
set('V',1154,'c',0,NULL,NULL);
value[0]=(ishere(123,0,3));
if(value[0]){
value[1154]=123;*bitword(1154)= -1;
}else{value[0]=(ishere(119,0,3));
if(value[0]){
value[1154]=119;*bitword(1154)= -1;
}else{value[0]=(ishere(136,-1,-1));
if(value[0]){
value[0]=(value[136]==3);
value[0]|=(value[136]>=7);
if(value[0]){
value[1154]=136;*bitword(1154)= -1;
}}}}
value[0]=(value[1154]!=0);
if(value[0]){
if (value[ARG1] == 120) {value[ARG1]=value[1154]; (void)fake(1,value[1154]);}
if (value[ARG2] == 120) {value[ARG2]=value[1154]; (void)fake(2,value[1154]);}
}
return 0;
}
value[0]=(have(84,-1,-1));
if(value[0]){
set('E',84,'c',2,NULL,NULL);
say(72,1744,0);
 if (loop) return(0);}
value[0]=(have(119,-1,-1));
value[0]|=(have(123,-1,-1));
value[0]|=(have(136,-1,-1));
if(!value[0]){
say(76,1400,120);
 if (loop) return(0);}
set('V',1154,'c',0,NULL,NULL);
value[0]=(value[136]==2);
value[0]|=(value[136]==1);
value[0]|=(value[136]>=7);
value[0]&=(have(136,-1,-1));
if(value[0]){
value[1154]=136;*bitword(1154)= -1;
}else{value[0]=(have(119,0,2));
if(value[0]){
value[1154]=119;*bitword(1154)= -1;
}else{value[0]=(have(123,0,2));
if(value[0]){
value[1154]=123;*bitword(1154)= -1;
}}}
value[0]=(value[1154]==0);
if(value[0]){
say(64,1841,0);
 if (loop) return(0);}
value[0]=(value[1154]==136);
value[0]&=(value[136]==1);
if(value[0]){
value[0]=(value[HERE]==200);
if(value[0]){
say(64,2258,0);
 if (loop) return(0);}else{
say(0,2259,0);
say(0,1266,0);
}}
value[value[1154]]=3;
say(12,2242,1154);
say(72,2243,3);
 if (loop) return(0);return 0;
}
int p369(void)
{
if (!KEY(121)) return 0;
value[0]=(ishere(121,-1,-1));
if(value[0]){
value[0]=(have(119,-1,-1));
value[0]|=(have(123,-1,-1));
if(!value[0]){
value[0]=(have(136,0,2));
value[0]|=(have(136,0,1));
if(value[0]){
say(64,2245,0);
 if (loop) return(0);}
say(76,1400,121);
 if (loop) return(0);}
value[0]=(have(119,0,2));
if(value[0]){
set('E',119,'c',4,NULL,NULL);
say(12,2242,119);
say(72,2243,4);
 if (loop) return(0);}
value[0]=(have(123,0,2));
if(value[0]){
set('E',123,'c',4,NULL,NULL);
say(12,2242,123);
say(72,2243,4);
 if (loop) return(0);}
say(64,1841,0);
 if (loop) return(0);}else{
set('V',1154,'c',0,NULL,NULL);
value[0]=(isnear(119,0,4));
if(value[0]){
value[1154]=119;*bitword(1154)= -1;
}else{value[0]=(isnear(123,0,4));
if(value[0]){
value[1154]=123;*bitword(1154)= -1;
}}
value[0]=(value[1154]!=0);
if(value[0]){
if (value[ARG1] == 121) {value[ARG1]=value[1154]; (void)fake(1,value[1154]);}
if (value[ARG2] == 121) {value[ARG2]=value[1154]; (void)fake(2,value[1154]);}
}}
return 0;
}
int p370(void)
{
default_to(0,value[HERE],3);
value[0]=(KEY(126));
if(value[0]){
set('E',126,'c',0,NULL,NULL);
}
value[0]=(anyof(109,108,66,39,114,137,954,53,-1));
value[0]|=(anyof(125,59,117,81,100,85,-1));
if(value[0]){
value[0]=(KEY(109));
if(value[0]){
p373();
if (loop) return (0);
}else{value[0]=(KEY(108));
if(value[0]){
p374();
if (loop) return (0);
}else{value[0]=(KEY(66));
value[0]&=(value[HERE]==361);
value[0]&=(ishere(66,-1,-1));
value[0]&=!(value[66]==1);
if(value[0]){
say(64,1467,0);
 if (loop) return(0);}}}
value[0]=(KEY(39));
if(value[0]){
p372();
if (loop) return (0);
}else{value[0]=(KEY(125));
if(value[0]){
p381();
if (loop) return (0);
}else{value[0]=(KEY(59));
if(value[0]){
p377();
if (loop) return (0);
}else{value[0]=(KEY(117));
if(value[0]){
p375();
if (loop) return (0);
}else{value[0]=(KEY(81));
if(value[0]){
p376();
if (loop) return (0);
}else{value[0]=(KEY(100));
if(value[0]){
p379();
if (loop) return (0);
}else{value[0]=(KEY(85));
value[0]&=(ishere(85,-1,-1));
if(value[0]){
say(64,2163,0);
 if (loop) return(0);}else{value[0]=(KEY(137));
if(value[0]){
value[0]=(isnear(137,-1,-1));
if(value[0]){
say(64,2580,0);
 if (loop) return(0);}
value[0]=(value[HERE]==581);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}}}}}}}}}}
return 0;
}
int p371(void)
{
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1145),0));
if(!value[0]){
return 0;
}
value[0]=(have(value[1145],-1,-1));
if(value[0]){
say(76,1314,1145);
 if (loop) return(0);}
value[0]=(isnear(value[1145],-1,-1));
if(!value[0]){
p39();
if (loop) return (0);
}
value[0]=(KEY(87));
if(value[0]){
value[0]=(have(136,0,2));
value[0]|=(have(136,0,1));
if(value[0]){
apport(87,701);
set('E',136,'c',6,NULL,NULL);
say(64,2252,0);
 if (loop) return(0);}
value[0]=(have(136,-1,-1));
if(value[0]){
say(64,2250,0);
 if (loop) return(0);}
value[0]=(bitest(139,4));
if(!value[0]){
say(64,3480,0);
 if (loop) return(0);}
say(0,2251,0);
value[0]=(have(55,-1,-1));
value[0]&=!(bitest(55,14));
if(value[0]){
bitmod('s',55,14);
say(72,3333,0);
 if (loop) return(0);}
value[0]=(have(92,-1,-1));
value[0]&=!(bitest(92,14));
if(value[0]){
bitmod('s',92,14);
say(72,3333,1);
 if (loop) return(0);}
value[0]=(have(84,-1,-1));
value[0]&=!(bitest(84,14));
if(value[0]){
bitmod('s',84,14);
say(72,3333,2);
 if (loop) return(0);}
value[0]=(have(56,-1,-1));
value[0]&=!(bitest(56,14));
if(value[0]){
bitmod('s',56,14);
say(72,3333,3);
 if (loop) return(0);}
value[0]=(have(111,-1,-1));
value[0]&=!(bitest(111,14));
if(value[0]){
bitmod('s',111,14);
say(72,3333,4);
 if (loop) return(0);}
value[0]=(have(55,-1,-1));
if(value[0]){
say(76,3326,55);
 if (loop) return(0);}
value[0]=(have(92,-1,-1));
if(value[0]){
say(76,3326,92);
 if (loop) return(0);}
value[0]=(have(84,-1,-1));
if(value[0]){
say(76,3326,84);
 if (loop) return(0);}
value[0]=(have(56,-1,-1));
if(value[0]){
say(76,3326,56);
 if (loop) return(0);}
say(64,1266,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),3));
if(!value[0]){
say(64,1315,0);
 if (loop) return(0);}
value[0]=(KEY(63));
value[0]&=!(value[63]==0);
if(value[0]){
say(64,2181,0);
 if (loop) return(0);}
value[0]=(KEY(149));
value[0]&=(value[149]==0);
if(value[0]){
apport(149,INHAND);
say(12,1711,149);
set('E',149,'c',1,NULL,NULL);
loop=1; return(0);
}
value[0]=(value[1187]<value[1202]);
value[0]|=(bitest(evar(1145),12));
if(value[0]){
value[0]=(KEY(152));
if(value[0]){
set('E',152,'c',0,NULL,NULL);
}
apport(value[1145],INHAND);
p670();
if (loop) return (0);
say(12,1987,1144);
value[0]=(KEY(112));
value[0]&=(value[112]==0);
value[0]&=!(bitest(112,4));
if(value[0]){
say(12,1988,110);
}else{
value[0]=(value[1198]==6);
value[0]&=(value[1145]==value[1173]);
if(value[0]){
value[0]=(value[1145]==115);
if(value[0]){
set('T',1988,'c',2,NULL,NULL);
}else{
set('T',1988,'c',1,NULL,NULL);
}
}else{
set('T',1988,'c',0,NULL,NULL);
}
say(12,1988,1145);
set('T',1988,'c',0,NULL,NULL);
}
value[0]=(anyof(110,112,-1));
if(value[0]){
value[0]=(value[HERE]==447);
value[0]|=(value[HERE]==448);
if(value[0]){
bitmod('s',evar(1145),4);
}}
value[0]=(KEY(115));
value[0]&=(value[1198]==6);
value[0]&=(value[115]==0);
if(value[0]){
say(0,1858,0);
set('E',115,'c',1,NULL,NULL);
}
}else{
say(0,1388,0);
flush_command();
}
loop=1; return(0);
return 0;
}
int p230(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(bitest(evar(1146),15));
if(value[0]){
say(64,2311,0);
 if (loop) return(0);}
value[0]=(KEY(152));
value[0]&=(have(152,-1,-1));
if(value[0]){
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
apport(152,702);
say(64,2807,0);
 if (loop) return(0);}
value[0]=(irand(100)<90);
if(value[0]){
bitmod('s',evar(1218),12);
}else{
say(0,3304,0);
}}
value[0]=(anyof(123,119,136,-1));
if(value[0]){
p238();
if (loop) return (0);
}
value[0]=(value[HERE]==618);
if(value[0]){
p935();
if (loop) return (0);
}
value[0]=(anyof(109,108,121,120,122,56,127,28,39,-1));
value[0]|=(anyof(100,102,138,87,110,-1));
if(value[0]){
value[0]=(KEY(109));
if(value[0]){
p232();
if (loop) return (0);
}else{value[0]=(KEY(108));
if(value[0]){
p233();
if (loop) return (0);
}else{value[0]=(anyof(121,120,-1));
if(value[0]){
value[0]=(KEY(121));
if(value[0]){
p320(0,1);
if (loop) return (0);
}else{
p321(0,1);
if (loop) return (0);
}
p218();
if (loop) return (0);
}else{value[0]=(KEY(122));
value[0]&=(have(136,0,5));
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
p268();
if (loop) return (0);
}else{value[0]=(KEY(87));
value[0]&=(have(136,0,6));
if(value[0]){
value[0]=(value[HERE]==443||value[HERE]==218);
if(value[0]){
p304();
if (loop) return (0);
}
value[1251]=136;*bitword(1251)= -1;
p268();
if (loop) return (0);
}else{value[0]=(KEY(56));
if(value[0]){
p237();
if (loop) return (0);
}else{value[0]=(KEY(127));
if(value[0]){
p239();
if (loop) return (0);
}else{value[0]=(KEY(28));
value[0]&=(isnear(28,-1,-1));
if(value[0]){
apport(28,702);
bitmod('s',28,13);
value[1197] = irand(12-4+1)+4;
set('V',1206,'v',1197,NULL,NULL);
say(64,1632,0);
 if (loop) return(0);}else{value[0]=(KEY(39));
if(value[0]){
value[0]=(have(39,-1,-1));
if(value[0]){
apport(39,HERE);
say(0,2187,0);
say(64,1266,0);
 if (loop) return(0);}else{value[0]=(isnear(39,0,0));
if(value[0]){
say(64,1328,0);
 if (loop) return(0);}else{value[0]=(isnear(39,0,1));
if(value[0]){
value[0]=(have(106,-1,-1));
if(value[0]){
set('E',66,'c',1,NULL,NULL);
set('E',39,'c',2,NULL,NULL);
say(64,1468,0);
 if (loop) return(0);}
p625(-1,106);
if (loop) return (0);
}else{value[0]=(value[HERE]==361);
value[0]&=(isnear(39,0,2));
if(value[0]){
say(64,2602,0);
 if (loop) return(0);}else{
say(76,2603,1144);
 if (loop) return(0);}}}}
}else{value[0]=(KEY(102));
if(value[0]){
p236();
if (loop) return (0);
}else{value[0]=(KEY(100));
if(value[0]){
p235();
if (loop) return (0);
}else{value[0]=(KEY(110));
value[0]&=(ishere(109,-1,-1));
value[0]&=(bitest(138,13));
value[0]&=!(bitest(evar(1218),3));
if(value[0]){
apport(110,HERE);
bitmod('s',evar(1218),3);
say(72,2356,1);
 if (loop) return(0);}else{value[0]=(KEY(138));
if(value[0]){
value[0]=(ishere(109,0,0));
if(value[0]){
p305();
if (loop) return (0);
}else{value[0]=(have(138,-1,-1));
if(value[0]){
apport(138,701);
say(0,2358,0);
bitmod('s',138,13);
say(64,1266,0);
 if (loop) return(0);}}}}}}}}}}}}}}}}
return 0;
}
int p231(void)
{
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1145),0));
if(!value[0]){
return 0;
}
value[0]=(have(value[1145],-1,-1));
if(value[0]){
p127();
if (loop) return (0);
value[0]=(KEY(152));
if(value[0]){
set('E',152,'c',1,NULL,NULL);
}
value[0]=(value[HERE]==462);
if(value[0]){
value[0]=(bitest(evar(1145),15));
value[0]|=(value[1145]==107);
if(value[0]){
set('V',1148,'v',1146,NULL,NULL);
}}
apport(value[1145],value[1148]);
value[0]=(value[HERE]==498||value[HERE]==501||value[HERE]==500);
value[0]|=(bitest(evar(1146),12));
if(value[0]){
value[0]=(KEY(118));
if(value[0]){
apport(118,701);
value[0]=(isnear(94,-1,-1));
if(value[0]){
say(0,1774,0);
value[0]=(value[94]>1);
if(value[0]){
say(0,1775,0);
}
set('E',94,'c',0,NULL,NULL);
loop=1; return(0);
}
}else{value[0]=(KEY(132));
if(value[0]){
set('E',132,'c',3,NULL,NULL);
value[0]=(value[HERE]==502||value[HERE]==511||value[HERE]==510);
if(value[0]){
value[132] += 1;
}
}else{
value[0]=(KEY(126));
if(value[0]){
set('E',126,'c',0,NULL,NULL);
}
apport(value[1145],502);
}}}
value[0]=(value[1148]==value[1146]);
if(value[0]){
value[0]=(KEY(126));
if(value[0]){
set('E',126,'c',1,NULL,NULL);
say(64,3490,0);
 if (loop) return(0);}
say(12,1987,1144);
value[0]=(KEY(112));
value[0]&=(value[112]==0);
if(value[0]){
say(12,1988,110);
}else{
say(12,1988,1145);
}
}else{
say(12,2036,1145);
value[0]=(bitest(evar(1145),11));
if(value[0]){
say(10,1149,1);
}else{
say(10,1149,0);
}
value[0]=(value[1145]==148);
if(value[0]){
set('E',148,'c',2,NULL,NULL);
}
loop=1; return(0);
}
value[0]=(value[1148]==value[1146]);
if(!value[0]){
return 0;
}
value[0]=(KEY(92));
value[0]&=!(bitest(92,13));
if(value[0]){
say(0,2829,0);
bitmod('s',92,13);
}else{
value[0]=(anyof(123,119,136,-1));
if(value[0]){
p238();
if (loop) return (0);
}}
}else{
value[0]=(anyof(168,3,-1));
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1145),3));
if(value[0]){
say(12,1318,1145);
}else{
say(12,3337,1145);
}}
loop=1; return(0);
return 0;
}
int p391(void)
{
value[0]=(value[1178]==1);
if(value[0]){
say(76,1378,1144);
 if (loop) return(0);}
value[0]=(744<=value[1144] && value[1144]<=756);
value[0]|=(744<=value[1145] && value[1145]<=756);
value[0]|=(887<=value[1145] && value[1145]<=903);
value[0]|=(anyof(761,889,758,757,-1));
if(value[0]){
if (value[1145]<LPROC && value[1145]>= 0) (*procs[value[1145]])(); else pcall(value[1145]);
if (loop) return (0);
}else{
value[0]=(bitest(evar(1145),1));
if(value[0]){
value[0]=(value[HERE]==value[1145]);
if(value[0]){
say(64,1347,0);
 if (loop) return(0);}
say(64,1424,0);
 if (loop) return(0);}
value[0]=(anyof(20,193,85,17,39,88,-1));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
say(76,2079,1145);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
say(64,2007,0);
 if (loop) return(0);}
return 0;
}
int p108(void)
{
value[0]=(value[HERE]==201||value[HERE]==195||value[HERE]==202||value[HERE]==200);
if(value[0]){
say(64,1346,0);
 if (loop) return(0);}
say(64,1347,0);
 if (loop) return(0);return 0;
}
int p633(void)
{
p320(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
value[0]&=!(value[HERE]==217);
if(value[0]){
say(12,1513,121);
value[0]=(have(127,-1,-1));
if(value[0]){
glue_text();
say(0,1896,0);
}
loop=1; return(0);
}
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(value[1144]==121);
value[0]&=!(isnear(value[1145],-1,-1));
if(value[0]){
p39();
if (loop) return (0);
}}
value[0]=(value[1178]==1);
if(value[0]){
bitmod('s',evar(1178),5);
p39();
if (loop) return (0);
}
value[0]=(anyof(19,161,164,-1));
if(value[0]){
value[0]=(isnear(19,-1,-1));
value[0]|=(isnear(161,-1,-1));
value[0]|=(isnear(164,-1,-1));
if(value[0]){
say(64,2509,0);
 if (loop) return(0);}}
value[0]=(KEY(13));
if(value[0]){
set('V',1255,'c',1,NULL,NULL);
p218();
if (loop) return (0);
say(64,1405,0);
 if (loop) return(0);}
if (anyof(139,-1))say(64,1403,0);
 if (loop) return(0);value[0]=(KEY(98));
if(value[0]){
value[0]=(value[HERE]==482);
value[0]&=(have(148,0,1));
if(value[0]){
say(76,1739,121);
 if (loop) return(0);}
value[0]=(value[HERE]==481||value[HERE]==482);
if(value[0]){
say(64,1726,0);
 if (loop) return(0);}}
value[0]=(KEY(75));
if(value[0]){
set('V',1255,'c',1,NULL,NULL);
p218();
if (loop) return (0);
set('E',75,'c',1,NULL,NULL);
say(64,2182,0);
 if (loop) return(0);}
value[0]=(KEY(124));
if(value[0]){
set('T',2193,'c',3,NULL,NULL);
}else{value[0]=(KEY(125));
if(value[0]){
value[0]=(value[125]==0);
if(value[0]){
set('T',2193,'c',1,NULL,NULL);
}else{
set('T',2193,'c',2,NULL,NULL);
}
}else{value[0]=(KEY(106));
if(value[0]){
set('T',2193,'c',4,NULL,NULL);
}else{
set('T',2193,'c',0,NULL,NULL);
}}}
value[0]=(value[1144]==121);
if(value[0]){
say(76,2193,1145);
 if (loop) return(0);}else{
say(76,2193,1144);
 if (loop) return(0);}
return 0;
}
int p837(void)
{
value[0]=(anyof(124,125,54,-1));
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
p910();
if (loop) return (0);
}}
return 0;
}
int p838(void)
{
if (!KEY(120)) return 0;
p321(0,1);
if (loop) return (0);
p218();
if (loop) return (0);
return 0;
}
int p839(void)
{
if (!KEY(121)) return 0;
p320(0,1);
if (loop) return (0);
p218();
if (loop) return (0);
return 0;
}
int p840(void)
{
if (!KEY(122)) return 0;
value[0]=(have(136,0,5));
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
p218();
if (loop) return (0);
}else{
say(76,1513,122);
 if (loop) return(0);}
return 0;
}
int p841(void)
{
if (!KEY(87)) return 0;
value[0]=(have(136,0,6));
if(value[0]){
say(64,2253,0);
 if (loop) return(0);}else{
p625(-1,87);
if (loop) return (0);
}
return 0;
}
int p842(void)
{
if (!KEY(118)) return 0;
value[0]=(have(118,-1,-1));
if(value[0]){
value[0]=(isnear(23,-1,-1));
if(value[0]){
say(64,1482,0);
 if (loop) return(0);}
value[0]=(isnear(193,-1,-1));
if(value[0]){
apport(118,HERE);
bitmod('s',193,14);
say(64,1399,0);
 if (loop) return(0);}
value[0]=(isnear(39,-1,-1));
if(value[0]){
apport(118,701);
set('E',39,'c',1,NULL,NULL);
value[0]=(value[124]==1);
if(value[0]){
set('E',124,'c',0,NULL,NULL);
}
say(64,1465,0);
 if (loop) return(0);}
value[0]=(isnear(94,-1,-1));
if(value[0]){
say(0,1774,0);
apport(118,701);
value[0]=(value[94]>1);
if(value[0]){
say(64,1775,0);
 if (loop) return(0);}
loop=1; return(0);
}}
return 0;
}
int p843(void)
{
if (!KEY(126)) return 0;
value[0]=(have(126,-1,-1));
if(value[0]){
p795();
if (loop) return (0);
}
return 0;
}
int p844(void)
{
if (!KEY(127)) return 0;
value[0]=(have(127,-1,-1));
if(value[0]){
p73();
if (loop) return (0);
}
return 0;
}
int p845(void)
{
value[0]=(value[1178]==2);
if(value[0]){
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
value[0]&=!(value[1146]==value[1150]);
if(value[0]){
p127();
if (loop) return (0);
p878();
if (loop) return (0);
}}
value[0]=(value[1145]==119||value[1145]==123||value[1145]==136);
if(value[0]){
apport(value[1145],HERE);
say(12,1987,1144);
value[1256]=value[value[1145]];*bitword(1256)= *bitword(1145);value[0]=(value[1256]>2);
if(value[0]){
value[0]=(value[1256]==6);
if(value[0]){
set('E',136,'c',1,NULL,NULL);
apport(87,value[1146]);
}else{
value[value[1145]]=2;
value[0]=(587<=value[1146] && value[1146]<=627);
if(!value[0]){
bitmod('s',evar(1146),13);
}}
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(12,1989,1145);
say(76,2261,1256);
 if (loop) return(0);}}
say(76,1988,1145);
 if (loop) return(0);}}
(*procs[766])();
if (loop) return (0);
return 0;
}
int p746(void)
{
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(KEY(126));
if(value[0]){
value[0]=(have(126,-1,-1));
if(value[0]){
p795();
if (loop) return (0);
}
p625(*bitword(1145),value[1145]);
if (loop) return (0);
}
value[0]=(KEY(138));
if(value[0]){
(*procs[766])();
if (loop) return (0);
}
if (anyof(51,48,71,-1))say(76,1416,1145);
 if (loop) return(0);if (anyof(151,-1))say(64,2409,0);
 if (loop) return(0);say(64,1403,0);
 if (loop) return(0);}
return 0;
}
int p907(void)
{
if (!KEY(147)) return 0;
value[0]=(have(147,-1,-1));
if(!value[0]){
return 0;
}
value[0]=(bitest(evar(1146),7));
if(value[0]){
say(64,2468,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(0,2469,0);
}else{
say(0,2470,0);
}
value[0]=(value[HERE]==491);
if(value[0]){
value[0]=(value[163]>1);
if(value[0]){
say(64,2466,0);
 if (loop) return(0);}
value[0]=(value[163]==0);
if(value[0]){
apport(163,value[1146]);
bitmod('s',163,4);
set('E',163,'c',1,NULL,NULL);
set('E',491,'c',1,NULL,NULL);
}
*bitword(1155)= -1;value[1155]=467-1; while(++value[1155]<=476) {
bitmod('c',evar(1155),8);
bitmod('c',evar(1155),4);
}
set('E',164,'c',0,NULL,NULL);
set('E',479,'c',0,NULL,NULL);
set('E',478,'c',0,NULL,NULL);
say(0,2471,0);
set('E',477,'c',1,NULL,NULL);
value[163] = irand(10);
value[163] += 25;
bitmod('c',evar(1179),7);
}
loop=1; return(0);
return 0;
}
int p908(void)
{
if (!KEY(63)) return 0;
value[0]=(isnear(63,-1,-1));
if(value[0]){
value[0]=(value[63]==0);
if(value[0]){
say(72,2661,0);
 if (loop) return(0);}else{value[0]=(bitest(63,13));
if(value[0]){
say(72,2661,1);
 if (loop) return(0);}else{
say(72,2661,2);
 if (loop) return(0);}}}
return 0;
}
int p909(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
bitmod('s',17,13);
value[0]=(value[1178]>1);
value[0]&=!(KEY(17));
if(value[0]){
value[0]=(bitest(evar(1145),0));
if(!value[0]){
return 0;
}
value[0]=(bitest(evar(1145),3));
if(!value[0]){
say(64,1315,0);
 if (loop) return(0);}
value[0]=(have(value[1145],-1,-1));
if(!value[0]){
say(76,1318,1145);
 if (loop) return(0);}
}else{
value[0]=(isnear(17,-1,-1));
if(value[0]){
say(0,2141,0);
say(64,1266,0);
 if (loop) return(0);}
default_to(0,value[HERE],8);
value[0]=(value[1178]==1);
if(value[0]){
say(64,2142,0);
 if (loop) return(0);}
say(76,2825,1145);
 if (loop) return(0);}
value[0]=(KEY(110));
if(value[0]){
value[0]=(547<=value[1146] && value[1146]<=564);
if(value[0]){
say(64,2418,0);
 if (loop) return(0);}
value[0]=(isnear(10,-1,-1));
if(value[0]){
value[0]=(value[1198]<5);
if(value[0]){
value[10] += 1;
value[0]=(value[10]==2);
if(value[0]){
set('E',10,'c',0,NULL,NULL);
bitmod('s',10,10);
apport(11,701);
}else{
bitmod('c',10,10);
}
say(12,1985,10);
}else{
say(0,1329,0);
}
}else{value[0]=(isnear(33,-1,-1));
if(value[0]){
value[0]=(value[1198]>4);
if(value[0]){
say(64,1329,0);
 if (loop) return(0);}
say(8,1571,0);
set('E',33,'c',1,NULL,NULL);
}else{value[0]=(isnear(31,-1,-1));
value[0]&=(value[1198]<5);
if(value[0]){
value[31] += 1;
say(0,31,0);
value[31] += 1;
value[0]=(value[31]==4);
if(value[0]){
set('E',31,'c',0,NULL,NULL);
bitmod('s',31,10);
apport(11,701);
}else{
apport(11,value[1146]);
bitmod('c',31,10);
}
}else{value[0]=(value[HERE]==318);
if(value[0]){
value[0]=(bitest(318,16));
if(value[0]){
say(8,2315,1);
}else{
say(8,2315,0);
bitmod('s',318,16);
}
value[0]=(bitest(evar(1218),10));
if(!value[0]){
bitmod('s',evar(1178),12);
}
lbts[0*VARSIZE]= -1;lval[0]=594-1; while(++lval[0]<=617) {
p808(-1,lval[0]);
if (loop) return (0);
}
move(627,-1);
}else{value[0]=(value[HERE]==627);
if(value[0]){
value[0]=(bitest(627,16));
if(value[0]){
say(8,2316,1);
}else{
say(8,2316,0);
bitmod('s',627,16);
}
move(318,-1);
}else{value[0]=(isnear(109,-1,-1));
if(value[0]){
value[0]=(value[109]==0);
if(value[0]){
value[0]=(value[HERE]==208);
if(value[0]){
apport(109,207);
}else{
apport(109,208);
}}
value[0]=(value[109]==1);
if(value[0]){
say(64,3476,0);
 if (loop) return(0);}
say(64,2429,0);
 if (loop) return(0);}else{value[0]=(bitest(10,13));
value[0]&=!(bitest(evar(1218),4));
value[0]&=!(bitest(evar(1146),7));
value[0]&=!(547<=value[1146] && value[1146]<=702);
value[0]&=(irand(100)<1);
if(value[0]){
bitmod('s',evar(1218),4);
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(64,2379,0);
 if (loop) return(0);}
}else{value[0]=(value[2488]>0);
if(value[0]){
say(64,2491,0);
 if (loop) return(0);}else{
say(64,1329,0);
 if (loop) return(0);}}}}}}}}
}else{
value[0]=(anyof(124,125,54,-1));
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(!value[0]){
say(76,2140,1145);
 if (loop) return(0);}
p910();
if (loop) return (0);
}else{
say(64,1329,0);
 if (loop) return(0);}}
loop=1; return(0);
return 0;
}
int p617(void)
{
p614();
if (loop) return (0);
return 0;
}
int p788(void)
{
p614();
if (loop) return (0);
return 0;
}
int p877(void)
{
value[0]=(value[1178]==1);
value[0]|=(anyof(759,848,-1));
if(value[0]){
say(72,1294,754);
 if (loop) return(0);}
say(64,1352,0);
 if (loop) return(0);return 0;
}
int p225(void)
{
value[0]=(value[1178]==1);
value[0]|=(anyof(759,848,-1));
if(value[0]){
say(72,1294,755);
 if (loop) return(0);}
say(64,1352,0);
 if (loop) return(0);return 0;
}
int p251(void)
{
p614();
if (loop) return (0);
return 0;
}
int p919(void)
{
p614();
if (loop) return (0);
return 0;
}
int p622(void)
{
p614();
if (loop) return (0);
return 0;
}
int p623(void)
{
p614();
if (loop) return (0);
return 0;
}
int p793(void)
{
p614();
if (loop) return (0);
return 0;
}
int p794(void)
{
p614();
if (loop) return (0);
return 0;
}
int p485(void)
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
value[0]=(value[1178]>1);
if(value[0]){
say(64,1493,0);
 if (loop) return(0);}
set('L',1,'c',0,lval, lbts);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
value[0]=(have(lval[0],-1,-1));
if(value[0]){
value[0]=(lval[1]==0);
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(8,1395,0);
}else{
say(8,1395,1);
}
set('L',2,'l',0,lval, lbts);
}
lval[1] += 1;
say(0,lval[0],0);
}}
value[0]=(lval[1]==0);
if(value[0]){
say(0,1389,0);
}else{value[0]=(lval[1]==1);
if(value[0]){
set('E',166,'l',2,lval, lbts);
}}
loop=1; return(0);
return 0;
}
int p275(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]==1);
if(value[0]){
p188(0,2);
if (loop) return (0);
bitmod('s',evar(1146),4);
value[0]=(value[1220]==25);
if(value[0]){
set('V',1220,'c',100,NULL,NULL);
say(64,3360,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1180),3));
if(value[0]){
value[1220] += 1;
}
loop=1; return(0);
}
if (anyof(1006,-1))say(64,2819,0);
 if (loop) return(0);if (anyof(1137,-1))say(76,2716,1145);
 if (loop) return(0);if (anyof(1131,-1))say(76,2896,1145);
 if (loop) return(0);value[0]=(744<=value[1145] && value[1145]<=753);
if(value[0]){
say(76,2703,1145);
 if (loop) return(0);}
value[0]=(KEY(173));
if(value[0]){
value[0]=(isnear(27,-1,-1));
if(value[0]){
say(76,3358,27);
 if (loop) return(0);}
value[0]=(isnear(147,-1,-1));
if(value[0]){
say(76,3358,147);
 if (loop) return(0);}}
value[0]=(KEY(201));
value[0]&=(531<=value[1146] && value[1146]<=537);
if(value[0]){
say(64,2683,0);
 if (loop) return(0);}
if (anyof(1130,-1))say(64,2709,0);
 if (loop) return(0);value[0]=(KEY(1136));
if(value[0]){
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
say(72,2686,4);
 if (loop) return(0);}else{value[0]=(value[HERE]==318);
if(value[0]){
say(76,2686,318);
 if (loop) return(0);}}}
value[0]=(KEY(977));
if(value[0]){
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
say(72,2685,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==588);
if(value[0]){
say(72,2685,3);
 if (loop) return(0);}else{value[0]=(value[HERE]==318);
if(value[0]){
value[0]=(value[318]==2);
if(value[0]){
say(72,2685,1);
 if (loop) return(0);}else{value[0]=(value[318]==3);
if(value[0]){
say(72,2685,2);
 if (loop) return(0);}}
}else{value[0]=(value[HERE]==444||value[HERE]==446);
if(value[0]){
say(72,2684,1);
 if (loop) return(0);}else{value[0]=(value[HERE]==544||value[HERE]==542||value[HERE]==543);
if(value[0]){
say(72,2684,2);
 if (loop) return(0);}else{value[0]=(value[HERE]==573||value[HERE]==574||value[HERE]==568||value[HERE]==566||value[HERE]==567);
value[0]|=(value[HERE]==561||value[HERE]==559||value[HERE]==560);
if(value[0]){
say(72,2690,977);
 if (loop) return(0);}else{value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
say(72,2684,0);
 if (loop) return(0);}}}}}}}}
value[0]=(KEY(889));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]&=!(value[HERE]==203||value[HERE]==438||value[HERE]==318||value[HERE]==627);
if(value[0]){
say(72,1319,889);
 if (loop) return(0);}else{
say(64,2678,0);
 if (loop) return(0);}}
value[0]=(anyof(376,475,754,-1));
if(value[0]){
value[0]=(642<=value[1146] && value[1146]<=648);
value[0]|=(651<=value[1146] && value[1146]<=670);
if(value[0]){
say(72,2019,19);
 if (loop) return(0);}
value[0]=(391<=value[1146] && value[1146]<=426);
if(value[0]){
say(72,2019,11);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
say(64,3422,0);
 if (loop) return(0);}
say(76,2033,376);
 if (loop) return(0);}
value[0]=(anyof(937,76,855,-1));
if(value[0]){
if (value[1145]<LPROC && value[1145]>= 0) (*procs[value[1145]])(); else pcall(value[1145]);
if (loop) return (0);
}
value[0]=(631<=value[1146] && value[1146]<=632);
value[0]|=(635<=value[1146] && value[1146]<=638);
if(value[0]){
if (anyof(635,899,-1))say(72,2625,0);
 if (loop) return(0);if (anyof(913,-1))say(72,2625,1);
 if (loop) return(0);if (anyof(120,899,-1))say(72,2625,2);
 if (loop) return(0);if (anyof(1064,-1))say(72,2625,3);
 if (loop) return(0);if (anyof(996,1002,1010,-1))say(72,2625,4);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
if (anyof(754,-1))say(72,2476,1);
 if (loop) return(0);if (anyof(1136,-1))say(64,2029,0);
 if (loop) return(0);}else{
if (anyof(754,-1))say(72,2476,0);
 if (loop) return(0);if (anyof(1136,-1))say(72,1319,1136);
 if (loop) return(0);}
if (anyof(1137,-1))say(64,1453,0);
 if (loop) return(0);if (anyof(755,-1))say(64,2477,0);
 if (loop) return(0);value[0]=(anyof(95,145,46,-1));
if(value[0]){
p127();
if (loop) return (0);
}
value[0]=(anyof(173,63,-1));
value[0]&=(isnear(63,-1,-1));
if(value[0]){
p703();
if (loop) return (0);
}
value[0]=(anyof(129,173,91,74,116,73,-1));
if(value[0]){
(*procs[798])();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(KEY(913));
value[0]&=(value[HERE]==473||value[HERE]==474||value[HERE]==476);
if(value[0]){
say(64,2451,0);
 if (loop) return(0);}
value[0]=(KEY(87));
value[0]&=(isnear(136,0,6));
if(value[0]){
say(32,87,0);
loop=1; return(0);
}
value[0]=(KEY(1008));
value[0]&=(isnear(148,-1,-1));
if(value[0]){
say(64,2824,0);
 if (loop) return(0);}
value[0]=(KEY(1072));
if(value[0]){
value[0]=(587<=value[1146] && value[1146]<=627);
value[0]&=!(value[HERE]==618);
if(value[0]){
value[0]=(bitest(evar(1146),15));
if(value[0]){
p534(0,0);
if (loop) return (0);
set('L',1,'v',1146,lval, lbts);
lval[0]=594;lbts[0*VARSIZE]= -1;
lval[1] -= lval[0];
set('T',3004,'l',1,lval, lbts);
value[0]=(value[HERE]==596||value[HERE]==597||value[HERE]==601||value[HERE]==607||value[HERE]==610);
if(value[0]){
say(12,3003,1253);
set('L',0,'c',0,lval, lbts);
}else{
set('L',0,'c',1,lval, lbts);
say(12,3005,1253);
}
value[0]=(value[1253]==0);
if(value[0]){
say(64,1266,0);
 if (loop) return(0);}
p534(*bitword(1253),value[1253]);
if (loop) return (0);
say(0,3208,0);
say(64,1266,0);
 if (loop) return(0);}
value[0]=(value[HERE]==619);
if(value[0]){
say(72,3009,0);
 if (loop) return(0);}
value[0]=(value[HERE]==623);
if(value[0]){
say(72,3009,1);
 if (loop) return(0);}
value[0]=(value[HERE]==626);
if(value[0]){
say(72,3009,2);
 if (loop) return(0);}
say(64,3008,0);
 if (loop) return(0);}else{
say(72,1319,1072);
 if (loop) return(0);}}
if (anyof(939,-1))say(64,3465,0);
 if (loop) return(0);value[0]=(KEY(1057));
if(value[0]){
value[0]=(value[HERE]==220||value[HERE]==462||value[HERE]==463||value[HERE]==464||value[HERE]==473);
value[0]|=(value[HERE]==474||value[HERE]==475||value[HERE]==282||value[HERE]==448);
value[0]|=(isnear(110,-1,-1));
value[0]|=(isnear(112,-1,-1));
value[0]|=(isnear(111,-1,-1));
if(value[0]){
say(64,3088,0);
 if (loop) return(0);}}
value[0]=(KEY(40));
value[0]&=(isnear(107,-1,-1));
value[0]&=!(isnear(40,-1,-1));
if(value[0]){
if (anyof(40,-1))say(64,3466,0);
 if (loop) return(0);}
return 0;
}
int p276(void)
{
if (!KEY(61)) return 0;
value[0]=(isnear(61,-1,-1));
if(value[0]){
say(32,61,0);
value[0]=(value[61]==0);
if(value[0]){
value[61] += 1;
}
loop=1; return(0);
}
p39();
if (loop) return (0);
return 0;
}
int p277(void)
{
if (!KEY(121)) return 0;
p320(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
value[0]|=(isnear(121,-1,-1));
if(value[0]){
say(64,1925,0);
 if (loop) return(0);}
return 0;
}
int p278(void)
{
if (!KEY(13)) return 0;
value[0]=(isnear(14,-1,-1));
value[0]&=(value[14]>0);
value[0]|=(isnear(13,-1,-1));
if(value[0]){
say(76,2081,13);
 if (loop) return(0);}
return 0;
}
int p279(void)
{
if (!KEY(139)) return 0;
value[0]=(isnear(140,-1,-1));
value[0]&=(value[139]==2);
value[0]|=(isnear(139,-1,-1));
value[0]|=(value[HERE]==444||value[HERE]==446);
if(value[0]){
say(76,2082,139);
 if (loop) return(0);}
return 0;
}
int p280(void)
{
if (!KEY(120)) return 0;
value[0]=(isnear(119,0,3));
value[0]|=(bitest(evar(1146),17));
if(value[0]){
say(64,2080,0);
 if (loop) return(0);}
return 0;
}
int p281(void)
{
if (!KEY(593)) return 0;
value[0]=(bitest(593,4));
value[0]&=(606<=value[1146] && value[1146]<=608);
value[0]|=(612<=value[1146] && value[1146]<=613);
value[0]|=(value[HERE]==627);
if(value[0]){
say(76,2593,593);
 if (loop) return(0);}
value[0]=(609<=value[1146] && value[1146]<=611);
value[0]|=(614<=value[1146] && value[1146]<=616);
value[0]|=(value[HERE]==617);
if(value[0]){
say(64,2410,0);
 if (loop) return(0);}
value[0]=(587<=value[1146] && value[1146]<=593);
if(value[0]){
say(64,2411,0);
 if (loop) return(0);}
return 0;
}
int p282(void)
{
if (!KEY(122)) return 0;
value[0]=(isnear(136,0,5));
if(value[0]){
say(64,2656,0);
 if (loop) return(0);}
return 0;
}
int p283(void)
{
if (anyof(757,-1))say(72,1298,1);
 if (loop) return(0);if (anyof(758,-1))say(64,2662,0);
 if (loop) return(0);value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(!value[0]){
p39();
if (loop) return (0);
}
}else{value[0]=(bitest(evar(1145),1));
if(value[0]){
value[0]=(KEY(547));
if(value[0]){
value[0]=(value[HERE]==199);
if(value[0]){
say(64,2588,0);
 if (loop) return(0);}
value[0]=(547<=value[1146] && value[1146]<=575);
if(value[0]){
say(64,2589,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==value[1145]);
if(value[0]){
say(64,1453,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
}}
value[0]=(KEY(950));
if(value[0]){
value[0]=(value[HERE]==199||value[HERE]==586||value[HERE]==561||value[HERE]==502);
value[0]|=(547<=value[1146] && value[1146]<=555);
value[0]|=(557<=value[1146] && value[1146]<=558);
value[0]|=(438<=value[1146] && value[1146]<=442);
if(value[0]){
say(64,2595,0);
 if (loop) return(0);}}
if (anyof(899,-1))say(76,1319,1145);
 if (loop) return(0);value[0]=(KEY(11));
if(value[0]){
p539();
if (loop) return (0);
}
value[0]=(KEY(81));
if(value[0]){
(*procs[854])();
if (loop) return (0);
}
value[0]=(KEY(888));
value[0]&=(isnear(84,-1,-1));
if(value[0]){
say(64,3479,0);
 if (loop) return(0);}
return 0;
}
int p284(void)
{
if (!KEY(102)) return 0;
value[0]=(bitest(evar(1218),6));
if(value[0]){
say(76,2293,102);
 if (loop) return(0);}
bitmod('s',evar(1218),6);
return 0;
}
int p285(void)
{
if (!KEY(123)) return 0;
value[0]=(value[123]<2);
if(value[0]){
say(64,2097,0);
 if (loop) return(0);}
return 0;
}
int p286(void)
{
if (!KEY(115)) return 0;
value[0]=(value[1198]==6);
value[0]&=(value[115]==0);
value[0]&=(have(115,-1,-1));
if(value[0]){
set('E',115,'c',1,NULL,NULL);
say(64,1858,0);
 if (loop) return(0);}
return 0;
}
int p287(void)
{
value[0]=(anyof(936,921,-1));
if(value[0]){
value[0]=(value[HERE]==438||value[HERE]==443||value[HERE]==444||value[HERE]==445);
if(value[0]){
say(64,2375,0);
 if (loop) return(0);}
value[0]=(value[HERE]==439||value[HERE]==440||value[HERE]==441||value[HERE]==442);
if(value[0]){
say(64,2376,0);
 if (loop) return(0);}
value[0]=(value[HERE]==318||value[HERE]==618);
value[0]|=(620<=value[1146] && value[1146]<=627);
if(value[0]){
say(64,2377,0);
 if (loop) return(0);}}
value[0]=(KEY(921));
value[0]&=(587<=value[1146] && value[1146]<=619);
value[0]&=!(value[HERE]==590);
if(value[0]){
say(64,2382,0);
 if (loop) return(0);}
return 0;
}
int p288(void)
{
if (!KEY(1022)) return 0;
value[0]=(value[HERE]==318||value[HERE]==618);
value[0]|=(620<=value[1146] && value[1146]<=627);
if(value[0]){
say(64,2377,0);
 if (loop) return(0);}
value[0]=(value[HERE]==604||value[HERE]==605);
if(value[0]){
say(64,2378,0);
 if (loop) return(0);}
return 0;
}
int p289(void)
{
if (!KEY(922)) return 0;
value[0]=(519<=value[1146] && value[1146]<=544);
value[0]|=(195<=value[1146] && value[1146]<=203);
value[0]&=!(value[HERE]==200);
value[0]|=(value[HERE]==518||value[HERE]==444||value[HERE]==446);
if(value[0]){
say(72,2380,922);
 if (loop) return(0);}
value[0]=(value[HERE]==441||value[HERE]==440||value[HERE]==442);
if(value[0]){
say(64,2381,0);
 if (loop) return(0);}
value[0]=(value[HERE]==443);
if(value[0]){
say(76,2082,139);
 if (loop) return(0);}
return 0;
}
int p290(void)
{
value[0]=(KEY(141));
if(value[0]){
set('T',2257,'c',1,NULL,NULL);
}
value[0]=(KEY(149));
value[0]&=!(have(149,-1,-1));
if(value[0]){
say(64,1710,0);
 if (loop) return(0);}
value[0]=(KEY(92));
if(value[0]){
bitmod('s',92,13);
}
value[0]=(bitest(evar(1145),0));
value[0]|=(bitest(evar(1145),1));
if(value[0]){
value[0]=(KEY(4));
value[0]&=(value[4]>0);
value[0]&=!(isnear(5,-1,-1));
if(value[0]){
say(12,2348,4);
}
say(34,1145,0);
value[0]=(KEY(4));
value[0]&=(value[4]>0);
value[0]&=!(isnear(5,-1,-1));
if(value[0]){
apport(5,value[1146]);
bitmod('s',5,4);
say(0,2337,0);
bitmod('c',5,13);
value[4] += 1;
loop=1; return(0);
}
value[0]=(KEY(151));
value[0]&=!(value[151]==2);
value[0]&=!(value[151]==0);
if(value[0]){
say(0,2385,0);
set('E',151,'c',2,NULL,NULL);
}
value[0]=(KEY(104));
if(value[0]){
value[1155]=getloc(104);*bitword(1155)= -1;
apport(104,702);
apport(105,value[1155]);
}
loop=1; return(0);
}
value[0]=(bitest(evar(1145),2));
if(value[0]){
value[0]=(887<=value[1145] && value[1145]<=903);
if(value[0]){
if (anyof(893,-1))say(72,1319,893);
 if (loop) return(0);say(64,1453,0);
 if (loop) return(0);}
value[0]=(904<=value[1145] && value[1145]<=1138);
value[0]|=(KEY(781));
if(value[0]){
value[0]=(KEY(936));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]&=!(value[HERE]==195||value[HERE]==539||value[HERE]==541||value[HERE]==540||value[HERE]==545);
value[0]&=!(481<=value[1146] && value[1146]<=487);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
say(76,2033,1145);
 if (loop) return(0);}
if (anyof(1130,-1))say(64,1453,0);
 if (loop) return(0);p39();
if (loop) return (0);
}
say(64,1403,0);
 if (loop) return(0);}
value[0]=(anyof(1018,74,-1));
if(value[0]){
value[0]=(isnear(123,-1,-1));
if(value[0]){
say(64,3349,0);
 if (loop) return(0);}
value[0]=(isnear(107,-1,-1));
if(value[0]){
say(64,3350,0);
 if (loop) return(0);}}
return 0;
}
int p753(void)
{
value[0]=(value[1178]==1);
value[0]|=(KEY(81));
if(!value[0]){
say(64,1315,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1178),8));
if(!value[0]){
say(64,1890,0);
 if (loop) return(0);}
value[0]=(isnear(81,-1,-1));
if(value[0]){
bitmod('s',evar(1242),4);
p892();
if (loop) return (0);
}
value[0]=(value[HERE]==463);
value[0]&=(getloc(81)==462);
if(value[0]){
say(64,1698,0);
 if (loop) return(0);}
say(64,1891,0);
 if (loop) return(0);return 0;
}
int p825(void)
{
value[0]=(KEY(40));
if(value[0]){
if (value[ARG1] == 938) {value[ARG1]=799; (void)fake(1,799);}
if (value[ARG2] == 938) {value[ARG2]=799; (void)fake(2,799);}
(*procs[799])();
if (loop) return (0);
}else{value[0]=(isnear(107,-1,-1));
if(value[0]){
if (anyof(822,-1))say(64,3464,0);
 if (loop) return(0);value[0]=(value[1178]==1);
value[0]|=(anyof(808,818,390,107,777,778,-1));
if(value[0]){
value[0]=(value[107]==0);
if(value[0]){
if (value[ARG1] == 938) {value[ARG1]=777; (void)fake(1,777);}
if (value[ARG2] == 938) {value[ARG2]=777; (void)fake(2,777);}
(*procs[777])();
if (loop) return (0);
}else{
if (value[ARG1] == 938) {value[ARG1]=778; (void)fake(1,778);}
if (value[ARG2] == 938) {value[ARG2]=778; (void)fake(2,778);}
(*procs[778])();
if (loop) return (0);
}
}else{
say(64,1403,0);
 if (loop) return(0);}
}else{
say(72,1319,938);
 if (loop) return(0);}}
return 0;
}
int p636(void)
{
value[0]=(value[1178]==2);
if(value[0]){
value[0]=(bitest(evar(1144),16));
value[0]|=(bitest(evar(1145),16));
if(value[0]){
if (value[ARG1] == 777) {value[ARG1]=771; (void)fake(1,771);}
if (value[ARG2] == 777) {value[ARG2]=771; (void)fake(2,771);}
(*procs[771])();
if (loop) return (0);
}
value[0]=(anyof(779,107,100,-1));
if(!value[0]){
say(76,3494,1145);
 if (loop) return(0);}}
(*procs[779])();
if (loop) return (0);
loop=1; return(0);
return 0;
}
int p531(void)
{
value[0]=(KEY(778));
if(value[0]){
(*procs[780])();
if (loop) return (0);
}
value[0]=(KEY(738));
if(value[0]){
(*procs[738])();
if (loop) return (0);
}
value[0]=(anyof(107,777,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(isnear(107,-1,-1));
if(value[0]){
value[0]=(value[107]==1);
if(value[0]){
say(72,1327,1);
 if (loop) return(0);}
value[0]=(value[1181]<40);
if(value[0]){
value[0]=(isnear(40,0,1));
if(value[0]){
say(0,1539,0);
set('E',40,'c',3,NULL,NULL);
value[1181] += 400;
}}
value[0]=(value[1181]>0);
if(value[0]){
say(8,1326,1);
set('E',107,'c',1,NULL,NULL);
value[0]=(bitest(evar(1178),8));
if(!value[0]){
bitmod('s',evar(1178),8);
value[0]=(isnear(88,-1,-1));
if(value[0]){
p659();
if (loop) return (0);
}
set('V',1178,'c',1,NULL,NULL);
set('E',16,'c',0,NULL,NULL);
(*procs[822])();
if (loop) return (0);
}
loop=1; return(0);
}else{
say(0,1484,0);
}
}else{
value[0]=(KEY(107));
if(value[0]){
p39();
if (loop) return (0);
}
say(64,1325,0);
 if (loop) return(0);}
loop=1; return(0);
}
(*procs[817])();
if (loop) return (0);
return 0;
}
int p631(void)
{
value[0]=(value[1178]==2);
if(value[0]){
value[0]=(bitest(evar(1144),16));
value[0]|=(bitest(evar(1145),16));
if(value[0]){
if (value[ARG1] == 778) {value[ARG1]=772; (void)fake(1,772);}
if (value[ARG2] == 778) {value[ARG2]=772; (void)fake(2,772);}
(*procs[772])();
if (loop) return (0);
}
value[0]=(anyof(779,107,100,-1));
if(!value[0]){
say(76,3494,1145);
 if (loop) return(0);}}
(*procs[780])();
if (loop) return (0);
loop=1; return(0);
return 0;
}
int p294(void)
{
value[0]=(KEY(738));
if(value[0]){
(*procs[738])();
if (loop) return (0);
}
value[0]=(anyof(107,778,-1));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(isnear(107,-1,-1));
if(value[0]){
value[0]=(value[107]==0);
if(value[0]){
say(72,1327,0);
 if (loop) return(0);}
set('E',107,'c',0,NULL,NULL);
say(8,1326,0);
p487();
if (loop) return (0);
value[0]=(bitest(evar(1178),8));
if(value[0]){
value[0]=(value[HERE]==315);
if(value[0]){
p667();
if (loop) return (0);
say(0,16,0);
}
}else{
p852(0,0);
if (loop) return (0);
}
}else{
value[0]=(KEY(107));
if(value[0]){
p39();
if (loop) return (0);
}
say(64,3498,0);
 if (loop) return(0);}
loop=1; return(0);
}else{
say(64,1436,0);
 if (loop) return(0);}
say(64,2007,0);
 if (loop) return(0);return 0;
}
int p873(void)
{
default_to(0,value[HERE],9);
value[0]=(KEY(6));
value[0]&=(ishere(6,-1,-1));
value[0]&=(value[6]==0);
value[0]&=!(have(106,-1,-1));
if(value[0]){
p625(-1,106);
if (loop) return (0);
}
if (anyof(19,161,164,-1))say(64,2508,0);
 if (loop) return(0);(*procs[767])();
if (loop) return (0);
return 0;
}
int p639(void)
{
if (!KEY(322)) return 0;
value[0]=(value[HERE]==322);
if(value[0]){
value[0]=(isnear(28,-1,-1));
if(value[0]){
apport(28,702);
bitmod('s',28,13);
say(64,1632,0);
 if (loop) return(0);}
say(64,1634,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
return 0;
}
int p640(void)
{
if (anyof(831,-1))say(64,1339,0);
 if (loop) return(0);value[0]=(KEY(141));
value[0]&=(isnear(141,-1,-1));
if(value[0]){
say(64,1771,0);
 if (loop) return(0);}
value[0]=(KEY(769));
value[0]&=(isnear(6,-1,-1));
if(value[0]){
set('V',1178,'c',2,NULL,NULL);
value[1144]=768;*bitword(1144)= -1;
value[1145]=6;*bitword(1145)= -1;
(*procs[768])();
if (loop) return (0);
}
default_to(0,value[HERE],9);
default_to(0,703,9);
value[0]=(KEY(108));
if(value[0]){
p232();
if (loop) return (0);
}
value[0]=(value[1178]==2);
value[0]&=!(isnear(value[1145],-1,-1));
if(value[0]){
p39();
if (loop) return (0);
}
value[0]=(anyof(119,43,52,108,114,115,127,106,98,-1));
value[0]|=(anyof(151,76,-1));
if(value[0]){
if (anyof(119,-1))say(64,1936,0);
 if (loop) return(0);value[0]=(KEY(43));
if(value[0]){
value[0]=(bitest(35,4));
if(value[0]){
say(72,1935,0);
 if (loop) return(0);}
say(72,1935,1);
 if (loop) return(0);}
if (anyof(43,-1))say(64,1935,0);
 if (loop) return(0);if (anyof(52,-1))say(64,1855,0);
 if (loop) return(0);if (anyof(108,-1))say(64,1267,0);
 if (loop) return(0);value[0]=(anyof(114,115,-1));
if(value[0]){
p651();
if (loop) return (0);
}
value[0]=(KEY(127));
if(value[0]){
p73();
if (loop) return (0);
}
if (anyof(106,-1))say(64,1344,0);
 if (loop) return(0);value[0]=(KEY(76));
if(value[0]){
value[0]=(value[HERE]==284);
if(value[0]){
say(64,2094,0);
 if (loop) return(0);}
say(64,2095,0);
 if (loop) return(0);}
if (anyof(98,-1))say(64,1727,0);
 if (loop) return(0);value[0]=(KEY(151));
if(value[0]){
value[0]=(value[HERE]==443||value[HERE]==218);
if(value[0]){
p304();
if (loop) return (0);
}
say(64,2409,0);
 if (loop) return(0);}}
return 0;
}
int p641(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(anyof(6,66,36,4,-1));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(KEY(4));
value[0]&=(lval[0]>=1);
value[0]|=(lval[0]==1);
if(value[0]){
say(76,1605,1145);
 if (loop) return(0);}
value[0]=(KEY(926));
value[0]&=!(value[HERE]==490);
if(value[0]){
p39();
if (loop) return (0);
}
value[0]=(anyof(4,926,-1));
if(value[0]){
value[0]=(value[5]==2);
if(value[0]){
say(64,2333,0);
 if (loop) return(0);}else{
set('E',4,'c',1,NULL,NULL);
say(64,2334,0);
 if (loop) return(0);}}
value[0]=(KEY(36));
value[0]|=(have(106,-1,-1));
if(!value[0]){
value[0]=(KEY(6));
if(value[0]){
(*procs[797])();
if (loop) return (0);
}
p625(-1,106);
if (loop) return (0);
}}
return 0;
}
int p642(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
if (!KEY(6)) return 0;
value[0]=(value[1198]>4);
value[0]|=(bitest(evar(1179),2));
if(value[0]){
say(0,1324,0);
value[0]=(value[1198]>4);
if(value[0]){
bitmod('s',evar(1179),3);
value[0]=(bitest(6,13));
if(!value[0]){
bitmod('s',6,13);
say(64,1421,0);
 if (loop) return(0);}}
loop=1; return(0);
}
set('E',6,'c',1,NULL,NULL);
bitmod('c',203,8);
set('L',0,'c',1,lval, lbts);
value[0]=(KEY(767));
if(value[0]){
lval[0] += 1;
}
say(72,1323,lval[0]);
 if (loop) return(0);return 0;
}
int p643(void)
{
if (!KEY(66)) return 0;
value[0]=(value[39]==0);
if(value[0]){
say(64,1328,0);
 if (loop) return(0);}
set('E',66,'c',1,NULL,NULL);
set('E',39,'c',2,NULL,NULL);
say(64,1468,0);
 if (loop) return(0);return 0;
}
int p644(void)
{
if (!KEY(8)) return 0;
value[0]=(isnear(8,-1,-1));
if(value[0]){
value[0]=(value[8]==0);
if(value[0]){
say(64,1404,0);
 if (loop) return(0);}
say(64,1267,0);
 if (loop) return(0);}
return 0;
}
int p645(void)
{
if (!KEY(19)) return 0;
value[0]=(isnear(19,-1,-1));
if(value[0]){
value[0]=(value[1262]==1);
if(value[0]){
value[0]=(value[575]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
value[0]=(value[HERE]==575);
if(value[0]){
value[1157]=808;*bitword(1157)= -1;
}else{
value[1157]=807;*bitword(1157)= -1;
}
p652();
if (loop) return (0);
}
value[0]=(value[575]==1);
if(value[0]){
say(12,1605,8);
}
say(76,2504,8);
 if (loop) return(0);}
return 0;
}
int p646(void)
{
if (!KEY(161)) return 0;
value[0]=(value[HERE]==472);
if(value[0]){
value[0]=(value[161]==0);
if(value[0]){
say(64,1895,0);
 if (loop) return(0);}
value[0]=(value[161]==2);
if(value[0]){
set('E',161,'c',1,NULL,NULL);
value[163] += 1;
set('E',472,'c',1,NULL,NULL);
say(64,2513,0);
 if (loop) return(0);}
say(76,1605,8);
 if (loop) return(0);}else{value[0]=(value[HERE]==473);
if(value[0]){
value[0]=(value[161]==0);
if(value[0]){
say(64,2504,0);
 if (loop) return(0);}
value[0]=(value[161]==2);
if(value[0]){
set('E',161,'c',1,NULL,NULL);
set('E',472,'c',1,NULL,NULL);
say(64,1267,0);
 if (loop) return(0);}
say(76,1605,8);
 if (loop) return(0);}}
return 0;
}
int p647(void)
{
if (!KEY(164)) return 0;
value[0]=(isnear(164,-1,-1));
if(value[0]){
value[0]=(value[1198]==5);
if(value[0]){
say(64,2504,0);
 if (loop) return(0);}
value[0]=(value[164]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
set('E',164,'c',1,NULL,NULL);
set('E',479,'c',1,NULL,NULL);
set('E',478,'c',1,NULL,NULL);
say(72,2611,1);
 if (loop) return(0);}
return 0;
}
int p648(void)
{
if (!KEY(36)) return 0;
value[0]=(isnear(36,-1,-1));
if(value[0]){
value[0]=(value[36]==0);
if(value[0]){
say(64,1604,0);
 if (loop) return(0);}
value[0]=(value[36]==1);
if(value[0]){
say(76,1605,1145);
 if (loop) return(0);}
say(64,1606,0);
 if (loop) return(0);}
return 0;
}
int p649(void)
{
if (!KEY(123)) return 0;
value[0]=(isnear(123,-1,-1));
if(value[0]){
value[0]=(value[123]<2);
if(value[0]){
set('E',123,'c',2,NULL,NULL);
value[0]=(getloc(123)==322);
if(value[0]){
apport(28,322);
say(64,1630,0);
 if (loop) return(0);}
say(64,1631,0);
 if (loop) return(0);}
say(76,1605,1145);
 if (loop) return(0);}
return 0;
}
int p650(void)
{
if (!KEY(162)) return 0;
value[0]=(isnear(162,-1,-1));
if(value[0]){
value[0]=(value[162]==0);
if(value[0]){
set('E',162,'c',1,NULL,NULL);
value[0]=(value[HERE]==474);
if(value[0]){
say(72,2516,0);
 if (loop) return(0);}
say(72,2516,1);
 if (loop) return(0);}
say(76,1605,162);
 if (loop) return(0);}
value[0]=(value[HERE]==473||value[HERE]==476);
if(value[0]){
say(64,2209,0);
 if (loop) return(0);}
return 0;
}
int p142(void)
{
default_to(0,value[HERE],9);
default_to(0,703,9);
value[0]=(value[1178]==2);
value[0]&=!(isnear(value[1145],-1,-1));
if(value[0]){
p39();
if (loop) return (0);
}
value[0]=(anyof(119,8,108,123,19,161,164,-1));
if(value[0]){
value[0]=(KEY(19));
if(value[0]){
value[0]=(value[575]==1);
if(value[0]){
p147();
if (loop) return (0);
loop=1; return(0);
}
say(76,2506,8);
 if (loop) return(0);}
value[0]=(KEY(161));
if(value[0]){
value[0]=(value[161]>0);
if(value[0]){
p146();
if (loop) return (0);
}
say(76,2506,8);
 if (loop) return(0);}
value[0]=(KEY(164));
if(value[0]){
value[0]=(value[164]>0);
if(value[0]){
set('E',164,'c',0,NULL,NULL);
set('E',479,'c',0,NULL,NULL);
set('E',478,'c',0,NULL,NULL);
say(72,2611,0);
 if (loop) return(0);}
say(76,2506,8);
 if (loop) return(0);}
if (anyof(119,-1))say(64,1936,0);
 if (loop) return(0);if (anyof(8,-1))say(64,1322,0);
 if (loop) return(0);if (anyof(108,-1))say(66,1200,0);
 if (loop) return(0);value[0]=(KEY(123));
if(value[0]){
value[0]=(value[123]<2);
if(value[0]){
say(76,1607,1145);
 if (loop) return(0);}
say(64,2100,0);
 if (loop) return(0);}}
return 0;
}
int p143(void)
{
if (!KEY(4)) return 0;
value[0]=(isnear(4,-1,-1));
if(value[0]){
value[0]=(value[4]>0);
if(value[0]){
value[0]=(isnear(5,-1,-1));
if(!value[0]){
set('T',2348,'c',1,NULL,NULL);
(*procs[822])();
if (loop) return (0);
}
value[0]=(value[5]==1);
if(value[0]){
p884(0,0);
if (loop) return (0);
}
value[0]=(value[5]==2);
if(value[0]){
set('E',4,'c',0,NULL,NULL);
apport(5,702);
say(64,2336,0);
 if (loop) return(0);}else{
say(64,2335,0);
 if (loop) return(0);}
}else{
say(76,2506,4);
 if (loop) return(0);}}
return 0;
}
int p144(void)
{
if (!KEY(162)) return 0;
value[0]=(isnear(162,-1,-1));
if(value[0]){
value[0]=(value[162]==0);
if(value[0]){
say(76,2506,162);
 if (loop) return(0);}
set('E',162,'c',0,NULL,NULL);
value[0]=(value[HERE]==474);
if(value[0]){
say(72,2517,0);
 if (loop) return(0);}
say(72,2517,1);
 if (loop) return(0);}
value[0]=(value[HERE]==473||value[HERE]==476);
if(value[0]){
say(64,2209,0);
 if (loop) return(0);}
return 0;
}
int p145(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(anyof(6,66,36,-1));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]!=1);
if(value[0]){
say(76,1607,1145);
 if (loop) return(0);}
value[0]=(KEY(66));
if(value[0]){
value[0]=(value[HERE]==361);
if(value[0]){
value[0]=(have(66,-1,-1));
if(value[0]){
apport(66,HERE);
}
value[0]=(isnear(39,-1,-1));
if(value[0]){
apport(39,HERE);
set('E',39,'c',1,NULL,NULL);
say(64,1470,0);
 if (loop) return(0);}
set('E',66,'c',2,NULL,NULL);
say(64,1469,0);
 if (loop) return(0);}
say(64,1471,0);
 if (loop) return(0);}else{
value[value[1145]]=0;
if (anyof(6,-1))say(72,1323,0);
 if (loop) return(0);if (anyof(36,-1))say(64,1608,0);
 if (loop) return(0);}}
return 0;
}
int p399(void)
{
value[0]=(value[HERE]==544);
if(value[0]){
say(8,1930,10);
set('V',1180,'c',12,NULL,NULL);
say(64,1931,0);
 if (loop) return(0);}
value[0]=(227<=value[1146] && value[1146]<=252);
value[0]|=(362<=value[1146] && value[1146]<=373);
value[0]|=(390<=value[1146] && value[1146]<=426);
value[0]&=!(bitest(evar(1146),8));
if(value[0]){
p378();
if (loop) return (0);
value[0]=(value[1190]>99);
if(value[0]){
say(64,2146,0);
 if (loop) return(0);}
say(8,2145,10);
set('V',1180,'c',13,NULL,NULL);
say(64,1931,0);
 if (loop) return(0);}
value[0]=(value[1201]==0);
if(value[0]){
set('V',1201,'c',1,NULL,NULL);
}
p405();
if (loop) return (0);
value[0]=(value[1201]>0);
if(value[0]){
p410(0,1);
if (loop) return (0);
value[0]=(value[1253]<0);
value[0]&=!(bitest(evar(1217),10));
if(value[0]){
value[1156]=3386;*bitword(1156)= -1;
set('V',1180,'c',5,NULL,NULL);
say(66,1156,0);
 if (loop) return(0);}
value[0]=(isnear(193,-1,-1));
value[0]|=(isnear(21,-1,-1));
value[0]|=(isnear(23,-1,-1));
value[0]|=(isnear(25,-1,-1));
value[0]|=(value[18]>0);
value[0]|=(isnear(33,-1,-1));
value[0]|=(value[130]>0);
value[0]|=(isnear(26,-1,-1));
value[0]|=(isnear(90,-1,-1));
value[0]|=(isnear(36,-1,-1));
value[0]|=(isnear(74,-1,-1));
if(value[0]){
say(8,1342,0);
}else{
value[0]=(bitest(evar(1217),3));
if(value[0]){
value[0]=(value[1253]==0);
if(value[0]){
say(72,1342,2);
 if (loop) return(0);}else{
say(72,1342,1);
 if (loop) return(0);}
}else{
bitmod('s',evar(1217),3);
p510(-1,1340,-1,1341);
if (loop) return (0);
}}}
loop=1; return(0);
return 0;
}
int p481(void)
{
p510(-1,1427,-1,1430);
if (loop) return (0);
return 0;
}
int p695(void)
{
set('V',1180,'c',9,NULL,NULL);
say(64,1432,0);
 if (loop) return(0);return 0;
}
int p939(void)
{
value[0]=(value[HERE]==302);
if(value[0]){
say(64,2318,0);
 if (loop) return(0);}else{
set('V',1180,'c',10,NULL,NULL);
say(64,1568,0);
 if (loop) return(0);}
return 0;
}
int p326(void)
{
value[0]=(typed("teleport"));
if(value[0]){
say(72,1806,1);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=(KEY(63));
if(!value[0]){
return 0;
}
value[0]=(isnear(63,0,1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
say(64,2559,0);
 if (loop) return(0);}
value[0]=(value[HERE]==199);
value[0]&=!(bitest(evar(1179),12));
if(value[0]){
set('V',1180,'c',48,NULL,NULL);
say(64,1763,0);
 if (loop) return(0);}
set('E',63,'c',3,NULL,NULL);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(have(value[1154],-1,-1));
value[0]&=(bitest(evar(1154),17));
value[0]&=!(value[1154]==148);
value[0]&=!(value[1154]==81);
if(value[0]){
say(64,2496,0);
 if (loop) return(0);}}
value[0]=(have(136,-1,-1));
value[0]&=(value[136]>2);
value[0]&=(value[136]<9);
if(value[0]){
say(64,2496,0);
 if (loop) return(0);}
value[0]=(value[HERE]==199);
if(value[0]){
apport(63,547);
set('T',2510,'c',0,NULL,NULL);
set('E',586,'c',3,NULL,NULL);
move(586,-2383); if (loop) return(0);
}
value[0]=(value[HERE]==438);
if(value[0]){
apport(63,439);
move(439,-2458); if (loop) return(0);
}
value[0]=(value[HERE]==318||value[HERE]==311);
if(value[0]){
say(64,2297,0);
 if (loop) return(0);}
value[0]=(value[HERE]==475);
if(value[0]){
apport(63,484);
move(484,-2460); if (loop) return(0);
}
value[0]=(value[HERE]==561||value[HERE]==570);
if(value[0]){
apport(63,547);
value[0]=(value[1878]==1);
if(value[0]){
set('T',1878,'c',2,NULL,NULL);
}
move(547,-2495); if (loop) return(0);
}
say(0,2231,0);
value[0]=(547<=value[1146] && value[1146]<=570);
if(value[0]){
say(0,2654,0);
}
loop=1; return(0);
}
value[0]=(isnear(63,-1,-1));
if(value[0]){
value[0]=(bitest(63,14));
if(value[0]){
say(64,2232,0);
 if (loop) return(0);}
say(64,2233,0);
 if (loop) return(0);}
return 0;
}
int p327(void)
{
value[0]=(value[1178]==1);
value[0]|=(bitest(evar(1145),1));
if(value[0]){
say(64,1805,0);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);return 0;
}
int p407(void)
{
value[0]=(value[1178]==2);
if(value[0]){
value[0]=(KEY(63));
if(value[0]){
value[0]=(have(158,-1,-1));
if(!value[0]){
say(0,2228,0);
value[0]=(have(110,-1,-1));
value[0]&=(value[3453]==0);
if(value[0]){
say(64,3453,0);
 if (loop) return(0);}else{value[0]=(have(54,-1,-1));
value[0]|=(have(59,-1,-1));
if(value[0]){
say(64,3454,0);
 if (loop) return(0);}else{
say(64,1266,0);
 if (loop) return(0);}}}
value[0]=(value[63]==0);
if(value[0]){
say(64,2225,0);
 if (loop) return(0);}
value[0]=(value[63]==3);
value[0]|=(value[63]==1);
if(value[0]){
say(64,2226,0);
 if (loop) return(0);}
set('E',63,'c',3,NULL,NULL);
bitmod('s',63,13);
value[0]=(value[3342]>0);
if(value[0]){
bitmod('s',63,14);
set('T',2227,'c',1,NULL,NULL);
}
say(64,2227,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),8));
if(value[0]){
(*procs[783])();
if (loop) return (0);
}else{value[0]=(KEY(27));
value[0]&=(isnear(27,-1,-1));
if(value[0]){
value[0]=(isnear(29,-1,-1));
if(value[0]){
say(64,1642,0);
 if (loop) return(0);}
set('T',2948,'c',1,NULL,NULL);
set('T',2949,'c',1,NULL,NULL);
apport(29,value[1146]);
say(64,1643,0);
 if (loop) return(0);}else{value[0]=(KEY(12));
if(value[0]){
(*procs[800])();
if (loop) return (0);
}else{value[0]=(anyof(35,936,-1));
if(value[0]){
(*procs[785])();
if (loop) return (0);
}else{
say(64,1403,0);
 if (loop) return(0);}}}}}
return 0;
}
int p512(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(bitest(evar(1178),8));
if(!value[0]){
value[0]=(value[1178]==1);
value[0]&=(isnear(88,-1,-1));
value[0]|=(KEY(88));
if(value[0]){
say(64,1784,0);
 if (loop) return(0);}
say(64,1565,0);
 if (loop) return(0);}
value[0]=(KEY(193));
value[0]&=(value[1198]==6);
value[0]&=(isnear(193,-1,-1));
if(value[0]){
say(0,1853,0);
p154();
if (loop) return (0);
}
value[0]=(KEY(35));
if(value[0]){
(*procs[785])();
if (loop) return (0);
}
default_to(0,value[HERE],8);
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(value[1145]==-3);
if(value[0]){
bitmod('s',evar(1178),5);
say(64,2608,0);
 if (loop) return(0);}else{
say(64,1331,0);
 if (loop) return(0);}}
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
if (anyof(23,-1))say(64,1455,0);
 if (loop) return(0);if (anyof(5,-1))say(64,3359,0);
 if (loop) return(0);if (anyof(159,-1))say(64,2619,0);
 if (loop) return(0);if (anyof(9,-1))say(64,1333,0);
 if (loop) return(0);if (anyof(18,-1))say(64,1616,0);
 if (loop) return(0);if (anyof(39,-1))say(76,1463,39);
 if (loop) return(0);if (anyof(114,115,-1))say(64,1441,0);
 if (loop) return(0);if (anyof(28,-1))say(64,1627,0);
 if (loop) return(0);if (anyof(29,-1))say(64,2144,0);
 if (loop) return(0);if (anyof(85,-1))say(64,1754,0);
 if (loop) return(0);if (anyof(90,-1))say(64,1785,0);
 if (loop) return(0);value[0]=(KEY(193));
if(value[0]){
p515();
if (loop) return (0);
}else{value[0]=(KEY(21));
if(value[0]){
p514();
if (loop) return (0);
}else{value[0]=(KEY(25));
if(value[0]){
p516();
if (loop) return (0);
}else{value[0]=(KEY(194));
if(value[0]){
value[0]=(KEY(124));
if(!value[0]){
value[0]=(have(125,-1,-1));
if(value[0]){
if (value[ARG1] == 194) {value[ARG1]=125; (void)fake(1,125);}
if (value[ARG2] == 194) {value[ARG2]=125; (void)fake(2,125);}
p910();
if (loop) return (0);
}else{value[0]=(have(54,-1,-1));
if(value[0]){
if (value[ARG1] == 194) {value[ARG1]=54; (void)fake(1,54);}
if (value[ARG2] == 194) {value[ARG2]=54; (void)fake(2,54);}
p910();
if (loop) return (0);
}}}
value[0]=(have(124,-1,-1));
if(value[0]){
if (value[ARG1] == 194) {value[ARG1]=124; (void)fake(1,124);}
if (value[ARG2] == 194) {value[ARG2]=124; (void)fake(2,124);}
p910();
if (loop) return (0);
}
set('V',1180,'c',14,NULL,NULL);
say(64,1337,0);
 if (loop) return(0);}else{value[0]=(KEY(130));
if(value[0]){
say(0,1633,0);
p154();
if (loop) return (0);
}else{value[0]=(KEY(26));
if(value[0]){
value[0]=(value[26]<2);
if(value[0]){
say(0,1623,0);
p154();
if (loop) return (0);
}
say(64,1464,0);
 if (loop) return(0);}else{value[0]=(KEY(94));
if(value[0]){
p698();
if (loop) return (0);
}else{value[0]=(KEY(109));
if(value[0]){
p513();
if (loop) return (0);
}else{value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,3315,0);
 if (loop) return(0);}}}}}}}}}}
return 0;
}
int p616(void)
{
value[0]=(bitest(evar(1178),1));
if(value[0]){
say(72,2830,1);
 if (loop) return(0);}
bitmod('c',evar(1178),2);
bitmod('s',evar(1178),1);
value[1200]=1267;*bitword(1200)= -1;
say(64,1454,0);
 if (loop) return(0);return 0;
}
int p832(void)
{
value[0]=(bitest(evar(1178),2));
if(value[0]){
say(72,2830,0);
 if (loop) return(0);}
bitmod('s',evar(1178),2);
bitmod('c',evar(1178),1);
value[1200]=1264;*bitword(1200)= -1;
say(64,2831,0);
 if (loop) return(0);return 0;
}
int p885(void)
{
value[0]=(bitest(evar(1178),2));
value[0]|=(bitest(evar(1178),1));
if(!value[0]){
say(72,2830,2);
 if (loop) return(0);}
bitmod('c',evar(1178),1);
bitmod('c',evar(1178),2);
value[1200]=1267;*bitword(1200)= -1;
say(0,2832,0);
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(0,1266,0);
p188(0,2);
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p302(void)
{
default_to(0,value[HERE],8);
value[0]=(anyof(39,23,109,9,193,21,26,-1));
value[0]|=(anyof(130,85,139,-1));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(KEY(39));
if(value[0]){
value[0]=(isnear(118,-1,-1));
if(value[0]){
set('E',39,'c',1,NULL,NULL);
value[0]=(have(118,-1,-1));
if(value[0]){
}
apport(118,701);
value[0]=(value[124]==1);
if(value[0]){
set('E',124,'c',0,NULL,NULL);
}
say(64,1465,0);
 if (loop) return(0);}
say(76,1398,39);
 if (loop) return(0);}
if (anyof(23,-1))say(64,1482,0);
 if (loop) return(0);value[0]=(KEY(9));
if(value[0]){
value[0]=(have(109,-1,-1));
if(value[0]){
p945();
if (loop) return (0);
say(64,1397,0);
 if (loop) return(0);}
say(76,1398,9);
 if (loop) return(0);}
value[0]=(KEY(193));
if(value[0]){
value[0]=(value[1198]>4);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
bitmod('s',193,14);
say(64,1399,0);
 if (loop) return(0);}
value[0]=(KEY(109));
if(value[0]){
p305();
if (loop) return (0);
}
value[0]=(KEY(21));
if(value[0]){
value[0]=(value[21]==0);
if(value[0]){
say(76,1398,21);
 if (loop) return(0);}
say(64,1464,0);
 if (loop) return(0);}
value[0]=(KEY(26));
if(value[0]){
value[0]=(value[26]<2);
if(value[0]){
say(64,2481,0);
 if (loop) return(0);}
say(64,1464,0);
 if (loop) return(0);}
if (anyof(130,-1))say(64,1628,0);
 if (loop) return(0);value[0]=(KEY(139));
if(value[0]){
value[0]=(value[HERE]==443||value[HERE]==218);
if(value[0]){
p304();
if (loop) return (0);
}}
value[0]=(KEY(85));
if(value[0]){
p306();
if (loop) return (0);
}}
p39();
if (loop) return (0);
}
return 0;
}
int p303(void)
{
value[0]=(value[1178]==1);
if(!value[0]){
value[0]=(bitest(evar(1145),0));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
return 0;
}
int p747(void)
{
p378();
if (loop) return (0);
say(12,1521,1190);
value[0]=(value[1170]>0);
if(value[0]){
say(12,1522,1170);
say(12,1523,1171);
}
say(12,1524,1191);
say(12,1525,1193);
set('V',1180,'c',3,NULL,NULL);
loop=1; return(0);
return 0;
}
int p507(void)
{
say(64,2607,0);
 if (loop) return(0);return 0;
}
int p472(void)
{
say(72,1298,0);
 if (loop) return(0);return 0;
}
int p654(void)
{
say(72,1298,0);
 if (loop) return(0);return 0;
}
int p354(void)
{
say(64,1966,0);
 if (loop) return(0);return 0;
}
int p764(void)
{
say(64,1339,0);
 if (loop) return(0);return 0;
}
int p300(void)
{
value[0]=(value[1198]>5);
if(value[0]){
say(64,1329,0);
 if (loop) return(0);}
value[0]=(value[1195]<=0);
if(value[0]){
set('V',1195,'c',1,NULL,NULL);
say(2,1200,0);
value[1200]=1264;*bitword(1200)= -1;
loop=1; return(0);
}
p331();
if (loop) return (0);
return 0;
}
int p307(void)
{
value[0]=(value[1198]>5);
if(value[0]){
say(64,1329,0);
 if (loop) return(0);}
value[0]=(value[1195]==0);
if(value[0]){
set('V',1195,'c',2,NULL,NULL);
say(2,1200,0);
value[1200]=1264;*bitword(1200)= -1;
loop=1; return(0);
}
p331();
if (loop) return (0);
return 0;
}
int p328(void)
{
value[0]=(value[1198]>5);
if(value[0]){
say(64,1329,0);
 if (loop) return(0);}
value[0]=(value[1195]==1);
if(value[0]){
set('V',1195,'c',3,NULL,NULL);
say(2,1200,0);
value[1200]=1264;*bitword(1200)= -1;
loop=1; return(0);
}
p331();
if (loop) return (0);
return 0;
}
int p330(void)
{
value[0]=(value[1198]>5);
if(value[0]){
say(64,1329,0);
 if (loop) return(0);}
value[0]=(value[1178]==2);
value[0]&=!(KEY(730));
if(value[0]){
say(64,1352,0);
 if (loop) return(0);}
value[0]=(value[1195]==2);
if(value[0]){
value[0]=(getloc(53)==281);
value[0]|=(bitest(53,14));
if(value[0]){
say(0,1329,0);
value[0]=(getloc(53)==281);
if(value[0]){
say(0,1563,0);
}
}else{
value[0]=(value[HERE]==281);
value[0]&=(bitest(evar(1178),8));
if(value[0]){
value[0]=(have(53,-1,-1));
if(value[0]){
say(0,3471,0);
}else{
say(8,3469,1);
say(0,1266,0);
say(0,53,0);
}
}else{
value[0]=(have(53,-1,-1));
value[0]|=(ishere(53,-1,-1));
value[0]&=(bitest(evar(1178),8));
if(value[0]){
say(8,3469,0);
}else{
say(8,3469,1);
}}
value[0]=(bitest(53,13));
if(value[0]){
bitmod('c',53,13);
bitmod('s',23,13);
value[0]=(value[23]==1);
value[0]|=(value[23]==2);
if(value[0]){
value[0]=(isnear(24,-1,-1));
if(value[0]){
say(0,1922,0);
}
set('E',23,'c',0,NULL,NULL);
apport(23,303);
bitmod('s',23,6);
apport(24,701);
}}
apport(53,281);
value[0]=(value[194]==2);
if(value[0]){
set('E',194,'c',3,NULL,NULL);
value[1244] = irand(5-3+1)+3;
}}
set('V',1195,'c',0,NULL,NULL);
}else{
p331();
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p356(void)
{
set('V',1195,'c',-1,NULL,NULL);
say(64,1939,0);
 if (loop) return(0);return 0;
}
int p942(void)
{
say(64,1329,0);
 if (loop) return(0);return 0;
}
int p683(void)
{
say(64,1329,0);
 if (loop) return(0);return 0;
}
int p757(void)
{
say(64,1937,0);
 if (loop) return(0);return 0;
}
int p318(void)
{
if (!KEY(889)) return 0;
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(204,4));
if(value[0]){
say(64,1346,0);
 if (loop) return(0);}
say(64,1347,0);
 if (loop) return(0);return 0;
}
int p319(void)
{
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(KEY(155));
if(value[0]){
value[0]=(547<=value[1146] && value[1146]<=582);
if(value[0]){
say(64,2771,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
value[0]|=(KEY(17));
if(value[0]){
say(64,1391,0);
 if (loop) return(0);}
say(64,1875,0);
 if (loop) return(0);}
say(64,1348,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),1));
if(value[0]){
value[0]=(value[HERE]==value[1145]);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}
say(64,1348,0);
 if (loop) return(0);}
say(64,1352,0);
 if (loop) return(0);}
return 0;
}
int p822(void)
{
value[0]=(547<=value[1146] && value[1146]<=554);
value[0]|=(439<=value[1146] && value[1146]<=442);
value[0]|=(value[HERE]==631||value[HERE]==632||value[HERE]==298||value[HERE]==299);
value[0]|=(635<=value[1146] && value[1146]<=638);
if(value[0]){
say(72,1713,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),17));
if(value[0]){
say(72,1713,1);
 if (loop) return(0);}
say(72,1713,2);
 if (loop) return(0);return 0;
}
int p72(void)
{
value[0]=(value[1178]>1);
value[0]&=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(KEY(56));
if(value[0]){
apport(56,702);
apport(57,value[1146]);
say(64,1495,0);
 if (loop) return(0);}
value[0]=(KEY(127));
if(value[0]){
p73();
if (loop) return (0);
}
value[0]=(KEY(12));
if(value[0]){
value[0]=(value[1198]==6);
if(value[0]){
say(0,1843,0);
p154();
if (loop) return (0);
}
say(64,1851,0);
 if (loop) return(0);}
value[0]=(KEY(153));
if(value[0]){
value[0]=(value[153]==0);
if(value[0]){
say(64,1762,0);
 if (loop) return(0);}else{
say(64,2464,0);
 if (loop) return(0);}}}
if (anyof(78,-1))say(64,1808,0);
 if (loop) return(0);say(64,3315,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=!(bitest(evar(1178),1));
if(value[0]){
say(64,3315,0);
 if (loop) return(0);}
return 0;
}
int p324(void)
{
if (value[ARG1] == 56) value[ARG1]=57;
if (value[ARG2] == 56) value[ARG2]=57;
if (value[ARG1] == 888) value[ARG1]=84;
if (value[ARG2] == 888) value[ARG2]=84;
value[0]=(value[1178]==1);
value[0]|=!(isnear(value[1145],-1,-1));
if(value[0]){
return 0;
}
value[0]=(anyof(84,57,42,-1));
if(value[0]){
say(76,1435,1145);
 if (loop) return(0);}
value[0]=(KEY(63));
if(value[0]){
value[0]=(bitest(63,13));
if(value[0]){
say(72,2018,1);
 if (loop) return(0);}else{
say(72,2018,0);
 if (loop) return(0);}}
return 0;
}
int p309(void)
{
value[0]=(value[1178]>1);
if(value[0]){
return 0;
}
set('V',1251,'c',0,NULL,NULL);
value[0]=(have(136,0,2));
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
}else{value[0]=(have(119,0,2));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
}else{value[0]=(have(123,0,2));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
}else{value[0]=(ishere(136,0,2));
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
}else{value[0]=(ishere(119,0,2));
if(value[0]){
value[1251]=119;*bitword(1251)= -1;
}else{value[0]=(ishere(123,0,2));
if(value[0]){
value[1251]=123;*bitword(1251)= -1;
}else{
return 0;
}}}}}}
value[0]=(have(value[1251],-1,-1));
if(value[0]){
set('V',1178,'c',2,NULL,NULL);
value[1145]=119;*bitword(1145)= -1;
if (value[ARG1] == 119) {value[ARG1]=value[1251]; (void)fake(1,value[1251]);}
if (value[ARG2] == 119) {value[ARG2]=value[1251]; (void)fake(2,value[1251]);}
}else{
say(76,2787,1251);
 if (loop) return(0);}
p756();
if (loop) return (0);
value[0]=(value[HERE]==443);
if(value[0]){
say(64,2849,0);
 if (loop) return(0);}
return 0;
}
int p310(void)
{
if (!KEY(146)) return 0;
value[0]=(isnear(146,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
say(64,2015,0);
 if (loop) return(0);}
say(76,1401,146);
 if (loop) return(0);}
return 0;
}
int p311(void)
{
if (!KEY(56)) return 0;
value[0]=(isnear(56,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1146),17));
value[0]|=(value[HERE]==217);
if(value[0]){
value[0]=(have(56,-1,-1));
if(value[0]){
value[1187] -= 1;
}
apport(56,702);
apport(57,value[1146]);
say(64,1434,0);
 if (loop) return(0);}
say(64,1433,0);
 if (loop) return(0);}
return 0;
}
int p312(void)
{
if (!KEY(123)) return 0;
value[0]=(have(123,-1,-1));
if(value[0]){
value[0]=(value[123]<2);
if(value[0]){
say(64,1842,0);
 if (loop) return(0);}
value[0]=(value[123]==2);
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
set('E',123,'c',3,NULL,NULL);
say(12,2242,123);
say(72,2243,3);
 if (loop) return(0);}
value[0]=(value[HERE]==217);
if(value[0]){
set('E',123,'c',4,NULL,NULL);
say(12,2242,123);
say(72,2243,4);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),12));
value[0]|=(value[HERE]==502);
if(value[0]){
say(64,1369,0);
 if (loop) return(0);}
say(76,1401,123);
 if (loop) return(0);}
say(12,2242,123);
say(76,2244,123);
 if (loop) return(0);}
p625(*bitword(1145),value[1145]);
if (loop) return (0);
return 0;
}
int p313(void)
{
if (!KEY(119)) return 0;
value[0]=(have(119,-1,-1));
if(value[0]){
value[0]=(value[119]==2);
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
set('E',119,'c',3,NULL,NULL);
say(12,2242,119);
say(72,2243,3);
 if (loop) return(0);}
value[0]=(value[HERE]==217);
if(value[0]){
set('E',119,'c',4,NULL,NULL);
say(12,2242,119);
say(72,2243,4);
 if (loop) return(0);}
say(76,1401,119);
 if (loop) return(0);}
say(12,2242,119);
say(76,2244,119);
 if (loop) return(0);}
p625(*bitword(1145),value[1145]);
if (loop) return (0);
return 0;
}
int p314(void)
{
if (!KEY(136)) return 0;
value[0]=(have(136,-1,-1));
if(value[0]){
value[0]=(value[136]==2);
value[0]|=(value[136]>=7);
value[0]|=(value[136]==1);
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
value[0]=(value[136]==1);
if(value[0]){
value[0]=(value[HERE]==200);
if(value[0]){
say(64,2258,0);
 if (loop) return(0);}else{
say(0,2259,0);
say(0,1266,0);
set('E',136,'c',2,NULL,NULL);
}}
set('E',136,'c',3,NULL,NULL);
say(12,2242,136);
say(72,2243,3);
 if (loop) return(0);}
value[0]=(value[HERE]==217);
if(value[0]){
say(64,2245,0);
 if (loop) return(0);}
say(76,1401,136);
 if (loop) return(0);}
say(12,2242,136);
say(76,2244,136);
 if (loop) return(0);}
p625(*bitword(1145),value[1145]);
if (loop) return (0);
return 0;
}
int p315(void)
{
if (!KEY(84)) return 0;
value[0]=(isnear(84,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
value[0]=(have(84,-1,-1));
if(value[0]){
value[0]=(value[HERE]==495);
if(value[0]){
say(76,1743,84);
 if (loop) return(0);}
set('E',84,'c',2,NULL,NULL);
say(72,1744,0);
 if (loop) return(0);}
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
if(value[0]){
say(76,3463,84);
 if (loop) return(0);}
}else{
p321(0,0);
if (loop) return (0);
}
value[0]=(value[1251]!=0);
if(value[0]){
value[0]=(value[1251]==136);
if(value[0]){
value[0]=(value[136]==3);
if(value[0]){
set('E',136,'c',7,NULL,NULL);
}else{value[0]=(value[136]==9);
if(value[0]){
set('E',136,'c',2,NULL,NULL);
}else{
value[136] += 1;
}}
set('E',84,'c',2,NULL,NULL);
say(72,1744,1);
 if (loop) return(0);}
value[value[1251]]=2;
bitmod('s',evar(1146),13);
say(76,3460,1251);
 if (loop) return(0);}
value[0]=(have(136,0,5));
if(value[0]){
set('V',1180,'c',51,NULL,NULL);
say(64,3461,0);
 if (loop) return(0);}
value[0]=(value[HERE]==443);
if(value[0]){
say(64,2849,0);
 if (loop) return(0);}
say(76,1401,84);
 if (loop) return(0);}
p625(*bitword(1145),value[1145]);
if (loop) return (0);
return 0;
}
int p316(void)
{
value[0]=(value[1178]>1);
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1402,0);
 if (loop) return(0);}
return 0;
}
int p262(void)
{
value[0]=(anyof(119,123,84,127,136,151,-1));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
if(!value[0]){
say(76,1513,1145);
 if (loop) return(0);}}
return 0;
}
int p263(void)
{
if (!KEY(84)) return 0;
value[0]=(value[84]>=1);
if(value[0]){
set('E',84,'c',0,NULL,NULL);
say(72,1802,0);
 if (loop) return(0);}
say(76,1745,84);
 if (loop) return(0);return 0;
}
int p264(void)
{
if (!KEY(119)) return 0;
value[1251]=119;*bitword(1251)= -1;
p268();
if (loop) return (0);
return 0;
}
int p265(void)
{
if (!KEY(136)) return 0;
value[1251]=136;*bitword(1251)= -1;
p268();
if (loop) return (0);
return 0;
}
int p266(void)
{
if (!KEY(123)) return 0;
value[0]=(value[123]<2);
if(value[0]){
(*procs[767])();
if (loop) return (0);
loop=1; return(0);
}
value[1251]=123;*bitword(1251)= -1;
p268();
if (loop) return (0);
return 0;
}
int p267(void)
{
value[0]=(KEY(151));
if(value[0]){
(*procs[767])();
if (loop) return (0);
loop=1; return(0);
}
if (anyof(127,-1))say(64,1299,0);
 if (loop) return(0);value[0]=(value[1178]==2);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
return 0;
}
int p688(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1178]==1);
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
if(value[0]){
p320(0,0);
if (loop) return (0);
}
value[0]=(value[1251]==0);
if(value[0]){
return 0;
}
set('V',1178,'c',2,NULL,NULL);
set('V',1145,'v',1251,NULL,NULL);
}
value[0]=(anyof(120,121,122,87,-1));
if(value[0]){
value[0]=(KEY(120));
if(value[0]){
p321(0,1);
if (loop) return (0);
p218();
if (loop) return (0);
}
value[0]=(KEY(121));
if(value[0]){
p320(0,1);
if (loop) return (0);
p218();
if (loop) return (0);
}
value[0]=(KEY(122));
if(value[0]){
value[0]=(have(136,0,5));
if(value[0]){
value[1251]=136;*bitword(1251)= -1;
p218();
if (loop) return (0);
}else{
say(76,1513,122);
 if (loop) return(0);}}
value[0]=(KEY(87));
if(value[0]){
value[0]=(have(136,0,6));
if(value[0]){
say(64,2254,0);
 if (loop) return(0);}else{
p625(-1,87);
if (loop) return (0);
}}}
value[0]=(anyof(123,119,136,-1));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]>2);
if(value[0]){
value[0]=(lval[0]==6);
if(value[0]){
say(64,2254,0);
 if (loop) return(0);}
set('V',1251,'v',1145,NULL,NULL);
p218();
if (loop) return (0);
}else{
say(76,1745,1145);
 if (loop) return(0);}
}else{
say(76,1513,1145);
 if (loop) return(0);}
loop=1; return(0);
}
value[0]=(KEY(151));
if(value[0]){
value[0]=(isnear(151,-1,-1));
if(value[0]){
say(76,1714,151);
 if (loop) return(0);}
return 0;
}
value[0]=(value[1178]>1);
if(value[0]){
say(64,1376,0);
 if (loop) return(0);}
return 0;
}
int p673(void)
{
value[0]=(anyof(193,9,109,21,23,39,20,25,26,-1));
value[0]|=(anyof(130,85,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1301,0);
 if (loop) return(0);}
return 0;
}
int p259(void)
{
value[0]=(keyword(788,153,-1));
if(value[0]){
(*procs[789])();
if (loop) return (0);
}
value[0]=(isnear(118,-1,-1));
if(value[0]){
value[0]=(KEY(118));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(145,0,2));
if(value[0]){
say(64,2323,0);
 if (loop) return(0);}
apport(118,701);
say(64,1362,0);
 if (loop) return(0);}}
value[0]=(isnear(141,-1,-1));
value[0]&=(KEY(141));
if(value[0]){
say(64,2257,0);
 if (loop) return(0);}
value[0]=(isnear(128,-1,-1));
if(value[0]){
value[0]=(KEY(128));
value[0]|=(value[1178]==1);
if(value[0]){
value[0]=(have(145,0,2));
if(value[0]){
say(64,2323,0);
 if (loop) return(0);}
value[1203] = irand(33-28+1)+28;
value[1203] += value[1206];
if (*bitword(1206*VARSIZE)==-1) *bitword(1203*VARSIZE)= -1;
value[1202] += 6;
bitmod('c',517,8);
set('E',128,'c',2,NULL,NULL);
apport(128,702);
say(64,128,0);
 if (loop) return(0);}}
value[0]=(KEY(87));
if(value[0]){
p126(0,0);
if (loop) return (0);
say(64,1361,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
say(64,1472,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),8));
value[0]|=(anyof(13,139,-1));
if(value[0]){
say(64,1360,0);
 if (loop) return(0);}
return 0;
}
int p260(void)
{
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
value[0]|=(bitest(evar(1180),1));
if(value[0]){
say(64,1369,0);
 if (loop) return(0);}}
return 0;
}
int p734(void)
{
if (!KEY(107)) return 0;
value[0]=(isnear(107,-1,-1));
if(value[0]){
say(76,1367,1145);
 if (loop) return(0);}
return 0;
}
int p735(void)
{
if (!KEY(92)) return 0;
value[0]=(isnear(92,-1,-1));
if(value[0]){
say(64,2183,0);
 if (loop) return(0);}
return 0;
}
int p736(void)
{
if (!KEY(111)) return 0;
value[0]=(isnear(111,-1,-1));
value[0]&=(value[111]<2);
if(value[0]){
value[0]=(have(132,-1,-1));
if(value[0]){
set('E',111,'c',2,NULL,NULL);
bitmod('c',111,7);
set('E',132,'c',2,NULL,NULL);
say(76,1836,1144);
 if (loop) return(0);}
say(76,2039,1144);
 if (loop) return(0);}
return 0;
}
int p737(void)
{
if (!KEY(322)) return 0;
value[0]=(value[HERE]==322);
if(value[0]){
say(64,1368,0);
 if (loop) return(0);}
say(76,1319,322);
 if (loop) return(0);return 0;
}
int p738(void)
{
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(anyof(1057,171,-1));
value[0]&=(value[HERE]==220||value[HERE]==464);
if(value[0]){
say(76,3089,171);
 if (loop) return(0);}else{value[0]=(anyof(1057,75,-1));
value[0]&=(value[HERE]==463||value[HERE]==462);
if(value[0]){
say(76,3089,75);
 if (loop) return(0);}else{value[0]=(anyof(1057,97,-1));
value[0]&=(value[HERE]==473||value[HERE]==474);
if(value[0]){
say(76,3089,97);
 if (loop) return(0);}else{value[0]=(anyof(1057,162,-1));
value[0]&=(value[HERE]==475||value[HERE]==474);
if(value[0]){
say(76,3089,162);
 if (loop) return(0);}else{value[0]=(anyof(1057,8,-1));
value[0]&=(value[HERE]==282);
if(value[0]){
say(76,3089,8);
 if (loop) return(0);}else{value[0]=(anyof(1057,106,-1));
value[0]&=(isnear(106,-1,-1));
if(value[0]){
set('T',3089,'c',1,NULL,NULL);
say(12,3089,106);
set('T',3089,'c',0,NULL,NULL);
loop=1; return(0);
}else{value[0]=(anyof(1057,110,-1));
value[0]&=(isnear(110,-1,-1));
if(value[0]){
say(72,3089,978);
 if (loop) return(0);}else{value[0]=(anyof(1057,112,-1));
if(value[0]){
value[0]=(isnear(112,-1,-1));
value[0]|=(value[HERE]==448);
if(value[0]){
say(76,3089,110);
 if (loop) return(0);}
}else{value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(bitest(evar(1145),8));
value[0]&=!(KEY(114));
value[0]&=!(KEY(115));
value[0]&=!(KEY(85));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
say(64,1368,0);
 if (loop) return(0);}}}}}}}}}}}
return 0;
}
int p38(void)
{
value[0]=(bitest(evar(1146),6));
value[0]|=(bitest(evar(1147),6));
value[0]|=(value[1147]==0);
if(value[0]){
say(72,1387,0);
 if (loop) return(0);}
move(value[1147],-2); if (loop) return(0);
return 0;
}
int p603(void)
{
value[0]=(value[HERE]==302);
if(value[0]){
say(64,2092,0);
 if (loop) return(0);}
value[0]=(value[HERE]==210||value[HERE]==209||value[HERE]==211||value[HERE]==224||value[HERE]==225||value[HERE]==289);
value[0]|=(value[HERE]==296||value[HERE]==298||value[HERE]==303||value[HERE]==514||value[HERE]==515);
value[0]|=(value[HERE]==304||value[HERE]==517||value[HERE]==22);
if(value[0]){
say(64,1359,0);
 if (loop) return(0);}
return 0;
}
int p171(void)
{
value[0]=(value[HERE]==284||value[HERE]==461||value[HERE]==512);
if(value[0]){
say(64,1705,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
return 0;
}
int p745(void)
{
value[0]=(KEY(866));
if(value[0]){
(*procs[866])();
if (loop) return (0);
}
value[0]=(KEY(867));
if(value[0]){
(*procs[867])();
if (loop) return (0);
}
value[0]=(value[1178]==1);
if(value[0]){
say(76,2702,1144);
 if (loop) return(0);}
value[0]=(typed("sing"));
if(value[0]){
say(64,3499,0);
 if (loop) return(0);}
value[0]=(typed("chant"));
if(value[0]){
say(64,3500,0);
 if (loop) return(0);}
say(0,3493,0);
value[0]=(KEY(3));
if(value[0]){
loop=1; return(0);
}
if (anyof(948,-1))say(64,2583,0);
 if (loop) return(0);value[0]=(isnear(26,-1,-1));
if(value[0]){
say(64,2701,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
value[0]&=(isnear(value[1145],1,8));
if(value[0]){
say(76,2700,1145);
 if (loop) return(0);}
value[0]=(anyof(710,706,707,713,712,709,-1));
value[0]|=(anyof(714,705,715,708,720,711,831,-1));
value[0]|=(anyof(719,718,717,716,833,721,-1));
if(value[0]){
if (value[1145]<LPROC && value[1145]>= 0) (*procs[value[1145]])(); else pcall(value[1145]);
if (loop) return (0);
loop=1; return(0);
}
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(isnear(value[1154],1,8));
if(value[0]){
say(76,2700,1154);
 if (loop) return(0);}}
loop=1; return(0);
return 0;
}
int p742(void)
{
value[0]=(value[1198]<3);
if(value[0]){
say(72,1541,0);
 if (loop) return(0);}
value[1156]=1496;*bitword(1156)= -1;
verbatim(1145);
input_store('S', &value[1156]);
say(8,1542,5);
set('V',1180,'c',15,NULL,NULL);
say(64,1496,0);
 if (loop) return(0);return 0;
}
int p593(void)
{
value[0]=(value[1198]<3);
if(value[0]){
say(72,1541,1);
 if (loop) return(0);}
set('V',1180,'c',18,NULL,NULL);
value[0]=(bitest(evar(1218),11));
if(value[0]){
p33();
if (loop) return (0);
}else{
say(8,2369,0);
bitmod('s',evar(1218),11);
say(64,1496,0);
 if (loop) return(0);}
return 0;
}
int p704(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
special(33,&lval[0]);
value[0]=(lval[0]!=0);
if(value[0]){
say(64,2373,0);
 if (loop) return(0);}
set('V',1180,'c',19,NULL,NULL);
say(8,2369,1);
say(64,1496,0);
 if (loop) return(0);return 0;
}
int p715(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]<2);
if(value[0]){
p928();
if (loop) return (0);
}else{
set('V',1145,'c',0,NULL,NULL);
}
value[0]=(value[1178]==2);
if(value[0]){
verbatim(1145);
}
value[0]=(KEY(823));
if(value[0]){
say(0,1871,0);
finita();
loop=1; return(0);
}
set('V',1178,'c',2,NULL,NULL);
value[1156]=1266;*bitword(1156)= -1;
input_store('S', &value[1156]);
special(2, &lval[0]);
value[0]=(lval[0]==3);
if(value[0]){
loop=1; return(0);
}
value[0]=(lval[0]==0);
if(value[0]){
special(8,&lval[1]);
value[0]=(lval[1]<5);
if(value[0]){
say(8,1547,5);
say(8,1548,10);
set('V',1180,'c',43,NULL,NULL);
say(64,1549,0);
 if (loop) return(0);}
}else{value[0]=(lval[0]==1);
if(value[0]){
value[0]=(typed("q"));
value[0]|=(typed("qu"));
value[0]|=(typed("qui"));
value[0]|=(typed("quit"));
if(value[0]){
(*procs[823])();
if (loop) return (0);
}
say(0,1545,0);
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1193]>0);
if(value[0]){
value[1193] -= 1;
}
loop=1; return(0);
}else{
special(28,&value[0]);
set('V',1180,'c',42,NULL,NULL);
say(64,1546,0);
 if (loop) return(0);}}
p716();
if (loop) return (0);
return 0;
}
int p777(void)
{
value[0]=(value[1178]==1);
if(value[0]){
p39();
if (loop) return (0);
}
value[0]=(anyof(120,121,127,122,-1));
if(value[0]){
(*procs[790])();
if (loop) return (0);
}
value[0]=(KEY(87));
if(value[0]){
p126(0,1);
if (loop) return (0);
say(64,1361,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
value[0]&=(isnear(value[1145],-1,-1));
if(!value[0]){
p39();
if (loop) return (0);
}
if (anyof(128,-1))say(64,2799,0);
 if (loop) return(0);value[0]=(KEY(118));
if(value[0]){
set('E',118,'c',1,NULL,NULL);
say(64,2798,0);
 if (loop) return(0);}
value[0]=(anyof(119,123,136,-1));
if(value[0]){
(*procs[790])();
if (loop) return (0);
}
p39();
if (loop) return (0);
return 0;
}
int p227(void)
{
value[0]=(KEY(765));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(911));
if(value[0]){
value[0]=(value[HERE]==333||value[HERE]==487);
if(value[0]){
value[1145]=120;*bitword(1145)= -1;
}else{
return 0;
}}
value[0]=(KEY(575));
if(value[0]){
value[0]=(value[HERE]==575||value[HERE]==574);
if(value[0]){
value[1145]=120;*bitword(1145)= -1;
}else{
return 0;
}}
value[0]=(KEY(899));
if(value[0]){
value[0]=(value[HERE]==566||value[HERE]==567||value[HERE]==259||value[HERE]==195||value[HERE]==201||value[HERE]==202||value[HERE]==495);
value[0]|=(value[HERE]==511||value[HERE]==632||value[HERE]==631||value[HERE]==638||value[HERE]==637||value[HERE]==635);
value[0]|=(value[HERE]==636||value[HERE]==283||value[HERE]==568||value[HERE]==554||value[HERE]==200);
if(value[0]){
value[1145]=120;*bitword(1145)= -1;
}else{
return 0;
}}
value[0]=(KEY(918));
if(value[0]){
value[0]=(value[HERE]==200||value[HERE]==259);
if(value[0]){
value[1145]=120;*bitword(1145)= -1;
}else{
return 0;
}}
value[0]=(anyof(298,298,-1));
if(value[0]){
value[0]=(value[HERE]==298||value[HERE]==299||value[HERE]==671);
if(value[0]){
value[1145]=120;*bitword(1145)= -1;
}else{
return 0;
}}
value[0]=(KEY(121));
if(value[0]){
p320(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
value[0]&=!(isnear(121,-1,-1));
if(value[0]){
say(76,1319,121);
 if (loop) return(0);}
say(64,2191,0);
 if (loop) return(0);}
value[0]=(KEY(127));
if(value[0]){
value[0]=(isnear(127,-1,-1));
if(value[0]){
say(64,1897,0);
 if (loop) return(0);}
say(76,1319,127);
 if (loop) return(0);}
value[0]=(isnear(136,0,5));
if(value[0]){
value[0]=(anyof(122,136,-1));
if(value[0]){
p228();
if (loop) return (0);
}}
value[0]=(KEY(122));
if(value[0]){
say(76,1319,122);
 if (loop) return(0);}
value[0]=(KEY(84));
value[0]&=(isnear(84,-1,-1));
if(value[0]){
value[0]=(value[84]>=1);
if(value[0]){
p122();
if (loop) return (0);
}
say(76,1745,84);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]&=(isnear(84,-1,-1));
value[0]&=(value[84]>=1);
if(value[0]){
p122();
if (loop) return (0);
}
value[0]=(value[1178]==1);
value[0]|=(anyof(120,899,911,-1));
if(value[0]){
value[0]=(bitest(evar(1146),17));
if(value[0]){
value[0]=(value[HERE]==298||value[HERE]==299);
if(value[0]){
set('T',1363,'c',5,NULL,NULL);
}else{value[0]=(value[HERE]==333||value[HERE]==487);
if(value[0]){
set('T',1363,'c',1,NULL,NULL);
}else{value[0]=(value[HERE]==575||value[HERE]==574);
if(value[0]){
set('T',1363,'c',3,NULL,NULL);
}else{value[0]=(value[HERE]==200);
if(value[0]){
set('T',1363,'c',2,NULL,NULL);
}else{value[0]=(value[HERE]==568||value[HERE]==566||value[HERE]==567||value[HERE]==554);
if(value[0]){
set('T',1363,'c',4,NULL,NULL);
}else{
set('T',1363,'c',0,NULL,NULL);
}}}}}
p902(0,800,-1,1363,0,0);
if (loop) return (0);
}
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
if(value[0]){
value[0]=(value[1178]==1);
value[0]&=(have(136,0,5));
if(value[0]){
p228();
if (loop) return (0);
}
value[0]=(value[1178]==1);
value[0]|=(KEY(120));
if(value[0]){
value[0]=(value[HERE]==453||value[HERE]==499);
if(value[0]){
say(64,3172,0);
 if (loop) return(0);}
value[0]=(value[HERE]==498);
if(value[0]){
p902(0,200,-1,3365,0,0);
if (loop) return (0);
}}
say(64,1559,0);
 if (loop) return(0);}
special(10,&value[1251]);
}
value[1256]=value[value[1145]];*bitword(1256)= *bitword(1145);value[0]=(value[1256]==4);
if(value[0]){
say(64,2191,0);
 if (loop) return(0);}
value[0]=(value[1145]==123||value[1145]==119||value[1145]==127||value[1145]==136);
if(!value[0]){
say(64,1315,0);
 if (loop) return(0);}
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(value[1256]==2);
if(value[0]){
say(76,2190,1145);
 if (loop) return(0);}
value[0]=(value[1145]==123);
value[0]&=(value[123]<2);
if(value[0]){
say(64,2192,0);
 if (loop) return(0);}
}else{
p39();
if (loop) return (0);
}
value[0]=(have(value[1145],-1,-1));
if(!value[0]){
say(76,2189,1145);
 if (loop) return(0);}
value[0]=(value[1145]==136);
if(value[0]){
value[0]=(value[136]==6);
value[0]|=(value[136]==1);
if(value[0]){
say(64,1361,0);
 if (loop) return(0);}
p902(0,900,-1,1366,-1,136);
if (loop) return (0);
}
value[0]=(value[1145]==119);
if(value[0]){
p902(0,600,-1,1366,-1,119);
if (loop) return (0);
}
value[0]=(value[1145]==123);
if(value[0]){
p902(0,300,-1,1840,-1,123);
if (loop) return (0);
}
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
say(64,1315,0);
 if (loop) return(0);return 0;
}
int p406(void)
{
say(64,1444,0);
 if (loop) return(0);return 0;
}
int p271(void)
{
value[0]=(isnear(92,-1,-1));
if(value[0]){
set('E',92,'c',1,NULL,NULL);
say(64,1729,0);
 if (loop) return(0);}
say(64,1919,0);
 if (loop) return(0);return 0;
}
int p701(void)
{
value[0]=(KEY(141));
if(value[0]){
(*procs[822])();
if (loop) return (0);
}
value[0]=(KEY(63));
if(value[0]){
p703();
if (loop) return (0);
}
value[0]=(KEY(173));
if(value[0]){
value[0]=(isnear(27,-1,-1));
if(value[0]){
say(76,3357,27);
 if (loop) return(0);}
value[0]=(isnear(147,-1,-1));
if(value[0]){
say(76,3357,147);
 if (loop) return(0);}
value[0]=(value[HERE]==356);
if(value[0]){
say(72,3357,936);
 if (loop) return(0);}}
value[0]=(value[HERE]==199);
value[0]&=(anyof(129,134,1018,30,74,-1));
if(value[0]){
say(32,129,0);
value[0]=(value[129]==0);
if(value[0]){
set('E',129,'c',1,NULL,NULL);
}
loop=1; return(0);
}
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(KEY(91));
if(value[0]){
value[0]=(isnear(89,0,0));
if(value[0]){
say(76,2205,1145);
 if (loop) return(0);}
value[0]=(isnear(89,0,1));
if(value[0]){
say(64,1812,0);
 if (loop) return(0);}
value[0]=(isnear(91,-1,-1));
if(value[0]){
say(64,1796,0);
 if (loop) return(0);}}
value[0]=(KEY(74));
value[0]&=!(isnear(74,-1,-1));
if(value[0]){
value[0]=(isnear(92,-1,-1));
value[0]&=(bitest(92,13));
if(value[0]){
say(64,1728,0);
 if (loop) return(0);}
value[0]=(isnear(63,0,3));
if(value[0]){
if (value[ARG1] == 74) value[ARG1]=63;
if (value[ARG2] == 74) value[ARG2]=63;
(*procs[822])();
if (loop) return (0);
}
value[0]=(value[HERE]==356);
if(value[0]){
say(76,2037,1145);
 if (loop) return(0);}}
value[0]=(KEY(133));
value[0]&=(value[HERE]==288);
if(value[0]){
say(64,1494,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
if (anyof(116,-1))say(64,1490,0);
 if (loop) return(0);if (anyof(30,-1))say(64,1491,0);
 if (loop) return(0);value[0]=(KEY(92));
if(value[0]){
bitmod('s',92,13);
say(64,1728,0);
 if (loop) return(0);}
value[0]=(KEY(1130));
value[0]&=(value[HERE]==517);
value[0]|=(KEY(74));
if(value[0]){
p702();
if (loop) return (0);
}
value[0]=(KEY(115));
if(value[0]){
p660();
if (loop) return (0);
}
if (anyof(35,-1))say(64,1492,0);
 if (loop) return(0);if (anyof(152,-1))say(64,2658,0);
 if (loop) return(0);if (anyof(123,-1))say(64,3349,0);
 if (loop) return(0);if (anyof(107,-1))say(64,3350,0);
 if (loop) return(0);value[0]=(KEY(151));
if(value[0]){
(*procs[822])();
if (loop) return (0);
}}}
value[0]=(anyof(1018,74,-1));
value[0]&=(isnear(123,-1,-1));
if(value[0]){
say(64,3349,0);
 if (loop) return(0);}
value[0]=(anyof(1018,74,938,-1));
value[0]&=(isnear(107,-1,-1));
if(value[0]){
say(64,3350,0);
 if (loop) return(0);}}
p39();
if (loop) return (0);
return 0;
}
int p409(void)
{
say(64,1567,0);
 if (loop) return(0);return 0;
}
int p139(void)
{
value[0]=(value[1178]==1);
value[0]|=(anyof(593,754,-1));
value[0]&=(587<=value[1146] && value[1146]<=592);
if(value[0]){
say(64,2312,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=(anyof(153,131,-1));
value[0]&=(value[HERE]==544);
if(value[0]){
say(72,1825,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=(anyof(153,131,974,-1));
if(value[0]){
value[0]=(519<=value[1146] && value[1146]<=544);
value[0]|=(value[HERE]==480||value[HERE]==481);
if(value[0]){
say(72,1826,0);
 if (loop) return(0);}}
value[0]=(KEY(63));
value[0]|=(value[1178]==1);
value[0]&=(isnear(63,0,1));
if(value[0]){
(*procs[806])();
if (loop) return (0);
}
value[0]=(value[1178]==1);
if(value[0]){
say(64,1506,0);
 if (loop) return(0);}
return 0;
}
int p541(void)
{
say(64,1358,0);
 if (loop) return(0);return 0;
}
int p591(void)
{
value[0]=(isnear(32,0,0));
if(value[0]){
set('E',32,'c',1,NULL,NULL);
set('E',313,'c',1,NULL,NULL);
bitmod('c',313,8);
say(64,1617,0);
 if (loop) return(0);}
say(64,1329,0);
 if (loop) return(0);return 0;
}
int p624(void)
{
value[0]=(bitest(evar(1179),8));
value[0]|=(value[1198]>5);
value[0]|=!(isnear(107,-1,-1));
if(value[0]){
bitmod('c',evar(1179),8);
value[1199]=1264;*bitword(1199)= -1;
say(64,1329,0);
 if (loop) return(0);}
bitmod('s',evar(1179),8);
say(64,1267,0);
 if (loop) return(0);return 0;
}
int p739(void)
{
value[0]=(bitest(evar(1179),8));
if(value[0]){
value[0]=(have(107,-1,-1));
if(value[0]){
say(0,1574,0);
p154();
if (loop) return (0);
}
value[0]=(value[1181]>40);
if(value[0]){
apport(107,702);
set('E',40,'c',3,NULL,NULL);
set('E',107,'c',0,NULL,NULL);
set('V',1181,'c',0,NULL,NULL);
value[0]=(irand(100)<50);
if(value[0]){
say(0,1575,0);
p487();
if (loop) return (0);
value[0]=(bitest(evar(1178),8));
if(!value[0]){
p852(0,0);
if (loop) return (0);
}
}else{
say(0,1576,0);
p154();
if (loop) return (0);
}
}else{
bitmod('s',evar(1242),8);
say(0,1577,0);
value[1181] += 300;
set('E',107,'c',1,NULL,NULL);
bitmod('s',evar(1178),8);
value[0]=(isnear(88,-1,-1));
if(value[0]){
p659();
if (loop) return (0);
}
set('V',1178,'c',1,NULL,NULL);
set('E',16,'c',0,NULL,NULL);
(*procs[822])();
if (loop) return (0);
}
}else{
say(2,1199,0);
}
loop=1; return(0);
return 0;
}
int p847(void)
{
say(64,1329,0);
 if (loop) return(0);return 0;
}
int p47(void)
{
value[0]=(isnear(63,-1,-1));
if(!value[0]){
say(64,1329,0);
 if (loop) return(0);}
value[0]=(bitest(63,14));
if(!value[0]){
say(0,3342,0);
set('T',2221,'c',1,NULL,NULL);
value[0]=(bitest(63,13));
if(value[0]){
bitmod('s',63,14);
}}
value[0]=(bitest(evar(1146),7));
if(!value[0]){
say(64,2229,0);
 if (loop) return(0);}
value[0]=(have(63,-1,-1));
if(value[0]){
say(72,2223,1);
 if (loop) return(0);}
value[0]=(value[63]==0);
if(value[0]){
say(72,2223,0);
 if (loop) return(0);}
value[0]=(bitest(63,14));
if(value[0]){
value[0]=(value[63]==1);
if(value[0]){
set('E',63,'c',3,NULL,NULL);
say(64,2222,0);
 if (loop) return(0);}
value[0]=(value[HERE]==593);
if(value[0]){
set('E',63,'c',0,NULL,NULL);
bitmod('s',evar(1218),1);
say(64,2234,0);
 if (loop) return(0);}
set('E',63,'c',1,NULL,NULL);
say(64,2224,0);
 if (loop) return(0);}else{
set('E',63,'c',0,NULL,NULL);
say(64,3341,0);
 if (loop) return(0);}
return 0;
}
int p946(void)
{
value[0]=(value[125]==0);
value[0]|=!(isnear(125,-1,-1));
if(value[0]){
say(0,1329,0);
}else{
value[0]=(have(125,-1,-1));
if(value[0]){
say(8,1814,0);
}else{
say(8,1814,1);
}
value[0]=(bitest(evar(1179),9));
if(value[0]){
say(0,1815,0);
}
apport(125,702);
apport(67,value[1146]);
bitmod('s',67,4);
}
loop=1; return(0);
return 0;
}
int p519(void)
{
p663();
if (loop) return (0);
return 0;
}
int p518(void)
{
p663();
if (loop) return (0);
return 0;
}
int p785(void)
{
p663();
if (loop) return (0);
return 0;
}
int p63(void)
{
p663();
if (loop) return (0);
return 0;
}
int p719(void)
{
value[0]=(value[1178]==1);
value[0]&=(ishere(63,0,1));
value[0]|=(KEY(63));
if(value[0]){
(*procs[806])();
if (loop) return (0);
}
value[0]=(value[1178]==1);
value[0]|=(KEY(29));
value[0]&=(isnear(29,-1,-1));
if(value[0]){
apport(29,701);
move(298,-1641); if (loop) return(0);
}
value[0]=(value[1178]==1);
value[0]|=(KEY(85));
value[0]&=(isnear(85,-1,-1));
if(value[0]){
value[0]=(value[1198]==6);
if(value[0]){
p602();
if (loop) return (0);
}
value[0]=(bitest(evar(1146),7));
if(value[0]){
say(8,1752,1);
}else{
say(8,1752,0);
}
say(0,1266,0);
finita();
loop=1; return(0);
}
return 0;
}
int p669(void)
{
bitmod('s',28,14);
value[0]=(bitest(evar(1146),7));
value[0]|=(value[1198]>5);
value[0]|=!(bitest(evar(1178),8));
if(value[0]){
say(0,1329,0);
}else{
p321(0,0);
if (loop) return (0);
value[0]=!(value[1251]==0);
value[0]|=(bitest(evar(1146),17));
value[0]|=(500<=value[1146] && value[1146]<=511);
value[0]|=(439<=value[1146] && value[1146]<=442);
value[0]|=(547<=value[1146] && value[1146]<=554);
if(value[0]){
value[0]=(irand(100)<85);
if(value[0]){
say(0,1329,0);
}else{
value[0]=(irand(100)<95);
if(value[0]){
say(0,1649,0);
p154();
if (loop) return (0);
}
say(0,1650,0);
set('V',1180,'c',41,NULL,NULL);
say(64,1651,0);
 if (loop) return(0);}
}else{
value[0]=(isnear(124,-1,-1));
value[0]|=(isnear(125,-1,-1));
if(value[0]){
value[0]=(isnear(124,-1,-1));
if(value[0]){
say(0,1654,0);
apport(124,702);
}
value[0]=(isnear(125,-1,-1));
if(value[0]){
say(0,1655,0);
apport(125,702);
}
}else{
value[0]=(isnear(193,-1,-1));
if(value[0]){
value[0]=(irand(100)<70);
if(value[0]){
value[0]=(value[193]==1);
if(value[0]){
say(0,1659,0);
}else{
say(0,1660,0);
}
p517(0,1);
if (loop) return (0);
loop=1; return(0);
}else{
value[0]=(value[193]==1);
if(value[0]){
say(0,1664,0);
}else{
say(0,1665,0);
}
p154();
if (loop) return (0);
}
}else{
say(0,1329,0);
}}}}
loop=1; return(0);
return 0;
}
int p748(void)
{
say(64,1731,0);
 if (loop) return(0);return 0;
}
int p712(void)
{
value[0]=(value[1178]>1);
if(value[0]){
(*procs[726])();
if (loop) return (0);
}
value[0]=(value[HERE]==200||value[HERE]==264||value[HERE]==333);
if(value[0]){
say(72,2049,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),15));
if(value[0]){
say(12,1987,1144);
say(8,2049,1);
set('V',1213,'v',1212,NULL,NULL);
set('V',1212,'c',0,NULL,NULL);
p65();
if (loop) return (0);
bitmod('c',evar(1257),0);
loop=1; return(0);
}
say(76,1732,1144);
 if (loop) return(0);return 0;
}
int p153(void)
{
value[0]=(KEY(81));
if(value[0]){
(*procs[822])();
if (loop) return (0);
}
say(64,1733,0);
 if (loop) return(0);return 0;
}
int p779(void)
{
say(64,1734,0);
 if (loop) return(0);return 0;
}
int p408(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(getloc(88)==702);
if(value[0]){
say(64,2011,0);
 if (loop) return(0);}
value[0]=(isnear(88,-1,-1));
if(value[0]){
say(64,1783,0);
 if (loop) return(0);}
value[0]=(isnear(22,-1,-1));
value[0]&=(value[22]>0);
value[0]|=(isnear(90,-1,-1));
value[0]|=(value[HERE]==264);
value[0]|=(isnear(21,-1,-1));
if(value[0]){
p658(0,0,0,30);
if (loop) return (0);
}
value[0]=(bitest(evar(1146),3));
value[0]|=(bitest(evar(1146),5));
value[0]|=(bitest(evar(1146),7));
value[0]|=(547<=value[1146] && value[1146]<=702);
if(value[0]){
say(64,2011,0);
 if (loop) return(0);}
lval[0]=getloc(88);lbts[0*VARSIZE]= -1;
lval[0] -= value[1146];
value[0]=(lval[0]<0);
if(value[0]){
lval[0] *= -1;
}
lval[0] -= 1;
lval[0] *= 3;
set('L',1,'l',0,lval, lbts);
lval[1] *= 2;
p658(-1,lval[0],-1,lval[1]);
if (loop) return (0);
}else{
flush_command();
say(0,1352,0);
}
loop=1; return(0);
return 0;
}
int p172(void)
{
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[0]=(have(125,-1,-1));
value[0]|=(have(124,-1,-1));
if(!value[0]){
say(72,1807,0);
 if (loop) return(0);}
value[0]=(anyof(131,154,153,974,-1));
value[0]&=(isnear(value[1145],-1,-1));
value[0]|=(KEY(974));
if(value[0]){
value[0]=(have(124,-1,-1));
if(value[0]){
say(64,1824,0);
 if (loop) return(0);}
say(64,2522,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
if(!value[0]){
p39();
if (loop) return (0);
}
value[0]=(bitest(evar(1145),8));
if(value[0]){
(*procs[783])();
if (loop) return (0);
}
value[0]=(KEY(154));
value[0]&=!(value[HERE]==558);
value[0]|=(KEY(131));
if(value[0]){
say(64,1824,0);
 if (loop) return(0);}
value[0]=(KEY(78));
value[0]&=(isnear(78,-1,-1));
if(value[0]){
say(64,1808,0);
 if (loop) return(0);}
value[0]=(KEY(139));
if(value[0]){
value[0]=(value[HERE]==443||value[HERE]==444||value[HERE]==446);
value[0]|=(isnear(140,-1,-1));
if(value[0]){
value[0]=(value[139]==0);
if(value[0]){
say(64,1809,0);
 if (loop) return(0);}
value[0]=(value[139]==1);
if(value[0]){
say(64,2208,0);
 if (loop) return(0);}
say(64,2464,0);
 if (loop) return(0);}}
value[0]=(KEY(13));
if(value[0]){
value[0]=(value[HERE]==218);
if(value[0]){
say(64,1809,0);
 if (loop) return(0);}
value[0]=(value[HERE]==215);
value[0]&=(value[13]>0);
if(value[0]){
say(64,1809,0);
 if (loop) return(0);}}
value[0]=(KEY(89));
if(value[0]){
value[0]=(value[HERE]==457);
if(value[0]){
value[0]=(value[89]==0);
if(value[0]){
say(64,1785,0);
 if (loop) return(0);}
value[0]=(value[89]==1);
if(value[0]){
apport(91,value[1146]);
set('E',89,'c',2,NULL,NULL);
say(64,1803,0);
 if (loop) return(0);}
say(64,1810,0);
 if (loop) return(0);}}
if (anyof(922,-1))say(64,1403,0);
 if (loop) return(0);return 0;
}
int p64(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
if (!KEY(93)) return 0;
value[0]=(have(93,-1,-1));
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]|=(547<=value[1146] && value[1146]<=702);
if(value[0]){
say(64,1817,0);
 if (loop) return(0);}
value[0]=(468<=value[1146] && value[1146]<=477);
if(value[0]){
set('L',0,'v',1146,lval, lbts);
lval[1]=467;lbts[1*VARSIZE]= -1;
lval[0] -= lval[1];
value[1196] += lval[0];
if (lbts[0*VARSIZE]==-1) *bitword(1196*VARSIZE)= -1;
value[0]=(value[1196]>9);
if(value[0]){
set('V',1196,'c',9,NULL,NULL);
}
value[0]=(value[1720]<2);
if(value[0]){
set('T',1720,'c',1,NULL,NULL);
}}
value[0]=(bitest(evar(1146),5));
value[0]|=(value[1196]==0);
if(value[0]){
say(64,1818,0);
 if (loop) return(0);}
value[0]=(value[193]<value[1196]);
if(value[0]){
set('L',0,'v',1196,lval, lbts);
lval[0] -= value[193];
say(8,1819,lval[0]);
apport(193,value[1146]);
set('E',193,'v',1196,NULL,NULL);
value[0]=(bitest(evar(1178),8));
if(value[0]){
bitmod('s',193,14);
say(0,193,0);
}
}else{
say(12,1837,193);
bitmod('s',193,14);
set('V',1210,'c',0,NULL,NULL);
set('V',1209,'c',100,NULL,NULL);
}
}else{
p625(*bitword(1145),value[1145]);
if (loop) return (0);
}
loop=1; return(0);
return 0;
}
int p511(void)
{
value[0]=(KEY(35));
value[0]|=(value[1178]==1);
value[0]&=(isnear(35,-1,-1));
if(value[0]){
value[0]=(bitest(40,4));
value[0]&=!(bitest(104,4));
if(value[0]){
bitmod('s',104,4);
apport(104,value[1146]);
say(64,1832,0);
 if (loop) return(0);}
say(64,1329,0);
 if (loop) return(0);}
value[0]=(value[1178]==2);
if(!value[0]){
return 0;
}
value[0]=(KEY(936));
if(value[0]){
p39();
if (loop) return (0);
}
if (anyof(1130,1131,1132,-1))say(76,3426,1145);
 if (loop) return(0);value[0]=(anyof(8,19,161,164,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,2604,0);
 if (loop) return(0);}
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(KEY(193));
value[0]&=(isnear(193,-1,-1));
if(value[0]){
value[0]=(value[1198]==6);
if(value[0]){
say(0,1845,0);
}else{
say(0,1336,0);
}
p154();
if (loop) return (0);
}}
(*procs[800])();
if (loop) return (0);
return 0;
}
int p708(void)
{
if (!KEY(40)) return 0;
value[0]=(isnear(40,-1,-1));
value[0]&=(value[40]<3);
if(value[0]){
set('V',1181,'c',400,NULL,NULL);
set('E',40,'c',3,NULL,NULL);
say(64,1834,0);
 if (loop) return(0);}
say(64,1833,0);
 if (loop) return(0);return 0;
}
int p355(void)
{
say(64,1377,0);
 if (loop) return(0);return 0;
}
int p895(void)
{
value[0]=(KEY(136));
if(value[0]){
value[0]=(isnear(136,-1,-1));
value[0]&=(value[136]>2);
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
say(76,2351,136);
 if (loop) return(0);}
value[0]=(KEY(122));
if(value[0]){
value[0]=(isnear(136,0,5));
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
value[0]=(isnear(194,-1,-1));
value[0]&=(value[194]>=5);
if(value[0]){
say(64,2279,0);
 if (loop) return(0);}}
return 0;
}
int p896(void)
{
if (anyof(1006,754,-1))say(64,3394,0);
 if (loop) return(0);p39();
if (loop) return (0);
return 0;
}
int p61(void)
{
value[0]=(value[1198]==6);
value[0]&=(bitest(112,4));
if(value[0]){
value[0]=(getloc(112)==702);
if(value[0]){
say(64,1876,0);
 if (loop) return(0);}
value[0]=(isnear(112,-1,-1));
if(value[0]){
say(0,1846,0);
p154();
if (loop) return (0);
}
value[0]=(value[HERE]==447);
if(value[0]){
say(0,1847,0);
p154();
if (loop) return (0);
}
bitmod('s',450,4);
value[1147]=449;*bitword(1147)= -1;
apport(112,702);
apport(193,702);
apport(85,value[1146]);
say(64,1848,0);
 if (loop) return(0);}
say(64,1357,0);
 if (loop) return(0);return 0;
}
int p828(void)
{
say(64,1854,0);
 if (loop) return(0);return 0;
}
int p911(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(value[1178]==1);
value[0]|=!(bitest(evar(1145),0));
if(value[0]){
return 0;
}
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
if (anyof(96,-1))say(64,1364,0);
 if (loop) return(0);value[0]=(bitest(evar(1145),16));
if(!value[0]){
say(64,1315,0);
 if (loop) return(0);}
if (anyof(55,-1))say(64,1892,0);
 if (loop) return(0);value[0]=(have(value[1145],-1,-1));
if(value[0]){
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]>1);
if(value[0]){
say(76,1893,1145);
 if (loop) return(0);}
}else{
value[0]=(value[1187]<value[1202]);
value[0]|=(bitest(evar(1145),12));
if(value[0]){
apport(value[1145],INHAND);
p670();
if (loop) return (0);
}else{
say(64,1388,0);
 if (loop) return(0);}}
value[0]=(KEY(45));
if(value[0]){
value[0]=(value[HERE]==572||value[HERE]==573);
if(value[0]){
set('E',45,'c',2,NULL,NULL);
value[0]=(bitest(45,13));
if(value[0]){
say(0,2444,0);
say(64,1266,0);
 if (loop) return(0);}
bitmod('s',45,13);
say(64,2445,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==568||value[HERE]==574);
if(value[0]){
say(64,2441,0);
 if (loop) return(0);}else{
say(64,2442,0);
 if (loop) return(0);}}}
value[0]=(KEY(95));
if(value[0]){
value[0]=(isnear(23,-1,-1));
value[0]|=(isnear(5,-1,-1));
value[0]|=(isnear(25,-1,-1));
value[0]|=(isnear(194,-1,-1));
if(value[0]){
say(64,3376,0);
 if (loop) return(0);}
value[0]=(value[1205]>0);
if(value[0]){
say(64,2273,0);
 if (loop) return(0);}}
value[value[1145]]=2;
bitmod('s',evar(1145),12);
value[0]=(KEY(46));
if(value[0]){
value[0]=(bitest(46,14));
if(value[0]){
say(64,3423,0);
 if (loop) return(0);}else{
bitmod('s',46,14);
say(64,1900,0);
 if (loop) return(0);}}
value[0]=(KEY(95));
if(value[0]){
value[1205] = irand(12-8+1)+8;
value[0]=(bitest(evar(1178),8));
if(value[0]){
bitmod('s',95,13);
say(64,2271,0);
 if (loop) return(0);}else{
say(64,2272,0);
 if (loop) return(0);}}
value[0]=(KEY(145));
if(value[0]){
lval[1] = irand(5-2+1)+2;
lval[1] += 2;
set('E',145,'l',1,lval, lbts);
value[0]=(bitest(evar(1218),2));
if(!value[0]){
bitmod('s',evar(1218),2);
say(64,2327,0);
 if (loop) return(0);}}
if (anyof(50,-1))say(64,1898,0);
 if (loop) return(0);say(64,3423,0);
 if (loop) return(0);}
return 0;
}
int p707(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(KEY(109));
value[0]&=(have(109,-1,-1));
if(value[0]){
p232();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[0]=(bitest(evar(1145),16));
if(!value[0]){
say(64,1403,0);
 if (loop) return(0);}
lval[0]=value[value[1145]];lbts[0*VARSIZE]= *bitword(1145);value[0]=(lval[0]<2);
value[0]|=!(have(value[1145],-1,-1));
if(value[0]){
say(64,1894,0);
 if (loop) return(0);}
value[0]=(value[1187]<value[1202]);
if(!value[0]){
say(76,3449,1145);
 if (loop) return(0);}
value[0]=(anyof(67,95,145,65,-1));
if(!value[0]){
bitmod('c',evar(1145),12);
}
value[0]=(KEY(95));
if(value[0]){
lval[1] = irand(5-2+1)+2;
value[1205] -= lval[1];
}
value[0]=(KEY(46));
if(value[0]){
set('L',0,'e',46,lval, lbts);
value[0]=(lval[0]>1);
if(value[0]){
set('E',46,'c',1,NULL,NULL);
value[0]=(lval[0]<9);
if(value[0]){
value[0]=(lval[0]==3);
value[0]|=(value[HERE]==311||value[HERE]==312||value[HERE]==310);
if(!value[0]){
say(64,2105,0);
 if (loop) return(0);}
}else{
value[0]=(lval[0]<12);
if(value[0]){
say(64,2106,0);
 if (loop) return(0);}
value[0]=(lval[0]<17);
if(value[0]){
say(64,2107,0);
 if (loop) return(0);}
value[0]=(lval[0]<19);
if(value[0]){
say(64,2108,0);
 if (loop) return(0);}
say(64,2109,0);
 if (loop) return(0);}}}
value[value[1145]]=1;
value[0]=(KEY(95));
value[0]&=(bitest(95,13));
if(value[0]){
say(64,2277,0);
 if (loop) return(0);}
if (anyof(145,-1))say(64,2329,0);
 if (loop) return(0);say(64,3423,0);
 if (loop) return(0);return 0;
}
int p879(void)
{
value[0]=(KEY(160));
if(value[0]){
value[0]=(isnear(160,-1,-1));
if(value[0]){
value[0]=(value[2289]==0);
if(value[0]){
say(0,2286,0);
}
p529();
if (loop) return (0);
}
p39();
if (loop) return (0);
}
value[0]=(anyof(92,55,84,56,111,-1));
value[0]&=(isnear(87,-1,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(bitest(139,4));
if(!value[0]){
if (anyof(92,-1))say(64,1360,0);
 if (loop) return(0);say(72,1902,852);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),14));
if(value[0]){
say(64,3327,0);
 if (loop) return(0);}
bitmod('s',evar(1145),14);
value[0]=(KEY(92));
if(value[0]){
say(0,3323,0);
}else{value[0]=(KEY(55));
if(value[0]){
say(0,3324,0);
}else{value[0]=(KEY(111));
if(value[0]){
say(0,3329,0);
}else{value[0]=(KEY(84));
if(value[0]){
say(0,3325,0);
}else{
say(0,3332,0);
}}}}
say(64,1266,0);
 if (loop) return(0);}
say(72,1902,852);
 if (loop) return(0);return 0;
}
int p706(void)
{
value[0]=(typed("reflecti"));
value[0]|=(typed("reflectio"));
value[0]|=(typed("reflection"));
value[0]|=(typed("reflections"));
if(value[0]){
return 0;
}
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(isnear(17,-1,-1));
if(value[0]){
value[0]=(value[HERE]==224);
if(value[0]){
value[0]=(bitest(224,5));
if(!value[0]){
bitmod('s',225,5);
}
move(225,-1);
}else{
value[0]=(bitest(225,5));
if(!value[0]){
bitmod('s',224,5);
}
move(224,-1);
}
bitmod('c',evar(1178),0);
bitmod('c',17,14);
value[0]=(getloc(193)==701);
if(!value[0]){
value[1155]=getloc(193);*bitword(1155)= -1;
value[0]=(value[1155]==value[1146]);
if(value[0]){
say(8,1571,1);
say(64,193,0);
 if (loop) return(0);}else{value[0]=(value[1155]==value[1147]);
if(value[0]){
say(76,2044,193);
 if (loop) return(0);}}}
say(72,1571,0);
 if (loop) return(0);}
value[0]=(isnear(12,-1,-1));
if(value[0]){
say(64,1905,0);
 if (loop) return(0);}
say(64,1904,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
return 0;
}
int p866(void)
{
value[0]=(KEY(866));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(value[1178]==1);
value[0]|=(KEY(193));
value[0]&=(bitest(evar(1215),0));
value[0]&=(value[1215]==1);
if(value[0]){
say(64,1908,0);
 if (loop) return(0);}
value[0]=(anyof(92,74,-1));
if(value[0]){
value[0]=(isnear(92,-1,-1));
if(value[0]){
say(64,3328,0);
 if (loop) return(0);}
return 0;
}
value[0]=(anyof(8,19,161,164,-1));
value[0]|=(value[1178]==1);
value[0]&=(value[HERE]==575||value[HERE]==472||value[HERE]==478);
if(value[0]){
say(64,1908,0);
 if (loop) return(0);}
value[0]=(value[1178]==2);
if(value[0]){
value[0]=(anyof(73,116,193,91,-1));
if(!value[0]){
p39();
if (loop) return (0);
}}
value[0]=(isnear(91,-1,-1));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(KEY(91));
if(value[0]){
say(64,1540,0);
 if (loop) return(0);}}
value[0]=(isnear(73,-1,-1));
value[0]|=(isnear(116,-1,-1));
value[0]|=(isnear(193,-1,-1));
if(value[0]){
say(64,1908,0);
 if (loop) return(0);}
say(76,1909,1144);
 if (loop) return(0);return 0;
}
int p944(void)
{
say(64,1999,0);
 if (loop) return(0);return 0;
}
int p613(void)
{
say(64,1999,0);
 if (loop) return(0);return 0;
}
int p551(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
lval[0] = irand(3);
say(72,2339,lval[0]);
 if (loop) return(0);return 0;
}
int p893(void)
{
if (anyof(930,-1))say(64,1943,0);
 if (loop) return(0);value[0]=(KEY(931));
if(value[0]){
p776();
if (loop) return (0);
}
if (anyof(759,-1))say(64,1964,0);
 if (loop) return(0);value[0]=(test("html"));
if(!value[0]){
if (anyof(733,-1))say(64,1965,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
value[0]|=(KEY(3));
if(value[0]){
say(0,1942,0);
set('V',1180,'c',35,NULL,NULL);
say(64,1431,0);
 if (loop) return(0);}
return 0;
}
int p162(void)
{
value[0]=(value[HERE]==195||value[HERE]==201||value[HERE]==202||value[HERE]==259||value[HERE]==508);
value[0]|=(value[HERE]==510||value[HERE]==511);
if(value[0]){
value[0]=(KEY(899));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,1967,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==195||value[HERE]==538||value[HERE]==197||value[HERE]==198||value[HERE]==542||value[HERE]==543);
if(value[0]){
value[0]=(KEY(538));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,2712,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==195||value[HERE]==196||value[HERE]==480||value[HERE]==481);
if(value[0]){
value[0]=(anyof(195,480,-1));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,2704,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==566||value[HERE]==567);
if(value[0]){
value[0]=(KEY(899));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,1968,0);
 if (loop) return(0);}}
default_to(0,value[HERE],8);
value[0]=(value[1178]==1);
if(value[0]){
say(64,2713,0);
 if (loop) return(0);}else{value[0]=(bitest(evar(1145),8));
if(value[0]){
if (anyof(39,-1))say(72,1463,1);
 if (loop) return(0);if (anyof(25,90,5,-1))say(76,2714,1145);
 if (loop) return(0);if (anyof(193,-1))say(76,2715,193);
 if (loop) return(0);if (anyof(109,-1))say(64,1874,0);
 if (loop) return(0);}}
p39();
if (loop) return (0);
return 0;
}
int p535(void)
{
value[0]=(anyof(855,930,931,-1));
if(value[0]){
value[0]=(KEY(855));
value[0]&=(anyof(930,931,-1));
if(value[0]){
set('V',1144,'v',1145,NULL,NULL);
}
set('V',1178,'c',1,NULL,NULL);
(*procs[855])();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(value[HERE]==215||value[HERE]==218);
value[0]&=(value[13]<2);
if(value[0]){
value[0]=(value[HERE]==218);
value[0]|=(value[13]==1);
if(value[0]){
say(76,1447,13);
 if (loop) return(0);}}
value[0]=(value[HERE]==217||value[HERE]==216);
value[0]&=(value[13]==1);
if(value[0]){
say(72,1447,2);
 if (loop) return(0);}
value[0]=(value[HERE]==442||value[HERE]==441||value[HERE]==440);
value[0]&=(value[139]==1);
if(value[0]){
say(72,1448,2);
 if (loop) return(0);}
value[0]=(value[HERE]==443);
value[0]&=(value[139]<2);
if(value[0]){
say(76,1448,139);
 if (loop) return(0);}
value[0]=(value[HERE]==477);
if(value[0]){
say(64,2627,0);
 if (loop) return(0);}
value[0]=(value[HERE]==447);
if(value[0]){
say(64,3193,0);
 if (loop) return(0);}
value[0]=(value[HERE]==311||value[HERE]==312||value[HERE]==451||value[HERE]==650);
if(value[0]){
say(64,1972,0);
 if (loop) return(0);}
value[0]=(have(46,-1,-1));
value[0]&=(value[46]>2);
if(value[0]){
value[0]=(bitest(46,13));
if(!value[0]){
value[46] += 1;
}
value[0]=(value[46]<9);
if(value[0]){
say(64,2110,0);
 if (loop) return(0);}
say(64,2111,0);
 if (loop) return(0);}
value[0]=(isnear(193,-1,-1));
value[0]|=(isnear(130,-1,-1));
value[0]|=(value[18]>0);
if(value[0]){
say(64,1977,0);
 if (loop) return(0);}
value[0]=(ishere(109,-1,-1));
if(value[0]){
say(76,1970,109);
 if (loop) return(0);}
value[0]=(isnear(125,-1,-1));
if(value[0]){
say(76,1970,125);
 if (loop) return(0);}
value[0]=(value[HERE]==309||value[HERE]==308||value[HERE]==310||value[HERE]==358||value[HERE]==464);
if(value[0]){
value[0]=(bitest(311,4));
if(value[0]){
value[0]=(value[HERE]==310);
if(value[0]){
say(72,2926,0);
 if (loop) return(0);}
say(72,2926,1);
 if (loop) return(0);}else{
say(64,1971,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==515||value[HERE]==386);
if(value[0]){
say(64,1971,0);
 if (loop) return(0);}
value[0]=(value[HERE]==289||value[HERE]==298);
if(value[0]){
say(72,2136,0);
 if (loop) return(0);}
value[0]=(value[HERE]==574||value[HERE]==575);
if(value[0]){
say(72,2136,1);
 if (loop) return(0);}
value[0]=(value[HERE]==573);
if(value[0]){
say(72,2136,2);
 if (loop) return(0);}
value[0]=(bitest(20,13));
value[0]&=!(bitest(evar(1146),7));
value[0]&=!(547<=value[1146] && value[1146]<=702);
value[0]&=!(bitest(evar(1146),3));
if(value[0]){
say(64,1418,0);
 if (loop) return(0);}
value[0]=(value[HERE]==618);
if(value[0]){
say(64,1973,0);
 if (loop) return(0);}
value[0]=(value[HERE]==619);
if(value[0]){
say(64,1974,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),15));
if(value[0]){
say(64,1975,0);
 if (loop) return(0);}
value[0]=(587<=value[1146] && value[1146]<=627);
if(value[0]){
say(64,1976,0);
 if (loop) return(0);}
value[0]=(547<=value[1146] && value[1146]<=553);
value[0]|=(439<=value[1146] && value[1146]<=442);
if(value[0]){
say(0,1979,0);
value[0]=(bitest(evar(1218),0));
if(value[0]){
say(64,1266,0);
 if (loop) return(0);}else{
bitmod('s',evar(1218),0);
say(64,1980,0);
 if (loop) return(0);}}
value[0]=(value[HERE]==554);
if(value[0]){
say(64,1981,0);
 if (loop) return(0);}
value[0]=(value[HERE]==635||value[HERE]==636);
if(value[0]){
say(72,2552,1);
 if (loop) return(0);}
value[0]=(value[HERE]==632||value[HERE]==631);
if(value[0]){
say(72,2552,0);
 if (loop) return(0);}
value[0]=(value[HERE]==630||value[HERE]==633);
if(value[0]){
say(72,2553,0);
 if (loop) return(0);}
value[0]=(value[HERE]==629||value[HERE]==634);
if(value[0]){
say(72,2553,1);
 if (loop) return(0);}
value[0]=(value[HERE]==572||value[HERE]==573||value[HERE]==568);
if(value[0]){
say(64,2551,0);
 if (loop) return(0);}
value[0]=(value[HERE]==574||value[HERE]==575);
if(value[0]){
say(64,2550,0);
 if (loop) return(0);}
value[0]=(value[HERE]==586);
if(value[0]){
say(64,2549,0);
 if (loop) return(0);}
value[0]=(value[HERE]==638);
if(value[0]){
say(72,2548,0);
 if (loop) return(0);}
value[0]=(value[HERE]==637);
if(value[0]){
say(72,2548,1);
 if (loop) return(0);}
value[0]=(value[HERE]==386);
if(value[0]){
say(64,2013,0);
 if (loop) return(0);}
value[0]=(value[HERE]==313);
if(value[0]){
say(72,2926,0);
 if (loop) return(0);}
value[0]=(value[HERE]==324);
value[0]&=(value[26]<2);
if(value[0]){
say(72,2926,2);
 if (loop) return(0);}
value[0]=(value[HERE]==314||value[HERE]==354||value[HERE]==324);
if(value[0]){
say(72,2926,1);
 if (loop) return(0);}
value[0]=(value[HERE]==318);
if(value[0]){
say(76,3202,318);
 if (loop) return(0);}
value[0]=(value[HERE]==334);
if(value[0]){
say(64,3138,0);
 if (loop) return(0);}
value[0]=(value[HERE]==671);
if(value[0]){
say(64,2892,0);
 if (loop) return(0);}
value[0]=(value[HERE]==453);
if(value[0]){
say(0,3252,0);
say(64,1266,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
say(64,1978,0);
 if (loop) return(0);}
say(64,1969,0);
 if (loop) return(0);return 0;
}
int p787(void)
{
say(64,2010,0);
 if (loop) return(0);return 0;
}
int p900(void)
{
value[0]=(value[1178]>1);
value[0]&=!(KEY(1006));
if(value[0]){
value[0]=(bitest(evar(1145),3));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(!value[0]){
p39();
if (loop) return (0);
}
value[0]=(KEY(136));
if(value[0]){
value[0]=(value[136]==1);
if(value[0]){
value[0]=(value[HERE]==200);
if(value[0]){
say(64,2258,0);
 if (loop) return(0);}
value[0]=(439<=value[1146] && value[1146]<=442);
if(value[0]){
say(64,3335,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),17));
value[0]|=(547<=value[1146] && value[1146]<=554);
if(value[0]){
set('E',136,'c',2,NULL,NULL);
say(64,2262,0);
 if (loop) return(0);}
}else{
say(64,2260,0);
 if (loop) return(0);}}
value[0]=(bitest(evar(1146),17));
if(value[0]){
value[0]=(value[HERE]==511||value[HERE]==510);
value[0]&=(bitest(94,14));
if(value[0]){
say(64,2158,0);
 if (loop) return(0);}
value[0]=(KEY(132));
value[0]&=(value[132]==2);
if(value[0]){
say(64,2157,0);
 if (loop) return(0);}
value[0]=(KEY(63));
if(value[0]){
value[0]=(bitest(63,5));
if(value[0]){
say(72,2573,1);
 if (loop) return(0);}else{
say(72,2572,0);
 if (loop) return(0);}}
value[0]=(KEY(111));
if(value[0]){
say(64,3374,0);
 if (loop) return(0);}
say(64,2156,0);
 if (loop) return(0);}
p756();
if (loop) return (0);
say(72,2151,1);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
value[0]=(value[HERE]==510||value[HERE]==511);
value[0]&=(bitest(94,14));
if(value[0]){
bitmod('c',94,14);
bitmod('s',evar(1217),7);
bitmod('c',evar(1217),6);
bitmod('s',510,8);
bitmod('s',511,8);
set('E',511,'c',0,NULL,NULL);
value[0]=(isnear(132,-1,-1));
if(value[0]){
set('E',132,'c',1,NULL,NULL);
}
say(64,2147,0);
 if (loop) return(0);}
value[0]=(502<=value[1146] && value[1146]<=509);
if(value[0]){
say(64,2148,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),17));
if(value[0]){
value[0]=(566<=value[1146] && value[1146]<=568);
value[0]|=(572<=value[1146] && value[1146]<=573);
if(value[0]){
say(72,2149,1);
 if (loop) return(0);}
say(72,2149,0);
 if (loop) return(0);}
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
say(64,2150,0);
 if (loop) return(0);}
p756();
if (loop) return (0);
say(72,2151,0);
 if (loop) return(0);return 0;
}
int p821(void)
{
say(64,2164,0);
 if (loop) return(0);return 0;
}
int p332(void)
{
value[0]=(519<=value[1146] && value[1146]<=544);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),7));
value[0]&=!(547<=value[1146] && value[1146]<=702);
if(value[0]){
say(76,2166,1144);
 if (loop) return(0);}
say(76,2167,1144);
 if (loop) return(0);return 0;
}
int p214(void)
{
value[0]=(bitest(evar(1146),7));
if(value[0]){
say(64,2171,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1217),5));
if(value[0]){
say(64,2174,0);
 if (loop) return(0);}
set('V',1180,'c',25,NULL,NULL);
say(64,2172,0);
 if (loop) return(0);return 0;
}
int p730(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(value[1178]==1);
value[0]|=(KEY(63));
value[0]&=(isnear(63,-1,-1));
if(value[0]){
value[0]=(value[63]==0);
if(value[0]){
say(72,2176,0);
 if (loop) return(0);}
set('L',0,'e',63,lval, lbts);
set('E',63,'c',0,NULL,NULL);
value[0]=(lval[0]==1);
if(value[0]){
say(64,2179,0);
 if (loop) return(0);}
say(72,2177,0);
 if (loop) return(0);}
return 0;
}
int p874(void)
{
value[0]=(value[1178]==1);
value[0]|=(KEY(63));
value[0]&=(isnear(63,-1,-1));
if(value[0]){
value[0]=(value[63]>0);
if(value[0]){
say(72,2176,2);
 if (loop) return(0);}
value[0]=(have(63,-1,-1));
if(value[0]){
say(64,2180,0);
 if (loop) return(0);}
value[0]=(value[HERE]==571);
if(value[0]){
say(72,2655,0);
 if (loop) return(0);}
value[0]=(572<=value[1146] && value[1146]<=575);
if(value[0]){
say(72,2655,1);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),14));
if(value[0]){
say(64,2178,0);
 if (loop) return(0);}
value[0]=(value[HERE]==593);
value[0]&=(bitest(evar(1218),1));
if(value[0]){
say(64,2236,0);
 if (loop) return(0);}
value[0]=(bitest(63,13));
if(value[0]){
set('E',63,'c',3,NULL,NULL);
}else{
set('E',63,'c',2,NULL,NULL);
}
value[0]=(value[HERE]==593);
if(value[0]){
say(64,2235,0);
 if (loop) return(0);}
value[0]=(value[HERE]==618);
if(value[0]){
apport(63,619);
say(64,2237,0);
 if (loop) return(0);}
say(8,2177,2);
value[0]=(value[HERE]==432);
value[0]&=!(bitest(433,4));
if(value[0]){
glue_text();
say(0,3368,0);
loop=1; return(0);
}
loop=1; return(0);
}
return 0;
}
int p124(void)
{
value[0]=(362<=value[1146] && value[1146]<=373);
if(value[0]){
say(64,2201,0);
 if (loop) return(0);}
value[0]=(value[252]==0);
if(value[0]){
value[0]=(227<=value[1146] && value[1146]<=252);
if(value[0]){
say(8,2195,10);
set('V',1180,'c',32,NULL,NULL);
say(64,2196,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),10));
if(value[0]){
say(64,2202,0);
 if (loop) return(0);}
say(64,2198,0);
 if (loop) return(0);}
value[0]=(227<=value[1146] && value[1146]<=252);
value[0]&=!(bitest(251,4));
value[0]&=!(bitest(evar(1217),8));
if(value[0]){
value[0]=(bitest(252,4));
if(value[0]){
say(64,2203,0);
 if (loop) return(0);bitmod('s',evar(1217),8);
}else{
say(64,2204,0);
 if (loop) return(0);}}
value[0]=(bitest(evar(1146),10));
if(value[0]){
say(64,2202,0);
 if (loop) return(0);}
say(64,2199,0);
 if (loop) return(0);return 0;
}
int p471(void)
{
say(64,3239,0);
 if (loop) return(0);return 0;
}
int p385(void)
{
if (!KEY(138)) return 0;
value[0]=(have(138,-1,-1));
value[0]&=(isnear(109,-1,-1));
if(value[0]){
p305();
if (loop) return (0);
}
return 0;
}
int p386(void)
{
if (!KEY(118)) return 0;
value[0]=(isnear(85,-1,-1));
value[0]&=(have(118,-1,-1));
if(value[0]){
p306();
if (loop) return (0);
}
return 0;
}
int p387(void)
{
if (!KEY(87)) return 0;
value[0]=(have(136,0,6));
if(value[0]){
value[0]=(value[HERE]==443);
if(value[0]){
p304();
if (loop) return (0);
}
say(64,2352,0);
 if (loop) return(0);}
p625(-1,87);
if (loop) return (0);
return 0;
}
int p388(void)
{
value[0]=(KEY(754));
if(value[0]){
(*procs[823])();
if (loop) return (0);
}
value[0]=(KEY(1043));
if(value[0]){
value[0]=(isnear(5,-1,-1));
if(value[0]){
say(72,3470,1);
 if (loop) return(0);}else{
say(72,3470,0);
 if (loop) return(0);}}
set('V',1251,'c',0,NULL,NULL);
value[0]=(KEY(136));
value[0]&=(value[HERE]==199);
value[0]&=(ishere(194,-1,-1));
if(value[0]){
bitmod('s',194,15);
p383(0,1);
if (loop) return (0);
loop=1; return(0);
}
value[0]=(KEY(790));
if(value[0]){
value[0]=(have(136,0,5));
value[0]|=(have(136,0,3));
value[0]|=(have(136,0,7));
value[0]|=(have(136,0,8));
value[0]|=(have(136,0,9));
if(value[0]){
value[1145]=136;*bitword(1145)= -1;
}else{value[0]=(have(119,0,5));
value[0]|=(have(119,0,3));
if(value[0]){
value[1145]=119;*bitword(1145)= -1;
}else{value[0]=(have(123,0,5));
value[0]|=(have(123,0,3));
if(value[0]){
value[1145]=123;*bitword(1145)= -1;
}else{
say(72,1513,790);
 if (loop) return(0);}}}
}else{value[0]=(KEY(122));
if(value[0]){
value[0]=(have(136,0,5));
if(value[0]){
value[1145]=136;*bitword(1145)= -1;
}else{value[0]=(have(119,0,5));
if(value[0]){
value[1145]=119;*bitword(1145)= -1;
}else{value[0]=(have(123,0,5));
if(value[0]){
value[1145]=123;*bitword(1145)= -1;
}else{
say(76,1513,122);
 if (loop) return(0);}}}
}else{value[0]=(KEY(120));
if(value[0]){
value[0]=(isnear(5,-1,-1));
if(value[0]){
p883();
if (loop) return (0);
}
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
set('V',1145,'v',1251,NULL,NULL);
}else{
say(76,1513,120);
 if (loop) return(0);}}}}
set('V',1153,'c',0,NULL,NULL);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(ishere(value[1154],1,8));
if(value[0]){
value[0]=(value[1154]==5);
if(value[0]){
p883();
if (loop) return (0);
}else{
set('V',1153,'v',1154,NULL,NULL);
}}}
value[0]=(value[1153]==0);
if(value[0]){
say(64,2352,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
return 0;
}
value[0]=(have(value[1145],-1,-1));
if(!value[0]){
say(76,1513,1145);
 if (loop) return(0);}
value[0]=(value[1153]==23||value[1153]==193||value[1153]==25||value[1153]==130);
if(value[0]){
say(72,2340,1);
 if (loop) return(0);}
value[0]=(value[1153]==18||value[1153]==39||value[1153]==90||value[1153]==94);
if(value[0]){
say(72,2340,0);
 if (loop) return(0);}
value[0]=(value[1153]==9);
if(value[0]){
value[0]=(value[1145]==109);
if(value[0]){
p945();
if (loop) return (0);
say(64,1397,0);
 if (loop) return(0);}
say(76,1398,9);
 if (loop) return(0);}
value[0]=(value[1153]==21||value[1153]==114||value[1153]==115||value[1153]==109||value[1153]==28||value[1153]==29||value[1153]==85||value[1153]==194);
if(value[0]){
say(12,2036,1153);
say(76,2353,1145);
 if (loop) return(0);}
return 0;
}
int p128(void)
{
value[0]=(value[1178]==1);
value[0]&=(isnear(153,-1,-1));
if(value[0]){
bitmod('s',evar(1178),5);
say(64,2608,0);
 if (loop) return(0);}
value[0]=(value[HERE]==262||value[HERE]==263);
value[0]&=(KEY(78));
if(value[0]){
say(64,1709,0);
 if (loop) return(0);}
value[0]=(KEY(139));
if(value[0]){
value[0]=(isnear(139,-1,-1));
value[0]|=(isnear(13,-1,-1));
value[0]|=(value[HERE]==444||value[HERE]==446);
if(value[0]){
say(64,2324,0);
 if (loop) return(0);}
value[0]=(isnear(14,-1,-1));
value[0]|=(isnear(140,-1,-1));
if(value[0]){
say(72,2160,0);
 if (loop) return(0);}}
value[0]=(have(145,-1,-1));
value[0]&=(value[145]>1);
if(value[0]){
value[0]=(KEY(131));
value[0]&=(519<=value[1146] && value[1146]<=544);
if(value[0]){
say(64,2325,0);
 if (loop) return(0);}
value[0]=(KEY(154));
value[0]&=(547<=value[1146] && value[1146]<=553);
if(value[0]){
say(64,2325,0);
 if (loop) return(0);}
value[0]=(KEY(153));
value[0]&=(isnear(153,0,0));
if(value[0]){
set('E',153,'c',1,NULL,NULL);
set('E',559,'c',1,NULL,NULL);
bitmod('s',153,6);
bitmod('c',145,12);
bitmod('c',evar(1146),8);
set('E',145,'c',1,NULL,NULL);
say(64,2330,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),8));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,2326,0);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);}else{
value[0]=(KEY(153));
value[0]&=(isnear(153,-1,-1));
if(value[0]){
say(64,2521,0);
 if (loop) return(0);}}
value[0]=(KEY(789));
if(value[0]){
(*procs[788])();
if (loop) return (0);
}
return 0;
}
int p58(void)
{
value[0]=(519<=value[1146] && value[1146]<=544);
if(value[0]){
say(64,2374,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
return 0;
}
int p160(void)
{
value[0]=(value[HERE]==632||value[HERE]==631);
if(value[0]){
say(64,2387,0);
 if (loop) return(0);}
say(64,2384,0);
 if (loop) return(0);return 0;
}
int p249(void)
{
value[0]=(value[1262]==0);
if(value[0]){
say(0,2455,0);
set('V',1262,'c',1,NULL,NULL);
loop=1; return(0);
}else{
say(72,2457,1);
 if (loop) return(0);}
return 0;
}
int p270(void)
{
value[0]=(value[1262]==0);
if(value[0]){
say(72,2457,0);
 if (loop) return(0);}else{
set('V',1262,'c',0,NULL,NULL);
say(64,2456,0);
 if (loop) return(0);}
return 0;
}
int p693(void)
{
value[0]=(KEY(109));
value[0]&=(isnear(108,-1,-1));
if(value[0]){
(*procs[765])();
if (loop) return (0);
}
value[0]=(KEY(51));
value[0]&=(isnear(35,-1,-1));
if(value[0]){
(*procs[766])();
if (loop) return (0);
}
value[0]=(anyof(119,123,136,120,-1));
value[0]&=(bitest(evar(1146),17));
if(value[0]){
value[0]=(KEY(120));
if(value[0]){
value[0]=(have(119,-1,-1));
if(value[0]){
say(76,3321,119);
 if (loop) return(0);}
value[0]=(have(136,-1,-1));
if(value[0]){
say(76,3321,136);
 if (loop) return(0);}
value[0]=(have(123,-1,-1));
if(value[0]){
say(76,3321,123);
 if (loop) return(0);}}
say(76,3321,1145);
 if (loop) return(0);}
say(76,2413,1144);
 if (loop) return(0);return 0;
}
int p34(void)
{
say(76,2448,1144);
 if (loop) return(0);return 0;
}
int p509(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
value[0]=(test("html"));
if(value[0]){
verbatim(1144);
say(76,1349,1144);
 if (loop) return(0);}
value[0]=(KEY(778));
if(value[0]){
set('L',0,'c',0,lval, lbts);
}else{value[0]=(KEY(777));
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{value[0]=(value[1178]==1);
if(value[0]){
set('L',0,'c',2,lval, lbts);
}else{
say(64,1403,0);
 if (loop) return(0);}}}
special(19,&lval[0]);
set('L',1,'l',0,lval, lbts);
say(72,3233,lval[1]);
 if (loop) return(0);return 0;
}
int p527(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(test("html"));
if(value[0]){
verbatim(1144);
say(76,1349,1144);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
say(76,3236,1144);
 if (loop) return(0);}
special(20,&lval[0]);
value[0]=(lval[0]>0);
if(value[0]){
say(12,3234,1144);
say(72,3235,lval[0]);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);return 0;
}
int p548(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(test("html"));
if(value[0]){
verbatim(1144);
say(76,1349,1144);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
say(76,3236,1144);
 if (loop) return(0);}
special(21,&lval[0]);
say(12,3234,1144);
say(72,3235,lval[0]);
 if (loop) return(0);return 0;
}
int p752(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(test("html"));
if(value[0]){
verbatim(1144);
say(76,1349,1144);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
say(64,3237,0);
 if (loop) return(0);}
special(22,&lval[0]);
value[0]=(lval[0]>0);
if(value[0]){
say(72,3238,lval[0]);
 if (loop) return(0);}
say(64,1403,0);
 if (loop) return(0);return 0;
}
int p390(void)
{
say(72,1806,0);
 if (loop) return(0);return 0;
}
int p834(void)
{
say(64,2543,0);
 if (loop) return(0);return 0;
}
int p484(void)
{
p221();
if (loop) return (0);
return 0;
}
int p686(void)
{
value[0]=(value[1178]==1);
if(value[0]){
say(72,2487,0);
 if (loop) return(0);}
value[0]=(have(value[1145],-1,-1));
if(!value[0]){
p625(*bitword(1145),value[1145]);
if (loop) return (0);
}
if (anyof(110,-1))say(64,2488,0);
 if (loop) return(0);say(72,2487,1);
 if (loop) return(0);return 0;
}
int p691(void)
{
value[0]=(KEY(125));
value[0]&=(value[125]==0);
if(value[0]){
p381();
if (loop) return (0);
}
default_to(0,value[HERE],9);
value[0]=(KEY(162));
if(value[0]){
value[0]=(value[162]==0);
if(value[0]){
value[0]=(value[HERE]==475);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
say(76,2505,162);
 if (loop) return(0);}
say(76,2492,162);
 if (loop) return(0);}
value[0]=(KEY(98));
value[0]&=(isnear(98,-1,-1));
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
value[0]=(KEY(6));
value[0]&=(isnear(6,-1,-1));
if(value[0]){
value[0]=(value[6]==1);
if(value[0]){
say(76,1605,6);
 if (loop) return(0);}
value[0]=(value[HERE]==203);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
say(76,2505,6);
 if (loop) return(0);}
value[0]=(KEY(19));
value[0]&=(isnear(19,-1,-1));
if(value[0]){
value[0]=(value[575]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
value[0]=(value[HERE]==577);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
say(76,2505,8);
 if (loop) return(0);}
value[0]=(KEY(161));
value[0]&=(isnear(161,-1,-1));
if(value[0]){
value[0]=(value[HERE]==473);
if(value[0]){
value[0]=(value[161]==0);
if(value[0]){
say(64,1895,0);
 if (loop) return(0);}
value[0]=(value[161]==2);
if(value[0]){
set('E',161,'c',1,NULL,NULL);
set('E',472,'c',1,NULL,NULL);
}
say(76,1605,8);
 if (loop) return(0);}else{
value[0]=(value[161]==0);
if(value[0]){
say(64,1895,0);
 if (loop) return(0);}
p146();
if (loop) return (0);
}}
value[0]=(KEY(164));
value[0]&=(isnear(164,-1,-1));
if(value[0]){
value[0]=(value[1198]==5);
if(value[0]){
say(64,2504,0);
 if (loop) return(0);}
value[0]=(value[HERE]==479);
if(value[0]){
value[0]=(value[164]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
set('E',164,'c',1,NULL,NULL);
set('E',479,'c',1,NULL,NULL);
set('E',478,'c',1,NULL,NULL);
say(72,2611,1);
 if (loop) return(0);}
value[0]=(value[164]==0);
if(value[0]){
say(76,2505,8);
 if (loop) return(0);}
set('E',164,'c',0,NULL,NULL);
set('E',479,'c',0,NULL,NULL);
set('E',478,'c',0,NULL,NULL);
say(72,2611,0);
 if (loop) return(0);}
value[0]=(value[1178]==2);
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(bitest(evar(1145),3));
if(value[0]){
value[0]=(KEY(125));
value[0]&=(ishere(125,0,0));
if(value[0]){
say(64,1579,0);
 if (loop) return(0);}
say(76,2494,1145);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),8));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
if (anyof(13,139,-1))say(76,1408,1145);
 if (loop) return(0);value[0]=(KEY(4));
value[0]&=(value[4]>0);
if(value[0]){
say(64,2335,0);
 if (loop) return(0);}
say(76,2492,1145);
 if (loop) return(0);}
return 0;
}
int p692(void)
{
default_to(0,value[HERE],9);
value[0]=(KEY(162));
if(value[0]){
value[0]=(value[HERE]==474);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
value[0]=(value[HERE]==475);
if(value[0]){
value[0]=(value[162]==1);
if(value[0]){
say(76,2493,162);
 if (loop) return(0);}
say(76,2505,162);
 if (loop) return(0);}}
value[0]=(KEY(98));
value[0]&=(isnear(98,-1,-1));
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
value[0]=(KEY(6));
value[0]&=(isnear(6,-1,-1));
if(value[0]){
value[0]=(value[6]==1);
if(value[0]){
say(76,1605,6);
 if (loop) return(0);}
value[0]=(value[HERE]==204);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
say(76,2505,6);
 if (loop) return(0);}
value[0]=(KEY(19));
value[0]&=(isnear(19,-1,-1));
if(value[0]){
value[0]=(value[575]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
value[0]=(value[HERE]==575);
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
say(76,2505,8);
 if (loop) return(0);}
value[0]=(KEY(161));
value[0]&=(isnear(161,-1,-1));
if(value[0]){
value[0]=(value[HERE]==473);
if(value[0]){
value[0]=(value[161]==2);
if(value[0]){
p146();
if (loop) return (0);
}
value[0]=(value[161]==1);
if(value[0]){
say(76,2493,8);
 if (loop) return(0);}
say(76,2505,8);
 if (loop) return(0);}else{
value[0]=(value[161]==2);
if(value[0]){
set('E',161,'c',1,NULL,NULL);
set('E',472,'c',1,NULL,NULL);
say(64,2513,0);
 if (loop) return(0);}
value[0]=(value[161]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
say(64,1895,0);
 if (loop) return(0);}}
value[0]=(KEY(164));
value[0]&=(isnear(164,-1,-1));
if(value[0]){
value[0]=(value[1198]==5);
if(value[0]){
say(64,2504,0);
 if (loop) return(0);}
value[0]=(value[HERE]==478);
if(value[0]){
value[0]=(value[164]==1);
if(value[0]){
say(76,1605,8);
 if (loop) return(0);}
set('E',164,'c',1,NULL,NULL);
set('E',479,'c',1,NULL,NULL);
set('E',478,'c',1,NULL,NULL);
say(72,2611,1);
 if (loop) return(0);}
value[0]=(value[164]==0);
if(value[0]){
say(76,2505,8);
 if (loop) return(0);}
set('E',164,'c',0,NULL,NULL);
set('E',479,'c',0,NULL,NULL);
set('E',478,'c',0,NULL,NULL);
say(72,2611,0);
 if (loop) return(0);}
value[0]=(value[1178]==2);
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(bitest(evar(1145),8));
value[0]&=!(anyof(115,114,-1));
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
value[0]=(KEY(4));
value[0]&=(value[4]>0);
if(value[0]){
say(64,2335,0);
 if (loop) return(0);}
say(76,2493,1145);
 if (loop) return(0);}
return 0;
}
int p886(void)
{
say(64,1943,0);
 if (loop) return(0);return 0;
}
int p627(void)
{
p776();
if (loop) return (0);
return 0;
}
int p689(void)
{
value[0]=(isnear(19,-1,-1));
value[0]&=(value[575]==0);
if(value[0]){
set('E',575,'c',1,NULL,NULL);
set('E',577,'c',1,NULL,NULL);
say(8,2501,873);
say(64,2502,0);
 if (loop) return(0);}
say(72,1350,873);
 if (loop) return(0);return 0;
}
int p520(void)
{
value[0]=(value[1178]==1);
value[0]|=(KEY(160));
if(value[0]){
value[0]=(isnear(160,-1,-1));
if(value[0]){
p529();
if (loop) return (0);
}}
value[0]=(value[1178]==1);
value[0]|=(anyof(8,19,161,164,-1));
if(value[0]){
value[0]=(isnear(8,0,0));
value[0]|=(isnear(19,0,0));
value[0]|=(isnear(161,0,0));
value[0]|=(isnear(164,0,0));
if(value[0]){
value[0]=(value[HERE]==472);
value[0]&=(value[163]<=1);
if(value[0]){
value[0]=(value[2510]==2);
if(value[0]){
say(0,2511,0);
value[0]=(value[2511]==1);
if(value[0]){
loop=1; return(0);
}else{
set('T',2510,'c',0,NULL,NULL);
say(0,2102,0);
p154();
if (loop) return (0);
}}}
say(64,2510,0);
 if (loop) return(0);}
value[0]=(isnear(8,-1,-1));
value[0]|=(isnear(19,-1,-1));
value[0]|=(isnear(161,-1,-1));
value[0]|=(isnear(164,-1,-1));
if(value[0]){
say(64,2287,0);
 if (loop) return(0);}
p39();
if (loop) return (0);
}
return 0;
}
int p630(void)
{
(*procs[765])();
if (loop) return (0);
return 0;
}
int p216(void)
{
say(64,2464,0);
 if (loop) return(0);return 0;
}
int p273(void)
{
say(64,1403,0);
 if (loop) return(0);return 0;
}
int p714(void)
{
value[0]=(value[1178]==1);
if(value[0]){
say(76,2579,1144);
 if (loop) return(0);}
value[0]=(value[1198]<3);
if(value[0]){
say(64,2318,0);
 if (loop) return(0);}
(*procs[726])();
if (loop) return (0);
return 0;
}
int p682(void)
{
flush_command();
say(64,1352,0);
 if (loop) return(0);return 0;
}
int p684(void)
{
value[0]=(value[1198]<3);
if(value[0]){
say(64,1352,0);
 if (loop) return(0);}
say(64,2583,0);
 if (loop) return(0);return 0;
}
int p156(void)
{
say(64,2586,0);
 if (loop) return(0);return 0;
}
int p635(void)
{
say(64,2599,0);
 if (loop) return(0);return 0;
}
int p608(void)
{
(*procs[730])();
if (loop) return (0);
return 0;
}
int p930(void)
{
say(64,1759,0);
 if (loop) return(0);return 0;
}
int p927(void)
{
value[0]=(value[1178]==1);
if(value[0]){
say(64,1715,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),1));
value[0]&=(value[HERE]==value[1145]);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1145),0));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(have(value[1145],-1,-1));
if(value[0]){
say(76,1314,1145);
 if (loop) return(0);}
say(64,1715,0);
 if (loop) return(0);}
say(64,1759,0);
 if (loop) return(0);return 0;
}
int p60(void)
{
value[0]=(value[HERE]==575||value[HERE]==576);
value[0]&=(value[575]==1);
if(value[0]){
p147();
if (loop) return (0);
loop=1; return(0);
}
return 0;
}
int p161(void)
{
say(64,1881,0);
 if (loop) return(0);return 0;
}
int p833(void)
{
say(8,1883,0);
say(8,1883,1);
loop=1; return(0);
return 0;
}
int p661(void)
{
value[0]=(KEY(138));
value[0]|=(value[1178]==1);
value[0]&=(bitest(138,13));
if(value[0]){
say(72,1343,0);
 if (loop) return(0);}
value[0]=(isnear(151,-1,-1));
if(value[0]){
say(76,1343,1178);
 if (loop) return(0);}
value[0]=(isnear(87,-1,-1));
value[0]|=(isnear(136,0,6));
if(value[0]){
say(72,3340,0);
 if (loop) return(0);}
say(72,3340,1);
 if (loop) return(0);return 0;
}
int p829(void)
{
value[0]=(KEY(151));
value[0]&=(have(151,-1,-1));
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
value[0]=(value[1178]==2);
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
return 0;
}
int p798(void)
{
value[0]=(KEY(138));
if(value[0]){
(*procs[793])();
if (loop) return (0);
}
value[0]=(KEY(151));
if(value[0]){
(*procs[767])();
if (loop) return (0);
}
value[0]=(anyof(120,121,122,87,119,123,136,-1));
if(value[0]){
(*procs[787])();
if (loop) return (0);
}
return 0;
}
int p292(void)
{
value[0]=(value[HERE]==302);
if(value[0]){
say(64,2017,0);
 if (loop) return(0);}
say(64,2016,0);
 if (loop) return(0);return 0;
}
int p132(void)
{
value[0]=(anyof(63,45,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
if (anyof(45,-1))say(64,2826,0);
 if (loop) return(0);if (anyof(63,-1))say(64,1301,0);
 if (loop) return(0);}
(*procs[792])();
if (loop) return (0);
return 0;
}
int p901(void)
{
if (!KEY(138)) return 0;
value[0]=(ishere(137,-1,-1));
value[0]|=(have(138,-1,-1));
value[0]|=(bitest(138,13));
if(value[0]){
say(64,2739,0);
 if (loop) return(0);}
return 0;
}
int p677(void)
{
value[0]=(KEY(126));
if(value[0]){
(*procs[793])();
if (loop) return (0);
}
value[0]=(KEY(138));
if(value[0]){
(*procs[120])();
if (loop) return (0);
}
value[0]=(value[1178]>1);
if(value[0]){
say(64,2740,0);
 if (loop) return(0);}
return 0;
}
int p881(void)
{
value[0]=(value[1178]>1);
value[0]&=(have(value[1145],-1,-1));
if(!value[0]){
return 0;
}
value[0]=(value[HERE]==584);
if(value[0]){
say(64,2802,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),7));
value[0]|=(547<=value[1146] && value[1146]<=702);
if(value[0]){
say(72,2801,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==277);
if(value[0]){
say(72,2801,3);
 if (loop) return(0);}else{value[0]=(269<=value[1146] && value[1146]<=278);
if(value[0]){
say(72,2801,2);
 if (loop) return(0);}else{
say(72,2801,1);
 if (loop) return(0);}}}
return 0;
}
int p525(void)
{
say(64,3220,0);
 if (loop) return(0);return 0;
}
int p213(void)
{
value[0]=(KEY(1006));
value[0]|=(value[1178]==1);
if(value[0]){
say(72,2865,0);
 if (loop) return(0);}
say(72,2865,1);
 if (loop) return(0);return 0;
}
int p215(void)
{
value[0]=(value[1178]==1);
value[0]|=(anyof(1137,1137,992,1137,-1));
if(value[0]){
say(64,1356,0);
 if (loop) return(0);}
value[0]=(anyof(131,973,974,975,973,1079,1078,972,-1));
value[0]|=(anyof(971,157,922,1047,-1));
value[0]&=(bitest(evar(1180),1));
if(value[0]){
say(64,1356,0);
 if (loop) return(0);}
value[0]=(anyof(153,101,129,-1));
value[0]&=(isnear(value[1145],-1,-1));
if(value[0]){
say(64,1356,0);
 if (loop) return(0);}
return 0;
}
int p897(void)
{
value[0]=(KEY(136));
if(value[0]){
value[0]=(isnear(136,-1,-1));
value[0]&=(value[136]>2);
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
say(76,2351,136);
 if (loop) return(0);}
value[0]=(KEY(122));
if(value[0]){
value[0]=(isnear(136,0,5));
if(value[0]){
say(64,2464,0);
 if (loop) return(0);}
value[0]=(isnear(194,-1,-1));
value[0]&=(value[194]>=5);
if(value[0]){
say(64,2279,0);
 if (loop) return(0);}}
return 0;
}
int p849(void)
{
say(64,3364,0);
 if (loop) return(0);return 0;
}
int p293(void)
{
say(64,3212,0);
 if (loop) return(0);return 0;
}
int p164(void)
{
value[0]=(value[1178]>1);
value[0]&=!(KEY(758));
if(value[0]){
say(64,2065,0);
 if (loop) return(0);}
say(64,2066,0);
 if (loop) return(0);return 0;
}
int p78(void)
{
value[0]=(anyof(107,100,-1));
if(value[0]){
value[0]=(isnear(value[1145],-1,-1));
if(value[0]){
value[0]=(KEY(107));
if(value[0]){
(*procs[779])();
if (loop) return (0);
}
value[0]=(bitest(100,13));
if(value[0]){
say(64,3363,0);
 if (loop) return(0);}
say(64,3362,0);
 if (loop) return(0);}
say(76,1319,1145);
 if (loop) return(0);}
say(64,3361,0);
 if (loop) return(0);return 0;
}
int p871(void)
{
   int lval [6];
   short lbts [6];
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
value[0]=(KEY(777));
value[0]&=(bitest(evar(1192),4));
if(value[0]){
say(64,3420,0);
 if (loop) return(0);}else{value[0]=(KEY(778));
if(value[0]){
say(64,3421,0);
 if (loop) return(0);}}
value[0]=(value[1144]==738);
value[0]&=(value[1145]==738);
if(value[0]){
value[1144]=739;*bitword(1144)= -1;
value[1145]=3;*bitword(1145)= -1;
}
value[0]=(bitest(evar(1192),4));
if(!value[0]){
set('V',1180,'c',50,NULL,NULL);
say(0,3413,0);
say(0,3415,0);
input_store('S', &value[0]);
say(64,3418,0);
 if (loop) return(0);}
value[0]=(bitest(evar(1178),8));
if(value[0]){
set('L',5,'c',1,lval, lbts);
}
set('L',1,'v',1146,lval, lbts);
set('L',2,'v',1193,lval, lbts);
set('L',3,'v',1192,lval, lbts);
value[0]=(bitest(evar(1192),4));
if(value[0]){
lbitmod(6,'s',3,4,lval,lbts);
}
set('L',4,'v',1189,lval, lbts);
value[0]=(KEY(738));
if(value[0]){
undo();
value[0]=(value[1192]>0);
if(value[0]){
value[0]=(bitest(evar(1192),5));
if(value[0]){
say(8,3405,0);
say(12,3406,1192);
}else{
say(12,3409,1192);
}}
}else{
redo();
value[0]=(value[1192]>0);
if(value[0]){
value[0]=(bitest(evar(1192),5));
if(value[0]){
say(8,3405,1);
say(12,3406,1192);
}else{
say(12,3410,1192);
}}}
value[0]=(bitest(evar(1192),7));
if(value[0]){
say(64,1352,0);
 if (loop) return(0);}
value[0]=(value[1192]>0);
if(value[0]){
set('V',1189,'l',4,lval, lbts);
set('V',1193,'l',2,lval, lbts);
set('V',1192,'l',3,lval, lbts);
value[0]=(lbitest(3,4,lval,lbts));
if(value[0]){
bitmod('s',evar(1192),4);
}
set('V',1253,'c',0,NULL,NULL);
value[0]=(value[1146]!=lval[1]);
if(value[0]){
set('V',1253,'c',1,NULL,NULL);
}
value[0]=(bitest(evar(1192),6));
if(value[0]){
value[1253] += 2;
}
p487();
if (loop) return (0);
value[0]=(value[1253]==0);
if(value[0]){
value[0]=(lval[5]==1);
value[0]&=!(bitest(evar(1178),8));
if(value[0]){
say(0,2519,0);
}else{value[0]=(lval[5]==0);
value[0]&=(bitest(evar(1178),8));
if(value[0]){
say(0,3412,0);
}}
}else{
say(12,3411,1253);
value[0]=(value[1253]!=2);
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
value[0]=(bitest(evar(1178),2));
if(value[0]){
say(2,1146,0);
}else{
bitmod('s',evar(1178),2);
say(2,1146,0);
bitmod('c',evar(1178),2);
}
}else{value[0]=(value[1253]==1);
if(value[0]){
say(0,2519,0);
}}
}else{
value[0]=(lval[5]==1);
value[0]&=!(bitest(evar(1178),8));
if(value[0]){
say(0,2519,0);
}else{value[0]=(lval[5]==0);
value[0]&=(bitest(evar(1178),8));
if(value[0]){
say(0,3412,0);
}}}
value[0]=(value[1253]!=1);
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
(*procs[844])();
if (loop) return (0);
}}
loop=1; return(0);
}else{value[0]=(value[1192]==0);
if(value[0]){
say(76,3401,1144);
 if (loop) return(0);}else{value[0]=(value[1192]==-2);
if(value[0]){
say(76,3402,1144);
 if (loop) return(0);}else{value[0]=(value[1178]==-1);
if(value[0]){
value[0]=(KEY(738));
if(value[0]){
say(64,3403,0);
 if (loop) return(0);}else{
say(64,3404,0);
 if (loop) return(0);}}}}}
return 0;
}
int p705(void)
{
(*procs[738])();
if (loop) return (0);
return 0;
}
int p592(void)
{
value[0]=(value[1178]==2);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}
return 0;
}
int p23(void)
{
value[0]=(value[1178]==2);
if(value[0]){
p222();
if (loop) return (0);
value[0]=(typed("r"));
value[0]&=(bitest(evar(1145),0));
if(value[0]){
if (value[ARG1] == 724) {value[ARG1]=766; (void)fake(1,766);}
if (value[ARG2] == 724) {value[ARG2]=766; (void)fake(2,766);}
}else{
say(76,1513,1145);
 if (loop) return(0);}}
return 0;
}
int p1(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
bitmod('s',106,3);
bitmod('s',107,3);
bitmod('s',108,3);
bitmod('s',110,3);
bitmod('s',112,3);
bitmod('s',109,3);
bitmod('s',113,3);
bitmod('s',114,3);
bitmod('s',115,3);
bitmod('s',116,3);
bitmod('s',117,3);
bitmod('s',118,3);
bitmod('s',119,3);
bitmod('s',124,3);
bitmod('s',39,3);
bitmod('s',40,3);
bitmod('s',47,3);
bitmod('s',48,3);
bitmod('s',49,3);
bitmod('s',50,3);
bitmod('s',51,3);
bitmod('s',52,3);
bitmod('s',53,3);
bitmod('s',54,3);
bitmod('s',56,3);
bitmod('s',57,3);
bitmod('s',58,3);
bitmod('s',61,3);
bitmod('s',62,3);
bitmod('s',63,3);
bitmod('s',64,3);
bitmod('s',66,3);
bitmod('s',67,3);
bitmod('s',68,3);
bitmod('s',43,3);
bitmod('s',55,3);
bitmod('s',126,3);
bitmod('s',127,3);
bitmod('s',128,3);
bitmod('s',69,3);
bitmod('s',70,3);
bitmod('s',71,3);
bitmod('s',125,3);
bitmod('s',46,3);
bitmod('s',59,3);
bitmod('s',60,3);
bitmod('s',123,3);
bitmod('s',111,3);
bitmod('s',65,3);
bitmod('s',81,3);
bitmod('s',96,3);
bitmod('s',92,3);
bitmod('s',83,3);
bitmod('s',88,3);
bitmod('s',84,3);
bitmod('s',91,3);
bitmod('s',93,3);
bitmod('s',86,3);
bitmod('s',87,3);
bitmod('s',100,3);
bitmod('s',102,3);
bitmod('s',143,3);
bitmod('s',144,3);
bitmod('s',145,3);
bitmod('s',146,3);
bitmod('s',147,3);
bitmod('s',149,3);
bitmod('s',148,3);
bitmod('s',150,3);
bitmod('s',151,3);
bitmod('s',152,3);
bitmod('s',104,3);
bitmod('s',105,3);
bitmod('s',132,3);
bitmod('s',136,3);
bitmod('s',158,3);
bitmod('s',141,3);
bitmod('s',95,3);
bitmod('s',138,3);
bitmod('s',45,3);
bitmod('s',109,12);
bitmod('s',39,12);
bitmod('s',104,12);
bitmod('s',105,12);
bitmod('s',67,12);
bitmod('s',62,12);
bitmod('s',95,12);
bitmod('s',145,12);
bitmod('s',138,12);
bitmod('s',152,12);
bitmod('s',106,12);
bitmod('s',151,12);
bitmod('s',128,12);
bitmod('s',40,12);
bitmod('s',86,12);
bitmod('s',92,12);
bitmod('s',149,12);
bitmod('s',65,12);
bitmod('s',114,17);
bitmod('s',115,17);
bitmod('s',52,17);
bitmod('s',53,17);
bitmod('s',54,17);
bitmod('s',61,17);
bitmod('s',63,17);
bitmod('s',43,17);
bitmod('s',55,17);
bitmod('s',125,17);
bitmod('s',46,17);
bitmod('s',71,17);
bitmod('s',60,17);
bitmod('s',59,17);
bitmod('s',81,17);
bitmod('s',83,17);
bitmod('s',144,17);
bitmod('s',146,17);
bitmod('s',148,17);
*bitword(1155)= -1; value[1155]=194; while (++value[1155]<=205) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
bitmod('c',205,7);
*bitword(1155)= -1; value[1155]=437; while (++value[1155]<=446) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=517; while (++value[1155]<=546) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=466; while (++value[1155]<=487) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=334; while (++value[1155]<=350) {
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=628; while (++value[1155]<=638) {
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=641; while (++value[1155]<=650) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=650; while (++value[1155]<=670) {
bitmod('s',evar(1155),5);
bitmod('s',evar(1155),3);
}
bitmod('s',675,7);
bitmod('s',676,7);
bitmod('c',473,3);
bitmod('c',476,3);
bitmod('c',474,3);
bitmod('s',302,3);
bitmod('s',302,7);
bitmod('s',302,5);
bitmod('s',302,18);
bitmod('s',200,18);
bitmod('s',546,18);
bitmod('s',565,18);
*bitword(1155)= -1; value[1155]=466; while (++value[1155]<=479) {
bitmod('s',evar(1155),8);
bitmod('s',evar(1155),18);
}
bitmod('c',475,18);
bitmod('s',489,3);
bitmod('s',489,7);
bitmod('s',489,5);
*bitword(1155)= -1; value[1155]=586; while (++value[1155]<=628) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
*bitword(1155)= -1; value[1155]=546; while (++value[1155]<=575) {
bitmod('s',evar(1155),3);
bitmod('s',evar(1155),7);
bitmod('s',evar(1155),5);
}
bitmod('s',586,3);
bitmod('s',586,7);
bitmod('s',586,5);
bitmod('s',318,3);
bitmod('s',318,7);
bitmod('s',318,5);
bitmod('s',452,3);
bitmod('s',453,3);
bitmod('s',287,3);
bitmod('s',311,3);
bitmod('s',386,3);
bitmod('s',426,3);
bitmod('s',315,3);
bitmod('s',316,3);
bitmod('s',312,3);
bitmod('s',313,3);
bitmod('s',352,3);
bitmod('s',353,3);
bitmod('s',357,3);
bitmod('s',451,3);
bitmod('s',301,3);
bitmod('s',502,3);
bitmod('s',277,3);
bitmod('s',584,3);
bitmod('s',447,3);
bitmod('s',449,3);
bitmod('s',448,3);
bitmod('s',671,3);
bitmod('s',582,3);
bitmod('s',672,3);
bitmod('s',479,3);
bitmod('s',479,18);
bitmod('s',675,3);
bitmod('s',676,3);
bitmod('s',205,5);
bitmod('s',286,5);
bitmod('s',303,5);
bitmod('s',304,5);
bitmod('s',308,5);
bitmod('s',287,5);
bitmod('s',288,5);
bitmod('s',309,5);
bitmod('s',310,5);
bitmod('s',311,5);
bitmod('s',358,5);
bitmod('s',359,5);
bitmod('s',360,5);
bitmod('s',361,5);
bitmod('s',251,5);
bitmod('s',217,5);
bitmod('s',218,5);
bitmod('s',259,5);
bitmod('s',312,5);
bitmod('s',313,5);
bitmod('s',314,5);
bitmod('s',315,5);
bitmod('s',316,5);
bitmod('s',323,5);
bitmod('s',322,5);
bitmod('s',321,5);
bitmod('s',319,5);
bitmod('s',320,5);
bitmod('s',324,5);
bitmod('s',325,5);
bitmod('s',326,5);
bitmod('s',377,5);
bitmod('s',327,5);
bitmod('s',328,5);
bitmod('s',329,5);
bitmod('s',330,5);
bitmod('s',331,5);
*bitword(1155)= -1; value[1155]=331; while (++value[1155]<=350) {
bitmod('s',evar(1155),5);
}
bitmod('s',352,5);
bitmod('s',353,5);
bitmod('s',354,5);
bitmod('s',355,5);
bitmod('s',356,5);
bitmod('s',357,5);
bitmod('s',299,5);
bitmod('s',300,5);
bitmod('s',301,5);
bitmod('s',583,5);
bitmod('s',385,5);
bitmod('s',462,5);
bitmod('s',457,5);
bitmod('s',516,5);
bitmod('s',452,5);
bitmod('s',453,5);
bitmod('s',488,5);
bitmod('s',515,5);
bitmod('s',503,5);
bitmod('s',504,5);
bitmod('s',502,5);
bitmod('s',505,5);
bitmod('s',506,5);
bitmod('s',507,5);
bitmod('s',508,5);
bitmod('s',509,5);
bitmod('s',501,5);
bitmod('s',500,5);
bitmod('s',499,5);
bitmod('s',498,5);
bitmod('s',264,5);
bitmod('s',517,5);
bitmod('s',701,5);
bitmod('s',702,5);
bitmod('s',206,5);
bitmod('s',207,5);
bitmod('s',208,5);
bitmod('s',209,5);
bitmod('s',494,5);
bitmod('s',351,5);
bitmod('s',263,5);
bitmod('s',451,5);
bitmod('s',510,5);
bitmod('s',511,5);
bitmod('s',490,5);
bitmod('s',671,5);
bitmod('s',584,5);
bitmod('s',431,5);
bitmod('s',473,5);
bitmod('s',700,5);
bitmod('s',213,11);
bitmod('s',463,11);
bitmod('s',224,11);
bitmod('s',225,11);
bitmod('s',241,11);
bitmod('s',244,11);
bitmod('s',248,11);
bitmod('s',231,11);
bitmod('s',242,11);
bitmod('s',249,11);
bitmod('s',245,11);
bitmod('s',256,11);
bitmod('s',273,11);
bitmod('s',278,11);
bitmod('s',243,11);
bitmod('s',250,11);
bitmod('s',246,11);
bitmod('s',247,11);
bitmod('s',293,11);
bitmod('s',301,11);
bitmod('s',373,11);
bitmod('s',583,11);
bitmod('s',380,11);
bitmod('s',383,11);
bitmod('s',392,11);
bitmod('s',396,11);
bitmod('s',400,11);
bitmod('s',401,11);
bitmod('s',407,11);
bitmod('s',408,11);
bitmod('s',426,11);
bitmod('s',431,11);
bitmod('s',494,11);
bitmod('s',351,11);
bitmod('s',490,11);
bitmod('s',264,11);
bitmod('s',516,11);
bitmod('s',584,11);
bitmod('s',578,11);
bitmod('s',581,11);
*bitword(1155)= -1; value[1155]=226; while (++value[1155]<=252) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),8);
value[0]=(bitest(evar(1155),11));
if(!value[0]){
bitmod('s',evar(1155),6);
}}
bitmod('c',227,6);
*bitword(1155)= -1; value[1155]=361; while (++value[1155]<=373) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),6);
bitmod('s',evar(1155),8);
}
bitmod('c',362,6);
*bitword(1155)= -1; value[1155]=453; while (++value[1155]<=459) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),5);
value[0]=(bitest(evar(1155),11));
if(!value[0]){
bitmod('s',evar(1155),6);
}}
*bitword(1155)= -1; value[1155]=390; while (++value[1155]<=426) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),8);
bitmod('s',evar(1155),5);
value[0]=(bitest(evar(1155),11));
if(!value[0]){
bitmod('s',evar(1155),6);
}}
*bitword(1155)= -1; value[1155]=333; while (++value[1155]<=350) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),8);
bitmod('s',evar(1155),5);
value[0]=(bitest(evar(1155),11));
if(!value[0]){
bitmod('s',evar(1155),6);
}}
*bitword(1155)= -1; value[1155]=586; while (++value[1155]<=590) {
bitmod('s',evar(1155),15);
bitmod('s',evar(1155),8);
}
*bitword(1155)= -1; value[1155]=593; while (++value[1155]<=617) {
bitmod('s',evar(1155),10);
bitmod('s',evar(1155),15);
bitmod('s',evar(1155),8);
value[0]=(bitest(evar(1155),11));
if(!value[0]){
bitmod('s',evar(1155),6);
}}
*bitword(1155)= -1; value[1155]=575; while (++value[1155]<=582) {
bitmod('s',evar(1155),5);
}
bitmod('c',605,15);
bitmod('c',675,15);
bitmod('c',676,15);
bitmod('s',252,6);
bitmod('s',291,6);
bitmod('s',432,6);
bitmod('s',433,6);
bitmod('s',299,6);
bitmod('s',280,6);
bitmod('s',297,6);
bitmod('s',303,6);
bitmod('s',304,6);
bitmod('s',295,6);
bitmod('s',286,6);
bitmod('s',287,6);
bitmod('s',275,6);
bitmod('s',390,6);
bitmod('s',389,6);
bitmod('s',312,6);
bitmod('s',315,6);
bitmod('s',302,6);
bitmod('s',451,6);
bitmod('s',511,6);
bitmod('s',462,6);
bitmod('s',515,6);
bitmod('s',223,6);
bitmod('s',331,6);
bitmod('s',544,6);
bitmod('s',586,6);
bitmod('s',200,14);
bitmod('s',204,14);
bitmod('s',217,14);
bitmod('s',218,14);
bitmod('s',259,14);
bitmod('s',495,14);
bitmod('s',286,14);
bitmod('s',301,14);
bitmod('s',328,14);
bitmod('s',333,14);
bitmod('s',358,14);
bitmod('s',374,14);
bitmod('s',426,14);
bitmod('s',431,14);
bitmod('s',463,14);
bitmod('s',489,14);
bitmod('s',451,14);
bitmod('s',318,14);
bitmod('s',627,14);
bitmod('s',321,14);
bitmod('s',324,14);
bitmod('s',428,14);
bitmod('s',430,14);
bitmod('s',591,14);
bitmod('s',592,14);
bitmod('s',569,14);
bitmod('s',333,14);
bitmod('s',6,9);
bitmod('s',8,9);
bitmod('s',19,9);
bitmod('s',161,9);
bitmod('s',164,9);
bitmod('s',169,9);
bitmod('s',108,9);
bitmod('s',114,9);
bitmod('s',115,9);
bitmod('s',123,9);
bitmod('s',66,9);
bitmod('s',36,9);
bitmod('s',127,9);
bitmod('s',52,9);
bitmod('s',76,9);
bitmod('s',98,9);
bitmod('s',4,9);
bitmod('s',162,9);
bitmod('s',167,10);
bitmod('s',163,10);
bitmod('s',121,10);
bitmod('s',120,10);
bitmod('s',122,10);
bitmod('s',7,10);
bitmod('s',76,10);
bitmod('s',10,10);
bitmod('s',12,10);
bitmod('s',17,10);
bitmod('s',15,10);
bitmod('s',20,10);
bitmod('s',31,10);
bitmod('s',33,10);
bitmod('s',37,10);
bitmod('s',41,10);
bitmod('s',193,10);
bitmod('s',32,10);
bitmod('s',117,10);
bitmod('s',14,10);
bitmod('s',140,10);
bitmod('s',194,10);
bitmod('s',78,10);
bitmod('s',73,10);
bitmod('s',88,10);
bitmod('s',94,10);
bitmod('s',131,10);
bitmod('s',18,10);
bitmod('s',11,10);
bitmod('s',98,10);
bitmod('s',135,10);
bitmod('s',162,10);
bitmod('s',8,10);
bitmod('s',19,10);
bitmod('s',161,10);
bitmod('s',164,10);
bitmod('s',169,10);
bitmod('s',97,10);
bitmod('s',44,10);
bitmod('s',16,10);
bitmod('s',133,10);
bitmod('s',134,10);
bitmod('s',72,10);
bitmod('s',77,10);
bitmod('s',79,10);
bitmod('s',99,10);
bitmod('s',117,10);
bitmod('s',155,10);
bitmod('s',172,10);
bitmod('s',173,10);
bitmod('s',208,8);
bitmod('s',203,8);
bitmod('s',214,8);
bitmod('s',224,8);
bitmod('s',225,8);
bitmod('s',295,8);
bitmod('s',287,8);
bitmod('s',286,8);
bitmod('s',288,8);
bitmod('s',390,8);
bitmod('s',315,8);
bitmod('s',298,8);
bitmod('s',517,8);
bitmod('s',311,8);
bitmod('s',313,8);
bitmod('s',385,8);
bitmod('s',322,8);
bitmod('s',376,8);
bitmod('s',377,8);
bitmod('s',325,8);
bitmod('s',500,8);
bitmod('s',510,8);
bitmod('s',511,8);
bitmod('s',443,8);
bitmod('s',318,8);
bitmod('s',453,8);
bitmod('s',631,8);
bitmod('s',443,8);
bitmod('s',444,8);
bitmod('s',559,8);
bitmod('s',571,8);
bitmod('s',641,8);
bitmod('s',302,8);
bitmod('s',593,8);
bitmod('s',482,8);
bitmod('s',575,8);
bitmod('s',432,8);
bitmod('s',200,17);
bitmod('s',195,17);
bitmod('s',201,17);
bitmod('s',202,17);
bitmod('s',259,17);
bitmod('s',283,17);
bitmod('s',298,17);
bitmod('s',299,17);
bitmod('s',495,17);
bitmod('s',510,17);
bitmod('s',511,17);
bitmod('s',333,17);
bitmod('s',632,17);
bitmod('s',631,17);
bitmod('s',637,17);
bitmod('s',638,17);
bitmod('s',635,17);
bitmod('s',636,17);
bitmod('s',554,17);
bitmod('s',566,17);
bitmod('s',567,17);
bitmod('s',568,17);
bitmod('s',574,17);
bitmod('s',575,17);
bitmod('s',487,17);
bitmod('s',671,17);
bitmod('s',106,11);
bitmod('s',51,11);
bitmod('s',116,11);
bitmod('s',40,11);
bitmod('s',48,11);
bitmod('s',64,11);
bitmod('s',65,11);
bitmod('s',91,11);
bitmod('s',132,11);
bitmod('s',126,11);
bitmod('s',145,11);
bitmod('s',45,11);
bitmod('s',43,5);
bitmod('s',46,5);
bitmod('s',47,5);
bitmod('s',48,5);
bitmod('s',49,5);
bitmod('s',50,5);
bitmod('s',51,5);
bitmod('s',52,5);
bitmod('s',53,5);
bitmod('s',54,5);
bitmod('s',55,5);
bitmod('s',56,5);
bitmod('s',58,5);
bitmod('s',59,5);
bitmod('s',60,5);
bitmod('s',61,5);
bitmod('s',62,5);
bitmod('c',63,5);
bitmod('s',64,5);
bitmod('s',65,5);
bitmod('s',66,5);
bitmod('s',67,5);
bitmod('s',68,5);
bitmod('s',69,5);
bitmod('s',70,5);
bitmod('s',71,5);
bitmod('s',81,5);
bitmod('c',83,5);
bitmod('s',84,5);
bitmod('s',86,5);
bitmod('s',96,5);
bitmod('s',100,5);
bitmod('s',102,5);
bitmod('s',143,5);
bitmod('s',144,5);
bitmod('s',145,5);
bitmod('s',146,5);
bitmod('s',147,5);
bitmod('s',148,5);
bitmod('s',149,5);
bitmod('s',150,5);
bitmod('s',50,7);
bitmod('s',52,7);
bitmod('s',69,7);
bitmod('s',108,7);
bitmod('s',71,7);
bitmod('s',128,7);
bitmod('s',43,7);
bitmod('s',46,7);
bitmod('s',113,7);
bitmod('s',60,7);
bitmod('s',111,7);
bitmod('s',65,7);
bitmod('s',96,7);
bitmod('s',119,7);
bitmod('s',100,7);
bitmod('s',40,7);
bitmod('s',132,7);
bitmod('s',104,7);
bitmod('s',158,7);
bitmod('s',141,7);
bitmod('s',95,7);
bitmod('s',143,7);
bitmod('s',144,7);
bitmod('s',151,7);
bitmod('s',45,7);
bitmod('s',148,7);
bitmod('s',149,7);
bitmod('s',147,7);
bitmod('s',150,7);
bitmod('s',146,7);
bitmod('s',55,7);
bitmod('s',23,8);
bitmod('s',193,8);
bitmod('s',21,8);
bitmod('s',9,8);
bitmod('s',18,8);
bitmod('s',39,8);
bitmod('s',114,8);
bitmod('s',115,8);
bitmod('s',25,8);
bitmod('s',109,8);
bitmod('s',28,8);
bitmod('s',29,8);
bitmod('s',130,8);
bitmod('s',26,8);
bitmod('s',194,8);
bitmod('s',85,8);
bitmod('s',90,8);
bitmod('s',94,8);
bitmod('s',5,8);
bitmod('s',159,8);
bitmod('s',165,8);
bitmod('s',46,16);
bitmod('s',65,16);
bitmod('s',70,16);
bitmod('s',67,16);
bitmod('s',50,16);
bitmod('s',55,16);
bitmod('s',95,16);
bitmod('s',145,16);
bitmod('s',45,16);
bitmod('s',39,15);
bitmod('s',88,15);
bitmod('s',87,15);
bitmod('s',91,15);
bitmod('s',109,15);
bitmod('s',45,15);
bitmod('s',146,15);
bitmod('s',144,15);
bitmod('s',114,15);
bitmod('s',115,15);
bitmod('s',108,15);
bitmod('s',113,15);
bitmod('s',52,15);
bitmod('s',53,15);
bitmod('s',54,15);
bitmod('s',56,15);
bitmod('s',63,15);
bitmod('s',55,15);
bitmod('s',71,15);
bitmod('s',125,15);
bitmod('s',46,15);
bitmod('s',59,15);
bitmod('s',60,15);
bitmod('s',111,15);
bitmod('s',81,15);
bitmod('s',84,15);
bitmod('s',83,15);
bitmod('s',136,15);
bitmod('s',148,15);
bitmod('s',544,4);
bitmod('s',302,4);
bitmod('s',593,16);
bitmod('s',445,4);
bitmod('s',503,12);
bitmod('s',504,12);
bitmod('s',505,12);
bitmod('s',506,12);
bitmod('s',507,12);
bitmod('s',508,12);
bitmod('s',509,12);
bitmod('s',489,13);
value[1146]=701;*bitword(1146)= -1;
set('V',1247,'c',1,NULL,NULL);
value[1163]=262;*bitword(1163)= -1;
value[1243] = irand(300-150+1)+150;
value[1248] = irand(30-15+1)+15;
value[1246] = irand(900-700+1)+700;
value[1250] = irand(160-120+1)+120;
set('V',1249,'c',-1,NULL,NULL);
set('V',1252,'c',0,NULL,NULL);
value[318] = irand(4 - 0) + 0;
set('E',319,'e',318,NULL,NULL);
value[0]=(value[319]>0);
if(value[0]){
bitmod('s',319,3);
}
bitmod('s',6,6);
bitmod('s',7,6);
bitmod('s',10,6);
bitmod('s',14,6);
bitmod('s',17,6);
bitmod('s',21,6);
bitmod('s',22,6);
bitmod('s',23,6);
bitmod('s',24,6);
bitmod('s',33,6);
bitmod('s',36,6);
bitmod('s',31,6);
bitmod('s',26,6);
bitmod('s',78,6);
bitmod('s',100,6);
bitmod('s',75,6);
bitmod('s',19,6);
bitmod('s',161,6);
bitmod('s',164,6);
bitmod('s',169,6);
bitmod('s',98,6);
bitmod('s',97,6);
bitmod('s',162,6);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
apport(value[1154],701);
lval[0] = irand(100);
}
apport(106,200);
apport(107,200);
apport(6,203);
apport(108,205);
apport(110,206);
apport(7,209);
apport(109,208);
apport(8,282);
apport(19,575);
apport(113,284);
apport(9,214);
apport(10,211);
apport(114,291);
apport(116,294);
apport(118,701);
apport(119,199);
apport(13,218);
apport(14,215);
apport(15,297);
apport(17,224);
apport(21,306);
apport(22,303);
apport(24,303);
apport(39,361);
apport(31,311);
apport(35,373);
apport(41,284);
apport(47,213);
apport(48,212);
apport(49,219);
apport(50,351);
apport(51,221);
apport(53,281);
apport(54,283);
apport(56,285);
apport(58,287);
apport(61,288);
apport(133,288);
apport(64,358);
apport(66,361);
apport(68,436);
apport(43,439);
apport(42,439);
apport(55,375);
apport(127,383);
apport(128,516);
apport(69,408);
apport(71,431);
apport(36,376);
apport(33,432);
apport(34,429);
apport(125,517);
apport(74,517);
apport(25,385);
apport(37,353);
apport(38,353);
apport(59,353);
apport(46,583);
apport(32,313);
apport(60,298);
apport(70,357);
apport(123,356);
apport(26,324);
apport(111,329);
apport(65,301);
apport(27,299);
apport(81,462);
apport(82,463);
apport(89,457);
apport(90,457);
apport(96,264);
apport(92,502);
apport(94,504);
apport(194,452);
apport(83,499);
apport(88,264);
apport(84,263);
apport(78,262);
apport(79,502);
apport(80,462);
apport(73,374);
apport(129,199);
apport(93,473);
apport(100,317);
apport(102,593);
apport(101,593);
apport(75,462);
apport(129,199);
apport(98,481);
apport(132,380);
apport(130,701);
apport(121,217);
apport(139,443);
apport(140,199);
apport(157,445);
apport(158,445);
apport(95,351);
apport(143,605);
apport(144,634);
apport(148,476);
apport(149,494);
apport(150,581);
apport(4,490);
apport(137,540);
apport(151,546);
apport(146,483);
apport(160,479);
apport(153,559);
apport(156,584);
apport(97,473);
apport(161,472);
apport(164,478);
apport(169,545);
apport(162,474);
apport(44,572);
apport(159,638);
apport(16,315);
apport(167,200);
apport(170,670);
apport(12,296);
set('E',123,'c',1,NULL,NULL);
set('E',136,'c',2,NULL,NULL);
set('V',1209,'c',35,NULL,NULL);
set('V',1210,'c',25,NULL,NULL);
bitmod('s',evar(1178),10);
set('V',1207,'c',0,NULL,NULL);
value[1200]=1267;*bitword(1200)= -1;
value[1197] = irand(25-15+1)+15;
value[1181] = irand(460-440+1)+440;
value[1196] = irand(8-4+1)+4;
value[0]=(irand(100)<90);
if(value[0]){
apport(165,702);
}
value[0]=(irand(100)<75);
if(value[0]){
bitmod('s',evar(1179),1);
}
value[0]=(irand(100)<50);
if(value[0]){
bitmod('s',evar(1218),4);
}
set('E',66,'c',0,NULL,NULL);
set('V',1187,'c',0,NULL,NULL);
set('V',1202,'c',8,NULL,NULL);
set('E',542,'c',1,NULL,NULL);
set('E',543,'c',2,NULL,NULL);
set('L',1,'c',0,lval, lbts);
*bitword(1155)= -1;value[1155]=547-1; while(++value[1155]<=554) {
value[value[1155]]=lval[1];
lval[1] += 1;
}
set('L',1,'c',0,lval, lbts);
*bitword(1155)= -1;value[1155]=362-1; while(++value[1155]<=373) {
value[value[1155]]=lval[1];
lval[1] += 1;
}
set('V',1167,'c',-1,NULL,NULL);
set('E',621,'c',1,NULL,NULL);
set('E',622,'c',2,NULL,NULL);
set('E',635,'c',1,NULL,NULL);
value[0]=(irand(100)<10);
if(value[0]){
bitmod('s',evar(1218),7);
}
set('E',676,'c',1,NULL,NULL);
bitmod('s',3,4);
bitmod('s',8,4);
bitmod('s',11,4);
bitmod('s',120,4);
bitmod('s',121,4);
bitmod('s',118,4);
bitmod('s',119,4);
bitmod('s',78,4);
bitmod('s',129,4);
bitmod('s',131,4);
bitmod('s',153,4);
bitmod('s',170,4);
special(17,&value[0]);
value[0]=(value[1198]>0);
if(value[0]){
return 0;
}
p697();
if (loop) return (0);
set('V',1198,'c',1,NULL,NULL);
bitmod('s',evar(1178),1);
say(0,1274,0);
return 0;
}
int p3(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
p850();
if (loop) return (0);
value[0]=(value[1178]==-1);
if(value[0]){
set('V',1178,'c',2,NULL,NULL);
say(12,3205,1145);
(*procs[726])();
if (loop) return (0);
}
value[0]=(value[1178]==-2);
if(value[0]){
set('V',1178,'c',0,NULL,NULL);
p765();
if (loop) return (0);
return 0;
}
value[0]=(value[1180]==2);
if(value[0]){
say(0,1550,0);
set('V',1180,'c',44,NULL,NULL);
}
value[0]=(value[1198]>2);
value[0]|=(value[1180]>0);
if(value[0]){
return 0;
}
value[0]=(value[1198]<=1);
if(value[0]){
value[0]=(test("cgi"));
if(value[0]){
p765();
if (loop) return (0);
}
set('V',1180,'c',4,NULL,NULL);
p928();
if (loop) return (0);
set('L',0,'c',0,lval, lbts);
special(34,&lval[0]);
value[0]=(lval[0]>0);
if(value[0]){
set('V',1178,'c',98,NULL,NULL);
set('V',1180,'c',45,NULL,NULL);
say(64,1270,0);
 if (loop) return(0);}
p765();
if (loop) return (0);
}
return 0;
}
int p4(void)
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
value[0]=(value[1180]>0);
if(value[0]){
return 0;
}
value[0]=(test("turn"));
value[0]&=(bitest(evar(1180),4));
if(value[0]){
return 0;
}
value[0]=(value[1166]>0);
value[0]&=!(getloc(value[1166])==473);
if(value[0]){
set('V',1166,'c',0,NULL,NULL);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!lbitest(0,6,lval,lbts)) continue;
if (!isat(lval[0],-1,-1,702)) continue;
value[0]=(getloc(lval[0])==701);
if(!value[0]){
lbitmod(4,'c',0,6,lval,lbts);
}}
value[0]=(value[1215]!=0);
if(value[0]){
value[0]=(bitest(evar(1215),0));
if(value[0]){
set('V',1215,'c',0,NULL,NULL);
bitmod('c',evar(1215),0);
}else{
bitmod('s',evar(1215),0);
}}
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
value[0]|=(value[HERE]==502);
if(value[0]){
set('T',1702,'c',1,NULL,NULL);
}else{
set('T',1702,'c',0,NULL,NULL);
}
lval[1] = irand(100);
p487();
if (loop) return (0);
value[0]=(value[HERE]==564);
if(value[0]){
value[0]=(isnear(165,-1,-1));
if(value[0]){
value[0]=(value[165]==3);
if(value[0]){
value[0]=(KEY(822));
value[0]&=(value[1178]==1);
if(!value[0]){
say(0,165,0);
}}
value[0]=(value[165]>2);
if(value[0]){
apport(165,702);
}}
value[0]=(irand(100)<50);
value[0]&=(getloc(165)==701);
if(value[0]){
apport(165,value[1146]);
value[0]=(bitest(evar(1178),0));
if(!value[0]){
say(0,165,0);
}
bitmod('s',165,4);
}}
value[0]=(value[HERE]==586);
if(value[0]){
value[0]=(KEY(822));
value[0]&=(value[1178]==1);
if(!value[0]){
say(0,1266,0);
}
value[0]=(value[586]==0);
if(value[0]){
bitmod('s',154,4);
move(547,-2520); if (loop) return(0);
}
}else{value[0]=(value[63]==1);
value[0]&=!(ishere(63,-1,-1));
if(value[0]){
set('E',63,'c',3,NULL,NULL);
}}
value[0]=(bitest(evar(1146),15));
if(value[0]){
p212();
if (loop) return (0);
}
value[0]=(bitest(evar(1178),6));
value[0]&=(value[HERE]==462);
if(value[0]){
value[0]=(anyof(766,793,-1));
if(value[0]){
p940();
if (loop) return (0);
}}
value[0]=(irand(100)<4);
value[0]&=(value[1198]==3);
if(value[0]){
p547();
if (loop) return (0);
}
value[0]=(value[1198]==6);
if(value[0]){
p809();
if (loop) return (0);
}
value[0]=(value[HERE]==540);
if(value[0]){
bitmod('s',138,4);
}
value[0]=(value[HERE]==671);
value[0]&=(value[671]==2);
if(value[0]){
say(0,2879,0);
value[671] += 1;
}
value[0]=(value[HERE]==210);
if(value[0]){
value[0]=(value[213]==0);
value[0]&=!(have(47,-1,-1));
if(value[0]){
set('E',210,'c',0,NULL,NULL);
}else{
set('E',210,'c',1,NULL,NULL);
}}
value[0]=(bitest(evar(1178),0));
if(value[0]){
set('T',2510,'c',0,NULL,NULL);
set('T',2511,'c',0,NULL,NULL);
bitmod('c',138,13);
bitmod('s',120,13);
value[0]=(isnear(5,0,0));
if(value[0]){
bitmod('s',5,13);
}
bitmod('s',194,15);
value[1194] += 1;
value[0]=(value[HERE]==214);
if(value[0]){
set('V',1160,'v',1147,NULL,NULL);
}
value[0]=(519<=value[1146] && value[1146]<=544);
value[0]|=(value[HERE]==480||value[HERE]==481);
if(value[0]){
apport(131,value[1146]);
}
value[0]=(value[193]>0);
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]|=(bitest(evar(1146),5));
if(value[0]){
bitmod('c',193,15);
value[0]=(irand(100)<15);
if(value[0]){
value[193] -= 1;
value[0]=(value[193]==0);
if(value[0]){
apport(193,701);
}}
}else{
value[0]=(getloc(193)==value[1146]);
value[0]|=(getloc(193)==value[1147]);
if(!value[0]){
set('E',193,'c',0,NULL,NULL);
apport(193,701);
}}}
value[0]=(bitest(20,13));
value[0]&=(bitest(evar(1146),7));
if(value[0]){
bitmod('c',20,13);
}
value[0]=(value[HERE]==515||value[HERE]==511||value[HERE]==315||value[HERE]==544);
if(value[0]){
p678();
if (loop) return (0);
}}
value[0]=(bitest(evar(1179),0));
if(value[0]){
p848();
if (loop) return (0);
}
value[0]=(bitest(evar(1178),0));
if(value[0]){
value[0]=(isnear(100,-1,-1));
value[0]&=(value[100]>1);
if(value[0]){
value[0]=(getloc(100)==value[1146]);
if(value[0]){
set('E',100,'c',3,NULL,NULL);
}else{
set('E',100,'c',2,NULL,NULL);
}}
value[0]=(bitest(evar(1147),11));
value[0]&=(getloc(193)==value[1147]);
if(value[0]){
value[0]=(irand(100)<97);
if(value[0]){
move(value[1147],-1);
bitmod('c',evar(1178),0);
say(0,1284,0);
bitmod('s',193,15);
return 0;
}else{
p784();
if (loop) return (0);
}}
}else{
value[0]=(isnear(193,-1,-1));
value[0]&=(irand(100)<value[1209]);
if(value[0]){
p245();
if (loop) return (0);
}
return 0;
}
value[0]=(bitest(evar(1178),0));
if(value[0]){
bitmod('s',evar(1180),3);
}else{
bitmod('c',evar(1180),3);
}
value[1165]=1587;*bitword(1165)= -1;
value[0]=(irand(100)<1);
if(value[0]){
value[1165] += 1;
}
value[0]=(isnear(107,-1,-1));
if(value[0]){
value[0]=(value[107]==1);
value[0]&=!(value[HERE]==315);
if(value[0]){
value[1181] -= 1;
value[0]=(value[1181]==40);
value[0]|=(value[1181]==0);
if(value[0]){
p522();
if (loop) return (0);
}}}
value[0]=(isnear(88,-1,-1));
value[0]&=(bitest(evar(1178),8));
if(value[0]){
p659();
if (loop) return (0);
}
value[0]=(getloc(130)==701);
value[0]|=(getloc(130)==702);
if(!value[0]){
apport(130,value[1146]);
value[0]=(value[130]>0);
if(value[0]){
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(0,1635,0);
}}}
value[0]=(bitest(evar(1178),8));
if(value[0]){
say(2,1146,0);
value[0]=(value[HERE]==491);
if(value[0]){
p323();
if (loop) return (0);
}
value[0]=(value[1147]==544);
value[0]&=!(value[1146]==544);
value[0]&=(anyof(745,746,747,748,749,750,751,752,-1));
if(value[0]){
say(0,2598,0);
}
p796();
if (loop) return (0);
value[0]=(bitest(evar(1146),4));
if(value[0]){
set('L',1,'c',2,lval, lbts);
}else{
set('L',1,'c',3,lval, lbts);
}
value[0]=(bitest(evar(1146),7));
if(!value[0]){
value[1197] -= lval[1];
}
bitmod('s',evar(1146),4);
value[0]=(value[193]<1);
if(value[0]){
bitmod('c',193,15);
}else{
value[0]=(bitest(evar(1146),7));
value[0]|=(bitest(evar(1146),5));
if(!value[0]){
apport(193,value[1146]);
}}
p400();
if (loop) return (0);
value[0]=(isnear(193,-1,-1));
value[0]&=!(value[1166]==0);
value[0]&=(irand(100)<67);
if(value[0]){
value[0]=(value[193]==1);
if(value[0]){
say(8,1816,0);
}else{
say(8,1816,1);
}}
value[0]=(have(39,-1,-1));
if(value[0]){
say(0,1426,0);
}
}else{
value[0]=(642<=value[1146] && value[1146]<=670);
value[0]|=(value[HERE]==641);
if(value[0]){
value[0]=(value[HERE]==643||value[HERE]==644||value[HERE]==647||value[HERE]==648);
value[0]|=(659<=value[1146] && value[1146]<=663);
value[0]|=(653<=value[1146] && value[1146]<=655);
value[0]|=(value[HERE]==666);
value[0]|=(value[HERE]==652||value[HERE]==653||value[HERE]==656||value[HERE]==657||value[HERE]==658);
if(value[0]){
say(0,2785,0);
}else{value[0]=(value[HERE]==649);
if(value[0]){
say(0,2786,0);
}else{
p852(0,0);
if (loop) return (0);
}}}
value[0]=(bitest(evar(1147),3));
value[0]|=(isnear(22,0,1));
if(!value[0]){
value[0]=(getloc(107)==value[1147]);
value[0]&=(value[107]==1);
if(!value[0]){
value[0]=(getloc(100)==value[1147]);
value[0]&=!(value[100]==1);
if(!value[0]){
value[0]=(have(61,-1,-1));
value[0]|=(irand(100)<25);
value[0]&=!(bitest(evar(1179),5));
value[0]&=(value[1198]<6);
if(value[0]){
value[0]=(isnear(22,-1,-1));
value[0]&=(value[22]>0);
if(!value[0]){
value[0]=(bitest(evar(1146),7));
if(value[0]){
say(8,1312,0);
}else{
say(8,1312,1);
p154();
if (loop) return (0);
}}}}}}
p852(0,0);
if (loop) return (0);
}
bitmod('c',evar(1179),5);
value[0]=(irand(100)<1);
value[0]&=(irand(100)<5);
value[0]&=(value[1198]<6);
value[0]&=(value[1193]>250);
value[0]&=!(bitest(evar(1146),3));
if(value[0]){
p220();
if (loop) return (0);
}
p536();
if (loop) return (0);
value[0]=(620<=value[1146] && value[1146]<=622);
value[0]&=(bitest(evar(1178),12));
value[0]&=!(bitest(evar(1218),10));
if(value[0]){
bitmod('c',evar(1178),12);
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
if(value[0]){
value[0]=(have(136,-1,-1));
if(value[0]){
say(8,3010,0);
}else{
say(8,3010,1);
}
}else{value[0]=(value[1251]==123);
if(value[0]){
say(8,3010,1);
}else{value[0]=(value[1251]==136);
value[0]&=(value[136]==9);
value[0]|=(value[1251]==119);
if(value[0]){
say(8,3010,2);
}else{value[0]=(value[1251]==136);
if(value[0]){
value[0]=(value[136]>3);
if(value[0]){
say(8,3010,3);
}
bitmod('s',evar(1218),10);
}}}}}
value[0]=(value[HERE]==636||value[HERE]==637);
value[0]&=(bitest(evar(1146),16));
if(value[0]){
bitmod('c',evar(1146),16);
value[0]=(value[HERE]==636);
if(value[0]){
say(0,2544,0);
}else{
say(0,2545,0);
}}
value[0]=(value[1168]>0);
if(value[0]){
set('V',1168,'c',0,NULL,NULL);
value[0]=(bitest(199,4));
value[0]|=(bitest(86,4));
value[0]&=(bitest(137,4));
if(!value[0]){
value[0]=(bitest(199,4));
value[0]|=(bitest(137,4));
if(value[0]){
say(0,2306,0);
}else{
say(0,2305,0);
}}}
value[0]=(value[HERE]==222);
if(value[0]){
value[0]=(irand(100)<35);
if(value[0]){
say(0,1293,0);
}}
value[0]=(548<=value[1146] && value[1146]<=553);
if(value[0]){
value[0]=(irand(100)<3);
if(value[0]){
value[0]=(bitest(evar(1218),7));
if(value[0]){
say(64,2574,0);
 if (loop) return(0);bitmod('c',evar(1218),7);
}else{
lval[3] = irand(2416-2414+1)+2414;
lbts[3*VARSIZE]= -1;
set('L',2,'l',3,lval, lbts);
lval[1]=2414;lbts[1*VARSIZE]= -1;
lval[2] -= lval[1];
value[0]=(bitest(evar(1219),lval[2]));
if(!value[0]){
bitmod('s',evar(1219),lval[2]);
say(0,1266,0);
say(0,lval[3],0);
}}}}
p392();
if (loop) return (0);
value[0]=(bitest(evar(1146),7));
value[0]|=(value[1198]>5);
if(value[0]){
p549();
if (loop) return (0);
}else{
value[0]=(value[1197]<1);
if(value[0]){
p272();
if (loop) return (0);
}else{
bitmod('c',evar(1178),7);
value[1248] -= 1;
value[0]=(value[1248]==0);
if(value[0]){
value[1248] = irand(20-10+1)+10;
p380();
if (loop) return (0);
}else{
p549();
if (loop) return (0);
}}}
value[0]=(isnear(193,-1,-1));
if(value[0]){
set('V',1210,'c',50,NULL,NULL);
p245();
if (loop) return (0);
}
value[0]=(getloc(107)==702);
value[0]&=(value[HERE]==195);
value[0]&=(value[1198]<7);
if(value[0]){
say(0,1485,0);
p322();
if (loop) return (0);
}
value[0]=(bitest(124,4));
value[0]|=!(bitest(evar(1178),8));
value[0]|=(value[1194]<150);
value[0]|=!(bitest(90,4));
if(!value[0]){
p246(0,0);
if (loop) return (0);
}
value[0]=(bitest(20,4));
value[0]|=!(bitest(evar(1178),8));
value[0]|=(value[1194]<200);
if(!value[0]){
p671(0,0);
if (loop) return (0);
}
return 0;
}
int p5(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(test("turn"));
value[0]&=(bitest(evar(1180),4));
if(value[0]){
return 0;
}
value[0]=(value[1180]>0);
if(value[0]){
return 0;
}
value[0]=(value[163]>1);
if(value[0]){
p24();
if (loop) return (0);
}
value[0]=(bitest(evar(1146),8));
value[0]|=(isnear(85,-1,-1));
if(value[0]){
value[0]=(value[1169]==0);
if(value[0]){
set('V',1169,'v',1146,NULL,NULL);
set('V',1201,'c',0,NULL,NULL);
}
value[0]=(value[1169]==value[1146]);
value[0]&=!(test("doall"));
if(value[0]){
value[1201] += 1;
value[0]=(value[1201]>10);
value[0]&=(test("needcmd"));
if(value[0]){
p405();
if (loop) return (0);
}
}else{
set('L',0,'c',0,lval, lbts);
value[0]=(bitest(evar(1146),4));
if(value[0]){
value[0]=(227<=value[1146] && value[1146]<=252);
value[0]&=(227<=value[1169] && value[1169]<=252);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{value[0]=(362<=value[1146] && value[1146]<=373);
value[0]&=(362<=value[1169] && value[1169]<=373);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{value[0]=(391<=value[1146] && value[1146]<=426);
value[0]&=(391<=value[1169] && value[1169]<=426);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{value[0]=(334<=value[1146] && value[1146]<=350);
value[0]&=(334<=value[1169] && value[1169]<=350);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{value[0]=(bitest(evar(1146),15));
value[0]&=(594<=value[1169] && value[1169]<=617);
if(value[0]){
set('L',0,'c',1,lval, lbts);
}}}}}}
value[0]=(lval[0]==0);
if(value[0]){
set('V',1201,'c',0,NULL,NULL);
set('V',1169,'v',1146,NULL,NULL);
}}}
value[0]=(isnear(94,-1,-1));
if(value[0]){
value[94] += 1;
say(0,1993,0);
value[0]=(value[94]>5);
if(value[0]){
move(502,-1);
value[0]=(have(118,-1,-1));
if(value[0]){
apport(118,701);
}
set('E',94,'c',0,NULL,NULL);
p154();
if (loop) return (0);
}}
value[0]=(bitest(evar(1146),12));
if(value[0]){
p690();
if (loop) return (0);
}
value[0]=(value[1244]>0);
if(value[0]){
value[1244] -= 1;
}
value[0]=(isnear(194,-1,-1));
if(value[0]){
p383(0,0);
if (loop) return (0);
}
value[0]=(value[194]>0);
value[0]&=(value[194]<5);
value[0]&=(value[1244]<1);
if(value[0]){
value[0]=(value[194]==2);
if(value[0]){
set('E',194,'c',4,NULL,NULL);
bitmod('c',194,4);
value[1244] = irand(7-4+1)+4;
}else{
value[0]=(bitest(194,4));
if(value[0]){
set('E',194,'c',0,NULL,NULL);
}}}
p609();
if (loop) return (0);
value[0]=(value[HERE]==495);
value[0]&=!(bitest(103,4));
value[0]&=(irand(100)<3);
if(value[0]){
p26();
if (loop) return (0);
value[0]=(value[1253]==0);
if(value[0]){
say(0,1735,0);
bitmod('s',103,4);
set('T',3436,'c',1,NULL,NULL);
}}
value[0]=(value[HERE]==453);
if(value[0]){
p243();
if (loop) return (0);
}
value[0]=(bitest(evar(1178),6));
if(value[0]){
bitmod('c',evar(1178),6);
set('V',1187,'c',0,NULL,NULL);
*bitword(1154)= -1; value[1154]=FOBJ-1; while (++value[1154]<=LOBJ) {
value[0]=(have(value[1154],-1,-1));
value[0]&=!(bitest(evar(1154),12));
if(value[0]){
value[1187] += 1;
}}}
value[0]=(value[HERE]==302);
if(!value[0]){
p835();
if (loop) return (0);
}
set('V',1210,'c',25,NULL,NULL);
set('V',1209,'c',35,NULL,NULL);
value[0]=(value[84]>=1);
if(value[0]){
value[0]=(value[84]==2);
if(value[0]){
set('E',84,'c',1,NULL,NULL);
}else{
bitmod('s',evar(1146),13);
set('E',84,'c',0,NULL,NULL);
say(0,1266,0);
say(8,1802,1);
}}
value[0]=(bitest(17,14));
if(value[0]){
value[0]=(isnear(17,-1,-1));
if(value[0]){
say(0,1903,0);
}
bitmod('c',17,14);
}
value[0]=(bitest(17,13));
if(value[0]){
bitmod('s',17,14);
bitmod('c',17,13);
}
value[0]=(bitest(evar(1179),8));
value[0]&=!(KEY(712));
if(value[0]){
bitmod('c',evar(1179),8);
}
value[0]=(value[1193]<7777);
if(!value[0]){
say(8,1564,7777);
p322();
if (loop) return (0);
}
bitmod('c',46,13);
value[0]=(value[HERE]==311||value[HERE]==312||value[HERE]==310);
value[0]|=(value[46]<2);
value[0]|=(value[1178]==0);
value[0]|=(bitest(evar(1178),5));
if(!value[0]){
value[0]=(have(46,-1,-1));
if(value[0]){
value[0]=(value[46]>2);
if(value[0]){
value[1156]=2116;*bitword(1156)= -1;
value[1156] += value[46];
value[1156] -= 2;
say(2,1156,0);
}
value[0]=(value[46]<9);
if(!value[0]){
bitmod('s',evar(1242),10);
}
bitmod('s',evar(1178),7);
value[0]=(irand(100)<40);
value[0]|=(value[46]>9);
value[0]|=(value[46]==2);
value[0]&=!(value[46]==7);
value[0]|=(KEY(773));
value[0]|=(irand(100)<value[1241]);
if(value[0]){
value[46] += 1;
value[0]=(value[46]<7);
if(value[0]){
set('V',1241,'c',0,NULL,NULL);
}else{
value[1241] += 1;
}
value[0]=(value[46]==12);
if(value[0]){
bitmod('s',evar(1217),9);
}
value[0]=(value[46]>19);
if(value[0]){
p154();
if (loop) return (0);
}
bitmod('s',46,13);
}
}else{
value[0]=(value[46]>1);
if(value[0]){
value[0]=(value[46]>=9);
if(value[0]){
say(0,2116,0);
}
set('E',46,'c',1,NULL,NULL);
}}}
value[0]=(bitest(evar(1178),7));
if(!value[0]){
value[0]=(value[145]>1);
if(value[0]){
value[145] -= 1;
value[0]=(value[145]==1);
if(value[0]){
value[0]=(value[1187]<value[1202]);
if(value[0]){
set('L',1,'c',0,lval, lbts);
}else{
set('L',1,'c',1,lval, lbts);
}
say(8,2328,lval[1]);
}}}
value[0]=(value[HERE]==302);
value[0]&=(value[1198]==2);
value[0]&=!(anyof(832,871,727,-1));
value[0]&=(value[1193]>4);
value[0]&=!(bitest(evar(1146),16));
if(value[0]){
bitmod('s',evar(1146),16);
say(0,1281,0);
}
value[0]=(isnear(5,0,0));
value[0]&=(bitest(5,13));
value[0]&=(irand(100)<20);
value[0]&=!(value[HERE]==701);
value[0]&=(bitest(evar(1178),8));
value[0]&=!(KEY(805));
if(value[0]){
bitmod('c',5,13);
say(0,2338,0);
}
value[0]=(value[HERE]==565);
value[0]&=(value[565]==3);
if(value[0]){
say(0,1266,0);
p831(0,1);
if (loop) return (0);
}
return 0;
}
int p6(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
p938();
if (loop) return (0);
bitmod('c',evar(1180),1);
bitmod('c',evar(1180),2);
value[0]=(value[1180]==3);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[1193] -= 1;
}
value[0]=(value[1180]==0);
if(value[0]){
value[0]=(isnear(19,-1,-1));
value[0]&=(value[575]==1);
value[0]&=(value[1262]==0);
if(value[0]){
say(0,1266,0);
p147();
if (loop) return (0);
}
value[0]=(value[1198]<3);
if(value[0]){
set('V',1178,'c',99,NULL,NULL);
}
get_command(0);
if (loop) return(0);
value[0]=(bitest(evar(1180),4));
if(value[0]){
value[1200]=1267;*bitword(1200)= -1;
value[1199]=1329;*bitword(1199)= -1;
}
bitmod('c',evar(1180),4);
value[1193] += 1;
return 0;
}
get_command(0);
if (loop) return(0);
bitmod('c',evar(1180),4);
value[0]=(value[1180]==1);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
}
value[0]=(value[1180]==0);
if(value[0]){
value[1193] += 1;
return 0;
}
value[0]=(value[1180]==5);
value[0]|=(value[1180]==6);
if(value[0]){
p404();
if (loop) return (0);
}else{value[0]=(value[1180]==7);
if(value[0]){
p223();
if (loop) return (0);
}else{value[0]=(value[1180]==8);
if(value[0]){
p929();
if (loop) return (0);
}else{value[0]=(value[1180]==9);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(anyof(856,823,-1));
if(value[0]){
p322();
if (loop) return (0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1267,0);
 if (loop) return(0);}
value[0]=(KEY(858));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,2339,0);
 if (loop) return(0);}
say(0,1268,0);
say(64,1432,0);
 if (loop) return(0);}else{value[0]=(value[1180]==10);
value[0]|=(value[1180]==11);
if(value[0]){
p687();
if (loop) return (0);
}else{value[0]=(value[1180]==12);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
value[1189] += 10;
move(195,-value[1165]); if (loop) return(0);
}
if (anyof(823,857,745,-1))say(64,1267,0);
 if (loop) return(0);if (anyof(858,-1))say(64,2339,0);
 if (loop) return(0);set('V',1180,'c',12,NULL,NULL);
say(0,1268,0);
say(64,1931,0);
 if (loop) return(0);}else{value[0]=(value[1180]==13);
if(value[0]){
p552();
if (loop) return (0);
}else{value[0]=(value[1180]==14);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
say(64,1797,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
say(8,1693,783);
say(76,1694,1145);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==16);
if(value[0]){
value[0]=(value[1178]==0);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1269,0);
 if (loop) return(0);}
value[0]=(value[1178]==1);
if(value[0]){
special(11,&value[0]);
p744();
if (loop) return (0);
}
}else{value[0]=(value[1180]==46);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
input_store('R', &value[1156]);
special(3,&value[0]);
p744();
if (loop) return (0);
}
set('V',1180,'c',0,NULL,NULL);
if (anyof(857,745,-1))say(64,1871,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==15);
value[0]|=(value[1180]==17);
if(value[0]){
p743();
if (loop) return (0);
}else{value[0]=(value[1180]==18);
value[0]|=(value[1180]==19);
if(value[0]){
p33();
if (loop) return (0);
}else{value[0]=(value[1180]==21);
if(value[0]){
value[0]=(KEY(858));
if(value[0]){
set('V',1178,'c',0,NULL,NULL);
}
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
p510(*bitword(1161),value[1161],*bitword(1162),value[1162]);
if (loop) return (0);
}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(bitest(evar(1146),4));
if(value[0]){
say(0,1267,0);
}
loop=1; return(0);
}
say(0,1268,0);
say(64,1431,0);
 if (loop) return(0);}else{value[0]=(value[1180]==22);
if(value[0]){
set('V',1198,'c',3,NULL,NULL);
bitmod('s',evar(1178),0);
value[0]=(KEY(858));
if(value[0]){
set('V',1178,'c',0,NULL,NULL);
say(8,1723,1);
say(0,1266,0);
}
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
p221();
if (loop) return (0);
say(64,1266,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(bitest(evar(1180),0));
if(value[0]){
say(0,1873,0);
}
bitmod('c',evar(1180),4);
loop=1; return(0);
}
say(0,1268,0);
say(64,1273,0);
 if (loop) return(0);}else{value[0]=(value[1180]==23);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
say(64,2633,0);
 if (loop) return(0);}
if (anyof(857,745,-1))say(64,1724,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==24);
if(value[0]){
value[0]=(KEY(856));
if(value[0]){
bitmod('s',evar(1179),10);
apport(85,value[1146]);
bitmod('s',85,4);
set('V',1180,'c',0,NULL,NULL);
value[0]=(irand(100)<20);
if(value[0]){
say(72,1750,1);
 if (loop) return(0);}else{
say(72,1750,0);
 if (loop) return(0);}}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1751,0);
 if (loop) return(0);}
say(0,1268,0);
say(72,1749,1);
 if (loop) return(0);}else{value[0]=(value[1180]==25);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
bitmod('s',evar(1217),5);
say(64,2173,0);
 if (loop) return(0);}
if (anyof(823,857,745,-1))say(64,2175,0);
 if (loop) return(0);if (anyof(858,-1))say(72,1723,0);
 if (loop) return(0);set('V',1180,'c',25,NULL,NULL);
say(0,1268,0);
say(64,2172,0);
 if (loop) return(0);}else{value[0]=(value[1180]==26);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
bitmod('s',115,15);
value[1189] += 10;
say(64,1861,0);
 if (loop) return(0);}
if (anyof(823,857,745,-1))say(64,1871,0);
 if (loop) return(0);if (anyof(858,-1))say(64,2339,0);
 if (loop) return(0);set('V',1180,'c',26,NULL,NULL);
say(0,1268,0);
say(64,1860,0);
 if (loop) return(0);}else{value[0]=(value[1180]==27);
if(value[0]){
p718();
if (loop) return (0);
}else{value[0]=(value[1180]==28);
if(value[0]){
p226();
if (loop) return (0);
}else{value[0]=(value[1180]==29);
if(value[0]){
p247();
if (loop) return (0);
}else{value[0]=(value[1180]==30);
if(value[0]){
p632();
if (loop) return (0);
}else{value[0]=(value[1180]==31);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
p763();
if (loop) return (0);
}
if (anyof(823,857,745,-1))say(64,1724,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==32);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[1189] += 10;
*bitword(1155)= -1; value[1155]=226; while (++value[1155]<=252) {
value[value[1155]]=1;
}
say(64,2197,0);
 if (loop) return(0);}
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,2200,0);
 if (loop) return(0);}
say(0,1268,0);
say(64,2196,0);
 if (loop) return(0);}else{value[0]=(value[1180]==34);
value[0]|=(value[1180]==33);
if(value[0]){
set('L',0,'v',1180,lval, lbts);
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
value[0]=(lval[0]==34);
if(value[0]){
say(0,2213,0);
move(443,-1);
p154();
if (loop) return (0);
}else{
value[0]=(value[102]==8);
if(value[0]){
say(72,2294,745);
 if (loop) return(0);}
bitmod('c',evar(1146),8);
move(445,-2210); if (loop) return(0);
}}
if (anyof(823,857,745,-1))say(64,2578,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==36);
if(value[0]){
p776();
if (loop) return (0);
}else{value[0]=(value[1180]==35);
value[0]|=(value[1180]==37);
value[0]|=(value[1180]==38);
if(value[0]){
value[0]=(anyof(823,857,745,-1));
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
say(64,1871,0);
 if (loop) return(0);}
value[0]=(value[1180]==35);
if(value[0]){
set('V',1180,'c',36,NULL,NULL);
say(0,1943,0);
say(64,1431,0);
 if (loop) return(0);}else{value[0]=(value[1180]==37);
if(value[0]){
say(0,1964,0);
value[0]=(test("html"));
if(value[0]){
say(0,1266,0);
}else{
set('V',1180,'c',38,NULL,NULL);
say(64,1431,0);
 if (loop) return(0);}
}else{
say(0,1965,0);
}}
set('V',1180,'c',0,NULL,NULL);
loop=1; return(0);
}else{value[0]=(value[1180]==39);
value[0]|=(value[1180]==40);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(!value[0]){
set('L',0,'c',40,lval, lbts);
lval[0] -= value[1180];
say(8,1864,lval[0]);
}
value[0]=(value[1180]==39);
if(value[0]){
set('V',1180,'c',40,NULL,NULL);
say(0,1865,0);
say(64,1863,0);
 if (loop) return(0);}
value[0]=(value[1190]==770);
if(value[0]){
say(0,1867,0);
}else{value[0]=(value[1190]>770);
if(value[0]){
value[0]=(value[1190]==value[1253]);
if(value[0]){
set('T',3400,'c',1,NULL,NULL);
}
say(0,3400,0);
}else{
say(0,1866,0);
}}
p322();
if (loop) return (0);
}else{value[0]=(value[1180]==41);
if(value[0]){
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(!value[0]){
say(0,1652,0);
}
say(0,1653,0);
say(0,1266,0);
finita();
loop=1; return(0);
}else{value[0]=(value[1180]==42);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
input_store('R', &value[0]);
special(3,&value[0]);
}else{value[0]=(anyof(857,745,-1));
if(!value[0]){
say(72,1723,0);
 if (loop) return(0);}}
say(64,1267,0);
 if (loop) return(0);}else{value[0]=(value[1180]==44);
value[0]|=(value[1180]==2);
if(value[0]){
p717();
if (loop) return (0);
}else{value[0]=(value[1180]==43);
if(value[0]){
p250();
if (loop) return (0);
}else{value[0]=(value[1180]==45);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
if(value[0]){
value[0]=(value[1198]==1);
if(value[0]){
p765();
if (loop) return (0);
}
say(64,1269,0);
 if (loop) return(0);}
special(11,&value[0]);
(*procs[726])();
if (loop) return (0);
}else{value[0]=(value[1180]==4);
if(value[0]){
value[0]=(value[1178]==0);
if(value[0]){
p765();
if (loop) return (0);
}else{
special(11,&value[0]);
(*procs[726])();
if (loop) return (0);
}
}else{value[0]=(value[1180]==47);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
move(575,-2489); if (loop) return(0);
}
value[0]=(anyof(857,745,-1));
if(value[0]){
say(64,1554,0);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==48);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
bitmod('s',evar(1179),12);
(*procs[806])();
if (loop) return (0);
}
value[0]=(anyof(857,745,-1));
if(value[0]){
say(64,1554,0);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==20);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(value[1178]==0);
value[0]|=(KEY(856));
if(value[0]){
move(642,-2426); if (loop) return(0);
}
if (anyof(745,857,-1))say(64,1554,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==49);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
say(0,1718,0);
move(702,-1);
p154();
if (loop) return (0);
}
value[0]=(anyof(745,857,-1));
if(value[0]){
say(64,3338,0);
 if (loop) return(0);}
say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==50);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
say(0,3419,0);
bitmod('s',evar(1192),4);
input_store('R', &value[0]);
value[0]=(KEY(777));
if(value[0]){
loop=1; return(0);
}
(*procs[738])();
if (loop) return (0);
}
if (anyof(745,857,-1))say(64,2319,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}else{value[0]=(value[1180]==51);
if(value[0]){
set('V',1180,'c',0,NULL,NULL);
value[0]=(KEY(856));
if(value[0]){
value[0]=(have(84,-1,-1));
if(value[0]){
set('L',0,'c',0,lval, lbts);
}else{
set('L',0,'c',1,lval, lbts);
}
apport(84,702);
bitmod('s',evar(1146),13);
say(64,3462,0);
 if (loop) return(0);}
if (anyof(745,857,-1))say(64,1554,0);
 if (loop) return(0);say(72,1723,0);
 if (loop) return(0);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
return 0;
}
int p7(void)
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
value[0]=(value[1178]==-6);
if(value[0]){
flush_command();
value[0]=(KEY(868));
if(value[0]){
(*procs[868])();
if (loop) return (0);
}
if (anyof(724,-1))say(64,1493,0);
 if (loop) return(0);value[0]=(KEY(730));
if(value[0]){
say(64,3493,0);
 if (loop) return(0);loop=1; return(0);
}
say(64,1451,0);
 if (loop) return(0);}
value[0]=(typed("dumpdata"));
if(value[0]){
set('V',1145,'c',0,NULL,NULL);
}
if (anyof(886,-1))say(64,3484,0);
 if (loop) return(0);value[0]=(value[1178]>1);
value[0]&=(723<=value[1145] && value[1145]<=904);
value[0]&=!(723<=value[1144] && value[1144]<=904);
if(value[0]){
special(29,&value[0]);
}
value[0]=(value[HERE]==218);
value[0]|=(value[HERE]==443);
if(value[0]){
if (anyof(737,-1))say(64,2800,0);
 if (loop) return(0);}else{
if (anyof(737,-1))say(64,1377,0);
 if (loop) return(0);}
value[0]=(value[1144]==725);
value[0]|=(value[1144]==726);
if(value[0]){
if (value[1144]<LPROC && value[1144]>= 0) (*procs[value[1144]])(); else pcall(value[1144]);
if (loop) return (0);
loop=1; return(0);
}
value[0]=(KEY(770));
if(value[0]){
if (anyof(754,-1))say(64,3393,0);
 if (loop) return(0);if (value[ARG1] == 770) {value[ARG1]=769; (void)fake(1,769);}
if (value[ARG2] == 770) {value[ARG2]=769; (void)fake(2,769);}
}
value[0]=(KEY(300));
if(value[0]){
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
if(value[0]){
say(72,3226,2);
 if (loop) return(0);}else{value[0]=(bitest(evar(1146),14));
if(value[0]){
say(72,3226,0);
 if (loop) return(0);}else{
say(72,3226,1);
 if (loop) return(0);}}}
value[0]=(value[1144]==300);
if(value[0]){
special(29,&value[0]);
}
set('V',1145,'c',0,NULL,NULL);
set('V',1178,'c',1,NULL,NULL);
}
if (value[ARG1] == 1080) value[ARG1]=129;
if (value[ARG2] == 1080) value[ARG2]=129;
value[0]=(value[166]>0);
if(value[0]){
set('V',1254,'e',166,NULL,NULL);
value[0]=(value[1144]==166);
value[0]|=(value[1145]==166);
if(value[0]){
set('L',0,'e',166,lval, lbts);
value[0]=(lval[0]==14);
if(value[0]){
lval[0]=13;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==24);
if(value[0]){
lval[0]=23;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==82);
if(value[0]){
lval[0]=81;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==140);
if(value[0]){
lval[0]=139;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==19);
value[0]|=(lval[0]==161);
value[0]|=(lval[0]==164);
value[0]|=(lval[0]==169);
if(value[0]){
lval[0]=8;lbts[0*VARSIZE]= -1;
}else{value[0]=(lval[0]==112);
if(value[0]){
value[0]=(KEY(766));
value[0]&=(have(110,-1,-1));
value[0]|=(value[112]==0);
if(value[0]){
lval[0]=110;lbts[0*VARSIZE]= -1;
}}}}}}}
if (value[ARG1] == 166) {value[ARG1]=lval[0]; (void)fake(1,lval[0]);}
if (value[ARG2] == 166) {value[ARG2]=lval[0]; (void)fake(2,lval[0]);}
}}
value[0]=(test("doall"));
if(!value[0]){
value[0]=(value[1178]==2);
value[0]&=!(value[1145]==-2);
value[0]&=!(value[1145]==-6);
value[0]&=!(value[1145]==-4);
value[0]&=!(value[1145]==-3);
if(value[0]){
set('E',166,'v',1145,NULL,NULL);
}else{value[0]=(bitest(evar(1144),0));
value[0]|=(904<=value[1144] && value[1144]<=1138);
if(value[0]){
set('E',166,'v',1144,NULL,NULL);
}}}
value[0]=(KEY(938));
if(value[0]){
(*procs[938])();
if (loop) return (0);
}
value[0]=(KEY(968));
if(value[0]){
value[0]=(KEY(822));
if(value[0]){
value[0]=(value[1144]==968);
if(value[0]){
special(29,&value[0]);
}
set('V',1178,'c',1,NULL,NULL);
}else{value[0]=(KEY(759));
if(value[0]){
say(64,2668,0);
 if (loop) return(0);}else{
say(64,1493,0);
 if (loop) return(0);}}}
value[0]=(value[1178]==1);
value[0]&=(KEY(759));
if(value[0]){
(*procs[759])();
if (loop) return (0);
}
value[0]=(KEY(1101));
if(value[0]){
value[0]=(isnear(125,-1,-1));
if(value[0]){
if (anyof(798,822,-1))say(64,3447,0);
 if (loop) return(0);if (value[ARG1] == 1101) {value[ARG1]=125; (void)fake(1,125);}
if (value[ARG2] == 1101) {value[ARG2]=125; (void)fake(2,125);}
}else{value[0]=(isnear(92,-1,-1));
if(value[0]){
value[0]=(anyof(798,822,-1));
if(value[0]){
bitmod('s',92,13);
say(64,1728,0);
 if (loop) return(0);}
if (value[ARG1] == 1101) {value[ARG1]=92; (void)fake(1,92);}
if (value[ARG2] == 1101) {value[ARG2]=92; (void)fake(2,92);}
}else{value[0]=(isnear(147,-1,-1));
if(value[0]){
if (anyof(798,822,-1))say(72,2033,1101);
 if (loop) return(0);if (value[ARG1] == 1101) {value[ARG1]=147; (void)fake(1,147);}
if (value[ARG2] == 1101) {value[ARG2]=147; (void)fake(2,147);}
}else{value[0]=(value[1144]==1101);
value[0]&=!(value[1145]==1101);
if(value[0]){
say(72,1902,1101);
 if (loop) return(0);}else{
say(72,1319,1101);
 if (loop) return(0);}}}}}
value[0]=(KEY(1097));
if(value[0]){
value[0]=(anyof(757,758,759,760,761,762,763,-1));
value[0]|=(value[1178]==1);
if(value[0]){
say(64,3432,0);
 if (loop) return(0);}else{
say(64,2007,0);
 if (loop) return(0);}}
p222();
if (loop) return (0);
value[0]=(keyword(759,973,-1));
if(value[0]){
set('V',1178,'c',1,NULL,NULL);
}
value[0]=(KEY(724));
value[0]&=(value[1178]>1);
if(value[0]){
if (value[ARG1] == 724) {value[ARG1]=766; (void)fake(1,766);}
if (value[ARG2] == 724) {value[ARG2]=766; (void)fake(2,766);}
}
if (anyof(843,-1))say(64,1937,0);
 if (loop) return(0);value[0]=(KEY(798));
value[0]&=!(bitest(evar(1178),8));
if(value[0]){
say(64,2388,0);
 if (loop) return(0);}
value[0]=(KEY(822));
if(value[0]){
value[0]=(KEY(937));
value[0]&=(314<=value[1146] && value[1146]<=316);
if(value[0]){
say(64,1941,0);
 if (loop) return(0);}
value[0]=(KEY(288));
if(value[0]){
value[0]=(643<=value[1146] && value[1146]<=648);
value[0]|=(651<=value[1146] && value[1146]<=667);
if(value[0]){
value[0]=(have(107,0,1));
if(value[0]){
say(72,3000,1);
 if (loop) return(0);}else{
say(72,3000,0);
 if (loop) return(0);}}
value[0]=(bitest(evar(1146),3));
if(value[0]){
say(64,2007,0);
 if (loop) return(0);}else{value[0]=(bitest(evar(1178),8));
if(value[0]){
say(72,3000,1);
 if (loop) return(0);}else{
say(72,3000,0);
 if (loop) return(0);}}
}else{value[0]=(bitest(evar(1178),8));
if(!value[0]){
value[0]=(irand(100)<5);
if(value[0]){
say(64,2388,0);
 if (loop) return(0);}
say(64,1325,0);
 if (loop) return(0);}}}
value[0]=(value[1178]>1);
value[0]&=(value[1145]==121);
value[0]&=!(anyof(812,809,794,-1));
if(value[0]){
p320(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
value[0]&=!(isnear(121,-1,-1));
if(value[0]){
say(12,1319,121);
value[0]=(isnear(127,-1,-1));
if(value[0]){
glue_text();
say(0,1896,0);
}
loop=1; return(0);
}}
value[0]=(KEY(1062));
if(value[0]){
value[0]=(500<=value[1146] && value[1146]<=509);
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=956; (void)fake(1,956);}
if (value[ARG2] == 1062) {value[ARG2]=956; (void)fake(2,956);}
}else{value[0]=(bitest(evar(1146),17));
value[0]|=(547<=value[1146] && value[1146]<=554);
value[0]|=(439<=value[1146] && value[1146]<=442);
value[0]|=(value[HERE]==572||value[HERE]==573);
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=120; (void)fake(1,120);}
if (value[ARG2] == 1062) {value[ARG2]=120; (void)fake(2,120);}
}else{value[0]=(value[HERE]==217);
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=121; (void)fake(1,121);}
if (value[ARG2] == 1062) {value[ARG2]=121; (void)fake(2,121);}
}else{value[0]=(isnear(127,-1,-1));
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=127; (void)fake(1,127);}
if (value[ARG2] == 1062) {value[ARG2]=127; (void)fake(2,127);}
}else{
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]!=0);
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=120; (void)fake(1,120);}
if (value[ARG2] == 1062) {value[ARG2]=120; (void)fake(2,120);}
}else{value[0]=(isnear(136,0,5));
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=122; (void)fake(1,122);}
if (value[ARG2] == 1062) {value[ARG2]=122; (void)fake(2,122);}
}else{value[0]=(isnear(119,0,4));
value[0]|=(isnear(123,0,4));
if(value[0]){
if (value[ARG1] == 1062) {value[ARG1]=121; (void)fake(1,121);}
if (value[ARG2] == 1062) {value[ARG2]=121; (void)fake(2,121);}
}}}}}}}}
value[0]=(KEY(122));
if(value[0]){
value[0]=(isnear(136,0,5));
if(value[0]){
bitmod('s',evar(1180),1);
}else{value[0]=(isnear(194,-1,-1));
value[0]&=(value[194]>=5);
if(value[0]){
say(64,2279,0);
 if (loop) return(0);}}}
value[0]=(KEY(173));
if(value[0]){
value[0]=(isnear(27,-1,-1));
value[0]|=(isnear(147,-1,-1));
if(value[0]){
bitmod('s',evar(1180),1);
}}
value[0]=(KEY(87));
value[0]&=(isnear(136,0,6));
if(value[0]){
bitmod('s',evar(1180),1);
}
value[0]=(KEY(949));
if(value[0]){
p854();
if (loop) return (0);
}
value[0]=(value[1178]>1);
value[0]&=(value[1144]==891);
if(value[0]){
if (value[ARG1] == 891) value[ARG1]=822;
if (value[ARG2] == 891) value[ARG2]=822;
}
value[0]=(KEY(102));
value[0]&=(value[HERE]==318);
value[0]&=!(isnear(102,-1,-1));
value[0]&=!(anyof(754,794,809,-1));
if(value[0]){
if (value[ARG1] == 102) value[ARG1]=977;
if (value[ARG2] == 102) value[ARG2]=977;
}
value[0]=(KEY(978));
value[0]&=(bitest(100,4));
if(value[0]){
value[0]=(643<=value[1146] && value[1146]<=648);
value[0]|=(651<=value[1146] && value[1146]<=663);
value[0]|=(value[HERE]==666);
value[0]&=!(anyof(766,793,-1));
if(!value[0]){
value[0]=(isnear(110,-1,-1));
value[0]&=!(isnear(100,-1,-1));
if(!value[0]){
if (value[ARG1] == 978) value[ARG1]=100;
if (value[ARG2] == 978) value[ARG2]=100;
}}}
value[0]=(KEY(978));
if(value[0]){
value[0]=(isnear(110,-1,-1));
value[0]|=(value[HERE]==447);
if(value[0]){
value[0]=(isnear(110,-1,-1));
if(value[0]){
if (anyof(822,-1))say(72,2805,0);
 if (loop) return(0);}else{
if (anyof(822,-1))say(72,2805,1);
 if (loop) return(0);}
say(0,3334,0);
if (anyof(765,772,800,816,-1))say(64,2464,0);
 if (loop) return(0);if (anyof(792,-1))say(64,1329,0);
 if (loop) return(0);value[0]=(value[1178]>1);
if(value[0]){
say(64,1403,0);
 if (loop) return(0);}}}
value[0]=(KEY(100));
value[0]&=!(have(100,-1,-1));
value[0]&=(643<=value[1146] && value[1146]<=648);
value[0]|=(651<=value[1146] && value[1146]<=663);
value[0]|=(value[HERE]==666);
if(value[0]){
if (value[ARG1] == 100) {value[ARG1]=978; (void)fake(1,978);}
if (value[ARG2] == 100) {value[ARG2]=978; (void)fake(2,978);}
}
value[0]=(KEY(1130));
value[0]&=(isnear(57,-1,-1));
if(value[0]){
if (value[ARG1] == 1130) value[ARG1]=57;
if (value[ARG2] == 1130) value[ARG2]=57;
}
value[0]=(keyword(779,915,-1));
if(value[0]){
say(64,2637,0);
 if (loop) return(0);}
value[0]=(KEY(1078));
if(value[0]){
value[0]=(482<=value[1146] && value[1146]<=487);
if(value[0]){
if (value[ARG1] == 1078) value[ARG1]=1079;
if (value[ARG2] == 1078) value[ARG2]=1079;
}else{value[0]=(isnear(143,-1,-1));
if(value[0]){
if (value[ARG1] == 1078) {value[ARG1]=143; (void)fake(1,143);}
if (value[ARG2] == 1078) {value[ARG2]=143; (void)fake(2,143);}
}else{
say(72,1319,1079);
 if (loop) return(0);}}}
if (anyof(741,-1))say(64,3473,0);
 if (loop) return(0);value[0]=(KEY(151));
value[0]&=(isnear(152,-1,-1));
if(value[0]){
if (anyof(767,787,804,-1))say(64,2806,0);
 if (loop) return(0);value[0]=(anyof(13,139,-1));
value[0]|=(value[HERE]==443);
if(!value[0]){
if (value[ARG1] == 151) {value[ARG1]=152; (void)fake(1,152);}
if (value[ARG2] == 151) {value[ARG2]=152; (void)fake(2,152);}
}}
value[0]=(KEY(44));
value[0]&=(isnear(45,-1,-1));
if(value[0]){
if (value[ARG1] == 44) {value[ARG1]=45; (void)fake(1,45);}
if (value[ARG2] == 44) {value[ARG2]=45; (void)fake(2,45);}
}
value[0]=(KEY(319));
value[0]&=!(value[HERE]==318||value[HERE]==319||value[HERE]==320);
value[0]&=(isnear(63,0,0));
if(value[0]){
if (value[ARG1] == 319) {value[ARG1]=63; (void)fake(1,63);}
if (value[ARG2] == 319) {value[ARG2]=63; (void)fake(2,63);}
}
value[0]=(KEY(171));
value[0]&=!(value[HERE]==210);
if(value[0]){
if (value[ARG1] == 171) value[ARG1]=7;
if (value[ARG2] == 171) value[ARG2]=7;
}
value[0]=(value[1145]==769);
if(value[0]){
value[0]=(value[HERE]==203||value[HERE]==204);
value[0]|=(isnear(52,-1,-1));
if(value[0]){
value[0]=(anyof(767,800,822,784,-1));
if(value[0]){
value[0]=(value[HERE]==203||value[HERE]==204);
if(value[0]){
say(72,2842,0);
 if (loop) return(0);}else{value[0]=(isnear(52,-1,-1));
if(value[0]){
say(72,2842,1);
 if (loop) return(0);}}
}else{value[0]=(value[1144]==769);
if(!value[0]){
say(64,1403,0);
 if (loop) return(0);}}
}else{
if (anyof(822,-1))say(76,1319,1145);
 if (loop) return(0);}}
value[0]=(isnear(19,-1,-1));
value[0]&=(value[575]==1);
value[0]&=(value[1262]==0);
if(value[0]){
p147();
if (loop) return (0);
say(0,1266,0);
}
value[0]=(value[1198]==6);
if(value[0]){
set('E',112,'c',0,NULL,NULL);
value[0]=(KEY(112));
if(value[0]){
value[0]=(test("doall"));
if(!value[0]){
set('E',112,'c',1,NULL,NULL);
}}}
value[0]=(KEY(1028));
value[0]&=(isnear(141,-1,-1));
if(value[0]){
if (value[ARG1] == 1028) {value[ARG1]=141; (void)fake(1,141);}
if (value[ARG2] == 1028) {value[ARG2]=141; (void)fake(2,141);}
}
value[0]=(value[1178]>1);
value[0]&=(value[1144]==124);
value[0]&=(have(124,-1,-1));
if(value[0]){
if (value[ARG1] == 124) {value[ARG1]=776; (void)fake(1,776);}
if (value[ARG2] == 124) {value[ARG2]=776; (void)fake(2,776);}
}
value[0]=(value[1178]==1);
if(value[0]){
value[0]=(KEY(765));
if(value[0]){
default_to(0,value[1146],3);
}else{value[0]=(KEY(766));
if(value[0]){
default_to(0,703,-1);
}}
}else{value[0]=(KEY(3));
if(value[0]){
p771();
if (loop) return (0);
value[0]=(value[1263]==-6);
if(value[0]){
say(76,3218,1263);
 if (loop) return(0);}
value[0]=(value[1263]==-3);
if(value[0]){
say(76,1934,1263);
 if (loop) return(0);}
value[0]=(value[1263]==-2);
if(value[0]){
flush_command();
say(76,1351,1263);
 if (loop) return(0);}
value[0]=(value[1263]==-4);
if(value[0]){
say(76,2536,1263);
 if (loop) return(0);}
value[0]=(anyof(766,755,-1));
if(value[0]){
p291();
if (loop) return (0);
p234(0,0);
if (loop) return (0);
default_to(1,703,-1);
}else{value[0]=(KEY(765));
if(value[0]){
value[0]=(value[HERE]==540);
value[0]&=!(isnear(138,-1,-1));
if(value[0]){
apport(138,value[1146]);
}
value[0]=(bitest(evar(1178),8));
if(value[0]){
p291();
if (loop) return (0);
default_to(1,value[1146],3);
}else{
say(72,1690,1);
 if (loop) return(0);}}}}}
value[0]=(KEY(168));
value[0]&=!(anyof(730,812,-1));
if(value[0]){
value[0]=(anyof(766,755,-1));
if(value[0]){
p291();
if (loop) return (0);
p234(0,1);
if (loop) return (0);
default_to(1,703,5);
}else{value[0]=(KEY(765));
if(value[0]){
p291();
if (loop) return (0);
default_to(1,value[1146],5);
}else{
say(64,1302,0);
 if (loop) return(0);}}}
value[0]=(keyword(759,1006,-1));
if(value[0]){
say(64,2821,0);
 if (loop) return(0);}
value[0]=(anyof(944,943,-1));
if(value[0]){
if (anyof(943,-1))say(64,2576,0);
 if (loop) return(0);say(64,2575,0);
 if (loop) return(0);}
value[0]=(anyof(719,718,717,716,833,-1));
if(!value[0]){
set('V',1195,'c',0,NULL,NULL);
}
value[0]=(value[1195]>=0);
if(value[0]){
value[1195] -= 1;
}
value[0]=(value[1193]==20);
if(value[0]){
bitmod('c',evar(1178),10);
}
value[0]=(KEY(725));
if(value[0]){
(*procs[725])();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(value[1178]==0);
if(value[0]){
loop=1; return(0);
}
value[0]=(value[1144]==-2);
value[0]|=(value[1144]==-3);
value[0]|=(value[1144]==-4);
if(value[0]){
value[0]=(value[1144]==-2);
if(value[0]){
flush_command();
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(irand(100)<33);
if(value[0]){
say(12,1350,1144);
}else{
say(12,1349,1144);
}
}else{
say(12,1350,1144);
}
value[0]=(bitest(evar(1178),10));
if(value[0]){
say(0,1856,0);
bitmod('c',evar(1178),10);
}
}else{value[0]=(value[1144]==-3);
if(value[0]){
say(12,1934,1144);
}else{
say(12,2536,1144);
value[0]=(bitest(evar(1178),10));
if(value[0]){
say(0,1856,0);
bitmod('c',evar(1178),10);
}}}
p771();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(KEY(730));
if(value[0]){
value[0]=(704<=value[1145] && value[1145]<=722);
if(!value[0]){
(*procs[730])();
if (loop) return (0);
}}
value[0]=(KEY(3));
value[0]&=!(KEY(730));
if(value[0]){
p125();
if (loop) return (0);
}
value[0]=(value[1178]>1);
if(value[0]){
value[0]=(value[1145]==-2);
value[0]|=(value[1145]==-3);
value[0]|=(value[1145]==-4);
value[0]|=(value[1145]==-5);
if(value[0]){
value[0]=(723<=value[1144] && value[1144]<=743);
if(!value[0]){
value[0]=(value[1145]==-3);
if(value[0]){
say(12,1934,1145);
}else{value[0]=(value[1145]==-2);
if(value[0]){
flush_command();
say(12,1351,1145);
value[0]=(bitest(evar(1178),10));
if(value[0]){
say(0,1856,0);
bitmod('c',evar(1178),10);
}
}else{value[0]=(value[1145]==-5);
value[0]&=(value[1198]>2);
if(value[0]){
say(76,2535,1145);
 if (loop) return(0);}else{
say(12,2536,1145);
value[0]=(bitest(evar(1178),10));
if(value[0]){
say(0,1856,0);
bitmod('c',evar(1178),10);
}}}}
p771();
if (loop) return (0);
loop=1; return(0);
}}}
set('V',1148,'v',1146,NULL,NULL);
set('V',1150,'v',1146,NULL,NULL);
set('V',1149,'c',0,NULL,NULL);
set('V',1151,'c',0,NULL,NULL);
set('V',1152,'c',0,NULL,NULL);
set('V',1251,'c',0,NULL,NULL);
set('V',1255,'c',0,NULL,NULL);
value[0]=(KEY(139));
if(value[0]){
value[0]=(isnear(13,-1,-1));
value[0]|=(isnear(14,-1,-1));
if(value[0]){
if (value[ARG1] == 139) value[ARG1]=13;
if (value[ARG2] == 139) value[ARG2]=13;
}}
value[0]=(KEY(13));
if(value[0]){
value[0]=(isnear(140,-1,-1));
value[0]&=(value[139]==2);
value[0]|=(isnear(139,-1,-1));
if(value[0]){
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
}}
value[0]=(KEY(51));
if(value[0]){
value[0]=(isnear(104,-1,-1));
if(value[0]){
if (value[ARG1] == 51) {value[ARG1]=104; (void)fake(1,104);}
if (value[ARG2] == 51) {value[ARG2]=104; (void)fake(2,104);}
}else{value[0]=(isnear(105,-1,-1));
if(value[0]){
if (value[ARG1] == 51) {value[ARG1]=105; (void)fake(1,105);}
if (value[ARG2] == 51) {value[ARG2]=105; (void)fake(2,105);}
}}}
value[0]=(KEY(928));
value[0]&=(isnear(149,-1,-1));
value[0]&=!(value[HERE]==491);
if(value[0]){
if (value[ARG1] == 928) value[ARG1]=149;
if (value[ARG2] == 928) value[ARG2]=149;
}
value[0]=(KEY(959));
value[0]&=(isnear(147,-1,-1));
if(value[0]){
value[0]=(value[1384]<3);
if(value[0]){
say(0,1384,0);
}
value[0]=(value[1384]==1);
if(value[0]){
loop=1; return(0);
}
if (value[ARG1] == 959) {value[ARG1]=147; (void)fake(1,147);}
if (value[ARG2] == 959) {value[ARG2]=147; (void)fake(2,147);}
}
value[0]=(KEY(966));
if(value[0]){
value[0]=(isnear(8,-1,-1));
value[0]|=(isnear(19,-1,-1));
value[0]|=(isnear(161,-1,-1));
value[0]|=(isnear(164,-1,-1));
if(value[0]){
if (value[ARG1] == 966) {value[ARG1]=8; (void)fake(1,8);}
if (value[ARG2] == 966) {value[ARG2]=8; (void)fake(2,8);}
}}
value[0]=(KEY(960));
if(value[0]){
value[0]=(value[HERE]==318);
value[0]&=(1<=318 && 318<=2);
value[0]|=(606<=value[1146] && value[1146]<=617);
value[0]|=(587<=value[1146] && value[1146]<=593);
value[0]|=(value[HERE]==627);
if(value[0]){
if (value[ARG1] == 960) value[ARG1]=593;
if (value[ARG2] == 960) value[ARG2]=593;
}}
value[0]=(keyword(108,109,-1));
if(value[0]){
if (value[ARG1] == 108) {value[ARG1]=765; (void)fake(1,765);}
if (value[ARG2] == 108) {value[ARG2]=765; (void)fake(2,765);}
}
value[0]=(keyword(751,759,-1));
if(value[0]){
value[1211] += 1;
value[0]=(value[1211]==5);
if(value[0]){
value[0]=(value[1144]==759);
if(value[0]){
say(12,2000,1144);
}else{
say(12,2000,1145);
}}}
value[0]=(value[1198]==8);
if(value[0]){
p820();
if (loop) return (0);
}
value[0]=(value[1178]>1);
value[0]&=(1106<=value[1145] && value[1145]<=1126);
if(value[0]){
p754();
if (loop) return (0);
}
value[0]=(KEY(905));
value[0]&=(anyof(759,757,-1));
if(value[0]){
value[0]=(334<=value[1146] && value[1146]<=350);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}else{value[0]=(value[HERE]==332||value[HERE]==333||value[HERE]==352||value[HERE]==353);
if(value[0]){
say(64,2449,0);
 if (loop) return(0);}else{
say(64,1424,0);
 if (loop) return(0);}}}
value[0]=(KEY(730));
value[0]&=(value[1178]>1);
value[0]&=!(704<=value[1145] && value[1145]<=722);
if(!value[0]){
set('V',1224,'c',0,NULL,NULL);
value[0]=(value[HERE]==445);
if(value[0]){
if (value[ARG1] == 761) value[ARG1]=749;
if (value[ARG2] == 761) value[ARG2]=749;
}
value[0]=(bitest(evar(1146),7));
value[0]&=!(bitest(evar(1146),18));
value[0]&=(have(102,-1,-1));
value[0]&=!(KEY(822));
if(value[0]){
value[0]=(744<=value[1144] && value[1144]<=753);
if(value[0]){
set('V',1224,'v',1144,NULL,NULL);
}else{
value[0]=(value[1178]>1);
value[0]&=(744<=value[1145] && value[1145]<=753);
if(value[0]){
set('V',1224,'v',1145,NULL,NULL);
}}
value[0]=(value[1224]>0);
if(value[0]){
p152(*bitword(1224),value[1224]);
if (loop) return (0);
}}
value[0]=(519<=value[1146] && value[1146]<=538);
if(value[0]){
p476();
if (loop) return (0);
}
value[0]=(KEY(1127));
if(value[0]){
value[0]=(value[HERE]==284);
if(value[0]){
value[0]=(anyof(766,793,-1));
value[0]&=(have(63,-1,-1));
if(value[0]){
if (value[ARG1] == 1127) {value[ARG1]=63; (void)fake(1,63);}
if (value[ARG2] == 1127) {value[ARG2]=63; (void)fake(2,63);}
}else{value[0]=(anyof(863,864,765,-1));
value[0]&=(ishere(63,-1,-1));
if(value[0]){
if (value[ARG1] == 1127) {value[ARG1]=63; (void)fake(1,63);}
if (value[ARG2] == 1127) {value[ARG2]=63; (void)fake(2,63);}
}}
}else{
if (value[ARG1] == 1127) {value[ARG1]=63; (void)fake(1,63);}
if (value[ARG2] == 1127) {value[ARG2]=63; (void)fake(2,63);}
}}
if (value[1146]<LPROC && value[1146]>= 0) (*procs[value[1146]])(); else pcall(value[1146]);
if (loop) return (0);
}
value[0]=(KEY(1131));
if(value[0]){
value[0]=(isnear(102,-1,-1));
value[0]&=(isnear(100,-1,-1));
if(value[0]){
set('L',2,'c',0,lval, lbts);
value[0]=(have(102,-1,-1));
if(value[0]){
set('L',2,'c',1,lval, lbts);
}
value[0]=(have(100,-1,-1));
if(value[0]){
lval[2] += 1;
}
value[0]=(lval[2]==1);
if(value[0]){
value[0]=(KEY(765));
if(value[0]){
value[0]=(ishere(102,-1,-1));
if(value[0]){
if (value[ARG1] == 1131) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1131) {value[ARG2]=102; (void)fake(2,102);}
}else{
if (value[ARG1] == 1131) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1131) {value[ARG2]=100; (void)fake(2,100);}
}
}else{value[0]=(anyof(766,793,-1));
if(value[0]){
value[0]=(have(102,-1,-1));
if(value[0]){
if (value[ARG1] == 1131) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1131) {value[ARG2]=102; (void)fake(2,102);}
}else{
if (value[ARG1] == 1131) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1131) {value[ARG2]=100; (void)fake(2,100);}
}}}
}else{
say(64,2818,0);
 if (loop) return(0);}
}else{value[0]=(isnear(102,-1,-1));
if(value[0]){
if (value[ARG1] == 1131) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1131) {value[ARG2]=102; (void)fake(2,102);}
}else{value[0]=(isnear(100,-1,-1));
if(value[0]){
if (value[ARG1] == 1131) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1131) {value[ARG2]=100; (void)fake(2,100);}
}}}}
value[0]=(KEY(762));
value[0]&=(value[1178]==2);
if(value[0]){
value[0]=(anyof(778,763,755,-1));
if(!value[0]){
say(64,2587,0);
 if (loop) return(0);}}
value[0]=(value[1198]==8);
if(value[0]){
p820();
if (loop) return (0);
}
value[0]=(bitest(evar(1144),1));
if(value[0]){
value[0]=(value[HERE]==value[1144]);
if(value[0]){
say(64,1425,0);
 if (loop) return(0);}else{
say(64,1424,0);
 if (loop) return(0);}}
value[0]=(value[1198]==6);
value[0]&=(value[1178]>1);
if(value[0]){
p805();
if (loop) return (0);
value[0]=(anyof(110,1134,-1));
if(value[0]){
p729();
if (loop) return (0);
}
if (anyof(1134,1135,1039,-1))say(64,2006,0);
 if (loop) return(0);}
value[0]=(KEY(76));
if(value[0]){
value[0]=(value[HERE]==284||value[HERE]==461||value[HERE]==512);
if(value[0]){
apport(76,value[1146]);
bitmod('s',76,4);
}}
if (anyof(1134,1135,-1))say(64,2007,0);
 if (loop) return(0);if (anyof(851,760,-1))say(64,1297,0);
 if (loop) return(0);value[0]=(KEY(206));
if(value[0]){
p184();
if (loop) return (0);
loop=1; return(0);
}
value[0]=(KEY(72));
if(value[0]){
value[0]=(bitest(evar(1218),5));
if(value[0]){
say(72,1753,1);
 if (loop) return(0);}
say(72,1753,0);
 if (loop) return(0);}
value[0]=(KEY(933));
if(value[0]){
value[0]=(value[565]==5);
if(value[0]){
say(72,2524,0);
 if (loop) return(0);}
say(72,2524,1);
 if (loop) return(0);}
value[0]=(KEY(1076));
if(value[0]){
value[0]=(value[1178]==1);
value[0]|=(anyof(765,794,798,822,-1));
if(value[0]){
say(64,3213,0);
 if (loop) return(0);}}
value[0]=(anyof(907,906,-1));
if(value[0]){
value[0]=(bitest(95,4));
if(value[0]){
value[0]=(KEY(907));
if(value[0]){
value[1154]=907;*bitword(1154)= -1;
}else{
value[1154]=906;*bitword(1154)= -1;
}
value[0]=(have(95,0,2));
if(value[0]){
say(76,2278,1154);
 if (loop) return(0);}
say(76,1319,1154);
 if (loop) return(0);}else{
say(64,2007,0);
 if (loop) return(0);}}
value[0]=(keyword(92,87,-1));
value[0]&=(isnear(92,-1,-1));
value[0]&=(isnear(87,-1,-1));
if(value[0]){
value[0]=(bitest(92,14));
if(value[0]){
say(64,3327,0);
 if (loop) return(0);}
value[0]=(bitest(139,4));
if(value[0]){
bitmod('s',92,14);
say(0,3323,0);
say(64,1266,0);
 if (loop) return(0);}
say(64,1360,0);
 if (loop) return(0);}
value[0]=(KEY(1081));
if(value[0]){
value[0]=(438<=value[1146] && value[1146]<=445);
if(value[0]){
say(72,3372,0);
 if (loop) return(0);}else{value[0]=(547<=value[1146] && value[1146]<=554);
if(value[0]){
say(72,3372,1);
 if (loop) return(0);}else{value[0]=(value[HERE]==446||value[HERE]==199);
if(value[0]){
say(64,3371,0);
 if (loop) return(0);}}}
say(72,1319,1081);
 if (loop) return(0);}
value[0]=(bitest(evar(1146),12));
value[0]|=(value[HERE]==502);
if(value[0]){
value[0]=(KEY(956));
if(value[0]){
value[0]=(KEY(765));
value[0]&=(bitest(139,4));
if(value[0]){
say(72,2034,1);
 if (loop) return(0);}else{value[0]=(KEY(822));
if(value[0]){
say(64,3060,0);
 if (loop) return(0);}else{
say(32,87,0);
loop=1; return(0);
}}}
value[0]=(keyword(765,120,-1));
value[0]|=(KEY(796));
if(value[0]){
value[0]=(bitest(139,4));
if(value[0]){
say(72,2034,1);
 if (loop) return(0);}else{
say(72,2034,0);
 if (loop) return(0);}}}
value[0]=(KEY(149));
value[0]&=(isnear(123,0,1));
if(value[0]){
value[0]=(value[1254]==123);
value[0]|=!(isnear(149,-1,-1));
if(value[0]){
set('E',166,'v',1254,NULL,NULL);
if (anyof(822,-1))say(64,3232,0);
 if (loop) return(0);value[0]=(KEY(800));
if(value[0]){
if (value[ARG1] == 149) value[ARG1]=123;
if (value[ARG2] == 149) value[ARG2]=123;
(*procs[767])();
if (loop) return (0);
}}
bitmod('s',evar(1180),1);
}
if (value[1144]<LPROC && value[1144]>= 0) (*procs[value[1144]])(); else pcall(value[1144]);
if (loop) return (0);
p771();
if (loop) return (0);
flush_command();
value[0]=(bitest(evar(1144),0));
if(value[0]){
set('V',1251,'c',0,NULL,NULL);
value[0]=(value[1144]==120);
if(value[0]){
p321(0,0);
if (loop) return (0);
value[0]=(value[1251]==0);
value[0]&=(bitest(evar(1146),17));
if(value[0]){
set('V',1251,'c',1,NULL,NULL);
}}
value[0]=(KEY(120));
value[0]&=(value[1251]>0);
value[0]|=(isnear(value[1144],-1,-1));
if(!value[0]){
value[0]=(bitest(evar(1144),4));
if(value[0]){
say(76,1319,1144);
 if (loop) return(0);}else{
say(64,2007,0);
 if (loop) return(0);}}}
p39();
if (loop) return (0);
loop=1; return(0);
return 0;
}
int p8(void)
{
if (anyof(1009,924,-1))say(64,2007,0);
 if (loop) return(0);return 0;
}
