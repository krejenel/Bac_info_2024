#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,j,p[7]= {0},x[7]= {'0','6','8','3','5','9','88'};
    n=6;
    for(i=1; i<=n; i++)
        p[i]=i;
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(x[p[i]]<x[p[j]])
                swap(p[i],p[j]);
    for(i=1; i<=n; i++)
        cout<<p[i]<<" ";

    return 0;
}
