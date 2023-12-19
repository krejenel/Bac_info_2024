#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int v[100],n,i,minn,j,p;
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];

    for(i=1; i<=n-1; i++)
    {
        minn=v[i];
        p=i;
        for(j=i+1; j<=n; j++)
            if(v[j]<minn)
            {
                minn=v[j];
                p=j;
            }
        swap(v[i],v[p]); //schimba valorile intre pozitii
    }

    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";

    return 0;
}
