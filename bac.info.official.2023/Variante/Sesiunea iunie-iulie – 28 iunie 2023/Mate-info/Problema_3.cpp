#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x, fr[102]= {0},suf=0;
    while(f>>x)
    {
        suf=abs(100*(x/100)-x);
         if(100<=x<1000)
        {
            fr[x/10]++;
            fr[suf]++;
        }
        if(1000<=x<10000)
        {
            fr[x/100]++;
            fr[suf]++;
        }
        if(10000<=x<100000)
        {
            fr[x/1000]++;
            fr[suf]++;
        }
    }

    int i,nr=0;
    for(i=10; i<=90; i++)
        if(fr[i]%2==0 && fr[i]!=0)
        {
            cout<<i<<" ";
            nr++;
        }
    cout<<nr;

    return 0;
}
