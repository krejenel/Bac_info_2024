#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");
int fr[10000];
int main()
{
    int n,x,maxim=-1,minim=99999,poz,k=0;
    fin>>n>>x;
    poz=x;
    fr[x]++;
    if(maxim<x)
        maxim=x;
    if(minim>x)
        minim=x;
    for(int i=1; i<n; i++)
    {
        fin>>x;
        fr[x]++;
        if(maxim<x)
            maxim=x;
        if(minim>x)
            minim=x;
    }
    for(int i=minim; i<=maxim; i++)
    {
        if(fr[i]!=0)
            k++;
        if(i==poz)
            break;
    }
    cout<<k;
    return 0;
}
