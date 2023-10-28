#include <iostream>
#define USE_MATH_DEFINES

using namespace std;

int main()
{
    int a=0, ph=0, sz=0;
    cout<<"Mekkora a pont hatar \n";
    cin>>ph;
    cout<<"Hany pontot ertel el a dolgozaton\n";
    cin>>a;
    sz = ph*60/100;
    if(a>ph)
        cout<<"Ez nem helyes!";
    else if(a>=sz)
        cout<<"Sikeres volt a dolgozat!\n";
    else
        cout<<"Nem volt sikeres!";

    return 0;
}
