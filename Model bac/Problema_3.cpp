#include <bits/stdc++.h>
#include <iostream>
using namespace std;

ifstream f ("date.in");

int main ()
{

  int n,m,x,i,j;
  f>>n;
  f>>m;
  for(i=1; i<=n; i++)
  {
      for(j=1; j<=m; j++)
      {
          f>>x;
          if(x==1)
            cout<<i<<" "<<j<<endl;
      }
  }
   //programul este eficient pentru ca nu salveaza in memorie un tablou bidimensional, si parcurge o singura data secvemtele

  return 0;
}
