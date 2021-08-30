//https://www.codechef.com/problems/DIFFSUM
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n1,n2;
  cin>>n1;
  cin>>n2;
  if(n1>n2)
    cout<<n1-n2;
  else
    cout<<n1+n2;
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
