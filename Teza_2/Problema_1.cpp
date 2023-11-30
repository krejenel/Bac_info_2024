#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int i,j;

int main()
{
    char s[100];
    cin.get(s,101);
    int n=strlen(s);

    //stergere spatii;
    for(i=0; i<n; i++)
    {
        if(s[i]==' ')
        {
            strcpy(s+i,s+i+1);
            n--;
        }
    }
    int m=strlen(s);

    //sortare
    for(i=0; i<m; i++)
        for(j=0; j<m-1; j++)
            if(s[j+1]<s[j])
            {
                char aux;
                aux=s[j];
                s[j]=s[j+1];
                s[j+1]=aux;
            }
    cout<<s<<endl;

    //aflare numarul maxim de aparitie a unei litere
    char copie;
    copie=s[0];
    int maxx=0, nr=0;

    for(i=0; i<m; i++)
    {
        if(s[i]==copie)
            nr++;
        if(maxx<nr)
            maxx=nr;
        if(s[i]!=copie)
        {
            copie=s[i];
            nr=1;

        }

    }
    cout<<"Litera X apare de cele mai multe ori in propozitie, si anume de - "<<maxx<<endl;

    //afla litera care apare de maxx ori
    char copi;
    int nrr=0;
    copi=s[0];
    for(i=0; i<m; i++)
    {
        if(s[i]==copi)
            nrr++;
        if(s[i]!=copi)
        {
            if(nrr==maxx)
                cout<<"Lietra care apare de "<<maxx<<" ori este : "<<s[i-1]<<endl;
            copi=s[i];
            nrr=1;
        }

    }

    return 0;
}
