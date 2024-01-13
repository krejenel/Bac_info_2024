#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int v[20][20],i,j,sum=0,maxx=0,m,n;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>v[i][j];
    for(i=1; i<m; i++)
    {
        for(j=1; j<n; j++)
        {
            sum=v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
            if(sum>maxx)
                maxx=sum;
            sum=0;
        }

    }
    cout<<maxx;


    return 0;
}
