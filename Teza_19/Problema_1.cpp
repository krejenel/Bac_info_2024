#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int m,n;
    char v[]="aeiou";
    char s1[40];
    f>>s1;
    char s2[40];
    f>>s2;
    char aux[40];
    strcpy(aux,s2);
    cout<<s1<<" "<<s2;
    n=strlen(s1);
    int i,j;
    cout<<endl;
    int x=0;
    for(i=0; i<n; i++)
    {
        if(strchr(v,s1[i]))
        {
            strcpy(aux, s2 + x);
            strcpy(s2 + x + 1, aux);
            s2[x] = s1[i];
            cout<<s2<<" ";
            strcpy(s1+i, s1+i+1);
            n--;
            x=x+2;

        }
    }
    return 0;
}
