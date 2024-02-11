#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int doitrei(int n)
{
    while(n)
    {
        if((n%10!=3 || n%10==2) && (n%10!=2 || n%10==3))
            return 0;
        n=n/10;
    }
    return 1;
}

int main()
{

    int x=2233;
    cout<<doitrei(x);

    return 0;
}
