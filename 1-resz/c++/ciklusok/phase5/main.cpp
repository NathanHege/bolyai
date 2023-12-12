#include <iostream>

using namespace std;

int main() {
    int n = 0, s = 1;
    cout << "Irj be egy szamot:\n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        s = n * (n + 1) + (2 * n - 1) * (2 * n);
    }
    cout<<s;
    return 0;
}
