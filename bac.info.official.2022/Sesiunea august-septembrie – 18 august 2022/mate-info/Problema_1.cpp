#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int schimb(int &n, int x, int p)
{
    int aux=n,nr=0;
    p=p+1;
    while(aux!=0 && nr!=p)
    {
        nr++;
        aux=aux/10;
    }
    aux=aux*10+x;
    nr=0;
    p=p-1;
    int auxx=0,y=1;
    while(n!=0 && nr!=p)
    {
        auxx=n%10*y+auxx;
        n=n/10;
        y=y*10;
        nr++;
    }
    n=aux*y+auxx;
}

int main()
{
    int x,p,n;
    n=12587;
    x=6;
    p=3;
    schimb(n,x,p);
    cout<<n;

    return 0;
}
