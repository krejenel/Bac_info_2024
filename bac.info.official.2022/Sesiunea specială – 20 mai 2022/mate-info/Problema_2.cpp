#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{

    int i,j,a[100][100];
    int ok=0;
    int n;
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                while(j<n)
                {
                    a[i][j]=a[i][j+1];
                    j++;
                }
                ok=1;
            }
            if(ok==1)
                break;
        }
        ok=0;
    }
    int m=n-1;
    cout<<endl;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
