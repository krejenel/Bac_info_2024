#include <iostream>
using namespace std;

int main ()
{
  int i, j, m, n;
  int v[11][11];
  cin >> n >> m;
  for (i = 1; i <= n; i++)
	{
	  for (j = 1; j <= m; j++)
		{
		  if (i <= j)
			v[i][j] = i;
		  else
			v[i][j] = j;
		}
	}
	for (i = 1; i <= n; i++)
	{
	  for (j = 1; j <= m; j++)
		{
		  cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
  return 0;
}
