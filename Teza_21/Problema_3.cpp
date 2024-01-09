#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,y,maxx=0,ok=1,v[5000],i=1;
    f>>y;
    while(f>>x)
    {

        if(y<x)
        {
            y=x;
            maxx=x;
        }
        else
        {
            y=x;
            if(maxx!=0)
            {
                v[i]=maxx;
                i++;
            }
            maxx=0;
        }
    }
    //am aflat varfurile
    int j,n,aux=0;
    n=i-1;
    for(i=1; i<=n-1; i++)
        for(j=i+1; j<=n; j++)
            if(v[j]<v[i])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    //am sortat varfurile

    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
    //am afisat varfurile


    return 0;
}
