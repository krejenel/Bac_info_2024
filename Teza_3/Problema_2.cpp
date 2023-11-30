#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int m=0,n,v[100]= {0},i;
    cin>>n;
    while(n>0)
    {
        v[n%10]++;
        n=n/10;
    }
    int p=1;
    for(i=0; i<10; i++)
    {
        if(v[i]!=0 && i%2!=0)
        {
            m=i*p+m;
            p=p*10;
            cout<<m<<" ";
            if(v[i]-1!=0)
            {
                v[i]=v[i]-1;
            i--;
            }
        }
    }



    return 0;
}
