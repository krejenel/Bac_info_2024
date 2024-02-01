#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");

int main()
{
    char v[40];
    cin>>v;
    char a[]="aeiou";
    for (int i=0; i<strlen(v); i++)
        if (strchr(a,v[i])!=0)
        {
            char a[40];
            strcpy(a,v+i);
            strcpy(v+i+1,a);
            v[i+1]=v[i+1]-32;
        }
    cout<<v<< endl;
    return 0;
}
