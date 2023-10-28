#include <iostream>

using namespace std;

int main()
{
    int honap, ev;
    cout<<"Kerem a honap sorszamat: ";
    cin>>honap;
    switch (honap)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout<<"A honap 31 napot\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11: cout<<"A honap 30 napos\n";
            break;
        case 2: cout<<"kerem az evet: ";
                cin>>ev;
                if( (ev%4==0) && (ev%100!=0) ||(ev%400==0) )
                    cout<<" A februar 29 napos\n";
                else
                    cout<<" A februar 28 napos\n";
                break;
        default: cout<<"Nincs ilyen honap\n";
    }
    return 0;
}
