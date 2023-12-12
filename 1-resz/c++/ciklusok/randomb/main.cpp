#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i+i-1; j++){
            cout<<"*";
        }
        cout<<"\n";
     }
    cout<<"Mekkora legyen a torzse:\n";
    cin>>b;
    for(int k = 1; k <=b; k++) {
        if()
    }
    return 0;
}
