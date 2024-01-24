#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int ns, np, v[1000][50],i,j;
    f>>ns>>np;
    for(i=1; i<=ns; i++)
        for(j=1; j<=np; j++)
            f>>v[i][j];

    int maxx=0,poz=0;
    for(i=1; i<=ns; i++)
    {
        for(j=1; j<=np; j++)
        {
            if(v[i][j]>maxx)
            {
                maxx=v[i][j];
                poz=j;
            }
        }
        cout<<maxx<<":"<<poz<<endl;
        maxx=0;
        poz=0;
    }

    return 0;
}
