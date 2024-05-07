#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int a,b,x,y,ok=0,auxx=0, aux=0,c=0,tmp=0;
    f>>y;
    auxx=y;
    while(f>>x)
    {
        aux=x;
        if(aux>=auxx)
        {
            while(auxx>0)
            {
                if(aux%10==auxx%10)
                    ok=1;
                else
                {
                    ok=0;
                    break;
                }
                aux=aux/10;
                auxx=auxx/10;
            }
            if(ok==1 && c==0)
            {
                tmp=x;
                c=1;
            }
            else if(ok==1 && c==1)
            {
                a=tmp;
                b=x;
                tmp=x;
            }
            else if(ok==0 && c==1)
            {
                c=0;
            }
            auxx=y;
        }
    }
    if(a!=0 && b!=0)
        cout<<a<<" "<<b;
    else cout<<" NU exista ";


    return 0;
}
