#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 || j % 2 == 0) {
                cout << "X ";
            }
            if (i % 2 == 1 || j % 2 == 1) {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    return 0;
}
