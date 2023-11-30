#include <bits/stdc++.h>
//1 2 2 2 3 3 5 8 9
using namespace std;
int n,a[100];
void compact(int n,int a[100])
{
    for(int i=1; i<n; i++)
        if(a[i]==a[i+1])
        {
            for(int j=i+1; j<=n; j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;

        }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    compact(n,a);
    return 0;
}
