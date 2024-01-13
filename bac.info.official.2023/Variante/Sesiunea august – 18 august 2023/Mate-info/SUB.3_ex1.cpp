#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void DNPI(int n)
{
    int d,i,nr=0;
    cout<<"1 ";
    for(i=4; i<=n; i++)
    {
        if(n%i==0 && i%2!=0)
        {
            for(d=2; d<i; d++)
            {
                if(i%d==0)
                    nr++;
            }
            if(nr!=0)
                cout<<i<<" ";
        }
        nr=0;
    }
}


int main()
{
    int a;
    a=90;
    DNPI(a);

    return 0;
}
