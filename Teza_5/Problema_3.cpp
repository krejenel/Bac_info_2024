#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");


int prim( int n)
{
    int i, nr=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            nr++;
    }
    if(nr==2)
        return 1; //este prim
    else return 2; //nu este prim
}

int main()
{
    int maxx=0;
    int x;
    int aux=0;

    while(f>>x)
    {
        if(prim(x)==1)
        {
            aux=1;
            cout<<x<<" este prim, iar aux = "<<aux;
            cout<<endl;
        }

        else if(prim(x)==2)
        {
            aux=1;
            cout<<x<<" nu este prim, iar aux = ";
            while(prim(x)!=1)
            {
                aux++;
                x++;
            }
            cout<<aux<<endl;
        }
        if(aux>maxx)
            maxx=aux;
    }
    cout<<maxx;

    return 0;
}
