#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
char aux[200];
int main()
{
    int maxx=0;
    char c[20];
    f.getline(c,21);
    char t[200],*p;
    f.getline(t,201);
    char auxx[200],*q;
    strcpy(auxx,t);
    int ok=1, nr=0;
    q=strtok(auxx," ");
    while(q)
    {
        if(strstr(q,c))
            nr++;
        if(maxx<nr)
            maxx=nr;
        if(strchr(q,'.'))
            nr=0;
        q=strtok(NULL," ");
    }
    cout<<"numarul maxim de aparitii a lui "<<c<<" intr-o propozitie este de "<<maxx<<" ori"<<endl<<endl;
    nr=0;
    p=strtok(t," ");
    while(p)
    {
        strcat(aux,p);
        strcat(aux," ");
        if(strstr(p,c))
            nr++;
        if(strchr(p,'.'))
            ok=0;
        if(ok==0 && nr==maxx)
        {
            cout<<"In aceasta propozitie am gasit "<<nr<<" aparitii ale cuvantului "<<c<<endl;
            ok=1;
            nr=0;
            cout<<aux<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;
            strcpy(aux,"");
        }
        else if(ok==0 && nr!=maxx)
        {
            strcpy(aux,"");
            ok=1;
            nr=0;
        }
        p=strtok(NULL," ");
    }

    return 0;
}
