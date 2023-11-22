#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int nMax(int &n, int c)
{
    int i,k=0,x,ok=0;
    int copie=n;
    while(n>9)
    {
        n=n/10;
        k++;
    }
    k=pow(10,k);
    n=copie;
   while(k!=0)
    {
        int aux=(n/(k))%10;
        if(aux<c)
        {
            k=k*10;
            n=n/k;
            n=n*10+c;
            n=n*k;
            n=n+(copie%k);
            return n;
            break;
        }
        else k=k/10;
    }

    if(k==0)
    {
        n=copie*10+c;
        return n;
    }
}

int main()
{
    int n,c;
    n=77777;
    c=1;
    cout<<nMax(n,c);

    return 0;
} 
