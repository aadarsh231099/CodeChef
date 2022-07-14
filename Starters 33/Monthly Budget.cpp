//https://www.codechef.com/problems/BUDGET_
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x,y;
  cin>>x>>y;
  if(x>=y*30)
  cout<<"YES"<<endl;
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