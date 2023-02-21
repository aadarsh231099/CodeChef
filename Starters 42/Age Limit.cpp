//https://www.codechef.com/problems/AGELIMIT
//Age Limit
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x,y,a;
  cin>>x>>y>>a;
  if(a>=x && a<y)
  cout<<"yes"<<endl;
  else
  cout<<"no"<<endl;
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