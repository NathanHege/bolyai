#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Mekkora legyen a negyzet:";
    cin >> n;
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"\n";
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"\n";
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"* ";
    // cout<<"\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }

        cout << "\n";
    }
    return 0;
}
