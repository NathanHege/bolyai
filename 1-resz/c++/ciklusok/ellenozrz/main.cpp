#include <iostream>

using namespace std;

int main() {
    int szam;
    double szorzat = 1;
    cout<<"addj meg egy szamot\n";
    cin>>szam;
    if(szam < 0) {
        for(int i = -1; i >=szam; i--) {
            szorzat *= i;
        }
        szorzat *= 0.2;
        cout<<"Megoldas: "<<szorzat;
    }
    if(szam % 10 == 0) {
        for(int i = -20; i <= 20; i++) {

        }
    }
    if(szam > 100) {

    }
    if(szam == 1) {

    }
    return 0;
}
