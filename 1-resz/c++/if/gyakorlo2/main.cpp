#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Irj be ket szamot: \n";
    cin>>a>>b;
    if((a<0 && b<0)||(a>0 && b>0))
        cout<<"Da";
    else
        cout<<"Ne";
    return 0;
}
