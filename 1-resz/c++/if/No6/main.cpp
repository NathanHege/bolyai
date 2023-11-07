#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double j;
    cout<<"Kerem a tanulo atlagat: ";
    cin>>j;
    if (j<=1.49)
        cout<<"Ez elegtelen!";
    else
        if (j<=2.49)
           cout<<"Ez elegseges!";
        else
            if (j<=3.49)
               cout<<"Ez jo!";
            else
                if (j<=4.49)
                  cout<<"Ez jeles!";
                else
                   if (j<=5.00)
                      cout<<"Ez kituno!";
                        else
                            cout<<"Ilyen osztalyzat nincs";

    return 0;
}
