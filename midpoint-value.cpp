//midpoint value program for drawing circle

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void plot(int ,int ,int ,int );
int main()
{
    int gd=DETECT,gm;
    int r,h,k,x,y,p;
   // initgraph(&gd,&gm,(char*)"");
    initwindow(getmaxwidth(),getmaxheight());
    printf("\nEnter the radius and center of the circle : ");
    scanf("%d%d%d",&r,&h,&k);
    p = 1-r;
    x = 0;
    y = r;
    while(x<y){
        plot(h,k,x,y);
        if(p<=0){
            x=x+1;
            p = p+(2*x)+1;
        }else{
           x =x+1;
           y = y-1;
           p = p + (2*x) - (2*y) +1;
        }
    }
    getch();
    closegraph();
    return 0;
}
void plot(int h,int k,int x,int y)
{
    putpixel(x+h,y+k,4);
    putpixel(-x+h,y+k,4);
    putpixel(-x+h,-y+k,4);
    putpixel(x+h,-y+k,4);
    putpixel(y+h,x+k,4);
    putpixel(-y+h,x+k,4);
    putpixel(-y+h,-x+k,4);
    putpixel(y+h,-x+k,4);
}
