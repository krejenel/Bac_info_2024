#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumcif(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int a=1, b=100;
    for(int i=a; i<=b; i++)
    {
        int copie=i;
        int x=sumcif(copie);
        if(i/x==i%x)
            cout<<i<<" ";
    }

    return 0;
}
