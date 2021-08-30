//https://www.codechef.com/problems/MUFFINS3
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin>>n;
  if(n==2)
    cout<<2<<endl;
  else
    cout<<(n/2)+1<<endl;
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
