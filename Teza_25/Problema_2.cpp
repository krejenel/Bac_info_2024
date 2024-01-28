#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kpal(int v[], int n, int k)
{
    int i,poz,aux;
    for(i=0; i<n; i++)
    {
        if(i>n-k-1)
            poz=k-(n-i);
        else poz=i+k;

        aux=v[poz];
        v[poz]=v[i];
        v[i]=aux;
    }
    for(i=0; i<(n-1)/2; i++)
    {
        if(v[i]!=v[n-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    int v[100]= {2,2,4,5,4};
    int n=5; //nr elementelor din vector
    int k;
    k=2; //nr de permutari
    cout<<kpal(v,n,k);

    return 0;
}
