#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int n, A[50][50],i,j,maxx=-1;
    f>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            f>>A[i][j];
    for(i=0; i<n; i++)
    {
        if(A[i][i]>maxx)
            maxx=A[i][i];
    }
    j=1;
    for(i=n; i>0; i--)
    {
        if(A[i][j]>maxx)
            maxx=A[i][j];
        j++;
    }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(A[i][j]%2==0 && A[i][j]<=999)
                A[i][j]=maxx;
   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
