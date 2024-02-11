#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x[10],p[10];
int n=3;
void permutari(int pas)
{
    for(int i=1; i<=n; i++)
    {
        if(p[i]==0)
        {
            x[pas]=i;
            p[i]=1;
            if(pas==n)
            {
                for(int j=1; j<=n; j++)
                    cout<<x[j]<<" ";
                cout<<endl;
            }
            else permutari(pas+1);
            p[i]=0;
        }
    }
}

int k=2;
void aranjamente(int pas)
{
    for(int i=1; i<=n; i++)
    {
        if(p[i]==0)
        {
            x[pas]=i;
            p[i]=1;
            if(pas==k)
            {
                for(int j=1; j<=k; j++)
                    cout<<x[j]<<" ";
                cout<<endl;
            }
            else aranjamente(pas+1);
            p[i]=0;
        }
    }
}


void combinari(int pas)
{
    for(int i=x[pas-1]+1; i<=n-k+pas; i++)
    {
        x[pas]=i;
            if(pas==k)
            {
                for(int j=1; j<=k; j++)
                    cout<<x[j]<<" ";
                cout<<endl;
            }
            else combinari(pas+1);
    }
}

int main()
{
    int pas=1;
    permutari(pas);
    cout<<"--------------------------------"<<endl;
    aranjamente(pas);
    cout<<"--------------------------------"<<endl;
    combinari(pas);

    return 0;
}
