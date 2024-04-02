#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int aux=0, maxx=0, nr=1,nrr=0,x;
    f>>x;
    aux=x;
    while(f>>x)
    {
        if(aux%2==x%2)
            nr++;
        else
        {
            if(nr==maxx)
                nrr++;
            else if(maxx<nr)
            {
                maxx=nr;
                nrr=1;
            }
            nr=1;
        }
        aux=x;
    }
    if(nr==maxx)
        nrr++;
    cout<<maxx<<" "<<nrr;

    return 0;
}
