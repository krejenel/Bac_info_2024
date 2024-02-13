#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,v[100];
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    int sum=0,j;
    i=n;
    while(i!=0)
    {
        for(j=i; j>=1; j--)
            sum=sum+v[j];
        cout<<sum<<endl;
        sum=0;
        i--;
    }

    return 0;
}
