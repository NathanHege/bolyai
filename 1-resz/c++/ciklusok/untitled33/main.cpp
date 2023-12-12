#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout << "Hany sor legyen:\n";
    cin >> n;
    cout << "Hany oszlop legyen:\n";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (0 < i && i < n - 1 && 0 < j && j < m - 1) {
                cout << ". ";
            }
            else {
                cout << "* ";
            }
        }
        cout << "\n";
    }



    return 0;
}
