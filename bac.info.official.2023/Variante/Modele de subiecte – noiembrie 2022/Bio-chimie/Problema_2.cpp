#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[100]= {0};
    int i,n,ok=0;
    cin>>n;
    for(i=n; i>=1; i--)
        cin>>v[i];
    for(i=n-1; i>1; i--)
    {
        if(v[i+1]!=0 && v[i-1]!=0 && v[i]==3)
        {
            cout<<i<<" ";
            ok=1;
        }
    }
    if(ok==0)
        cout<<"nu exista";

    return 0;
}
