#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Hany ora van: ";
    cin>>a;
    if(4<=a&&a<=9)
        cout<<"Jo reggelt!";
    if(10<=a&&a<=17)
        cout<<"Jo napot!";
    if(18<=a&&a<=21)
        cout<<"Jo ejszakat!";
    if((22<=a)||(a<=3))
        cout<<"Jo ejszakat!";
    return 0;
}
