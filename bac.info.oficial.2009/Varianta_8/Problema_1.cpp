#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,nr=1,v[100][100];
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if((nr*nr)%2==1)
            {
                v[i][j]=nr*nr;
                nr++;
            }

            else
            {
                nr++;
                j--;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
