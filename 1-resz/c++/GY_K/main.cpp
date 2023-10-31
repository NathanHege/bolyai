#include <iostream>
using namespace std;

int main() {
    double a=0, b=0, y=0;
    char x;
    cout<<"Irj be ket szamot: \n";
    cin>>a>>b;
    cout<<"milyen muveletet szeretnel elvegezni? (+,-,*,/,%)\n";
    cin>>x;
    if (x == '%') {

        y = (int)a%(int)b;
    }
    switch (x) {
        case '+': y=a+b;
            break;
        case '-': y=a-b;
            break;
        case '*': y=a*b;
            break;
        case '/': y=a/b;
            break;
        default: cout<<"Ilyen muvelet nincs!";
    }
    cout<<"Az eredmeny: "<<y;

    return 0;
}
