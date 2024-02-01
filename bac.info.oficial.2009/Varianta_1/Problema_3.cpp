#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sub (int v[], int n, int a)
{
    int nr=0,i;
    for(i=0; i<n; i++)
    {
        if(v[i]<a)
        nr++;
    }
    return nr;
    
}

int main ()
{
    int v[10]={1,2,3,4,21,67,32,100,9,10};
    int n=10;
    int a=20;
    cout<<sub(v,n,a);

  return 0;
}
