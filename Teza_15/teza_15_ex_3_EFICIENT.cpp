#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int n,a[100];

int main()
{
    int n,x,y,num,maxx=0,nr=1;
    bool ok=true;
    f>>n>>x;
    n--;
    while(n!=0)
    {
        f>>y;
        n--;
        if(x>=y)
            if(ok)
                nr++;
            else
            {
                nr=1;
                ok=true;
            }
        else
        {
            ok=false;
            nr++;
            if(nr>=maxx)
                if(nr==maxx)
                    num++;
                else
                {
                    maxx=nr;
                    num=1;
                }
            x=y;
        }
    }
    cout<<maxx<<" "<<num;


    return 0;
}
