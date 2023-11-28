#include <iostream>

using namespace std;

int main() {
    int osszeg = 0;
    for(int j = 1; j <= 10; j++) {
        cout<<j<<" negyzete = "<<j*j;
        cout<<"\n";
        osszeg += j*j;
        }
    cout<<"---------\n"<<"Ezek osszege: "<<osszeg;
    return 0;
}
