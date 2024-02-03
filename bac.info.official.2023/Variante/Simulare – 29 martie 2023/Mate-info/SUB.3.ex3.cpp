#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x;
    int nr=1,maxx=0,ok=0;
    while(f>>x)
    {
        if(x>=maxx)
        {
            if(ok==0 || x>maxx)
            cout<<nr<<" ";
            maxx=x;
            ok=1;
        }
        else ok=0;
        nr++;
    }
    //programul este eficient pentru ca parcurge liniar vectorul, o singura data, si foloseste variabile simple

    return 0;
}
