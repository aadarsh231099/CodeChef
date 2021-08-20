//https://www.codechef.com/START9C/problems/XLSQUARE
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,a;
  cin>>n>>a;
  cout<<((int)(sqrt(n)))*a<<endl;
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


