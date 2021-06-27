//graphic program to draw chess board

#include<graphics.h>
#include<conio.h>
int main(){
  int gd=DETECT,gm;
  //initgraph(&gd,&gm, (char*)"");
  initwindow(getmaxwidth(),getmaxheight());
  line(100,100,700,100);
  line(100,100,100,700);
  line(100,700,700,700);
  line(700,700,700,100);
  line(100,400,700,400);
  line(100,175,700,175);
  line(100,250,700,250);
  line(100,325,700,325);
  line(100,475,700,475);
  line(100,475,700,475);
  line(100,550,700,550);
  line(100,625,700,625);
  line(400,100,400,700);
  line(175,100,175,700);
  line(250,100,250,700);
  line(325,100,325,700);
  line(475,100,475,700);
  line(550,100,550,700);
  line(625,100,625,700);


  getch();
  closegraph();
  return 0;
}
