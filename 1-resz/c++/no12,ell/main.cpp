#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//1. feladat
int main()
{
    int a, b, c, d, e, f, j;
    cout<<"kerek ketto szamot \n";
    cin>>a>>b;
    cout<<"milyen muveletet szeretne elvegezni? (+, -, *, \)\n";
    cin>>j;
    c= a+b;
    d= a-b;
    e= a*b;
    f= a/b;

    switch (j)
    {

        case '+': cout<<"Az eredmeny: "<<c;
            break;
        case '-': cout<<"Az eredmeny: "<<d;
            break;
        case '*': cout<<"Az eredmeny: "<<e;
            break;
        if(b!=0)
            case '/': cout<<"Az eredmeny: "<<f;
                break;
            default: cout<<"Ez egy helytelen osztas!";
        if(j= '%')
            int a, b, z;
            z= a%b;
            cout<<"Az eredmeny: "<<y;


    }
    return 0;
}
