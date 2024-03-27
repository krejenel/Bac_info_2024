#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{

    int x,y,z,aux=0,nr=0;
    f>>x>>y;
    f>>z;
    aux=z;
    if(x<=z && z<=y)
        nr++;
    while(f>>z)
    {
        if(z!=aux)
        {
            if(x<=z && z<=y)
                nr++;
        }
        if(z>y)
            break;
        aux=z;
    }
    cout<<nr;

    return 0;
}
