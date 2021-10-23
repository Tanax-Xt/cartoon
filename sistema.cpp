#include "TXlib.h"
int main ()
{

    txCreateWindow(1600, 1200);
    txSetFillColor(RGB(0, 77, 87));
    txRectangle(0, 0, 1600, 1200);

    int x = 800; // Center
    int y = 600; // Center
    int z = 100; // R Solnca

    // Venera orbita
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(0, 77, 87));
    txCircle(x, y, z+105);

    // Venera
    txSetColor(RGB(212, 118, 78));
    txSetFillColor(RGB(212, 118, 78));
    txCircle(x, y+205, z-75);


    // Merkuriu orbita
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(0, 77, 87));
    txCircle(x, y, z+50);

    // Merkuriu
    txSetColor(RGB(153, 77, 0));
    txSetFillColor(RGB(153, 77, 0));
    txCircle(x, y+150, z-80);

    // Solnce
    txSetColor(RGB(255, 136, 0));
    txSetFillColor(RGB(255, 136, 0));
    txCircle(x, y, z);


    return 0;

}
