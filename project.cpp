#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int circle1()
{
    setcolor(5);
    circle(50,50,40);
}
int circle2()
{

    setcolor(5);
    circle(150,50,40);
}
int circle3()
{
    setcolor(5);
    circle(250,50,40);
}
int circle4()
{
    setcolor(5);
    circle(50,150,40);
}
int circle5()
{
    setcolor(5);
    circle(150,150,40);
}
int circle6()
{
    setcolor(5);
    circle(250,150,40);
}
int circle7()
{
    setcolor(5);
    circle(50,250,40);
}
int circle8()
{
    setcolor(5);
    circle(150,250,40);
}
int circle9()
{
    setcolor(5);
    circle(250,250,40);
}
int cross1()
{
    line(0,0,100,100);
    line(0,100,100,0);
}
int cross2()
{
    line(100,0,200,100);
    line(100,100,200,0);
}
int cross3()
{
    line(200,0,300,100);
    line(200,100,300,0);
}
int cross4()
{
    line(0,100,100,200);
    line(0,200,100,100);
}
int cross5()
{
    line(100,100,200,200);
    line(100,200,200,100);
}
int cross6()
{
    line(200,100,300,200);
    line(200,200,300,100);
}
int cross7()
{
    line(0,200,100,300);
    line(0,300,100,200);
}
int cross8()
{
    line(100,200,200,300);
    line(100,300,200,200);
}
int cross9()
{
    line(200,200,300,300);
    line(200,300,300,200);
}
int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");
    setcolor(13);
    line(100,0,100,300);
    line(200,0,200,300);
    line(0,100,300,100);
    line(0,200,300,200);
    int i,x,y;
    for(i=1;i<=9;i++)
    {
        if(i%2==1)
        {
            if(ismouseclick(WM_LBUTTONDOWN))
                {
                    getmouseclick(WM_LBUTTONDOWN,x,y);
                    if(x>0 && x<100 && y>0 && y<100) circle1();
                    else if(x>100 && x<200 && y>0 && y<100) circle2();
                    else if(x>200 && x<300 && y>0 && y<100) circle3();
                    else if(x>0 && x<100 && y>100 && y<200) circle4();
                    else if(x>100 && x<200 && y>100 && y<200) circle5();
                    else if(x>200 && x<300 && y>100 && y<200) circle6();
                    else if(x>0 && x<100 && y>200 && y<300) circle7();
                    else if(x>100 && x<200 && y>200 && y<300) circle8();
                    else if(x>200 && x<300 && y>200 && y<300) circle9();
                }
    getch();
        }
            else if(i%2==0)
            {
                if(ismouseclick(WM_LBUTTONDOWN))
                {
                    getmouseclick(WM_LBUTTONDOWN,x,y);

                    if(x>0 && x<100 && y>0 && y<100) cross1();
                    else if(x>100 && x<200 && y>0 && y<100) cross2();
                    else if(x>200 && x<300 && y>0 && y<100) cross3();
                    else if(x>0 && x<100 && y>100 && y<200) cross4();
                    else if(x>100 && x<200 && y>100 && y<200) cross5();
                    else if(x>200 && x<300 && y>100 && y<200) cross6();
                    else if(x>0 && x<100 && y>200 && y<300) cross7();
                    else if(x>100 && x<200 && y>200 && y<300) cross8();
                    else if(x>200 && x<300 && y>200 && y<300) cross9();
                }
    getch();
            }
}
getch();
}
