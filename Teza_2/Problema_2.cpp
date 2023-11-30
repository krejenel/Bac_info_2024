#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a,b,i,v[100],aux,nr,nrr;

int divizori(int n)
{
    int nrdiv = 0;
    for(int d=1; d<=n; d++)
    {
        if(n%d == 0)
        {
            nrdiv++;
        }
    }
    return nrdiv;

}

void citire()
{
    cin>>a>>b;
    if(b<a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    while(a<=b)
    {
        nr=divizori(a);
        if(nr==3)
            nrr++;
        a++;
    }
   cout<<nrr;
}


int main()
{
    citire();

    return 0;
}
