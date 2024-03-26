#include <iostream>
#include <bits/stdc++.h>
#include <values.h>
using namespace std;

ifstream f("date.in");

char ID[10];
int main()
{
    char s[13]="NUME PRENUME";
    strcpy(ID,strchr(s,' ')+1);
    strcat(ID,"2022");
    cout<<ID;


    return 0;
}
