//problema 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,j,i,v[100][100];
    f>>n;
    int m=n;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>v[i][j];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int x=(n/2)+1;
    // sergem linia i=(n/2)+1
    for (i=x; i<=n; i++)
        for(j=1; j<=m; j++)
            v[i][j]=v[i+1][j];
    n--;
    //stergem coloana j=(n/2)+1
    for(i=1; i<=n; i++)
        for(j=x; j<m; j++)
            v[i][j]=v[i][j+1];
    m--;
    //afisare
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
