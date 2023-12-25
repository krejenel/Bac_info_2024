#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main()
{
    int n,a,b,i;
    f>>n;
    i=1;
    while(i<=n)
    {
        f>>a>>b;
        int x=a;
        int y=b;
        //cmmdc
        while( y!=0 )
        {
            int r=x%y;
            x=y;
            y=r;
        }
        g<<x<<" ";
        int copie=x;

        //cmmmc
        x=a;
        y=b;
        int c=x;
        int d=y;
        while(x!=y)
        {
            if(x<y)
                x=x+c;
            else y=y+d;
        }
        g<<x<<" sau "<<(a*b)/copie<<endl;
        i++;
    }

    return 0;
}
