#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"mondj egy osztalyzatot: ";
    cin>>a;

    switch (a)
    {
        case 5: cout<<"kituno\n";
            break;
        case 4: cout<<"jeles\n";
            break;
        case 3: cout<<"jo\n";
            break;
        case 2: cout<<"elegseges\n";
            break;
        case 1: cout<<"elegtelen\n";
            break;
        default: cout<<"nincs ilyen osztalyzat\n";
    }
    return 0;
}
