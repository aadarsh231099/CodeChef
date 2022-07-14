//https://www.codechef.com/JULY221D/problems/CHEFCAND
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,x;
  cin>>n>>x;
  if(n<=x) cout<<0<<endl;
  else
  {
      cout<<(((n-x)+3)/4)<<endl;
  }
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