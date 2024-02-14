#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char aux[100];
int main()
{
    int n,ok=0,okk=0;
    cin>>n;
    char s[100]="bon avea ana la mere";
    char *p;
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)<n)
        {
             cout<<p<<" ";
             ok=1;
        }

        if(strlen(p)>n)
        {
            okk=1;
            strcat(aux,p);
            strcat(aux," ");
        }

        p=strtok(NULL," ");
    }
    if(ok==0)
        cout<<"nu exista"<<endl;
    else cout<<endl;
    if(okk==0)
        cout<<"nu exista";
    else cout<<aux;

    return 0;
}
