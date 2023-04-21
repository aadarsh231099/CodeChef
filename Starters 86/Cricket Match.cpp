//https://www.codechef.com/problems/CRICMATCH
//Cricket Match

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  if(n<=6*6*m)cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
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