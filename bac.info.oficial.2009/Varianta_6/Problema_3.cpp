#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
   int x;
   int fr[100],i;
   while(f>>x)
   {
       fr[x]++;
   }
   for(i=0; i<=99; i++)
   {
       cout<<"Cifra "<<i<<" apare de "<<fr[i]<<" ori";
   }
   
    return 0;
}
