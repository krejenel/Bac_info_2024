#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int perechi(int n, int v[])
{
    int i,aux,auxx,z=1,j,nr=0;
    for(i=1; i<=n; i++)
    {
        aux=v[i];
        while(aux!=0) //oglinditul
        {
            auxx=auxx*10+aux%10;
            aux=aux/10;
        }
        for(j=1; j<=n; j++)
        {
            if(i!=j && v[j]==auxx && v[j]!=0)
            {
                cout<<v[j]<<" si "<<v[i]<<endl;
                nr++;
                v[j]=0;
            }

        }
        auxx=0;

    }
    return nr;
}

int main()
{
    int v[50];
    int i,n;
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    cout<<perechi(n,v);

    return 0;
}
