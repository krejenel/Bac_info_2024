//problema 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
char aux[100];
char auxx[100];

int main()
{
    char x;
    int d;
    char s[100];
    f.getline(s,100);
    char *p;
    p=strtok(s," ");
    while(p)
    {
        strrev(p);
        strcpy(aux,p);
        strrev(p);
        if(strcmp(aux,p)==0)
        {
           for(d=0; d<strlen(p); d++)
           {
               p[d]=toupper(p[d]);
           }
        }
      strcat(auxx,p);
      strcat(auxx," ");


        p=strtok(NULL," ");
    }
    strcpy(s,auxx);
    couT<<s;

    return 0;
}
