
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sub(int n, int a, int b)
{
    int nr=2,k=0;
    a=0;
    b=0;
    for(int i=n-1;i>=3 && nr;i--)
    {
        int ok=0;
        for(int d=2;d<=i/2;d++)
        {
          if(i%d==0)
            ok=1;
        }
        if(a && ok==0)
        {
            b=i;
            nr--;
        }
        if(ok==0 && !b)
        {
            a=i;
            nr--;
        }
        
        
        
    }
    cout<<a<<" "<<b;
}

int main()
{
    sub(28,0,0);

    return 0;
}
