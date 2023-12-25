#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x;
    while(f>>x)
    {
        if(sqrt(x)*sqrt(x)==x)
            cout<<x<<" ";
    }

    return 0;
}
