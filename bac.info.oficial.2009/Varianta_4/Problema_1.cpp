//V4.pr.1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s[100]="ABeCeeDAr";
    int i=0;
    while(i<strlen(s))
    {
        if(s[i]>='a' && s[i]<='z')
        {
          strcpy(s+i, s+i+1);
          i--;
        }
        i++;
    }
    cout<<s;


    return 0;
}
