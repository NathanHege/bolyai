#include <iostream>

using namespace std;

int main() {
    int n, osszeg = 0;

    cout << "Meddig szamoljunk?";

    cin >> n;

    for (int i = 1; i <= n; i++) {

        osszeg = osszeg + i;

    }


    cout << "\nA szamok osszege:" << osszeg << endl;

    cout << "A szamok atlaga:" << (double) osszeg / n;


    return 0;
}
