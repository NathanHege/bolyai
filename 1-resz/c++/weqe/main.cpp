#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,hr=0,hd=0,he=0,kr=0,kd=0,ke=0,szr=0,szd=0,sze=0,csr=0,csd=0,cse=0,pr=0,pd=0,pe=0,szor=0,szod=0,szoe=0,vr=0,vd=0,ve=0;
    cout<<"Kerem a hetfoi adatokat, reggel, del, este \n";
    cin>>hr>>hd>>he;
    cout<<"Kerem a keddi adatokat, reggel, del, este \n";
    cin>>kr>>kd>>ke;
    cout<<"Kerem a szerdai adatokat, reggel, del, este \n";
    cin>>szr>>szd>>sze;
    cout<<"Kerem a csutortoki adatokat, reggel, del, este \n";
    cin>>csr>>csd>>cse;
    cout<<"Kerem a penteki adatokat, reggel, del, este \n";
    cin>>pr>>pd>>pe;
    cout<<"Kerem a szombati adatokat, reggel, del, este \n";
    cin>>szor>>szod>>szoe;
    cout<<"Kerem a vasarnapi adatokat, reggel, del, este \n";
    cin>>vr>>vd>>ve;
    a1=(hr+kr+szr+csr+pr+szor+vr)/7;
    a2=(hd+kd+szd+csd+pd+szod+vd)/7;
    a3=(he+ke+sze+cse+pe+szoe+ve)/7;
    int ln;
    ln=0;
    ln=hd;
    if(kd>ln)
        ln=kd;
    if(szd>ln)
        ln=szd;
    if(csd>ln)
        ln=csd;
    if(pd>ln)
        ln=pd;
    if(szod>ln)
        ln=szod;
    if(vd>ln)
        ln=vd;
    cout<<"A  "<<ln;
    return 0;
}
