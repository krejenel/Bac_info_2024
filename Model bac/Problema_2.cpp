
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

ifstream f ("date.in");


int main ()
{

  int n, a[25][25], i, j;
  f >> n;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      f >> a[i][j];
  for (i = 0; i < n; i++)
  {
       for (j = 0; j < n; j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
  }
  cout<<endl;
  
  int ok=1,prima=0,ultima=0;
   for (i = 0; i < n; i++)
  {
       for (j = 0; j < n; j++)
       {
           if(a[i][j]==0)
           ok=0;
       }
       if(ok==1 && prima==0)
       {
           prima=i;
       }
       else if(ok==1)
       {
           if(i>ultima)
           ultima=i;
       }
       ok=1;
  }
  cout<<prima<<" "<<ultima<<endl<<endl;
  
  int aux=0;
  for(j=0; j<n; j++)
  {
      aux=a[prima][j];
      a[prima][j]=a[ultima][j];
      a[ultima][j]=aux;
  }
  
  for (i = 0; i < n; i++)
  {
       for (j = 0; j < n; j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
  }
  

  return 0;
}
