#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int divprim(int n, int &s)
{
    int d=2,nr=0;
    while(n!=1)
    {
        while(n%d==0)
        {
            nr++;
            n=n/d;
        }
        if(nr%2==1)
        {
            s=s+d;
        }
        if(d==2)
            d=d+1;
        else d=d+2;
        nr=0;
    }
    return s;
}

int main()
{
  int x,y=0;
  x=152;
  cout<<divprim(x,y);

    return 0;
}
