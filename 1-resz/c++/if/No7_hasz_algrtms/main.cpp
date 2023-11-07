#include <iostream>

using namespace std;

int main()
{
    /*
    long long int a,b,c,d;
    long long int m;
    cout<<"Give me four number: ";
    cin>>a>>b>>c>>d;
    m=0;
    if(a>m)
        m=a;

    if(b>m)
        m=b;

    if(c>m)
        m=c;

    if(d>m)
        m=d;
    cout<<"This is the biggest number: "<<m;
    */
    /*
    long long int a,b,c,d;
    long long int m;
    cout<<"Give me four number: ";
    cin>>a>>b>>c>>d;
    m=100000000000000;
    if(a<m)
        m=a;

    if(b<m)
        m=b;

    if(c<m)
        m=c;

    if(d<m)
        m=d;
    cout<<"This is the smallest number: "<<m;
    */
    /*
    long long int a,b,c,d;
    long long int m;
    char x, y, z, f, h;
    cout<<"Give me four number: ";
    cin>>a>>b>>c>>d;
    m=-100000000000;
    if(a>m){
        m=a;
        x='a';
    }

    if(b>m){
        m=b;
        x='b';
    }

    if(c>m){
        m=c;
        x='c';
    }

    if(d>m){
        m=d;
        x='d';
    }
    cout<<"This is the biggest number: "<<m;
    cout<<"\nThe biggest number is in the "<<x<<" variable";
    m=a;
    if(b>m)
        m=b;
    if(c>m)
        m=c;
    if(d>m)
        m=d;
    cout<<"\nThe biggest number: "<<m;

    m=a;
    y='a';
    if(b>m)
        m=b;
    if(c>m)
        m=c;
    if(d>m)
        m=d;
    cout<<"\nThe biggest number is: "<<m;
    cout<<"\nThe following is the: ";
    if(a==m)
        cout<<" a ";
    if(b==m)
        cout<<" b ";
    if(c==m)
        cout<<" c ";
    if(d==m)
        cout<<" d ";
    */
    /*
    long long int a,b,c,d;
    long long int m;
    char x, y, z, f, h;
    cout<<"Give me four number: ";
    cin>>a>>b>>c>>d;
    m=-100000000000000;
    if(a>m){
        m=a;
        x='a';
    }
    if(b>m){
        m=b;
        x='b';
    }
    if(c>m){
        m=c;
        x='c';
    }
    if(d>m){
        m=d;
        x='d';
    }
    cout<<"This is the biggest number: "<<m;
    cout<<"\nThe biggest number is in the "<<x<<" variable";
    m=a;
    y='a';
    if(b<m)
        m=b;
    if(c<m)
        m=c;
    if(d<m)
        m=d;
    cout<<"\nThe samllest number is: "<<m;
    cout<<"\nThe following is the: ";
    if(a==m)
        cout<<"a ";
    if(b==m)
        cout<<"b ";
    if(c==m)
        cout<<"c ";
    if(d==m)
        cout<<"d ";
        */

    int a,b,c,d;
    cout<<"Give me 4 random numbers: ";
    cin>>a>>b>>c>>d;
    int osszeg=0;
    if(a<0)
        osszeg=osszeg+a;
    if(b<0)
        osszeg+=b;
    if(c<0)
        osszeg+=c;
    if(d<0)
        osszeg+=d;
        cout<<"A negativ szamok osszege: "<<osszeg;
    //megszamlalas
    int db=0;
    if(a>0)
        db++;
    if(b>0)
        db++;
    if(c>0)
        db++;
    if(d>0)
        db++;
    cout<<db<<"\n pozitiv szam van. ";
    //kivalasztas
    char e,f,g,h;
    char megvan='0'
    cout<<"Give me 4 different, small characters! \n";
    cin>>e>>f>>g>>h;

    if(e='n')
        megvan=e;
    if(f='n')
        megvan=f;
    if(g='n')
        megvan=g;
    if(h='n')
        megvan=h;
    if(megvan!='0')
        cout<<""
    return 0;
}
