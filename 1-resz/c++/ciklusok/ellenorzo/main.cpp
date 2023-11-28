#include <iostream>

using namespace std;

int main() {
    int const a[5] = {0, 2, 3, 1, 5};
    for(int const i : a) {
        cout<< i <<" ";
    }
    return 0;
}
