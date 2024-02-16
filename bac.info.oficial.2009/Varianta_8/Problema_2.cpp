#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x, sum=0,ok=0;
    f>>x;
    if(sqrt(x)*sqrt(x)==x && ok==0)
        cout<<x;

    while(f>>x)
    {
        if(sqrt(x)*sqrt(x)==x )
        {
            cout<<"+"<<x;
            sum=sum+x;
        }

    }
    cout<<"="<<sum;

    return 0;
}
