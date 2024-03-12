#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ifstream g("datee.in");

int main()
{
    int x,y,aux=0,auxx=0;
    while(g>>y)
    {
        aux=y;
        if(aux%5==0)
            break;
    }

    while(f>>x)
    {
        auxx=x;
        if(auxx%5==0 && x==aux)
        {
            while(g>>y)
            {
                aux=y;
                if(aux%5==0)
                    break;
            }
        }
        else if(auxx%5==0)
        {
            if(auxx<aux)
            {
                cout<<auxx;
                auxx=0;
            }
            else if(auxx>aux)
            {
                cout<<aux;
                aux=0;
                while(g>>y)
                {
                    aux=y;
                    if(aux%5==0)
                        break;
                }
                if(aux==x)
                {
                    while(g>>y)
                    {
                        aux=y;
                        if(aux%5==0)
                            break;
                    }
                }
            }
            cout<<" ";
        }
    }
    if(aux!=0 && auxx!=0 && aux<auxx)
        cout<<aux<<" "<<auxx;
    else  if(aux!=0 && auxx!=0 && aux>auxx)
        cout<<auxx<<" "<<aux;
    else if(aux!=0)
        cout<<aux;
    else if(auxx!=0)
        cout<<auxx;

    return 0;
}
