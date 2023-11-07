#include <iostream>

using namespace std;

int main() {
    int n = 0, osszeg = 0, szam, szam1 ;
    cout << "Mennyi szamot adjunk ossze? \n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout<<"Melyik szamokat adjuk ossze: ";
        cin>>szam>>szam1;
        osszeg = szam+szam1;
        cout<<"A szam osszegge: "<<osszeg<<"\n";
    }
    return 0;
}
