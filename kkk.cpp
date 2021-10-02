#include "TXlib.h"
int main ()
{
    txCreateWindow(800,600);
    txSetFillColor(TX_WHITE);
    txRectangle(0,0,800,600);

    int x = 250;
    int y = 300;

    txSetColor(TX_BLACK);
    txLine(x+120, y-10, x+120, y-80);
    txLine(x+120, y-10, x+80, y+50);
    txLine(x+120, y-10, x+160, y+50);
    txLine(x+120, y-70, x+70, y-25);
    txLine(x+120, y-70, x+200, y-80);
    txCircle(x+120, y-110, 30);

    txSelectFont ("Times New Roman", 60);
    txTextOut (x+40, y+100, "Hello, world!");



    return 0;
}
