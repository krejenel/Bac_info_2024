#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,v[100];
    cin>>n;
    int i,PAR=0,IMPAR=0;
    for(i=1; i<=n*3; i++)
        cin>>v[i];
    for(i=1; i<=n; i++)
    {
        if(v[i]%2==0)
        {
            PAR=i;
            break;
        }
    }
    if(PAR!=0)
    {
        for(i=n*3; i>=n*3-n; i--)
            if(v[i]%2==1)
            {
                IMPAR=i;
                break;
            }
    }

    int aux;
    aux=PAR;
    PAR=v[IMPAR];
    IMPAR=v[aux];

    for(i=1; i<=n*3; i++)
        cout<<v[i]<<" ";

    return 0;
}
