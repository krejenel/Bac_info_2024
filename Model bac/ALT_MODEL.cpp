#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("bac.in");

int pare( int n, int a, int b, int v[]) //problema !
{
    int i,j,nr=0;
    for(i=a; i<=b; i++)
    {
        for(j=0; j<n; j++)
        {
            if(v[j]==i)
            {
                nr++;
                break;
            }
        }
    }
    return nr;
}

int main()
{

    /* int i,j,n,m,a[20][20],nr=1;
    n=4;
    m=5;
    int nrr=1,aux=0;
    for(i=1; i<=n; i++)
        nrr=nrr+2;
    aux=nrr;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i<=j)
            {
                a[i][j]=nr;
                nr=nr+2;
            }
            else
            {
                a[i][j]=nrr-2*(i-2);
                nrr=nrr+2;
            }
        }
        nr=1;
        nrr=aux;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } *///problema 2

    int x,nr,p=0,q=0,ex=0,ok=0;
    f>>x;
    while(f>>nr)
    {
        if(nr==x && ok==0)
            ok=1;
        if(ok==1 && nr%2==1)
            p++;
        if(nr==x && ok==1)
        {
            q=p;
            ex=1;
        }
    }
    if(ex==0)
        cout<<"NU exista";
    else cout<<q; 

    return 0;
}
