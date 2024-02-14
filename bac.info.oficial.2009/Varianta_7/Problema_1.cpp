#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char s[100];
int main()
{
    cin.getline(s,100);
    int i;
    int n=strlen(s);
    for(i=n-1; i>=0; i--)
    {
       if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
       {
           cout<<s[i];
           cout<<" ";
           strcpy(s+i,s+i+1);
           break;
       }
    }
    cout<<s;

    return 0;
}
