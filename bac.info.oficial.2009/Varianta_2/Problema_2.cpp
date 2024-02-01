#include <bits/stdc++.h>

using namespace std;
ifstream fin("nr.in");

int main()
{
    int f[10000]= {},i,n,x    ;

    while(fin>>x)
    {
        if(x>0)
            f[x]++;
    }
    for(i=1; i<=9999; i++)
        if(f[i]!=0)
        {
            cout<<i<<" ";
        }

    return 0;
}
