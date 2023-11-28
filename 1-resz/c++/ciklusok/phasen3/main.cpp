#include <iostream>

using namespace std;

int main() {
    for (int i = 200; i <= 500; i++) {
        if(i % 7 == 0 && i % 13 == 0 || i % 9 == 0) {
            cout<<"Ez a szam oszthato: "<<i;
            cout<<"\n";
        }
    }
    return 0;
}
