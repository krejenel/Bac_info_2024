#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
char aux[100];
int main()
{
    char a[100],*p;
    f.getline(a,100);
    cout<<a<<endl;
    p=strtok(a," ");
    while(p)
    {
        int n;
        n=strlen(p);
        if(p[n-1]=='.')
            {
                if(p[0]=='F')
                    strcat(aux,"fam.");
                else if(p[0]=='G')
                    strcat(aux,"gen.");
                else if(p[0]=='S')
                    strcat(aux,"spe.");
            }
            else strcat(aux,p);
            strcat(aux," ");

        p=strtok(NULL," ");
    }
    strcpy(a,aux);
    cout<<a;

    return 0;
}
