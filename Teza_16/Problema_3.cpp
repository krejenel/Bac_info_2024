#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("BAC.TXT");

int main()
{

    int x,aux=0,nr=1,a=0,b=0;
    f>>x;
    aux=x;
    while(f>>x)
    {
        if(x==aux+1)
            nr++;
        else
        {
            a=aux-nr+1;
            b=aux;
            cout<<a<<" "<<b<<endl;
            nr=1;
        }
        aux=x;
    }
    a=aux-nr+1;
    b=aux;
    cout<<a<<" "<<b<<endl;
  //determina doar intervalele din sir


    return 0;
}
