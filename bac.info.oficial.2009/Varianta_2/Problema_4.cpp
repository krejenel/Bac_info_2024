#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    int d=2,suma=0,i,nr=0;
    while(n!=1)
    {
        for(i=2; i<=d; i++)
        {
            if(d%i==0)
                        nr++;
        }
        if(n%d==0 && nr==1)
        {
            while(n%d==0 && n!=1)
            {
                suma++;
                n=n/d;
            }
        }
        else
         {
             nr=0;
             d++;
         }
    }
    return suma;
}

int main()
{
    int x;
    cin>>x;
    int copie=x;
    int nr=0;
    while(x!=0)
    {
        x=x/10;
        nr++;
    }
    x=copie;

    int aux=0,ok=1,i;
    for(i=1; i<=nr; i++)
    {
        cout<<x<<" ";
        if(f(x)==1)
            {
                aux=x%10;
                copie=aux*(pow(10,nr-1))+x/10;
                x=copie;
            }
            else
            {
                cout<<endl<<"Numarul nu este un numar extra prim ";
                ok=0;
                break;

            }
    }
    if(ok==1)
        cout<<endl<<"Numarul este extra prim ";

    return 0;
}
