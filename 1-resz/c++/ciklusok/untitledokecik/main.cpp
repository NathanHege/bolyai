#include <iostream>

using namespace std;

int main() {
    int i;
    double tizedes;
    cout << "Adjon meg 4 valos szamot!\n";
    for (i = 1; i <= 5; i++) {
        cout << "Kerem a(z)" << i << "szamot: ";
        cin >> i;

    }
    tizedes = (double) i / 10;
    if ((double) i == tizedes)
        cout << "Ne";
    else
        cout << "Da";
    return 0;
}
