#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x, min1=0, min2=0, sfsec=2, aux=0,i, A[2000]= {0};
    f>>min1;
    f>>min2;
    if(min1>min2)
    {
        aux=min1;
        min1=min2;
        min2=aux;
    }

    while(f>>x)
    {
        sfsec++;
        if(x<min2 && x!=min1)
            min2=x;
        if(min1>min2)
        {
            aux=min1;
            min1=min2;
            min2=aux;
        }

        if(sfsec==7)
        {
            if(min1==min2)
            {
                cout<<"Aceasta secventa nu contine minimuri - 0"<<endl;
                A[0]++;
                f>>x;
                min1=x;
                f>>x;
                min2=x;
                if(min1>min2)
                {
                    aux=min1;
                    min1=min2;
                    min2=aux;
                }
                sfsec=2;
            }
            else
            {
                cout<<min1<<" "<<min2<<endl;
                if(min1<0)
                A[999+abs(min1)]++;
                else A[min1]++;
                if(min2<0)
                A[999+abs(min2)]++;
                else A[min2]++;
                f>>x;
                min1=x;
                f>>x;
                min2=x;
                if(min1>min2)
                {
                    aux=min1;
                    min1=min2;
                    min2=aux;
                }
                sfsec=2;
            }

        }
    }
    for(i=1999; i>999; i--)
        if(A[i]!=0)
    {
            cout<<(i-999)*(-1)<<" ";
    }
    for(i=1; i<=999; i++)
    {
        if(A[i]!=0)
            cout<<i<<" ";
    }
    //programul afiseaza toate minimurile din secventele 7

    return 0;
}
