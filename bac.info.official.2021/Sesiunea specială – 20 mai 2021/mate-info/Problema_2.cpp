#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{

    int v[100][100],n,i,j,k;
    f>>n>>k;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>v[i][j];

    int aux=0;
    i=1;
    for(j=1; j<=k; j++)
    {
        aux=v[k][j];
        v[k][j]=v[i][k];
        v[i][k]=aux;
        i++;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}
