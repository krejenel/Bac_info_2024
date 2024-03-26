#include <iostream>
#include <bits/stdc++.h>
#include <values.h>
using namespace std;

ifstream f("date.in");

int secventa(long &n)
{
    int v[10]= {0},aux=0,i,ok=0,nr=0,auxx=0,p=1;
    aux=n;
    while(aux!=0)
    {
        nr++;
        aux=aux/10;
    }
    aux=n;
    for(i=nr; i>=1; i--)
    {
        v[i]=aux%10;
        aux=aux/10;
    }

    for(i=1; i<=nr; i++)
    {
        if(v[i]==2 && ok==0)
            ok=1;
        else if(v[i]==2 && ok==1)
            v[i]=0;
        else
            ok=0;
    }

    for(i=nr; i>=1; i--)
    {
        auxx=v[i]*p+auxx;
        p=p*10;
    }
    n=auxx;
    return n;
}

int main()
{
    long x;
    x=34227722;
    cout<<secventa(x);

    return 0;
}
