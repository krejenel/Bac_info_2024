#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");


int main()
{

    char s[250],*p;
    f.getline(s,250);
    char x[50];
    f.getline(x,50);
    int ok=0;
    p=strtok(s," ");
    while(p)
    {
        if(strcmp(p,x)==0)
        {
            ok=1;
        }
        else if(ok==1)
        {
            for(int i=0; i<strlen(p)-1; i++)
               cout<<p[i];
           cout<<" ";
            ok=0;
        }

        p=strtok(NULL," ");
    }


    return 0;
}
