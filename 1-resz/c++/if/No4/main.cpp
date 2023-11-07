#include <iostream>

using namespace std;

int main()
{
   int m, a, k;
   cout<<"Kerem a matek jegyet:";
   cin>>m;
   cout<<"Kerem az angol jegyet:";
   cin>>a;
   cout<<"Kerem a kemia jegyet:";
   cin>>k;
   if (m>=4)
   {
       if (a>=4)
       {
           if (k<4)
           {
               cout<<"Tanuld a kemiat!";
           }
       }
       else
       {
           cout<<"Tanuld az angolt!";
       }
   }
   else
   {
       cout<<"Tanuld a matekot!";
   }
    return 0;

}

