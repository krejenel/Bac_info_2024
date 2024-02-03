#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    int d=2,suma=0,i,nr=0;
    while(n!=1)
    {
        for(i=2; i<=d; i++)
        {
            if(d%i==0)
                        nr++;
        }
        if(n%d==0 && nr==1)
        {
            while(n%d==0 && n!=1)
            {
                suma++;
                n=n/d;
            }
        }
        else
         {
             nr=0;
             d++;
         }
    }
    return suma;

}


int main()
{
    int x;
    x=90;
    cout<<f(x);

    return 0;
}
