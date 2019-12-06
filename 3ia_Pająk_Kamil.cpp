#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int ziel[6];
    int nieb[4];
    int poma[9];

///===================================================== Obliczenia

    for(int i = 0; i < 6; i++)
    {
        ziel[i] = i + 1;
    }

    for(int i = 0; i < 4; i++)
    {
        nieb[i] =  (1 + i) * 10;
    }



    for(int i = 0; i < 3; i++)
    {
        poma[i] = ziel[i] + nieb[i + 1];


    }

    for(int i = 3; i < 6; i++)
    {
        poma[i] = ziel[i] * ziel[i - 3];

    }

    for(int i = 6; i < 9; i++)
    {
        poma[i] = nieb[i - 6] - ziel[i - 3];

    }




    cout.width( 4 );
    cout << " ";
///================================================== Gorny rzad
    for(int i = 0; i < 6; i++)
    {
        cout.width( 4 );
        cout << ziel[i];
    }

    for(int i = 0; i < 4; i++)
    {
        cout.width( 4 );
        cout << nieb[i];
    }

    cout << endl;
    cout.width( 4 );
    cout << " ";
///================================================== Znaki
    for(int i = 0; i < 3; i++)
    {
        cout.width( 4 );
        cout << "+";
    }

    for(int i = 0; i < 3; i++)
    {
        cout.width( 4 );
        cout << "*";
    }

    for(int i = 0; i < 3; i++)
    {
        cout.width( 4 );
        cout << "-";
    }

///================================================ Dolny rzad
    cout << endl;

     for(int i = 0; i < 4; i++)
    {
        cout.width( 4 );
        cout << nieb[i];
    }

     for(int i = 0; i < 6; i++)
    {
        cout.width( 4 );
        cout << ziel[i];
    }

    cout << endl;

    cout.width( 4 );
    cout << " ";
///===================================================== Jest rowne
    for(int i = 0; i < 9; i++)
    {
        cout.width( 4 );
        cout << "=";

    }

    cout << endl;

    cout.width( 4 );
    cout << " ";

///==================================================== Wyswietlarka
    for(int i = 0; i < 9; i++)
    {
        cout.width( 4 );
        cout << poma[i];
    }





    return 0;
}
