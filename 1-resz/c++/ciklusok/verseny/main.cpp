#include <iostream>

using namespace std;

int main() {
    int m = 0, n = 0;
    cout << "Milyen szeles legyen:\n";
    cin >> n;
    cout << "Milyen magas legyen\n";
    cin >> m;
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }

        cout << "\n";

    }
    return 0;
}
