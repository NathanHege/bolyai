#include <iostream>

using namespace std;

int main()
{
    int x,y,x1,y1, x2, y2, x3, y3;
    cout<<"Addj teglalapnak harom csucsata: (x,y)";
    cin>>x>>y>>x1>>y1>>x2>>y2;
    if(x=x1)
        x3=x2;
    else
    {
        if(x=x2)
            x3=x1;
        else
            x3=x;
    }
    if(y=y1)
        y3=y2;
    else
    {
        if(y=y2)
            y3=y1;
        else
            y3=y;
    }
    cout<<"Az x koordinata: "<<x3<<" az y koordinata: "<<y3;
    return 0;
}
