#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Irj be ket napnak a szamat egy evben" << endl;
    cin>>a>>b;
    if(a%7==b%7)
        cout<<"Ugyan arra a napra esnek";
    else
        cout<<"Nem ugyanarra a napra esnek";
    return 0;
}
