#include <iostream>

using namespace std;


int main() {
    int a = 0, b = 1, penz = 10000, szaz1, szaz2, szaz3, osz;
    double atlag;
    szaz1 = (10000 * 10) / 100;
    szaz2 = (10000 * 20) / 100;
    szaz3 = (10000 * 30) / 100;
    bool igen;
    cout << "Kerem irja be az evvegi atlagat: ";
    cin >> atlag;
    if (atlag < 1.50 || atlag > 5.00)
        cout << "Ilyet nem lehet!";
    cout << "volt orszagoson dobogon? (1 vagy 0)\n";
    cin >> igen;
    if (igen == 1)
        osz = penz + szaz1;
    else
        cout << "Ezt sajnalattal hallom!";
    if (atlag >= 4.50)
        osz = penz + szaz3;
    else if (3.50 <= atlag && atlag <= 4.49)
        osz = penz + szaz2;
    else if (2.50 <= atlag && atlag <= 3.49)
        osz = penz + szaz1;
    cout << "Itt van a tandij osszege: " << osz;
}