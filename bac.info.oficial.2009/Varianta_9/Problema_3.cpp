#include<iostream>

#include<fstream>

using namespace std;

ifstream f("BAC.TXT");

int main()

{

   int v[1000]= {0},x,nr=0,a=0,b=0,i;

   while(f>>x)
       if(x>=100 && x<=999)
          v[x]++;

   for(i=999; i>=100 && nr<2; i--)
       if(v[i]==0)
       {
           if(a==0)
           {
               a=i;
               nr++;
           }
           else
        {
               b=i;
               nr++;
           }
       }
   if(nr<2)
       cout<<0;
   else
       cout<<a<<" "<<b;
       
       
   return 0;

}
