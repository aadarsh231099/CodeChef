//https://www.codechef.com/problems/IPLTRSH
//IPL Ticket Rush

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  cout<<(n-m>0?n-m:0)<<endl;
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