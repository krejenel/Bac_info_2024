#include <iostream>
using namespace std;

int main()
{
    int i,j,a[10][10]={0};
    for(i=1; i<=5; i++)
        for(j=1; j<=5; j++)
    {
        if(5-j>=i-1)
            a[i][j]=5-j;
        else a[i][j]=a[i][j-1];
    }
     for(i=1; i<=5; i++)
     {
         for(j=1; j<=5; j++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }

    return 0;
}
