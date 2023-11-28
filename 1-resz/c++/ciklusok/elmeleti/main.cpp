#include <iostream>

using namespace std;

int main() {
    int n = 0, paros = 0;
    cout << "Irj be egy szamot\n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            paros++;
        }
    }
    cout<<"Paros szamok szama: "<<paros;
        return 0;
}
