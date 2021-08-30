//https://www.codechef.com/problems/DECINC
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  if(n%4==0)
    cout<<n+1;
  else
    cout<<n-1;
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
