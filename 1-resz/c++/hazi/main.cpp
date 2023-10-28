#include <iostream>

using namespace std;

int main()
{
    int x, y, ax, ay;
    cout<<"Add meg az A-pont koordinatait: ";
    cin>>x>>y;
    cout<<"Add meg az B-pont koordinatait: ";
    cin>>ax>>ay;
    if((x>0 && y>0 && ax>0 &&ay>0)||(x>0 && y<0 && ax>0 && ay<0)||(x<0 && y<0 && ax<0 && ay<0)||(x<0 && y>0 && ax<0 && ay>0))
        cout<<"Da, ima";
    else
        cout<<"Ne, nema";
    return 0;
}
