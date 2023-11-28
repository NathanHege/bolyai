#include <iostream>

using namespace std;

int main() {
    int n = 0, faktorialis = 1;
    cout<<"Irj be egy szamot";
    cin>>n;
    for(int i = 1; i <= n; i++) {
        faktorialis=faktorialis * i;
    }
    cout<<faktorialis;
    return 0;
}
