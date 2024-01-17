
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

ifstream f ("date.in");

void p (int n, int x[], int k)
{
  int i, secventa = 0, nr = 0, maxx = 0, poz=0;
  for (i = 1; i <= n; i++)
    cout << x[i] << " ";
  cout<<endl;
  for (i = 1; i <= n; i++)
    {
      secventa++;
      if (x[i] % 2 == 0)
	nr++;
      if (secventa == k)
	{
	  if (maxx < nr)
	  {
	       maxx = nr;
	  poz = i - (k-1);
	  }
	  secventa = 0;
	  nr = 0;

	}
    }
cout <<poz;
    
}


int main ()
{
  int a, b[100], c, j;
  f >> a;
  f >> c;
  for (j = 1; j <= a; j++)
    f >> b[j];
  p (a, b, c);


  return 0;
}
