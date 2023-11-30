//problema 1
/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int circular(int a, int b)
 {

  int copie=a,n=0,p=1;
  while(copie>9)
  {
      copie=copie/10;
      n++;
      p=p*10;
  }
  for(int i=0; i<n; i++)
  {
      if(a==b) return i;
        else a=(a%10)*p+a/10;
  }
  return -1;

 }

int main()
{
    cout<<circular(12,21);

    return 0;
} */


//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ok=0;
    char c[200];
    char aux[100];
    cout<<"Dati cuvantul : ";
    cin>>c;
    n=strlen(c)-1;
    while(strchr("aeiou",c[n])==0 && n>=0)
    {
        n--;
    }
    strcpy(c,c+n);
    cout<<c;

    cout<<"Dati propozitia : ";
    char s[256], *p;
    cin.getline(s,256);
    cout<<s;
    p=strtok(s," ");
    while(p)
    {
        n=strlen(p)-1;
        while(strchr("aeiou",p[n])==0 && n>=0)
        {
            n--;
        }
        strcpy(aux,p+n);

        if(strcmp(aux,c)==0)
        {
            cout<<p<<" ";
            ok++;
        }
    }
        if(ok==0)
            cout<<"NU EXISTA";


    return 0;
} */

//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int a,b, frB[10]= {0},i,nrr=0,j;
    int exista=-1;
    f>>a;
    cout<<a<<endl;
    int mx=0,mijloc=0;
    while(f>>b)
    {
        cout<<b<<" ";
        frB[b]++;
    }
    cout<<endl;
    for(i=1; i<=9; i++)
    {
        if(frB[i]%2==1)
            nrr++;
    }
    if(nrr==1 || nrr==0)
    exista=1;

    if(nrr==1 || nrr==0)
    {
        for(i=9; i>=1; i--)
        {
            if(frB[i]>=2 && i%2==0)
            {
                mx=i;
                frB[i]=frB[i]-2;
                break;
            }
        }
        //am derminat prima si ultima cifra
        for(i=1; i<=9; i++)
        {
            if(frB[i]%2==1)
                mijloc=i;
        }
        //am determinat mijocul

    }

    cout<<mx;
    if(nrr==1 || nrr==0)
    {
        for(i=9; i>=1; i--)
        {
            for(j=1; j<=frB[i]/2; j++)
            {
                cout<<i;
            }
        }
        if(mijloc!=0)
            cout<<mijloc;
        for(i=1; i<=9; i++)
        {
            for(j=1; j<=frB[i]/2; j++)
            {
                cout<<i;
            }
        }
        cout<<mx;
    }
   if(exista!=1)
    cout<<exista;


    return 0;
}
