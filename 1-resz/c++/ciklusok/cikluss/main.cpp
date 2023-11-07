#include <iostream>

using namespace std;

int main() {
    int n, min = 9999999, max = -9999999, x, nagy, kis;
    cout << "Menni szamot olvassak be? \n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Kerem a(z) " << i << ". szamot: ";
        cin >> x;
        if (x < min)
            min = x;
        kis = i;
        if (x > max)
            max = x;
        nagy = i;
    }
    cout << "Legkisebb beolvasott szam: " << min << "sorszama: " <<kis ;
    cout << "\nLegnagyobb beolvasott szam: " << max << "Sorszama: " <<nagy ;
    return 0;
}
