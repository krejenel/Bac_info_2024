#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n, v[100],ok=0,okk=0,i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    for(i=1; i<=n; i++)
    {
        if(v[i]<100)
        {
            cout<<v[i]<<" ";
            v[i]=0;
            ok=1;
        }
    }

    if(ok==0)
        cout<<"Nu exista";
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        if(v[i]!=0 && v[i]>999)
        {
            cout<<v[i]<<" ";
            okk=1;
        }
    }
    if(okk==0)
        cout<<"nu exista";


    return 0;
}
