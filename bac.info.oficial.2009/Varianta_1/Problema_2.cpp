#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main ()
{
    int n,x,nr=0;
    cin>>n;
    while(f>>x)
    {
        if(x%n==0)
        {
        cout<<x<<" ";
        nr=1;
        }
    }
    if(nr==0)
    cout<<"NU EXISTA";

  return 0;
}
