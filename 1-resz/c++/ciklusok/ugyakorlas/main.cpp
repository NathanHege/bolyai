#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //addig olvassunk be a felhasznalotol szamokat amig el nem erjuk 100-at, mennyi szam kellet
    /*int n, osszeg = 0, db = 0;
    while (osszeg < 100) {
        cin >> n;
        osszeg += n;
        db++;
    }
    cout << db << ", osszeg = " << osszeg;*/
    /*int a, b = 0, db = 0;
    do {
        cin >> a;
        b += a;
        if (a != 0) {
            db++;
        }
    } while (a != 0);
    cout << b << "\n";
    cout << db;*/
    /* double a, osszeg = 0, db = 0, atlag;
     while (a > 0) {
         cin >> a;
         osszeg += a;
         db++;
         if(a == 0){
             atlag = osszeg/db;
             cout << atlag << "\n";
         }
     }*/
    /*bool ok = true;
    int elozo = -1, x;
    while (cin >> x) {
        if (elozo >= x) {
            ok = false;
        elozo = x;
        }
    }
    if(ok){
        cout<<"A sorozat novekvo";
    }
    else{
        cout<<"A sorozat nem novekvo";
    }*//*
    int n = 1, osszeg = 0;
    while (n + osszeg <= 1000) {
        osszeg += n;
        n++;
    }
    cout << n - 1;
    cout << "\n" << osszeg;
*//*
    int lovag, sarkany, sarkanyfej;
    cin>>sarkany;
    for(int i = 0; i < sarkany; i++){
        cin>>sarkanyfej;
        sarkany += sarkanyfej;
        lovag = abs(sarkany / (3*24));
    }
    cout<<"Ennyi lovag kell: "<<lovag;*/
    /*int a = 9, b = 9, c = 1, d = 0, e, db = 1;
    while (a != 1 || b != 9 || c != 9 || d != 1) {
        db++;
        e = (a + b + c + d) % 10;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    cout << db;*/
    /*int sor = 0, oszlop = 0;
    *//*int n;
    cin>>n;*/
    /*
     for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 7; j++){
            if(i == 2 || i == n -1){
                cout<<"X";
            }
            else{
                cout<<" ";
            }
            if(j == 1 || j == 7-1) {
                cout << "X";
            }
        }
        cout<<"\n";
    }
    *//*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == n/2 || j == n/2){
                cout<<"* ";
            }
            else{
                cout<<". ";
            }
        }
        cout<<"\n";
    }*/
    
    return 0;
}

