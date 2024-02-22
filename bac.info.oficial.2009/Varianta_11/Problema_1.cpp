#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int sum(int x)
{
    int s=0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0)
        s+=i;
    return s;
}

int main()
{
    int n,x,nr=0;
    f>>n;
    while(n)
    {
        f>>x;
        if(sum(x)==1)
            nr++;
        n--;
    }
    cout<<nr;
    return 0;
}
