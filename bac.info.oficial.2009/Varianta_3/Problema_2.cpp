#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int cif(int &n, int &m)
{
    int nr=0;
    while(n!=0)
    {
        if(n%10==m)
            nr++;
        n=n/10;
    }
    return nr;
}

int main()
{
    int a;
    int b;
    a=6348872;
    b=8;
    cout<<cif(a,b);

    return 0;
}
