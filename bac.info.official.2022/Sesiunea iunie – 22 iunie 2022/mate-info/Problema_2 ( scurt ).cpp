#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int m,n,i,j,a[101][101]= {},minim=999,nr=0;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
            
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(i=1; i<=m; i++)
    {
        a[i][0]=11;
        a[i][n+1]=11;
    }
    for(j=1; j<=n; j++)
    {
        a[0][j]=11;
        a[m+1][j]=11;
    }

    cout<<endl;
    
    for(i=0; i<=m+1; i++)
    {
        for(j=0; j<=n+1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {

            minim=a[i-1][j];
            if(minim>a[i+1][j])
                minim=a[i+1][j];
            if(minim>a[i][j-1])
                minim=a[i][j-1];
            if(minim>a[i][j+1])
                minim=a[i][j+1];
            if(a[i][j]<minim)
            {
                nr=nr+(minim-a[i][j]);
                a[i][j]=minim;

            }

        }
    }

    cout<<endl;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<nr;


    return 0;
}
