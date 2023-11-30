//problema 1

/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

   char s[100], a[100];
   int i;
   cin.get(s,101);
   for(i=0; i<=strlen(s)-1; i++)
   {
       if(s[i]==s[i+1])
       {
           strcpy(a,s+i+1);
           s[i+1]='#';
           strcpy(s+i+2,a);
       }
   }
   cout<<s;



    return 0;
} */


//problema 2

/* #include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n,m,frA[9]={0},cifre=0,aux=0,x=0,auxi=0;
    cin>>n>>m;
    if(m<n)
    {
        aux=n;
        n=m;
        m=aux;
    }
    cout<<n<<" "<<m<<endl;

    for(int i=7; i<=56; i++)
        cout<<i<<" ";

    cout<<endl;

    while(n<=m)
    {
        auxi=n;
        while(auxi>=1)
        {
            x=auxi%10;
            frA[x]++;
            auxi=auxi/10;
        }
        n++;
    }
    for(int i=0; i<9; i++)
    {
        cout<<frA[i]<<" ";
        cifre=cifre+frA[i];
    }
    cout<<endl<<cifre;


    return 0;
} */


//problema 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int maxx=0,frA[200]={0},i,x;

    while(f>>x)
    {
        frA[x+99]++;
    }
    for(i=0; i<=199; i++)
    {
        if(frA[i]>maxx)
            maxx=frA[i];
    }
    for(i=0; i<=199; i++)
    {
        if(frA[i]==maxx)
            cout<<i-99<<" ";
    }

    return 0;
}

