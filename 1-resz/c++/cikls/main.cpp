#include <iostream>

using namespace std;

bool IsTemperatureValueOkay(int value){
    return !(value <= -20 || value >= 40);
}

int main() {
    int array[21];
    bool van_negativ = false , nincs_nagyobb_harminc_foknal = false ;
    string napok[] = {"hetfo", "kedd", "szerda", "csutortok", "pentek", "szombat", "vasarnap"};
    for (int i = 0; i < 7; i++) {
        int reggel, del, este;
        string nap = napok[i];
        cout << "Kerem a(z) " << nap << " adatokat, reggel, del, este \n";
        cin >> reggel >> del >> este;
        if((!IsTemperatureValueOkay(reggel))||(!IsTemperatureValueOkay(reggel))||(!IsTemperatureValueOkay(reggel))){
            return 0;
        }
        array[i * 3] = reggel;
        array[i * 3 + 1] = del;
        array[i * 3 + 2] = este;
        if (este<0 ){
            van_negativ = true;
        }
        else if (este > 30) {
            nincs_nagyobb_harminc_foknal = true;
        }

    }
    return 0;
    int a1 = 0, a2 = 0, a3 = 0, hr = 0, hd = 0, he = 0, kr = 0, kd = 0, ke = 0, szr = 0, szd = 0, sze = 0, csr = 0, csd = 0, cse = 0, pr = 0, pd = 0, pe = 0, szor = 0, szod = 0, szoe = 0, vr = 0, vd = 0, ve = 0;
    string osz, h = "hetfo", k = "kedd", sz = "szerda", cs = "csutortok", p = "pentek", szo = "szombat", v = "vasarnap";
    cout << "Kerem a hetfoi adatokat, reggel, del, este \n";
    cin >> hr >> hd >> he;
    cout << "Kerem a keddi adatokat, reggel, del, este \n";
    cin >> kr >> kd >> ke;
    cout << "Kerem a szerdai adatokat, reggel, del, este \n";
    cin >> szr >> szd >> sze;
    cout << "Kerem a csutortoki adatokat, reggel, del, este \n";
    cin >> csr >> csd >> cse;
    cout << "Kerem a penteki adatokat, reggel, del, este \n";
    cin >> pr >> pd >> pe;
    cout << "Kerem a szombati adatokat, reggel, del, este \n";
    cin >> szor >> szod >> szoe;
    cout << "Kerem a vasarnapi adatokat, reggel, del, este \n";
    cin >> vr >> vd >> ve;
    a1 = (hr + kr + szr + csr + pr + szor + vr) / 7;
    a2 = (hd + kd + szd + csd + pd + szod + vd) / 7;
    a3 = (he + ke + sze + cse + pe + szoe + ve) / 7;
    int ln;
    ln = 0;
    ln = hd;
    osz = h;
    if (kd > ln) {
        ln = kd;
        osz = k;
    }

    if (szd > ln) {
        ln = szd;
        osz = sz;
    }

    if (csd > ln) {
        ln = csd;
        osz = cs;
    }

    if (pd > ln) {
        ln = pd;
        osz = p;
    }

    if (szod > ln) {
        ln = szod;
        osz = szo;
    }
    if (vd > ln) {
        ln = vd;
        osz = v;
    }
    int lk;
    lk = hr;
    if (kd < lk) {
        lk = kd;
        osz = k;
    }
    if (szd < lk) {
        lk = szd;
        osz = sz;
    }
    if (csd < lk) {
        lk = csd;
        osz = cs;
    }
    if (pd < lk) {
        lk = pd;
        osz = p;
    }
    if (szod < lk) {
        lk = szod;
        osz = szo;
    }
    if (vd < lk) {
        lk = vd;
        osz = v;
    }
    cout << "\nA legnagyobb homerseklet: " << osz << " volt " << ln << " fok\n" << "A legalacsonyabb homerseklet: "
         << osz << " volt " << lk << " fok";
    return 0;
}
