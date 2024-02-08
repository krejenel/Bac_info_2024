//V4.pr.2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    n=5;
    int a[100][100];
    int x=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            a[i][j]=0;
            else a[i][j]=x;
        }
        x--;
    }
     for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}
