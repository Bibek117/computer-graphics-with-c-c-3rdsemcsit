//program in graphics to draw archary board

#include<graphics.h>
#include<conio.h>
int main(){
   int gd = DETECT,gm;
 // initgraph(&gd,&gm, (char*)"");
   initwindow(getmaxwidth(),getmaxheight());
   circle(700,400,30);
   setcolor(RED);
   circle(700,400,60);
   setcolor(GREEN);
   circle(700,400,90);
   setcolor(BLUE);
   circle(700,400,120);
   setcolor(YELLOW);
   circle(700,400,150);
   setcolor(CYAN);
   circle(700,400,180);

   getch();
   closegraph();
   return 0;
}
