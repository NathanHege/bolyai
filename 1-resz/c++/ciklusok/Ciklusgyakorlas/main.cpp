#include <iostream>

using namespace std;

int main() {
    int n = 0, m = 0;
    cout << "Hany sor legyen:\n";
    cin >> n;
    cout << "Hany oszlop legyen:\n";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "*.";
            }
            else {
                cout << ".*";
            }
        }
        cout << "\n";
    }
    return 0;
}
