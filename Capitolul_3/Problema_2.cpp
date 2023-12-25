#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,i,y=0,maxx=0,ii=0;
    int v[3]= {0};
    while(f>>x)
    {
        if(x%3==0 && y<=2)
        {
            v[y]=x;
            y++;
        }
        else if(x%3==0)
        {
            for(i=0; i<=2; i++)
                {
                    if(maxx<v[i])
                    {
                        maxx=v[i];
                        ii=i;
                    }
                }
            if(maxx>x)
            {
                v[ii]=x;
            }
            maxx=0;
        }

    }
    for(i=0; i<=2; i++)
    {
        if(v[i]!=0)
         cout<<v[i]<<" ";
    }

    return 0;
}
