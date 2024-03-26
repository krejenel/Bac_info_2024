#include <iostream>
#include <bits/stdc++.h>
#include <values.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int aux=0,x,maxx=0,nr=1,lung=0;
    f>>x;
    aux=x;
    while(f>>x)
    {
        if(x!=aux)
        {
            if(nr==aux)
            {
                lung=lung+nr;
            }
            else
            {
                if(lung>maxx)
                    maxx=lung;
                lung=0;
            }
            nr=1;

        }
        else if(x==aux)
            nr++;

        aux=x;
    }
    if(nr==aux)
    {
        lung=lung+nr;
    }
    if(lung>maxx)
        maxx=lung;
    cout<<maxx;

    return 0;
}
