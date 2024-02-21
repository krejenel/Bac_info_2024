#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int interval(int n)
{
    if(n%10==2 || n%10==3)
        return 1*interval(n/10);
    else if(n!=0)
        return 0;
    if(n==0)
        return 1;
}

int main()
{
    int x;
    cin>>x;
    cout<<interval(x);

    return 0;
}
