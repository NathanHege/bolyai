#include <iostream>
using namespace std;

int main() {
    char sor;
    cout<<"Mit szeretne vasarolni? \n";
    cout<<"tejtermek(m), tesztafelek(t), tisztalkodasi szerek(h), tisztitoszerek(k)\n";
    cin>>sor;
        switch (sor) {
            case 'm':
                cout << "Az masodik sorban van";
                break;
            case 't':
                cout << "Az elso sorban van";
                break;
            case 'h':
                cout << "A harmadik sorban van";
                break;
            case 'k':
                cout << "A negyedik sorban van";
                break;
            default:
                cout << "Ilyen termek kategoria nem letezik";
        }
    return 0;
}
