#include <iostream>

using namespace std;
//1. feladat
int main()
{
    /*
    double n;
    char s;
    cout<<"Milyen muveletet szeretnel elvegezni? ";
    cin>>s;
    if(s=='%')
    {
        int a,b;
        cout<<"Kerek ket szamot: ";
        cin>>a>>b;
        n=a%b;
    }
    else
    {
        double x,y;
        cout<<"Kerek ket szamot: ";
        cin>>x>>y;
    switch (s)
    {
        case '+': n=x+y;
            break;
        case '-': n=x-y;
            break;
        case '*': n=x*y;
            break;
        if(b!=0)
            case '/': n=x/y;
            else
                cout<<"Ezt nem szabad elvegezni";
    }
    cout<<"Az eredmeny: "<<n;
    }*/
//2. feladat
/*
    int ev;
    ev=0;
    cout<<"Hany eves vagy? ";
    cin>>ev;

    if(ev<0)
        cout<<"Nincs ilyen eletkor!";
        else
        {
         if(ev<=14)
            cout<<"Maga gyerek!";
                else
                    if(ev<=23)
                        cout<<"Maga kamasz!";
                        else
                            if(ev<=62)
                                cout<<"Maga felnott!";
                                else
                                    if(ev>=63)
                                        cout<<"Maga idosebb koru!";
                                        else
                                            cout<<"Nincs negativ ev";
        }
        */
        //3.feladat

    int e,h,n;
    cout<<"Irj egy datumot (ev, honap, nap)! ";
    cin>>e>>h>>n;
    if(e<0)
        cout<<"Hiba";
        else
        {
            if(1<=h>=12)
                cout<<"Hiba";
                else

                    if(1<=h>=12)
                        cout<<"Hiba";
                        else




                            if(1<=n>=31)
                                cout<<"Hiba";
                                else



                                        switch (h)
                                        {
                                            case 1:
                                            case 3:
                                            case 5:
                                            case 7:
                                            case 8:
                                            case 10:
                                            case 12: cout<<"A honap 31 napos"<<endl;
                                                     break;
                                            case 4:
                                            case 6:
                                            case 9:
                                            case 11: cout<<"A honap 30 napos"<<endl;
                                                     break;
                                            case 2:
                                                    if ((e%4==0 && e%100!=0) || (e%400==0))
                                                        cout<<"A honap 29 napos"<<endl;
                                                    else
                                                        cout<<"A honap 28 napos"<<endl;
                                                    break;
                                            default: cout<<"Ilyen honap nincs"<<endl;
                                        }
                }
if (n < 1) {
        n++;
    } else {
        if (h < 1) {
            h++;

        } else {
            e++;
            h = 12;
            n = 31;
        }
    }if (n > 1) {
        n--;
    } else {
        if (h > 1) {
            h--;

        } else {
            e--;
            h = 12;
            n = 31;
        }
    }
    return 0;
}

