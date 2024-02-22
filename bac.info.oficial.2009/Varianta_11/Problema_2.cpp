#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");



int main()
{
    int n,x,y;
    f>>n;
    f>>x;
    cout<<x<<" ";
    n--;
    while(n)
    {
        f>>y;
        if(x>y)
            cout<<x<<" ";
        else {
            cout<<y<<" ";
            x=y;
        }
        n--;

    }
    return 0;
}
