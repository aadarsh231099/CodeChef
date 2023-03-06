//https://www.codechef.com/problems/THREEPOW2
//Three Powers of Two
#include <bits/stdc++.h>
using namespace std;
void solve(){
     	int n;
	cin >> n;
	string s;
	cin >> s;
	int o = count(s.begin(), s.end(), '1');
	if (o == 1)
	{
		for(int i=0;i<n;i++)
		{
			if (s[i] == '1')
			{
				if ((n - i) - 1 >= 2)
				{
					cout << "YES" << endl;
				}
				else
					cout << "NO" << endl;

				break;
			}
		}
	}
	else if (o == 2 or o == 3)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
    }
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}