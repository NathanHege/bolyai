#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int osszeg,egyes,kerekit;
    cout<<"kerek egy osszeget\n";
    cin>>osszeg;
    egyes=osszeg%10;
    if (egyes==1 || egyes==2)
        kerekit=osszeg-egyes;
    else if (egyes==3)
       kerekit=osszeg+2;
    else if (egyes==4)
        kerekit=osszeg+1;
    else if (egyes==7)
       kerekit=osszeg-2;
    else if (egyes==6)
        kerekit=osszeg-1;
    else if (egyes==9)
       kerekit=osszeg+1;
    else if (egyes==8)
        kerekit=osszeg+2;
    cout<<"a szam kerekitett erteke : "<<kerekit<<endl;
        return 0;
}
