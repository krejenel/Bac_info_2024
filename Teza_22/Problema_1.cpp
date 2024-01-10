#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char aux[500];

int main()
{
    char propozitie[]="Firma implementeaza proiecte de desing interior proiecte de consolidare si proiecte de amenajari";
    char cuvant[]="proiecte";
    cout<<propozitie<<endl<<cuvant<<endl;
    char *p;
    int ok=0,okk=1;
    p=strtok(propozitie," ");
    while(p)
    {
        if(!strcmp(cuvant,p) && ok==1)
            okk=0;
        else okk=1;

        if(strchr("aeiou",p[0]))
            ok=1;
        else
            ok=0;

        if(okk==1)
        {
            strcat(aux,p);
            strcat(aux," ");
        }

        p=strtok(NULL," ");
    }
    strcpy(propozitie,aux);
    cout<<propozitie;

    return 0;
}
