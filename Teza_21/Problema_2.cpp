#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n, int &m, int &t)
{
    int x=1, sum=1, ok=0;
    while(ok==0)
    {
        sum=sum+x;
        x=sum-x;
        cout<<x<<" ";
        if(x>n)
        {
            t=x;
            m=sum-x;
            break;
        }
        if(x==n)
        {
            m=sum-x;
            break;
        }
    }
}

int main()
{
    int a,b=0,c=0;
    a=89;
    Fibonacci(a,b,c);
    cout<<endl<<b<<" "<<c;

    return 0;
}
