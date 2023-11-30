#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    char aux;
    char v[]="aeiou";
    int n=0,i;
    char s[256],*p;
    f.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        n=strlen(p);
        for(i=0; i<n-1; i++)
        {
            if((strchr(v,p[i])!=NULL && strchr(v,p[i+1])==NULL) || (strchr(v,p[i])==NULL && strchr(v,p[i+1])!=NULL))
            {
               aux=p[i];
               p[i]=p[i+1];
               p[i+1]=aux;
            }
        }
        cout<<p<<" ";
        p=strtok(NULL," ");
    }
    return 0;
}
