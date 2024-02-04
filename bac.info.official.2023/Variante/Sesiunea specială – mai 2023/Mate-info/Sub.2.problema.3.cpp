#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    char s[20]="elemente";
    int i, k;
    for(k=strlen(s)-1; k>=0; k--)
    {
        if(s[k]=='e')
        {
            for(int i=0; i<=k; i++)
                cout<<s[i];
        }
        cout<<" ";
    }

    return 0;
}
