#include<iostream>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
void plotpoints (int x0, int y0, int x, int y);
void midpoint(int x0, int y0, int r);
void circle();

void plotpoints (int x0, int y0, int x, int y)
{
    putpixel (x0+x, y0+y, 7);
    putpixel (x0+x, y0-y, 7);
    putpixel (x0-x, y0+y, 7);
    putpixel (x0-x, y0-y, 7);
    putpixel (x0+y, y0+x, 7);
    putpixel (x0+y, y0-x, 7);
    putpixel (x0-y, y0+x, 7);
    putpixel (x0-y, y0-x, 7);

}
void midpoint (int x0, int y0, int r)
{
    int x=0, y=r;
    int f=1-r;

    plotpoints (x0, y0, x, y);

    while(x<y)
    {
        x++;
        if(f<0)
        {
            f = f + (2*x) + 1;
        }

        else
        {
            y--;
            f = f + (2*(x-y)) + 1;
        }

        plotpoints (x0, y0, x, y);
    }
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm," ");

    cout<<"\t\t\t\t\t Assalamu Alaikum Everyone \n\n" ;
    cout<<"Name:Ayesha Akter \n";
    cout<<"ID: CSE2001019176 \n\n";

    cout<<"Enter 1  For Code Blocks Logo \n";
    cout<<"Enter 2  For DDA Algorithm  \n";
    cout<<"Enter 3  For Bresenham Algorithm\n";
    cout<<"Enter 4  For Mid Point Circle Algorithm \n";
    cout<<"Enter 5  For Seven Asian Country's Flag\n";
    cout<<"Enter 6  For Kite\n";
    cout<<"Enter 7  For Emoji \n";
    cout<<"Enter 8  For Sahid Minar\n";
    cout<<"Enter 9  For Car Animation \n";
    cout<<"Enter 10 For Cloud\n";
    cout<<"Enter 11 For Village\n\n";


    int number;

    while(1)
    {
        cout<<"Enter The Number Of 1-11 For Showing Desired Graphics : "<<endl;
        cin>> number;
        switch(number)
        {
        case 1 :
                 initwindow(1200,1200,"Code Blocks Logo");

    for (int i=0; i<300; i++)
    {

        setcolor(RED);

        rectangle(300-i,200-i,400-i,280-i);

        setfillstyle(SOLID_FILL,RED);

        floodfill(301-i,210-i,RED) ;

        setcolor(GREEN);

        rectangle(420+i,200-i,530+i,280-i);

        setfillstyle(SOLID_FILL,GREEN);

        floodfill(421+i,210-i,GREEN) ;

        setcolor(YELLOW);

        rectangle(300-i,300+i,400-i,380+i);

        setfillstyle(SOLID_FILL,YELLOW);

        floodfill(301-i,331+i,YELLOW) ;

        setcolor(BLUE);

        rectangle(420+i,300+i,530+i,380+i);

        setfillstyle(SOLID_FILL,BLUE);

        floodfill(421+i,310+i,BLUE);



        delay(10);
        cleardevice();

    }

    setcolor(WHITE);

    //A

    line(30,10,0,80);

    line(30,10,50,80);

    line(20,40,40,40);

    //Y

    line(50,10,65,40);

    line(80,10,65,40);

    line(65,40,65,80);

    line(60,80,70,80);

    //E

    line(90,10,90,80);

    line(90,10,120,10);

    line(90,40,120,40);

    line(90,80,120,80);

    //S

    ellipse(150,20,0,180,20,10);

    ellipse(150,70,180,360,20,10);

    line(130,20,170,70);

    //H

    line(180,10,180,80);

    line(210,10,210,80);

    line(180,45,210,45);

    //A

    line(240,10,220,80);

    line(240,10,260,80);

    line(230,40,250,40);

    //A

    line(330,10,300,80);

    line(330,10,350,80);

    line(320,40,340,40);

    //K

    line(360,10,360,80);

    line(360,40,390,10);

    line(360,40,390,80);

    //T

    line(395,10,425,10);

    line(410,10,410,80);

    //E

    line(430,10,430,80);

    line(430,10,470,10);

    line(430,80,470,80);

    line(430,40,470,40);

    //R

    line(480,10,480,80);

    ellipse(480,30,270,90,30,20);

    line(480,50,520,80);
    //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);


    setcolor(RED);

    rectangle(300,200,400,280);



    setfillstyle(SOLID_FILL,RED);

    floodfill(301,210,RED) ;



    setcolor(GREEN);

    rectangle(420,200,530,280);



    setfillstyle(SOLID_FILL,GREEN);

    floodfill(421,210,GREEN) ;



    setcolor(YELLOW);

    rectangle(300,300,400,380);

    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(301,331,YELLOW) ;



    setcolor(BLUE);

    rectangle(420,300,530,380);

    setfillstyle(SOLID_FILL,BLUE);

    floodfill(421,310,BLUE) ;

    break;

          case 2 :

                 initwindow(1200,1200,"DDA");
            cout <<"\nDDA Algorithm" << endl;

     //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);


      float x,y,x1,y1,x2,y2,dx,dy,step;
            int i;

            cout<<"Enter the value of X1 and y1 : ";
            cin>>x1>>y1;
            cout<<"Enter the value of X2 and y2 : ";
            cin>>x2>>y2;

            dx = abs(x2-x1);
            dy = abs(y2-y1);

            if(dx >= dy)
                step = dx;
            else
                step=dy;

            dx = dx/step;
            dy = dy/step;
            x = x1;
            y = y1;
            i = 1;
            while(i <= step)
            {
                putpixel(x,y,14);
                x = x + dx;
                y = y + dy;
                i = i + 1;
                delay(100);
            }
            break;


             case 3:

                 initwindow(1200,1200,"Bresenham's");
            cout <<"\nBresenham Algorithm" << endl;

     //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            int p;

            cout<<"Enter the value of x1 and y1 : ";
            cin>>x1>>y1;
            cout<<"Enter the value of x2 and y2 : ";
            cin>>x2>>y2;

            dx = abs(x2 - x1);
            dy = abs(y2 - y1);

            x = x1;
            y = y1;

            p = 2*dy-dx;

            while(x <= x2)
            {
                if(p >= 0)
                {
                    putpixel(x,y,14);
                    y = y+1;
                    p = p+2*dy-2*dx;
                }

                else
                {
                    putpixel(x,y,7);
                    p = p+2*dy;
                }

                x = x+1;
                delay(100);
            }
            break;


            case 4:

             initwindow (1200,1200, "Mid Point Circle");
      //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            int r;

            cout<<"Enter the value of center co-ordinate: ";
            cin>>x>>y;

            cout<<"Enter radius of the circle: ";
            cin>>r;

            midpoint(x,y,r);
            break;


     case 5:

            initwindow (1200,1200, "Flag");
            cout<<"Flag"<<endl;
     //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            setcolor(GREEN);
    rectangle(160,140,360,290);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(161,141,GREEN) ;

    setcolor(RED);
    circle(260,220,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(261,221,RED) ;


    //Flage:Japan
    setcolor(WHITE);
    rectangle(400,140,600,290);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(410,260,WHITE) ;

    setcolor(RED);
    circle(500,210,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(501,211,RED) ;

    //Myanmar

    setcolor(YELLOW);
    rectangle(640,140,840,190);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(680,180,YELLOW) ;

    setcolor(GREEN);
    rectangle(640,190,840,240);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(670,220,GREEN);

    setcolor(RED);
    rectangle(640,240,840,290);
    setfillstyle(SOLID_FILL,RED);
    floodfill(660,280,RED);

    setcolor(WHITE);
    line(740,160,710,270);
    line(740,160,770,270);
    line(710,270,740,240);
    line(770,270,740,240);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(730,240,WHITE) ;

    setcolor(WHITE);
    line(700,200,780,200);
    line(700,200,740,240);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(720,210,WHITE) ;

    line(780,200,740,240);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(760,210,WHITE) ;

    //Arab Emirates

    setcolor(RED);
    rectangle(880,150,920,290);
    setfillstyle(SOLID_FILL,RED);
    floodfill(900,190,RED);

    setcolor(GREEN);
    rectangle(920,150,1090,190);
    rectangle(920,150,1090,190);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(960,170,GREEN);

    setcolor(WHITE);
    rectangle(920,190,1090,240);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(940,220,WHITE);

    setcolor(BLACK);
    rectangle(920,240,1090,290);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(930,260,BLACK);

    //Indonesia

    setcolor(RED);
    rectangle(280,340,500,480);
    setfillstyle(SOLID_FILL,RED);
    floodfill(300,360,RED);

    setcolor(WHITE);
    rectangle(280,410,500,480);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(310,440,WHITE);

    //Yemen

    setcolor(RED);
    rectangle(540,340,740,390);
    setfillstyle(SOLID_FILL,RED);
    floodfill(560,360,RED);

    setcolor(BLUE);
    rectangle(540,390,740,440);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(570,410,BLUE);

    setcolor(YELLOW);
    rectangle(540,440,740,480);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(580,460,YELLOW);

    //Thailand

    setcolor(RED);
    rectangle(780,340,990,370);
    setfillstyle(SOLID_FILL,RED);
    floodfill(800,350,RED);

    setcolor(WHITE);
    rectangle(780,370,990,390);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(800,380,WHITE);

    setcolor(BLUE);
    rectangle(780,390,990,430);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(810,410,BLUE);

    setcolor(WHITE);
    rectangle(780,430,990,460);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(800,440,WHITE);

    setcolor(RED);
    rectangle(780,460,990,480);
    setfillstyle(SOLID_FILL,RED);
    floodfill(790,470,RED);



            system ("pause");
            break;




            case 6:

                 initwindow (1200,1200, "kite");

     //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            //kite
            line(400,150,250,300);
            line(400,150,550,300);
            line(250,300,550,300);

            line(250,300,400,450);
            line(550,300,400,450);
            line(400,150,400,450);

            line(400,450,350,500);
            line(400,450,450,500);
            line(350,500,450,500);

            setcolor(WHITE);
            setfillstyle(1,GREEN);
            floodfill(390,200,WHITE);

            setfillstyle(1,RED);
            floodfill(410,200,WHITE);

            setfillstyle(1,YELLOW);
            floodfill(290,320,WHITE);

            setfillstyle(1,BLUE);
            floodfill(500,320,WHITE);

            setfillstyle(1,MAGENTA);
            floodfill(370,490,WHITE);

            break;


            case 7:

                initwindow(1200,1200,"Emoji");
            cout<<"Emoji"<<endl;


     //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            //Happy emoji

            setcolor(YELLOW);
            circle(130,220,80);
            setfillstyle(1,YELLOW);
            floodfill(115,225,YELLOW);

            setcolor(BLACK);
            circle(100,200,10);
            setfillstyle(1,BLACK);
            floodfill(101,201,BLACK);

            setcolor(BLACK);
            circle(160,200,10);
            setfillstyle(1,BLACK);
            floodfill(161,201,BLACK);

            setlinestyle(0,0,3);

            ellipse(130,235,180,0,45,35);

            //Sad emoji

            setcolor(YELLOW);
            circle(420,220,80);
            setfillstyle(1,YELLOW);
            floodfill(425,225,YELLOW);

            setcolor(BLACK);
            circle(390,195,10);
            setfillstyle(1,BLACK);
            floodfill(395,196,BLACK);

            setcolor(BLACK);
            circle(450,195,10);
            setfillstyle(1,BLACK);
            floodfill(455,196,BLACK);

            setlinestyle(0,0,3);
            ellipse(420,265,0,180,35,30);

            //WOW emoji

            setcolor(YELLOW);
            circle(700,220,80);
            setfillstyle(1,YELLOW);
            floodfill(705,225,YELLOW);

            setcolor(BLACK);
            circle(670,190,10);
            setfillstyle(1,BLACK);
            floodfill(671,191,BLACK);

            setcolor(BLACK);
            circle(730,190,10);
            setfillstyle(1,BLACK);
            floodfill(731,191,BLACK);

            setcolor(BLACK);
            circle(700,250,20);
            setfillstyle(1,BLACK);
            floodfill(701,251,BLACK);

            //Speechless emoji

            setcolor(YELLOW);
            circle(130,450,80);
            setfillstyle(1,YELLOW);
            floodfill(135,455,YELLOW);

            setcolor(BLACK);
            circle(105,430,10);
            setfillstyle(1,BLACK);
            floodfill(106,431,BLACK);

            setcolor(BLACK);
            circle(155,430,10);
            setfillstyle(1,BLACK);
            floodfill(156,431,BLACK);


            line(100,485,160,485);
            setfillstyle(1,BLACK);

            // Sad emoji

            setcolor(YELLOW);
            circle(420,450,80);
            setfillstyle(1,YELLOW);
            floodfill(425,455,YELLOW);

            setcolor(BLACK);
            ellipse(390,425,180,0,10,10);
            ellipse(450,425,180,0,10,10);
            ellipse(420,465,180,0,40,35);

            //Over react emoji


            setcolor(YELLOW);
            circle(700,450,80);
            setfillstyle(1,YELLOW);
            floodfill(705,455,YELLOW);

            setcolor(BLACK);
            ellipse(670,415,0,180,10,5);
            ellipse(730,415,0,180,10,5);

            setcolor(WHITE);
            circle(670,440,15);
            setfillstyle(1,WHITE);
            floodfill(671,441,WHITE);

            setcolor(WHITE);
            circle(730,440,15);
            setfillstyle(1,WHITE);
            floodfill(731,441,WHITE);

            setcolor(BLACK);
            circle(670,440,7);
            setfillstyle(1,BLACK);
            floodfill(671,441,BLACK);
            circle(730,440,7);
            setfillstyle(1,BLACK);
            floodfill(731,441,BLACK);

            setcolor(BLACK);
            line(680,485,720,485);
            setfillstyle(1,BLACK);
            floodfill(681,486,BLACK);
            break;


            case 8:

                  initwindow(1200,1200,"Sahid Minar");
                  cout<<"Sahid Minar"<<endl;

            //Name:AYESHA AKTER
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id:CSE2001019176
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

            // 1st minar
            setcolor(WHITE);
            rectangle(120,350,170,500);
            setfillstyle(1,WHITE);
            rectangle(135,365,155,500);
            floodfill(121,351,WHITE);


            //2nd minar
            setcolor(WHITE);
            rectangle(210,320,260,500);
            setfillstyle(1,WHITE);
            rectangle(225,335,245,500);
            floodfill(211,321,WHITE);



            //Main minar
            setcolor(WHITE);
            rectangle(320,280,335,500);
            setfillstyle(1,WHITE);
            floodfill(321,281,WHITE);

            rectangle(365,280,380,500);
            //setcolor(WHITE);
            setfillstyle(1,WHITE);
            floodfill(366,281,WHITE);

            rectangle(410,280,425,500);
            //setcolor(WHITE);
            setfillstyle(1,WHITE);
            floodfill(411,281,WHITE);

            //1st minar upper side

            line(320,280,370,200);
            line(335,280,385,200);

            line(321,280,371,200);
            line(322,280,372,200);
            line(323,280,373,200);
            line(324,280,374,200);
            line(325,280,375,200);
            line(326,280,376,200);
            line(327,280,377,200);
            line(328,280,378,200);
            line(329,280,379,200);
            line(330,280,380,200);
            line(331,280,381,200);
            line(332,280,382,200);
            line(333,280,383,200);
            line(334,280,384,200);
            line(335,280,385,200);

            //2nd minar upper side

            line(365,280,410,210);
            line(380,280,425,210);

            line(366,280,411,210);
            line(367,280,412,210);
            line(368,280,413,210);
            line(369,280,414,210);
            line(370,280,415,210);
            line(371,280,416,210);
            line(372,280,417,210);
            line(373,280,418,210);
            line(374,280,419,210);
            line(375,280,420,210);
            line(376,280,421,210);
            line(377,280,422,210);
            line(378,280,423,210);
            line(379,280,424,210);
            line(380,280,425,210);




            //3rd minar upper side

            line(410,280,460,200);
            line(425,280,475,200);


            line(411,280,461,200);
            line(412,280,462,200);
            line(413,280,463,200);
            line(414,280,464,200);
            line(415,280,465,200);
            line(416,280,466,200);
            line(417,280,467,200);
            line(418,280,468,200);
            line(419,280,469,200);
            line(420,280,470,200);
            line(421,280,471,200);
            line(422,280,472,200);
            line(423,280,473,200);
            line(424,280,474,200);
            line(425,280,475,200);


            //Upper side adding

            line(370,200,460,200);
            line(370,210,460,210);


            line(370,209,460,209);
            line(370,208,460,208);
            line(370,207,460,207);
            line(370,206,460,206);
            line(370,205,460,205);
            line(370,204,460,204);
            line(370,203,460,203);
            line(370,202,460,202);
            line(370,201,460,201);


            setcolor(RED);
            circle(375,387,70);
            setfillstyle(1,RED);
            floodfill(376,388,RED);


            //3rd minar

            setcolor(WHITE);
            rectangle(485,320,535,500);

            setfillstyle(1,WHITE);
            rectangle(500,335,520,500);
            floodfill(486,321,WHITE);



            //4th minar

            setcolor(WHITE);
            rectangle(575,350,625,500);
            setfillstyle(1,WHITE);
            rectangle(590,365,610,500);
            floodfill(576,351,WHITE);


            setcolor(GREEN);
            rectangle(70,500,690,520);
            setfillstyle(1,GREEN);
            floodfill(71,501,GREEN);
            break;

            case 9:

                initwindow(1200,1200,"Car Moving");

            for (int i=0; i<=900; i++)
            {

            //Name:AYESHA AKTER
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id:CSE2001019176
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

      // Trafiic light


                setcolor(WHITE);
                rectangle(0,390,900,400);  //ROAD
                setfillstyle(1,MAGENTA);
                floodfill(5,395,WHITE);

                setcolor(WHITE);
                rectangle(750,220,790,300);
                setcolor(WHITE);
                circle(770,240,10);
                setfillstyle(1,RED);
                floodfill(770,240,WHITE);

                circle(770,260,10);
                setfillstyle(1,YELLOW);
                floodfill(770,260,WHITE);

                circle(770,280,10);
                setfillstyle(1,GREEN);
                floodfill(770,280,WHITE);


                rectangle(763,300,777,390);
                setfillstyle(1,BLUE);
                floodfill(764,301,WHITE);




                //CAR BODY
                line(50+i,370,90+i,370);
                arc(110+i,370,0,180,20);
                line(130+i,370,220+i,370);
                arc(240+i,370,0,180,20);
                line(260+i,370,300+i,370);
                line(300+i,370,300+i,350);
                line(300+i,350,240+i,330);
                line(240+i,330,200+i,300);
                line(200+i,300,110+i,300);
                line(110+i,300,80+i,330);
                line(80+i,330,50+i,340);
                line(50+i,340,50+i,370);


                //CAR Windows
                line(165+i,305,165+i,330);
                line(165+i,330,230+i,330);
                line(230+i,330,195+i,305);
                line(195+i,305,165+i,305);

                line(160+i,305,160+i,330);
                line(160+i,330,95+i,330);
                line(95+i,330,120+i,305);
                line(120+i,305,160+i,305);

                //Human
                circle(180+i,315,6);
                line(178+i,319,178+i,330);
                line(178+i,319,190+i,330);
                line(180+i,319,198+i,319);

                arc(200+i,320,0,360,3);
                line(201+i,321,230+i,330);


                //Wheels

                setcolor(WHITE);
                circle(110+i,370,17);
                setfillstyle(1,RED);
                floodfill(110+i,370,WHITE);
                circle(240+i,370,17);
                setfillstyle(1,RED);
                floodfill(240+i,370,WHITE);

                setcolor(WHITE);
                line(95+i,355,120+i,380);
                line(125+i,355,100+i,380);
                line(225+i,355,250+i,380);
                line(255+i,355,230+i,380);


                // Car body color
                setfillstyle(1,YELLOW);
                floodfill(55+i,340,WHITE);

                // mountain

                //1ST TRIANGLE

                setcolor(WHITE);

                setfillstyle(1,CYAN);

                line(0,180,100,110);

                line(100,110,200,180);



                //2ND TRIANGLE

                setcolor(WHITE);

                setfillstyle(1,CYAN);

                line(175,161,275,110);

                line(275,110,375,180);



                //3RD TRIANGLE

                setcolor(WHITE);

                setfillstyle(1,CYAN);

                line(350,161,450,110);

                line(450,110,550,180);



                //4TH TRIANGLE

                setcolor(WHITE);

                setfillstyle(1,CYAN);

                line(525,161,625,110);

                line(625,110,725,180);

                //5th TRIANGLE

                setcolor(WHITE);
                setfillstyle(1,CYAN);
                line(700,161,800,110);
                line(800,110,900,180);

                line(0,180,900,180);

                floodfill(100,150,WHITE);              //BOTTOM LINE OF MOUNTAIN
                floodfill(275,150,WHITE);              //2ND TRIANGLE
                floodfill(450,150,WHITE);              //3RD TRIANGLE
                floodfill(620,150,WHITE);              //4TH TRIANGLE
                floodfill(800,150,WHITE);              //5th TRIANGLE


                setcolor(WHITE);
                setfillstyle(1,YELLOW);
                arc(178,145,0,180,30);
                floodfill(172,140,WHITE);



                if(i==400)
                {
                    break;
                }

                delay(5);
                cleardevice();
            }


            break;

       case 10:

        initwindow(1200,1200,"cloud");


     //Cloud
    setcolor(WHITE);
    for(i=0; i<1000; i++)
    {
    //circle(230,180,30);
    circle(230+i,180,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(231+i,181,WHITE);
    //circle(270,160,30);
    circle(270+i,160,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271+i,161,WHITE);
    //circle(270,200,30);
    circle(270+i,200,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271+i,201,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(270+i,210,WHITE);
    //circle(300,180,35);
    circle(300+i,180,35);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(301+i,181,WHITE);
    floodfill(320+i,181,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(300+i,190,WHITE);
    delay(10);
    cleardevice();
 }
 //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

      //Cloud
    setcolor(WHITE);
    circle(230,180,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(231,181,WHITE);
    circle(270,160,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271,161,WHITE);
    circle(270,200,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271,201,WHITE);
    circle(300,180,35);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(301,181,WHITE);

       case 11:
        initwindow(1200,1200,"Village");


    //Name
     //A
    line(30,10,0,80);
    line(30,10,50,80);
    line(20,40,40,40);
    //Y
    line(50,10,65,40);
    line(80,10,65,40);
    line(65,40,65,80);
    line(60,80,70,80);
    //E
    line(90,10,90,80);
    line(90,10,120,10);
    line(90,40,120,40);
    line(90,80,120,80);
    //S
    ellipse(150,20,0,180,20,10);
    ellipse(150,70,180,360,20,10);
    line(130,20,170,70);
    //H
    line(180,10,180,80);
    line(210,10,210,80);
    line(180,45,210,45);
    //A
    line(240,10,220,80);
    line(240,10,260,80);
    line(230,40,250,40);
    //A
    line(330,10,300,80);
    line(330,10,350,80);
    line(320,40,340,40);
    //K
    line(360,10,360,80);
    line(360,40,390,10);
    line(360,40,390,80);
    //T
    line(395,10,425,10);
    line(410,10,410,80);
    //E
    line(430,10,430,80);
    line(430,10,470,10);
    line(430,80,470,80);
    line(430,40,470,40);
    //R
    line(480,10,480,80);
    ellipse(480,30,270,90,30,20);
    line(480,50,520,80);

     //Id
    //C
    ellipse(660,40,60,300,20,30);
    //S
    ellipse(700,20,0,180,20,10);
    ellipse(700,60,180,360,20,10);
    line(680,20,720,60);
    //E
    line(730,15,760,15);
    line(730,15,730,70);
    line(730,70,760,70);
    line(730,40,760,40);
    //2
    ellipse(780,30,0,180,20,20);
    line(800,30,770,70);
    line(770,70,810,70);
    //0
    ellipse(830,40,0,360,20,30);
    //0
    ellipse(880,40,0,360,20,30);
    //1
    line(920,15,920,70);
    line(920,15,900,25);
    line(900,70,930,70);
    //0
    ellipse(950,40,0,360,20,30);
    //1
    line(1000,15,1000,70);
    line(1000,15,980,30);
    line(980,70,1020,70);
    //9
    circle(1040,30,20);
    line(1055,40,1030,70);
    //1
     line(1080,15,1080,70);
     line(1080,15,1070,30);
     line(1060,70,1100,70);
     //7
      line(1100,15,1140,15);
      line(1140,15,1110,70);
      //6
      circle(1160,60,20);
      line(1140,53,1170,15);

      line(0,100,1200,100);
      //Moon
      setcolor(WHITE);
      circle(30,150,30);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(31,151,WHITE) ;

    //Land
    setcolor(GREEN);
    rectangle(0,550,1200,1000);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(30,580,GREEN) ;


    //Tree
    setcolor(BROWN);
    rectangle(70,400,100,580);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(80,570,BROWN) ;

    setcolor(WHITE);
    line(30,580,130,580);

    setcolor(GREEN);
    line(80,210,10,280);
    line(80,210,150,280);
    line(10,280,150,280);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(60,250,GREEN) ;

    line(80,260,0,340);
    line(80,260,160,340);
    line(0,340,160,340);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(60,310,GREEN) ;

    line(80,320,0,400);
    line(80,320,170,400);
    line(0,400,170,400);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(60,380,GREEN) ;

    //House
    setcolor(RED);
    line(510,250,190,360);
    line(510,250,820,360);
    line(190,360,820,360);
    setfillstyle(SOLID_FILL,RED);
    floodfill(310,340,RED) ;

    setfillstyle(SOLID_FILL,YELLOW);
    bar(280,360,750,550);


    setfillstyle(SOLID_FILL,BLACK);
    bar(460,400,540,550);


    setfillstyle(SOLID_FILL,BLACK);
    bar(320,390,390,450);
    rectangle(590,390,660,450);
    setfillstyle(SOLID_FILL,BLACK);
    bar(590,390,660,450);
     setcolor(WHITE);
    circle(480,470,5);

    //Cloud1
    setcolor(WHITE);
    circle(230,180,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(231,181,WHITE);
    circle(270,160,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271,161,WHITE);
    circle(270,200,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271,201,WHITE);
    circle(300,180,35);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(301,181,WHITE);
     //cloud2
    setcolor(WHITE);
    circle(510,140,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(511,141,WHITE);
    setcolor(WHITE);
    circle(550,130,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(551,131,WHITE);
    setcolor(WHITE);
    circle(550,160,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(551,161,WHITE);
    setcolor(WHITE);
    circle(590,140,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(591,141,WHITE);
   //cloud3

    setcolor(WHITE);
    circle(870,180,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(871,181,WHITE);
    setcolor(WHITE);
    circle(910,160,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(911,161,WHITE);
    setcolor(WHITE);
    circle(900,200,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(901,201,WHITE);
    setcolor(WHITE);
    circle(940,180,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(941,181,WHITE);

    setcolor(WHITE);
    circle(110,150,1);
    circle(40,110,1);
    circle(330,260,1);
    circle(390,180,1);
    circle(490,200,1);
    circle(320,120,1);
    circle(450,140,1);
    circle(490,200,1);
    circle(630,250,1);
    circle(710,150,1);
    circle(630,110,1);
    circle(810,210,1);
    circle(990,130,1);
    circle(840,120,1);
    circle(1050,200,1);
    circle(1150,160,1);
    break;

    default :
            cout << "Thank You Everyone" << endl;
        }

        cout<<"\n\n";
    }

    getch();
    closegraph();

    return 0;

}




