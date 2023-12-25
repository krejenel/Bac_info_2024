#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x;
    f>>x;
    int copie=x;
    cout<<x<<" ";
    while(f>>x)
    {
        if(x!=copie)
        {
            copie=x;
            cout<<x<<" ";
        }
    }

    return 0;
}
