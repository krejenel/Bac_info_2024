#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int rest( int x, int y, int n, int k)
{
    for(k=n; k>=1; k--)
    {
        if(k%x==2 && k%y==2)
        {
            return k;
        }
    }
    return 0;
}

int main()
{
    int a, b, c, d=0;
    cin>>a>>b>>c;
    cout<<rest(a,b,c,d);

    return 0;
}
