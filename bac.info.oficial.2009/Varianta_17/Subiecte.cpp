Subiectul 1
1.b);

2.a. ABABABAB;

   b.12       (1,6)(2,12)(2,13)(3,18)(3,19)(3,20);

   c. #include<iostream>

using namespace std;

int main()

{int x,y;

cin>>x>>y;

if(x<y)

{x=x-y;

y=x+y;

x=y-x;}

while(x>y)

{cout<<‘A’;

x=x-y;

cout<<‘B’;}

return 0;}

d. 
  Subiectul 2
  1.a);

2.b);

3. 3 si 1;

4. 11          b*t;
5. #include<iostream>

using namespace std;

int main()
{int n,a[10][10],i,j,x;
cin>>n;
for(i=1;i<=n;i++)
{x=i;
for(j=1;j<=n;j++)
{a[i][j]=x;
x++;}}
for(i=1;i<=n;i++)
{cout<<endl;
for(j=1;j<=n;j++)
cout<<a[i][j]<<" ";}
return 0;}
Subiectul 3
1.a);

2. 12347,12346,12345;
3#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
void interval(int a[], int n)
{
    int x=a[0], y=a[n-1], nr=0;
    if(x>y)
        swap(x,y);
    for(int i=0;i<=n;i++)
        if(a[i]>=x && a[i]<=y)
        nr++;
    cout<<nr;
}


4. int main()
{
    int n,x,y,nr;
    f>>n;
    nr=n;
    f>>x;
    while(n)
    {
        f>>y;
        if(x<y)
            nr--;
        n--;
    }
    cout<<nr;
    return 0;
}
