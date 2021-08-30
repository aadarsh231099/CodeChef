//https://www.codechef.com/problems/HS08TEST
#include <bits/stdc++.h>
using namespace std;

void solve()
{
int x;
double y;
cin>>x>>y;
if((x%5==0) && (y-x-0.5)>=0)
  cout<<fixed<<setprecision(2)<<y-x-0.5;
else
  cout<<fixed<<setprecision(2)<<y;
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
