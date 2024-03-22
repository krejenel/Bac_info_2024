#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int maxx=0, x, nr=1, aux=0,ok=1, auxx=0;
    f>>x;
    aux=x;
    while(f>>x)
    {
        if(nr>x)
        {
            if(maxx<auxx)
                maxx=auxx;
        }
        else if(x!=aux && nr==aux)
        {
            auxx=auxx+nr;
            nr=1;
        }
        else if(x=aux && nr!=aux)
        {
            if(maxx<auxx)
                maxx=auxx;
            auxx=0;
        }
        else if(x==aux)
            nr++;

        x=aux;

    }
    cout<<maxx;


    return 0;
}
