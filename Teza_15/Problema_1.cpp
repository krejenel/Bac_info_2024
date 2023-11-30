#include <bits/stdc++.h>
//repetate
using namespace std;
int main()
{
    char s[20],a[20],n,ogl[20];
    cin>>s;
    n=strlen(s);
    strcpy(a,strrev(s));
    strrev(s);
    for(int i=1;i<=n;i++)
    {
        strcpy(ogl,strrev(s));
        strrev(s);
        if(strcmp(s,ogl)==0)
        {
            cout<<s;
            break;
        }
        strcpy(s+n,a+(n-i));
    }
    return 0;
}
