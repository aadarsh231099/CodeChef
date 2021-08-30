//https://www.codechef.com/problems/FLOW017
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long a,b,c,ma=0,mi=0;
  cin>>a>>b>>c;
  ma=max(max(b,c),a);
  mi=min(min(b,c),a);
  cout<<a+b+c-(ma+mi)<<endl;
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
