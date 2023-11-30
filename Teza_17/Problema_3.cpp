#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream g("date.in");

int main()
{
    int f[10]={};
    int x;
    int st;
    int max_l=0;
    for(int i=1; g>>x; ++i)
    {
        x%=10;
        if(f[x]==0)
        {
            f[x]=i;
        }
        else
        {
            int lungime=i-f[x]+1;
            if(lungime>=max_l)
            {
                max_l=lungime;
                st=f[x];
            }
        }
    }

    cout<<max_l<<' '<<st;

    return 0;
}
