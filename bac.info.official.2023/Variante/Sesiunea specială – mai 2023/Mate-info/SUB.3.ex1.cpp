#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Putere(int n, int &x, int &p)
{
    x=2;
    p=0;
    int aux=1;
    while(x<=n)
    {
        aux=aux*x;
        p++;
        if(aux==n)
            break;
        if(aux>n)
        {
            x++;
            p=0;
            aux=1;
        }
    }
    cout<<x<<" "<<p;
}


int main()
{
    int a,b,c;
    a=216;
    Putere(a,b,c);

    return 0;
}
