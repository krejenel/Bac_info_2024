#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int cifre(int n)
{
    int copie=n,zece=1,aux=0,auxx=0,zecee=1,copiee,ok=1;
    while(copie!=0)
    {
        if((copie%10)%2!=0)
        {
            aux=aux+zece*(copie%10);
            zece=zece*10;
        }
        else
        {
            copiee=auxx;
            while(copiee!=0 && ok==1)
            {
                if(copiee%10==copie%10)
                    ok=0;
                copiee=copiee/10;
            }
            if(ok==1)
            {
                auxx=auxx+zecee*(copie%10);
                zecee=zecee*10;
            }
            else ok=1;
        }
        copie=copie/10;
    }
    cout<<aux<<" "<<auxx;

}

int main()
{

    int a;
    a=12267488;
    cifre(a);

    return 0;
}
