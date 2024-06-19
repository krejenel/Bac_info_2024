#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

/* Problema 1

int putere(int n)
{
    int i=2,aux=0, mini=n, val=0;
    while(n%i==0)
    {
        n=n/i;
        aux++;
    }
    if(mini>aux && aux!=0)
    {
        mini=aux;
        aux=0;
        val=i;
    }
    i++;
    while(n!=1)
    {
        while(n%i==0)
        {
            n=n/i;
            aux++;
        }
        if(aux<mini && aux!=0)
        {
            mini=aux;
            aux=0;
            val=i;
        }
        i=i+2;
    }
    return val;

} */


int main()
{

   /* Problema 2
    int n,i,j,a[101][101];
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    int k;
    cin>>k;

    int aux=a[k][k-1];
    for(j=k-1; j>1; j--)
    {
       a[k][j]=a[k][j-1];
    }
    a[k][1]=aux;

    for(i=1; i<=n; i++, cout<<"\n")
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
    */

    // PROBLEMA 3
    int x, fr[11]{0};
    while(f>>x)
    {
        fr[x]++;
    }
    int suma=0;
    for(int i=1; i<=10; i++)
    {
        if(fr[i]!=0)
        {
            suma=suma+10+(i*i*fr[i]);
        }
    }
    cout<<suma;

    return 0;
}
