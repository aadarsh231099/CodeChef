//https://www.codechef.com/problems/INTEST
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n,k,c=0;
  cin>>n>>k;
  for (long long int i = 0; i < n; ++i)
  {
    long long int x;
    cin>>x;
    if(x%k==0)
      c++;
  }
  cout<<c;
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
