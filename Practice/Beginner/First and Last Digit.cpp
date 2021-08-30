//https://www.codechef.com/problems/FLOW004
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long n,rl,r;
  cin>>n;
  rl=n%10;
  while(n)
  {
    r=n%10;
    n=n/10;
  }
  cout<<rl+r<<endl;
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
