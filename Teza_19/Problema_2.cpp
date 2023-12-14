#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int factor(int n, int v[], int &fp, int &p)
{
    int i,minim=9999,c=1;
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int d,nr=0,ok=0;
    int x=2;
    for(i=1; i<=n; i++)
    {
        if(v[i]<minim)
            minim=v[i];
    }
    cout<<"minimul este "<<minim<<endl;
    while(x!=minim)
    {
        ok=0;
        for(d=2; d<=x; d++)
        {
            if(x%d==0)
                nr++;
        }
        if(nr==0)
            x=x+1;
        else
        {
            for(i=1; i<=n; i++)
            {
                if(v[i]%x!=0)
                    ok=1;
            }
            if(ok==1)
                x=x+1;
            else
                break;
        }
    }
    if(x==minim)
        cout<<"-1";
    else
        cout<<x;
}
int main()
{
    int v[50],i,x,y,n;
    f>>n;
    for(int i=1; i<=n; i++)
        f>>v[i];
    factor(n,v,x,y);

    return 0;
}
