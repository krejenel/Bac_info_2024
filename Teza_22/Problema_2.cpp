#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int prime(int n, int v[])
{
    int i,d,p,q,ok=1,j,k;
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            for(d=2; d<=v[i] && d<=v[j] && ok==1; d++)
            {
                if(v[i]%d==0 && v[j]%d==0)
                    ok=0;
            }
            if(ok==1)
            {
                 cout<<v[i]<<" "<<v[j]<<endl;
                 k++;
            }
            ok=1;
        }
    }
    return k;
}

int main()
{
    int a,b[51];
    a=6;
    int i;
    for(i=1; i<=a; i++)
        f>>b[i];
    prime(a,b);

    return 0;
}
