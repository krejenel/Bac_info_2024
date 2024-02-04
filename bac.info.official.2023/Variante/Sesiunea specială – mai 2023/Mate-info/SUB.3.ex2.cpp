#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,i,j;
    n=5;
    int a[20][20];
    i=1;
    for(j=1; j<=n; j++)
        f>>a[i][j];
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j>=n+2)
                a[i][j]=-1;
            else
            {
                if(a[i-1][j]+a[i-1][j+1]>=100)
                    a[i][j]=(a[i-1][j]+a[i-1][j+1])%100;
                else a[i][j]=a[i-1][j]+a[i-1][j+1];
            }
        }
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
