#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{
    int i,j,dp=0,ds=0,l[10]={0},c[10]={0},n,ok=0;
    char v[100][100];
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            f>>v[i][j];
            if(v[i][j]=='X')
            {
                if(i==j)dp++;
                if(i+j==n-1)ds++;
                l[i]++;
                c[j]++;
            }
        }
    if(dp==n || ds==n)
        ok=1;
    for(i=0; i<n; i++)
    {
        if(l[i]==n || c[i]==n)
        {
            ok=1;
            break;
        }
    }
    if(ok==1)
        cout<<"Da";
    else cout<<"NU";

    return 0;
}
