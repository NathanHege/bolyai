#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin>>n;
    for(int i = 1; i <= n/10; i++) {
        for(int j = 1; j <= n; j++) {
            cout<< i*j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
