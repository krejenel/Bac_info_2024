#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,v[100][100]={0};
    n=5;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>v[i][j];
    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(v[i][j]==3)
            {
                if(v[i][j-1]!=0 && v[i-1][j]!=0 && v[i+1][j]!=0 && v[i][j+1]!=0)
                    cout<<i<<" ";
            }
        }
    }

    return 0;
}
