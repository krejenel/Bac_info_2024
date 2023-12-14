#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=1;
    int y=1;
    int z=1;
    while(x<=9)
    {
        cout<<x<<z<<y<<y<<z<<x<<endl;
        y=y+2;
        if(y>9)
        {
            z=z+2;
            y=1;
            if(z>9)
            {
                z=1;
                y=1;
                x=x+2;
            }
        }
    }

    return 0;
}
