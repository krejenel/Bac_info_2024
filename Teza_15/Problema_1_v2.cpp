#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[201],c[201]=" ",aux[201]=" ";
    cin.getline(s,201);
    int i,j;
    for(i=0; i<strlen(s); i++)
        c[i]=s[strlen(s)-i-1];
    int ok=1;
    for(i=0; i<strlen(s)&&ok; i++)
        if(s[i]==c[0])
           {
               for(j=1; j<strlen(c); j++)
               if(s[i+j]!=c[j])
               if(i+j==strlen(s))
               {
                   strcpy(aux,s);
                   strcat(aux,c+j);
                   ok=0;
               }
            else break;
           }
           cout<<aux;


    return 0;
}
