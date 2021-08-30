//https://www.codechef.com/LTIME99B/problems/KMAX2
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
ll n,k;
cin>>n>>k;
ll a[n],m1=0;
for (ll i = 0; i < n; ++i)
{
  cin>>a[i];
  m1=max(m1,a[i]);
}
ll s=0;
for (ll i = k-1; i < n; ++i)
{
  if(a[i]==m1)
    s=s+(n-i);
}
cout<<s<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
