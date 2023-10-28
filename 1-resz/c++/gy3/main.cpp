#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    cout<<"Kerem az x erteket: ";
    cin>>x;
    if(x<-1)
        x = pow(x,9);
        else
        {
            if(x < 3)
                x = pow(x,2)+1;
                else
                    if(x<7)
                        x = sqrt(x);
                        else
                            if(x>=7)
                                x = pow(x,2);

        }
        cout<<"Az x erteke: "<<x;
}
