#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int abundent(int n)
{
    int i,d,nr=0;
    float maxx=0, suma=0;
    for(i=1; i<n; i++)
    {
        for(d=1; d<=i; d++)
        {
            if(i%d==0)
                suma=suma+d;
        }
        suma=suma/i;
        if(suma>maxx)
        {
            maxx=suma;
            nr=i;
        }
        suma=0;
    }
    cout<<maxx<<" ";
    for(d=1; d<=n; d++)
    {
        if(n%d==0)
            suma=suma+d;
    }
    suma=suma/n;
    cout<<suma<<" ";

    if(suma>=maxx)
       return 1;
       else return 0;

}

int main()
{
    int x;
    x=6;
    cout<<abundent(x);

    return 0;
}
