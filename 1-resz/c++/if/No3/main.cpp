#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, m,h1,m2,x,y, szm,szm1;
    cout<<"Kerek ketto idopontot, oo pp formaban\n";
    cin>>h>>m>>h1>>m2;
    if (h<h1&&m<m2)
        cout<<"Ez a korrabbi idopont: "<<h<<":"<<m;
    else if (h==h1&&m==m2)
        cout<<"ugyan az az idopont";
    else
    {
        if(m<m2)
            cout<<"a korabbi idopont: "<<h<<":"<<m<<endl;
        else if (m2<m)
            cout<<"A korabbi idopont: "<<h1<<":"<<m2<<endl;
        else
            cout<<"a ket idopont megegyezik.\n";
    }
    x=abs(h-h1);
    y=abs(m-m2);
    cout<<"a ket idopont kulonbsege: "<<x<<" ora "<<y<<" perc";

    return 0;
}
