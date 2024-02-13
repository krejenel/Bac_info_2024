#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int i,aux=0;
    for(i=0; i<strlen(s); i++)
    {
        cout<<s[i]<<" ";
        if('a'<=s[i]<='z' && aux==0)
        {
            s[i]=s[i]-32;
            aux=1;
        }
        else if(s[i]==' ')
            aux=0;

    }
    cout<<endl<<s;

    return 0;
}
