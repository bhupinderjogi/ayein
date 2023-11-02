//TRANSLATION//
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int main(){
int gm,gd=DETECT,x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt;
printf("\t program for basic transaction");
printf("\n\t Enter the Points of Triangle");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
printf("\n Enter the translation Factor");
scanf("%d%d",&xt,&yt);
initgraph(&gd,&gm,"");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=x1+xt;
nx2=x2+xt;
nx3=x3+xt;
ny1=y1+yt;
ny2=y2+yt;
ny3=y3+yt;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(50000);
closegraph();
return 0;
}

//ROTATION//
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
int main(){
int gm,gd=DETECT,x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt,c,r;
float t;
printf("\t program for basic transaction");
printf("\n\t Enter the Points of Triangle");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
printf("\n Enter the angle of rotation");
scanf("%d",&r);
initgraph(&gd,&gm,"");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
t=3.14*r/180;
nx1=abs(x1*cos(t)-y1*sin(t));
nx2=abs(x2*cos(t)-y2*sin(t));
nx3=abs(x3*cos(t)-y3*sin(t));
ny1=abs(x1*sin(t)+y1*cos(t));
ny2=abs(x2*sin(t)+y2*cos(t));
ny3=abs(x3*sin(t)+y3*cos(t));
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(50000);
closegraph();
return 0;
}

//SCALING//
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int main(){
int gm,gd=DETECT,x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt,c,r,sx,sy;
float t;
printf("\t program for basic transaction");
printf("\n\t Enter the Points of Triangle");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
printf("\n Enter the scaling Factor");
scanf("%d%d",&xt,&yt);
initgraph(&gd,&gm,"");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=x1*xt;
nx2=x2*xt;
nx3=x3*xt;
ny1=y1*yt;
ny2=y2*yt;
ny3=y3*yt;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(50000);
closegraph();
return 0;
}

//SCALING//
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int main(){
int gm,gd=DETECT,x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt,c,r,sx,sy;
float t;
printf("\t program for basic transaction");
printf("\n\t Enter the Points of Triangle");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
printf("\n Enter the scaling Factor");
scanf("%d%d",&xt,&yt);
initgraph(&gd,&gm,"");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=x1*xt;
nx2=x2*xt;
nx3=x3*xt;
ny1=y1*xt;
ny2=y2*xt;
ny3=y3*xt;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(50000);
closegraph();
return 0;
}

//FLOOD FILL//
#include<stdio.h>
#include<graphics.h>
void floodFill(int x,int y,int oldcolor,int newcolor)
{
if(getpixel(x,y) == oldcolor)
{
putpixel(x,y,newcolor);
floodFill(x+1,y,oldcolor,newcolor);
floodFill(x,y+1,oldcolor,newcolor);
floodFill(x-1,y,oldcolor,newcolor);
floodFill(x,y-1,oldcolor,newcolor);
}
}
//getpixel(x,y) gives the color of specified pixel
int main()
{
int gm,gd=DETECT,radius;
int x,y;
printf("Enter x and y positions for circle\n");
scanf("%d%d",&x,&y);
printf("Enter radius of circle\n");
scanf("%d",&radius);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
circle(x,y,radius);
floodFill(x,y,0,14);
delay(5000);
closegraph();
return 0;
}

//BOUNDARY FILL//
#include<stdio.h>
#include<graphics.h>
void boundaryfill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}
//getpixel(x,y) gives the color of specified pixel
int main()
{
int gm,gd=DETECT,radius;
int x,y;
printf("Enter x and y positions for circle\n");
scanf("%d%d",&x,&y);
printf("Enter radius of circle\n");
scanf("%d",&radius);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
circle(x,y,radius);
boundaryfill(x,y,4,15);
delay(5000);
closegraph();
return 0;
}


//CHARACTER REGEN//
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm, i,j;
int a[20][20]=
{
{0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0},
{0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0}};

initgraph(&gd,&gm, "");
for(i=0;i<19;i++)
{
for(j=0;j<19;j++)
{
if(a[i][j]==1)
putpixel(200+j, 200+i, WHITE);
}
}
getch();
return 0;
}


//BEZIER//
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void bezier(int x[4],int y[4])
{
int gd=DETECT,gm;
int i;
double p;
initgraph(&gd,&gm,"");
for(p=0.0;p<1.0;p+=0.0005)
{
double xt=pow (1-p,3) * x[0] + 3*p*pow (1-p,2)*x[1]+
3*pow (p,2)*(1-p)*x[2]+pow (p,3)*x[3];
double yt=pow (1-p,3)*y[0]+3*p*pow (1-p,2)*y[1]+
3*pow (p,2)*(1-p)*y[2]+pow (p,3)*y[3];
putpixel(xt,yt,WHITE);
}
for(i=0;i<4;i++)
putpixel(x[i],y[i],YELLOW);
getch();
closegraph();
return;
}
int main()
{
int x[4],y[4];
int i;
printf("Enter the x- and y-coordinates of the four control points:\n ");
for(i=0;i<4;i++)
scanf("%d%d",&x[i],&y[i]);
bezier(x,y);
return 0;
}

//DDA THIN
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>

int main() {
int gdriver = DETECT, gmode;
int i, x, y, x1, y1, x2, y2, dx, dy, length, xincr, yincr;

printf("Enter the starting coordinates: ");
scanf("%d%d", &x1, &y1);
printf("Enter the ending coordinates: ");
scanf("%d%d", &x2, &y2);

initgraph(&gdriver, &gmode, "");

dx = abs(x2 - x1);
dy = abs(y2 - y1);

if (dx > dy)
length = dx;
else
length = dy;

xincr = dx / length;
yincr = dy / length;

putpixel(x1, y1, 15);
x = x1;
y = y1;

for (i = 1; i <= length; i++) {
x = x + xincr;
y = y + yincr;
putpixel(x, y, 15);
}

closegraph();
return 0;
}

//DDA DOTTED
#include<graphics.h>
#include<stdio.h>
int main() 
{ 
int gd = DETECT ,gm, i; 
float x, y,dx,dy,steps; 
int x0, x1, y0, y1; 
initgraph(&gd, &gm, "C:\\TC\\BGI"); 
setbkcolor(BLACK); 
x0 = 100 , y0 = 200, x1 = 500, y1 = 200; 
dx = (float)(x1 - x0); 
dy = (float)(y1 - y0); 
if(dx>=dy) 
{ 
steps = dx; 
} 
else
{ 
steps = dy; 
} 
dx = dx/steps; 
dy = dy/steps; 
x = x0; 
y = y0; 
i = 1; 
while(i<= steps) { 
if(i % 2==0) {
putpixel(x, y, WHITE); 
x += dx; 
y += dy; 
i=i+1; 
}
}
getch(); 
closegraph();
return 0;
}

//DDA DASHED//
#include<graphics.h>
#include<stdio.h>
int main() 
{ 
int gd = DETECT ,gm, i; 
float x, y,dx,dy,steps; 
int x0, x1, y0, y1; 
initgraph(&gd, &gm, "C:\\TC\\BGI"); 
setbkcolor(BLACK); 
x0 = 100 , y0 = 200, x1 = 500, y1 = 200; 
dx = (float)(x1 - x0); 
dy = (float)(y1 - y0); 
if(dx>=dy) 
{ 
steps = dx; 
} 
else
{ 
steps = dy; 
} 
dx = dx/steps; 
dy = dy/steps; 
x = x0; 
y = y0; 
i = 1; 
while(i<= steps) { 
if(i % 4!= 0) {
putpixel(x, y, WHITE); 
x += dx; 
y += dy; 
i=i+1; 
}
}
getch(); 
closegraph(); 
return 0;
}

//BRESENHAM THIN//
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main(void)
{
int gd=DETECT,gm;
int i,x,y,x1,x2,y1,y2,dy,dx,length,P0;
printf("enter the Starting Coordinates of line");
scanf("%d%d",&x1,&y1);
printf("enter the Ending Coordinates of line");
scanf("%d%d",&x2,&y2);
initgraph(&gd,&gm," ");
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>dy)
length=dx;
else
length=dy;
putpixel(x1,y1,2);
x=x1;
y=y1;
P0=2*dy-dx;
for(i=1;i<=length;i++)
{
if(P0<0)
{
x=x+1;
y=y+0;
putpixel(x,y,2);
P0=P0+2*dy;
}
else
{
x=x+1;
y=y+1;
putpixel(x,y,2);
P0=P0+2*dy-dx*2;
}
}
getch();
closegraph();
return 0;
}



