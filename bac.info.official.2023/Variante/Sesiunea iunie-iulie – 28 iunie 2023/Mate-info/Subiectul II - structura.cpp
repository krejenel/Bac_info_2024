#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct stoc_lalele
    {
         int nrFire;
         int pretFir;
    };

    struct lalea
    {
        stoc_lalele stoc;
        char denumire[20];

    }f[10];

    f[1].stoc.nrFire=1;
    f[2].stoc.nrFire=2;
    f[3].stoc.nrFire=4;
    f[4].stoc.nrFire=7;
    f[5].stoc.nrFire=5;

    f[1].stoc.pretFir=5;
    f[2].stoc.pretFir=8;
    f[3].stoc.pretFir=9;
    f[4].stoc.pretFir=3;
    f[5].stoc.pretFir=6;

    cin>>f[3].denumire;
    cout<<f[3].denumire<<" sunt in stoc "<<f[3].stoc.nrFire<<" iar un fir costa "<<f[3].stoc.pretFir;


    return 0;
}
