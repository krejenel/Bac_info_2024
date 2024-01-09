#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int v[40][40],i,j,n;
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        f>>v[i][j];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int ok=1,sum=0,nr=0,aux=0;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n-1; i++)
        {
            if(v[i][j]<=v[i+1][j] && ok==1)
                ok=1;
            else ok=0;
        }
        if(ok==1)
        {
            sum=sum+v[1][j];
            nr++;
        }
        ok=1;
    }
    if(sum==0)
        cout<<"NU exista coloane in ordine cresc[toare ";
    else 
    cout<<(float)sum/nr;

    return 0;
}
