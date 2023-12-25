#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x;
    while(f>>x)
    {
        int copie=x;
        while(copie%2==0)
        {
            copie=copie/2;
        }
        if(copie==1)
            cout<<x<<" ";

    }

    return 0;
}
