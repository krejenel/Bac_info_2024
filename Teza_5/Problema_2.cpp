//problema 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void divizori(int n)
{
    //divizorii lui n
    int i,d,aux=0,copie=0,suma=0;
    for(i=2; i<=n; i++)
    {
        aux=0;
        if(n%i==0)
        {
            for(d=1; d<=i; d++)
            {
                if(i%d==0)
                    aux++;
            }
            if(aux==2)
                suma=suma+i;
        }

    }
    cout<<suma;

}

int main()
{
    divizori(12);

    return 0;
} 

