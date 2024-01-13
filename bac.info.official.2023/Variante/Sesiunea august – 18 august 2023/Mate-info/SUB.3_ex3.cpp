#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;

 ifstream f("date.in");

int main()
{

   int i,fr[10000]={0},perechi=0,x;
   long m,n;
   f>>m>>n;
   for(i=1; i<=m; i++)
   {
       f>>x;
       fr[x]++;
   }

   for(i=1; i<=n; i++)
   {
       f>>x;
       if(fr[x]>0)
       {
            perechi++;
       fr[x]--;
       }
   }
   cout<<perechi;

    return 0;
}
