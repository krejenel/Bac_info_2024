#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,v[10][10]={0},n;
    cin>>n;
    int m;
    m=2*n-1;
    cout<<m<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(j+i==m-1 || i==j)
                v[i][j]=1;
            else v[i][j]=2;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
