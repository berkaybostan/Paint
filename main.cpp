#include <stdio.h>
#include <graphics.h>
#include <math.h>

int secili;

void buton()
{
     int x,y;
     getmouseclick(WM_RBUTTONDOWN,x,y);

//arac butonlari

       if(x>=5 && x<=85 && y>=100 && y<=140)
     {
         secili=0;
         clearmouseclick(WM_RBUTTONDOWN);

      }

       if(x>=5 && x<=85 && y>=160 && y<=200)
     {
         secili=1;
         clearmouseclick(WM_RBUTTONDOWN);

      }

       if(x>=5 && x<=85 && y>=220 && y<=260)
     {
         secili=2;
         clearmouseclick(WM_RBUTTONDOWN);

      }

       if(x>=5 && x<=85 && y>=280 && y<=320)

      {
         secili=3;
         clearmouseclick(WM_RBUTTONDOWN);

      }

       if(x>=5 && x<=85 && y>=340 && y<=380)
     {
         secili=4;
         clearmouseclick(WM_RBUTTONDOWN);

      }

      if(x>=40 && x<=80 && y>=30 && y<=70)
     {
        //ac
        readimagefile(NULL,100,100,900,900);
        clearmouseclick(WM_RBUTTONDOWN);

      }

      if(x>=90 && x<=150 && y>=30 && y<=70)
     {
         //kaydet
         writeimagefile(NULL,100,100,900,900);
         clearmouseclick(WM_RBUTTONDOWN);

      }

//renk butonlari

        if(x>=240 && x<=270 && y>=35 && y<=65)
     {
          setcolor(1);
          clearmouseclick(WM_RBUTTONDOWN);
      }

          if(x>=280 && x<=310 && y>=35 && y<=65)
     {
          setcolor(2);
          clearmouseclick(WM_RBUTTONDOWN);
      }

        if(x>=320 && x<=350 && y>=35 && y<=65)
     {
          setcolor(3);
          clearmouseclick(WM_RBUTTONDOWN);
      }

        if(x>=360 && x<=390 && y>=35 && y<=65)
     {
          setcolor(4);
          clearmouseclick(WM_RBUTTONDOWN);
      }


        if(x>=400 && x<=430 && y>=35 && y<=65)
     {
          setcolor(5);
          clearmouseclick(WM_RBUTTONDOWN);
      }


        if(x>=440 && x<=470 && y>=35 && y<=65)
     {
          setcolor(6);
          clearmouseclick(WM_RBUTTONDOWN);
     }


   if(x>=480 && x<=510 && y>=35 && y<=65)
     {
          setcolor(7);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=520 && x<=550 && y>=35 && y<=65)
     {
          setcolor(8);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=560 && x<=590 && y>=35 && y<=65)
     {
          setcolor(9);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=600 && x<=630 && y>=35 && y<=65)
     {
          setcolor(10);
          clearmouseclick(WM_RBUTTONDOWN);
      }


   if(x>=640 && x<=670 && y>=35 && y<=65)
     {
          setcolor(11);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=680 && x<=710 && y>=35 && y<=65)
     {
          setcolor(12);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=720 && x<=750 && y>=35 && y<=65)
     {
          setcolor(13);
          clearmouseclick(WM_RBUTTONDOWN);
      }

   if(x>=760 && x<=790 && y>=35 && y<=65)
     {
          setcolor(14);
          clearmouseclick(WM_RBUTTONDOWN);
      }

 }

int main()
{
    initwindow(1000,600,"Paint");

    int maxx,maxy;

//arayuz araclar

    setcolor(7);

    bar(100,100,900,900);

    rectangle(5,100,85,140);
    outtextxy(10,110,"    Kalem");

    rectangle(5,160,85,200);
    outtextxy(10,170,"     Cizgi");

    rectangle(5,220,85,260);
    outtextxy(10,230,"Dikdortgen");

    rectangle(5,280,85,320);
    outtextxy(10,290,"     Daire");

    rectangle(5,340,85,380);
    outtextxy(10,350,"    Ucgen");

    rectangle(40,30,80,70);
    outtextxy(50,40," Ac");

    rectangle(90,30,150,70);
    outtextxy(95,40," Kaydet");

    setcolor(0);

//arayuz renkler

    int i,j;

    for(j=35;j<=65;j++){

       for(i=240;i<=270;i++){
           putpixel(i,j,1);
        }
    }

    for(j=35;j<=65;j++){

       for(i=280;i<=310;i++){
           putpixel(i,j,2);
        }
    }

    for(j=35;j<=65;j++){

       for(i=320;i<=350;i++){
           putpixel(i,j,3);
        }
    }

    for(j=35;j<=65;j++){

       for(i=360;i<=390;i++){
           putpixel(i,j,4);
        }
    }

    for(j=35;j<=65;j++){

       for(i=400;i<=430;i++){
           putpixel(i,j,5);
        }
    }

    for(j=35;j<=65;j++){

       for(i=440;i<=470;i++){
           putpixel(i,j,6);
        }
    }

    for(j=35;j<=65;j++){

       for(i=480;i<=510;i++){
           putpixel(i,j,7);
        }
    }

    for(j=35;j<=65;j++){

       for(i=520;i<=550;i++){
           putpixel(i,j,8);
        }
    }

    for(j=35;j<=65;j++){

       for(i=560;i<=590;i++){
           putpixel(i,j,9);
        }
    }

    for(j=35;j<=65;j++){

       for(i=600;i<=630;i++){
           putpixel(i,j,10);
        }
    }

    for(j=35;j<=65;j++){

       for(i=640;i<=670;i++){
           putpixel(i,j,11);
        }
    }

    for(j=35;j<=65;j++){

       for(i=680;i<=710;i++){
           putpixel(i,j,12);
        }
    }

    for(j=35;j<=65;j++){

       for(i=720;i<=750;i++){
           putpixel(i,j,13);
        }
    }

    for(j=35;j<=65;j++){

       for(i=760;i<=790;i++){
           putpixel(i,j,14);
        }
    }

//son


    while(1)
    {
        buton();

//kalem

       if(secili==0)
       {
            int a,b;
            a=mousex();
            b=mousey();

           if(a>=100 && a<=900 && b>=100 && b<=900){

           if(ismouseclick(WM_LBUTTONDOWN))
           {
               clearmouseclick(WM_LBUTTONDOWN);
               moveto(mousex(),mousey());

               while(!ismouseclick(WM_LBUTTONUP)){

               lineto(mousex(),mousey());

              }

               if(ismouseclick(WM_LBUTTONUP))
              {
               clearmouseclick(WM_LBUTTONUP);
              }

           }

        }
    }

//cizgi

       if(secili==1)
       {
           int gecici_x,gecici_y;

            int a,b;
            a=mousex();
            b=mousey();

           if(a>=100 && a<=900 && b>=100 && b<=900){

           if(ismouseclick(WM_LBUTTONDOWN))
           {
               gecici_x=mousex();
               gecici_y=mousey();
               clearmouseclick(WM_LBUTTONDOWN);

           }
           if(ismouseclick(WM_LBUTTONUP))
           {
               line(gecici_x,gecici_y,mousex(),mousey());
               clearmouseclick(WM_LBUTTONUP);
           }

        }
    }

//dikdortgen

       if(secili==2)
       {
           int gecici_x,gecici_y;

            int a,b;
            a=mousex();
            b=mousey();

           if(a>=100 && a<=900 && b>=100 && b<=900){

           if(ismouseclick(WM_LBUTTONDOWN))
           {
               gecici_x=mousex();
               gecici_y=mousey();
               clearmouseclick(WM_LBUTTONDOWN);
           }
           if(ismouseclick(WM_LBUTTONUP))
           {
//sag alttan
               if(gecici_x>mousex() && gecici_y>mousey())
               {
                   rectangle(mousex(),mousey(),gecici_x,gecici_y);
                   clearmouseclick(WM_LBUTTONUP);

               }
//saq ustten
               if(gecici_x>mousex() && gecici_y<mousey())
               {
                   rectangle(mousex(),gecici_y,gecici_x,mousey());
                   clearmouseclick(WM_LBUTTONUP);

               }
//sol alttan
               if(gecici_x<mousex() && gecici_y>mousey())
               {
                   rectangle(gecici_x,mousey(),mousex(),gecici_y);
                   clearmouseclick(WM_LBUTTONUP);

               }
//sol ustten
               else
               {
                   rectangle(gecici_x,gecici_y,mousex(),mousey());
                   clearmouseclick(WM_LBUTTONUP);

               }

           }

        }
    }

//daire

       if (secili==3)
       {

           int gecici_x,gecici_y;

            int a,b;
            a=mousex();
            b=mousey();

           if(a>=100 && a<=900 && b>=100 && b<=900){

           if(ismouseclick(WM_LBUTTONDOWN))
           {
               gecici_x=mousex();
               gecici_y=mousey();
               clearmouseclick(WM_LBUTTONDOWN);
           }
           if(ismouseclick(WM_LBUTTONUP))
           {
               double uzunluk = sqrt(pow((gecici_x-mousex()),2)+pow((gecici_y-mousey()),2));
               int ortanokta_x=(mousex()+gecici_x)/2;
               int ortanokta_y=(mousey()+gecici_y)/2;
               circle(ortanokta_x,ortanokta_y,uzunluk/2);
               clearmouseclick(WM_LBUTTONUP);

           }

        }
    }

//ucgen

        if (secili==4)
    {

            int gecici_x,gecici_y;

            int a,b;
            a=mousex();
            b=mousey();

           if(a>=100 && a<=900 && b>=100 && b<=900){

           if(ismouseclick(WM_LBUTTONDOWN))
           {
               gecici_x=mousex();
               gecici_y=mousey();
               clearmouseclick(WM_LBUTTONDOWN);

           }

           if(ismouseclick(WM_LBUTTONUP)){

                double kenar = sqrt(pow((gecici_x-mousex()),2)+pow((gecici_y-mousey()),2));
                line(gecici_x,gecici_y,mousex(),mousey());
                line(gecici_x,gecici_y,kenar,mousey());
                line(mousex(),mousey(),kenar,mousey());
                clearmouseclick(WM_LBUTTONUP);

           }

       }

    }


}

    getch();
    closegraph();

    return 0;

}
