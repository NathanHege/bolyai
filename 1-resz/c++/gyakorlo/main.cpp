#include <iostream>

using namespace std;

int main()
{
    int a, b, c, k, k2, d;
    cout<<"Kerem a haromszog 3 oldalat: \n";
    cin>>a>>b>>c;
    k= a+b+c;
    d=k/3;
    if((k%3)==0)
        cout<<"Da "<<d;
    else
        cout<<"Ne";
    return 0;
}
