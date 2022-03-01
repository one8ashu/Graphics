#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
#include<math.h>
void wellcome(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int q,w;
q=getmaxx()/2;
w=getmaxy()/2;
for(int i=0;i<80;++i){
delay(20);
setcolor(i/7);
settextstyle(10,HORIZ_DIR,4);
outtextxy(40,w-30,"COSMIC-BASKETBALL");
outtextxy(40,w-90,"___________________"); outtextxy(40,w-10,"___________________"); }
}
//******************************planets***************************************


void planets(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int q,w,u=1;
//q=getmaxx()/2;
w=getmaxy()/2;
//the planet loop
for(int r=0;r<17;++r){
if(r>3){
cleardevice();
u+=30;
//sun
for(int i=0;i<200;i++){
setcolor(6);
circle(-110-u,w,70+i);     }
//earth
for(int t=0;t<30;++t){
if(t%4==0){
setcolor(1)     ;
circle(300-u,w,t); }
if(t%4!=0){
setcolor(2)     ;
circle(300-u,w,t); }
}
//mars
for(int r=0;r<20;++r)
circle(240-u,w,r);
//mercury
for(int f=0;f<13;++f)
circle(200-u,w,f);
//venus
for(int o=0;o<27;++o){
setcolor(4);
circle(367-u,w,o);      }
//cosmic belt
for(int z=0;z<20;++z)       {
setcolor(7);
if(z%2==0)
arc(0-u,w,360,0,400+z);   }
//jupiter
for(int y=0;y<50;++y)  {
if(y%4==0){
setcolor(6)     ;
circle(500-u,w,y); }
if(y%4!=0){
setcolor(4)     ;
circle(500-u,w,y); }      }
//sattern
for(int x=0;x<45;++x){
if(x<34){
setcolor(7)     ;
circle(600-u,w,x); }
if(x>40){
setcolor(8)     ;
circle(600-u,w,x); }     }
//uranus
for(int q1=0;q1<30;++q1){
setcolor(1);
circle(730-u,w,q1);}
//NEPTUNE
for(int tt=0;tt<30;++tt){
if(tt%4==0){
setcolor(1)     ;
circle(800-u,w,tt); }
if(tt%4!=0){
setcolor(8)     ;
circle(800-u,w,tt); }}   }
delay(30);
}
cleardevice();
settextstyle(4,HORIZ_DIR,4);
setcolor(13);
outtextxy(10,w,"NOW ENTER THE NO. OF PLANET");
setcolor(8);
outtextxy(40,w+80,"ON WHICH YOU WANT TO PLAY");
getch();
}
//*********************************win******************************

void win(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int q,w;
q=getmaxx();
//w=getmaxy()/2;
for(int t=0;t<80;++t){
setcolor(t/7);
settextstyle(10,HORIZ_DIR,4);
outtextxy(220,100,"WOW");
outtextxy(240,120,"____");
settextstyle(10,HORIZ_DIR,3);
outtextxy(30,200,"UNIVERSAL FORCE IS WITH YOU");
settextstyle(10,HORIZ_DIR,4);
outtextxy(20,220,"_____________________");
settextstyle(10,HORIZ_DIR,4);
outtextxy(10,10,"$$$$$$ YOU WON $$$$$$");}
getch();
}
//******************LOOSE FUNCTION*****************
void loose()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int qw,wg;
qw=getmaxx();
//w=getmaxy()/2;
for(int ti=0;ti<80;++ti){
setcolor(ti/7);
settextstyle(5,HORIZ_DIR,4);
outtextxy(40,60,"KEEP TRYING IT");
outtextxy(200,120,"____");
settextstyle(10,HORIZ_DIR,3);
outtextxy(30,200,"BETTER LUCK NEXT TIME");
settextstyle(10,HORIZ_DIR,4);
outtextxy(20,220,"____________");
settextstyle(10,HORIZ_DIR,4);
outtextxy(10,10,"..OOPS ! YOU HAVE MISSED..");}
getch();
}
//*************************basket***********************

int basket()
{ int counter=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int q,xx,y,ll=0,lk=8,kl;
xx=getmaxx();
y=getmaxy();
randomize();
q=random(500);
for(int r=0;r<3;r++)
{
setfillstyle(1,3);
setcolor(4);
rectangle(q,50,150+q,110);//
rectangle(36+q,70,112+q,110);
for(int p=0;p<150;++p){
if(p<36||p>112){
line(q+p,50,q+p,110);}
else{line(q+p,50,q+p,70);}}
setcolor(3);
circle(70+q,80,2);
char x;
int r,o=50,m=0;
r=getmaxy();
setcolor(4);
for(int i=0;i<2;--i){
cin>>x;
if(x=='y')    {
break;          }
cleardevice();
rectangle(q,50,150+q,110);//
rectangle(36+q,70,112+q,110);
for(int p=0;p<150;++p){
if(p<36||p>112){
line(q+p,50,q+p,110);}
else{line(q+p,50,q+p,70);}}
setcolor(-i/1);
if(-i%16==0)
setcolor(-i+1);
circle(70+q,80,2);
if(x=='d'){
o+=5     ;
circle(o,r-49,5);circle(o,r-49,20);  }
if(x=='a')  {
o-=10;
circle(o,r-49,5);circle(o,r-49,20);  }
}
for(int a=0;a<172;++a){
cleardevice();
if(a%25==0){
m-=3;
cleardevice();
setcolor(4);
rectangle(q,50,150+q,110);//
rectangle(36+q,70,112+q,110);
for(int p=0;p<150;++p){
if(p<36||p>112){
line(q+p,50,q+p,110);}
else{line(q+p,50,q+p,70);}}
setcolor(a/10);
circle(70+q,80,2);
circle(o,r-49-2*a,5);circle(o,r-49-2*a,20+m);
delay(15);
}
if(a%25!=0){
m+=3;
cleardevice();
setcolor(a/10);
rectangle(q,50,150+q,110);//
rectangle(36+q,70,112+q,110);
for(int p=0;p<150;++p){
if(p<36||p>112){
line(q+p,50,q+p,110);}
else{line(q+p,50,q+p,70);}}
for(int qq=0;qq<40;++qq){
setcolor(qq/9);
line(q-qq,0,q-qq,y);
line(q+150+qq,0,q+150+qq,y);    }
setcolor(3);
circle(70+q,80,2);
circle(o,r-11-2*a,5);
circle(o,r-11-2*a,20+m);
setcolor(a/8);
circle(o,r-11-2*a,10);
circle(o,r-11-2*a,12);
circle(o,r-11-2*a,14);
circle(o,r-11-2*a,16);
circle(o,r-11-2*a,18);
circle(o,r-11-2*a,20);
circle(o,r-11-2*a,22);
setcolor(a/10);
circle(o,r-11-2*a,11);
circle(o,r-11-2*a,13);
circle(o,r-11-2*a,15);
circle(o,r-11-2*a,17);
circle(o,r-11-2*a,19);
circle(o,r-11-2*a,21);
delay(10);
m=0;
}
}
kl=0;
if(o<q+70+lk&&o>q+70-lk){
for(int ww=0;ww<50;++ww)    {delay(10);
circle(o,r-50-2*a+ww,11);
circle(o,r-50-2*a+ww,13);
circle(o,r-50-2*a+ww,15);
circle(o,r-50-2*a+ww,17);
circle(o,r-50-2*a+ww,19);
circle(o,r-50-2*a+ww,21);
setcolor(ww/3); ll+=1;
kl=1;   }}
if(ll>0)
lk-=2;
if(kl==1){
counter++;
win(); }
else
loose();
cleardevice();
}
return counter;
}





//******************************main function********************
void main(){

char namer[50];
int gd=DETECT,gm,rar=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
wellcome();
cleardevice();
fstream fin,fout;
fin.open("Planets.txt",ios::in|ios::out|ios::app);
cout<<"\nEnter Your Name:";
gets(namer);
fin<<namer<<"\n";
fin.close();
planets();
start:
cleardevice();
int q,w,u,op,io,yy;
w=getmaxy()/2;
u=getmaxy()/4;
op=w+u;
yy=getmaxx()/2;
//sun
for(int i=0;i<200;i++){
setcolor(6);
circle(-110,w,70+i);     }
//earth
for(int t=0;t<30;++t){
settextstyle(4,HORIZ_DIR,2);
outtextxy(350,u+40,"3-EARTH");
if(t%4==0){
setcolor(1)     ;
circle(390,u,t); }
if(t%4!=0){
setcolor(2)     ;
circle(390,u,t); }
}
//mars
for(int r=0;r<20;++r)  {
settextstyle(4,HORIZ_DIR,2);
outtextxy(270,u-60,"2-MARS");
circle(308,u,r);        }
//mercury
for(int f=0;f<13;++f)  {
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(200,u+23,"1-MERCURY");
circle(240,u,f);        }
//venus
for(int o=0;o<27;++o){
setcolor(4);
settextstyle(4,HORIZ_DIR,2);
outtextxy(487,u+33,"4-VENUS");
circle(487,u,o);      }
//jupiter
for(int y=0;y<50;++y)  {
settextstyle(4,HORIZ_DIR,2);
outtextxy(190,op+60,"5-JUPITER");
if(y%4==0){
setcolor(6)     ;
circle(260,op,y); }
if(y%4!=0){
setcolor(4)     ;
circle(260,op,y); }      }
//sattern
for(int x=0;x<45;++x){
settextstyle(4,HORIZ_DIR,2);
outtextxy(333,op+55,"6-SATTERN");
if(x<34){
setcolor(7)     ;
circle(385,op,x); }
if(x>40){
setcolor(8)     ;
circle(385,op,x); }     }
//uranus
for(int q1=0;q1<30;++q1){
settextstyle(4,HORIZ_DIR,2);
outtextxy(440,op-60,"7-UNANUS");
setcolor(1);
circle(490,op,q1);}
//NEPTUNE
for(int tt=0;tt<30;++tt){
settextstyle(4,HORIZ_DIR,2);
outtextxy(530,op+40,"8-NEPTUNE");
if(tt%4==0){
setcolor(1)     ;
circle(580,op,tt); }
if(tt%4!=0){
setcolor(8)     ;
circle(580,op,tt); } }
cin>>io;
switch(io){
case 1  :
for(int f=0;f<663;++f)  {
settextstyle(4,HORIZ_DIR,2);
setcolor(0);
outtextxy(200,u+23,"1-MERCURY");
setcolor(5);
circle(240,u,f);        }
break;
case  2 :
for(int r=0;r<660;++r)  {
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(270,u-60,"2-MARS");
setcolor(2);
circle(308,u,r);        }
break;
case   3:
for(int t=0;t<660;++t){
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(350,u+40,"3-EARTH");
if(t%4==0){
setcolor(1)     ;
circle(390,u,t); }
if(t%4!=0){
setcolor(2)     ;
circle(390,u,t); }
}
break;
case 4  :
for(int o=0;o<667;++o){
settextstyle(4,HORIZ_DIR,2);
setcolor(11);
outtextxy(487,u+33,"4-VENUS");
setcolor(4);
circle(487,u,o);      }
break;
case  5 :
for(int y=0;y<660;++y)  {
settextstyle(4,HORIZ_DIR,2);
setcolor(0);
outtextxy(190,op+60,"5-JUPITER");
if(y%4==0){
setcolor(6)     ;
circle(260,op,y); }
if(y%4!=0){
setcolor(4)     ;
circle(260,op,y); }      }
break;
case   6:
for(int x=0;x<665;++x){
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(333,op+55,"6-SATTERN");
if(x<34){
setcolor(7)     ;
circle(385,op,x); }
if(x>40){
setcolor(8)     ;
circle(385,op,x); }     }
break;
case 7  :
for(int q1=0;q1<660;++q1){
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(440,op-60,"7-UNANUS");
setcolor(1);
circle(490,op,q1);}
break;
case  8 :
for(int tt=0;tt<680;++tt){
settextstyle(4,HORIZ_DIR,2);
setcolor(5);
outtextxy(530,op+40,"8-NEPTUNE");
if(tt%4==0){
setcolor(1)     ;
circle(580,op,tt); }
if(tt%4!=0){
setcolor(8)     ;
circle(580,op,tt); } }
break;
default : goto start;}
for(int iu=0;iu<500;++iu){
setcolor(0);
circle(yy,w,iu);}
rar=basket();
cleardevice();
fout.open("Score.txt",ios::out|ios::in|ios::app);
fout<<rar<<"\n\n";
fout.close();
fin.open("Planets.txt",ios::in);
fout.open("Score.txt",ios::in);
while(!fin.eof())
{
if(!fin.eof())  {
fin>>namer;
cout<<"Player:"<<namer<<"\n";       }
else break;
}
fin.close();
while(!fout.eof()){
if(!fout.eof())    {
fout>>rar;

cout<<"Score:"<<rar<<"\n";   }
else break;
}
fout.close();
getch();
}

