#include <iostream>

using namespace std;

int main()
{
    int n,i=0,s=0;
    bool ok=true;
    cin>>n;
    while(ok)
    {
        s+=i;
        i++;
        if(s+i>n)
          ok=false;
    }
    cout<<i+1-n%s;

    /*int n,k=1,i,j=0;
    bool ok=true;
    cin>>n;
    while(ok)
    {
      for(i=k;i>0;i--)
        {
          j++;
          if(j==n)
          {
            ok=false;
            break;
          }
        }
      if(!ok)
        break;
      k++;
    }
    cout<<i;*/
    return 0;
}
