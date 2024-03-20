#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int patrate(int n, int &x, int &y)
{
    x=2;
    y=3;
    while(x*x<=n)
    {
        while((x*x)*(y*y)<n)
        {
            y++;
        }
        if((x*x)*(y*y)==n)
        {
            break;
        }
        else
        {
            x++;
            y=x+1;
        }
    }
    if((x*x)*(y*y)!=n)
        return 0;
}

int main()
{

    int n=400,a=0,b=0;
    patrate(n,a,b);
    cout<<a<<" "<<b;

    return 0;
}
