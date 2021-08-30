//https://www.codechef.com/problems/TSORT
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
ll n;
cin>>n;
ll a[n];
for (ll i = 0; i < n; ++i)
{
  cin>>a[i];
}
sort(a,a+n);
for (ll i = 0; i < n; ++i)
{
  cout<<a[i]<<endl;
}
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}
