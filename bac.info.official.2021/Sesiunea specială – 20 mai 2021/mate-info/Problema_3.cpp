#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");

int main()
{
    int x=13,y=21;
    int n=0;
    n=(y-x)/2;
    n=n-1;
    cout<<y<<" "<<x<<" ";
    int numar=0;
    while(n>0)
    {
        numar=x-2*n;
        cout<<numar<<" ";
        x=numar;
        n--;
    }

    return 0;
}
