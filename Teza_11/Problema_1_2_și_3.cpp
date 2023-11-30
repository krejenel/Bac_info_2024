//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,i,j,v[50][50],suma=0,a[50]= {0},k=0,nr=0;
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            f>>v[i][j];
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            suma=suma+v[i][j];
        }
        a[k]=suma;
        k=k+1;
        suma=0;
        nr++;
    }
    for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
         {
            suma=suma+v[i][j];
         }
         if(suma==0)
         {
             for(j=0; j<n; j++)
             {
                 v[i][j]=a[j];
             }
         }
         suma=0;

     }
     for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
         {
             cout<<v[i][j]<<" ";
         }
         cout<<endl;
     }

    return 0;
} */

//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nPrime(int n, int &k, int p[])
{
   int a=0,b=0,r=0,i,nr=0;
   for(i=1; i<n; i++)
   {
       a=i;
       b=n;
       while(b)
       {
           r=a%b;
           a=b;
           b=r;
       }
       if(a==1)
       {
           k++;
           p[nr]=i;
           nr++;
       }
   }
}

int main()
{
   int k=0,p[100]={0};
   nPrime(20,k,p);
   for(int i=0; i<8; i++)
    cout<<p[i]<<" ";
    cout<<endl<<k;

    return 0;
} */

//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n,stive=0,nr=0;
    f>>n;
    nr=nr+n+2;
    n--;
    stive=3;
    while(n!=1)
    {
        nr=nr+2*n+2;
        n--;
        stive=stive+4;

    }
    cout<<nr<<" "<<stive;


    return 0;
}

