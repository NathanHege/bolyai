#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a,b;
    cout<<"Give me 2 random numbers: ";
    cin>>a>>b;
    if(a==0&&b==0)
        cout<<"There is infinite of this equation \n";
    else
        if(a==0&&b!=0)
            cout<<"There is no equation like this \n";
        else if(a!=0&&b==0)
            cout<<"There is no equation like this \n";
            else
                if(a!=0&&b!=0)
                    cout<<"The equation equals: "<<-(a/b);
    return 0;
}
