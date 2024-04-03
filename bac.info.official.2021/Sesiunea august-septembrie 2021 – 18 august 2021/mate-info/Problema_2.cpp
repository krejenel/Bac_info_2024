#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100]={0};
    int n,k,aux=0,nr=0,i,j;
    k=3;
    aux=k;
    nr=k+1;
    n=6;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                a[i][j]=k;
                k=k*aux;
                nr++;
            }
            else if(nr==k)
            {
                a[i][j]=nr-1;
            }
            else
            {
                a[i][j]=nr;
                nr++;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
