#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("bac.in");

int main()
{
    int x;
    int nr=1;
    f>>x;
    int y=x;
    while(f>>x)
    {
        if(x==y)
            nr++;
        if(x!=y)
        {
            cout<<y<<" "<<nr<<endl;
            nr=1;
        }
        y=x;
    }
    cout<<y<<" "<<nr<<endl;
    return 0;
}
