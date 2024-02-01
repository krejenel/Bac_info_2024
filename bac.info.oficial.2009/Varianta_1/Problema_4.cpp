#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int
sub (int v[], int n, int a)
{
  int nr = 0, i;
  for (i = 0; i < n; i++)
	{
	  if (v[i] < a)
		nr++;
	}
  return nr;

}

int main ()
{
  int v[10] = { 1, 2, 3, 4, 21, 67, 32, 100, 1, 1};
  int n = 10;
  int a = 20;
  int i, j, aux=0;
  for (i = 0; i < n; i++)
	for (j = i + 1; j < n; j++)
	  {
		if (v[i] < v[j])
		  {
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		  }
	  }
   for (i = 0; i < n; i++)
   cout<<v[i]<<" ";
   cout<<endl;
   int ok=1;
   for (i = 0; i < n; i++)
   {
       if(sub(v,n,v[i])!=n-i-1)
       {
           cout<<"NU";
           ok=0;
           break;
       }
   }
   if(ok==1)
   cout<<"DA";

  return 0;
}
