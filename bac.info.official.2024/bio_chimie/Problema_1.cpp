#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int produs_divzori_comuni(int a, int b)
{
    int produs=1,d,aux=0;
    if(b<a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    for(d=1; d<=b; d++)
    {
        if(a%d==0 && b%d==0)
            produs=produs*d;
    }
    return produs;
}

int main()
{
    int x,y;
    x=12;
    y=6;
    cout<<produs_divzori_comuni(x,y);

    return 0;
}
