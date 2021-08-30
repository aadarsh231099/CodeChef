//https://www.codechef.com/LTIME99C/problems/PROGLANG
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a,b,a1,b1,a2,b2;
  cin>>a>>b>>a1>>b1>>a2>>b2;
  if((a==a1 || a==b1)&&(b==a1 || b==b1))
    cout<<"1"<<endl;
  else if((a==a2 || a==b2)&&(b==a2 || b==b2))
    cout<<"2"<<endl;
  else
    cout<<"0"<<endl;
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
