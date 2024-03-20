2.
#include <iostream>

using namespace std;

int multiplu(int a[], int n, int k)
{
    int s=0;
    for(int i=0; i<n; i++)
        if(a[i]%k==0 && a[i]%10==k)
            s++;
    return s;

}

int main()
{
    int n,k,a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
      cin>>a[i];
    cout<<multiplu(a,n,k);

    return 0;
}
