//problema 1
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n=0,i=0,j=0,v[102][102],aux=0,auxx=0,nr=0,suma=0;
    f>>n;
    cout<<n<<endl;
    for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)
         {
              f>>v[i][j];
         }

    }
     for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)
         {
              cout<<v[i][j]<<" ";
         }
         cout<<endl;

    }
    cout<<endl;
    for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)
         {
             auxx=v[i][j];
             cout<<auxx<<" ";
             aux=pow(2,n-j);
             cout<<pow(2,n-j)<<" ";
             suma=auxx*aux;
             cout<<suma<<" ";
             nr=nr+suma;
         }
         cout<<endl;
         cout<<nr<<endl;
         suma=0;
         nr=0;

    }


    return 0;
} */

//problema 2
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int patrat(int n)
{
    int i,maxx=0;
    for(i=1; i<=n; i++)
    {
         if(n%i==0 && sqrt(i)*sqrt(i)==i)
        maxx=i;
    }
    return maxx;

}



int main()
{
      cout<<patrat(72);


    return 0;
} */


//problema 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,nr=1,i,auxx=0;
    while(f>>x)
    {
        for(i=1; i<=x; i++)
        {
            nr=nr*i;
        }
      cout<<nr;
      cout<<endl;
      while(nr%10==0)
      {
           auxx++;
        nr=nr/10;
      }
        cout<<auxx;
    }



    return 0;
}
