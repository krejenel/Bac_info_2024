#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

//PROBLEMA 1

int suma(int a, int b)
{
    int minim,s=0;
    minim=min(a,b);
    for(int i=1; i<=minim; i++)
    {
        if(a%i==0 && b%i==0)
            s=s+i;
    }
    return s;

}

char aux[100];

int main()
{

    /* PROBLEMA 2
    bool ok=false;
    char text[100],*p;
    cin.get(text,100);
    p=strtok(text," ");
    while(p)
    {

        if(strlen(p)>2)
        {
            ok=true;
            char temp[1];
            temp[0]=p[0];
            for(int i=0; i<strlen(p)-1; i++)
            {
                p[i]=p[i+1];
            }
            p[strlen(p)-1]=temp[0];
        }

        strcat(aux,p);
        strcat(aux," ");
        p=strtok(NULL," ");
    }

    strcpy(text,aux);

    if(ok==false)
        cout<<"nu exita";
    else
    cout<<aux; */

    int x, fr[1001]={0};
    while(f>>x)
    {
        fr[x]++;
    }
    int ok=2;
    for(int i=1; i<=1000; i++)
    {
        if(fr[i]>0)
        {
            if(fr[i]%2==1)
            ok--;
        }
        if(ok==0)
        {
            cout<<"Sirul nu este palindromic";
            break;
        }
    }
    if(ok!=0)
     cout<<"Sirul este palindromic";

  // Programul meu creaza un vector de frecventa pentru numerele din
  // fisierul date.in, iar daca numarul de aparitii a doua cifre este
  // impar, atunci prograul afiseaza "Sirul nu este palindromic", deoarece,
  // in acest caz, sirul de numere din fisier nu poate fi rearanjat pentru
  // a fi palindromic. In caz contrar, sirul va indeplini proprietatea din cerinta;
  // Din puct de vedere al memoriei, programul este eficient, intrucat foloseste
  // doar variabile simple si un vector de frecventa, ce ocupa memorie minima, necesar
  // rezolvarii problemei( nu se stocheaza in plus numerele din fisier care au aceeasi
  // valoare). Prograul are o complexitate liniara, deoarece
  // numere din fisier se parcurng o singura data, iar pentru a verifica proprietatea
  // din cerinta, vectorul de frecventa este parcurs tot de o singura fata, astfel
  // timpul de executarre fiind unul foarte bun.

    return 0;
}
