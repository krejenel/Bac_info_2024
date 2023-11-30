#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  char s[101],aux[202];
  cin.getline(s,101);
  int n=strlen(s);
  for(int i=1; i<=n; i++)
  {
      strncpy(aux,s,i);
      aux[i]='\0'; // (adauga la sfarsitul lui aux /0, transformandu-l astfel in sir. s e citit ca sir, dar aux nu, deci trebuie sa-l transformam)
      strcat(aux, s+n-i);
      cout<<aux<<" ";
  }


    return 0;
}
