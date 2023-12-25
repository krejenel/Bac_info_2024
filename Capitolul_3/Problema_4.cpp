#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,x,nr=0,maxx=0;
    f>>n;
    int i=1;
    while(i<=n)
    {
        f>>x;
        if(x%10==0)
            nr++;
        else
        {
            if(maxx<nr)
                maxx=nr;
            nr=0;
        }
        i++;
    }
    if(maxx<nr)
        maxx=nr;
    cout<<maxx;

    return 0;
}
