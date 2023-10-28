#include <iostream>

using namespace std;

int main()
{
    int startn, endn;
    cout<<"Enter start nummber: ";
    cin>>startn;
    cout<<"Enter the end number: ";
    cin>>endn;
    cout<<"Heres your list: ";
    for(int i=startn;i<=endn; ){
        cout<<" "<<i;
        i++;
    }
    return 0;
}
