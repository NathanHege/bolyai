#include <iostream>

using namespace std;

void feladat1() {
    int a, b, szorzat = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        szorzat = i * 5;
        cout << szorzat << " ";
    }
}

int main() {
    //   feladat1();
    int n, szam = 1, space;
    double szorzat = 1;
    cin >> n;
    /*for(int i = 1; i <= a; i++){
        for(int j = 0; j < i; j++){
            cout<<i;
        }
        cout<<"\n";
    }*/
    /*for(int i = 0; i < a; i++){
        for(int j = 0; j < i; j++){
            cout<<szam<<" ";
            szam++;
        }
        cout<<"\n";
    }*/
    /*space = n - 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= space; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++) {
            cout << "*";
        }
        space--;
        cout << "\n";
    }*/
    if (n < 0) {
        for (int i = -1; i >= n; i--) {
            szorzat *= i;
        }
        double kamat;
        kamat = szorzat * 0.2;
        cout << kamat;
    }
    cout<<"----------\n";
    if (n % 10 == 0) {
        for (int i = 10; i <= n; i += 10) {
            switch (i) {
                case 20:
                    cout<<"husz\n";
                    break;
                case 10:
                    cout<<"Tiz\n";
                    break;
                case 40:
                    cout<<"Negyven\n";
                    break;
                case 30:
                    cout<<"harminc\n";
                    break;

            }
        }
    }
    return 0;
}
