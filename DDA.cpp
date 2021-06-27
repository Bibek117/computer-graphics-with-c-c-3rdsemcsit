#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm, (char*)"");
   // initwindow(getmaxwidth(),getmaxheight());
    int x0,y0,x1,y1,i,dx,dy;
    float steps,xinc,yinc,x,y;
    printf("Enter the two end points of the line (x0,y0) and (x1,y1)\n");
    scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
    dx = x1-x0;
    dy = y1-y0;
    if(abs(dx)>abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xinc = dx/steps;
    yinc = dy/steps;
    x=x0;
    y=y0;
    for(i=0;i<steps;i++)
    {
        putpixel(x,y,2);
        x =x + xinc;
        y =y + yinc;
    }
    getch();
    closegraph();
   return 0;
}
