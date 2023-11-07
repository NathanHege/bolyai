#include <iostream>

using namespace std;

int main() {
    int szorzat = 1, n;
    cin >> n;
    for (int i = n; i > 0; i--)
        szorzat = szorzat * i;
    cout<<szorzat;
        return 0;
}
