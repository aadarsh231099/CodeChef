//https://www.codechef.com/problems/FLOW016
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll gcd(ll a,ll b)
{
  if(a==0)
    return b;
  return gcd(b%a,a);
}
void solve()
{
  ll a,b;
  cin>>a>>b;
  cout<<gcd(a,b)<<" "<<(a/gcd(a,b))*b<<endl;
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
