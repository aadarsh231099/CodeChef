//https://www.codechef.com/problems/FLOW009
#include <bits/stdc++.h>
using namespace std;
void solve()
{
int q,p;
cin>>q>>p;
if(q>1000)
  cout<<fixed<<setprecision(6)<<(double)q*p*0.9<<endl;
else
  cout<<fixed<<setprecision(6)<<(double)q*p<<endl;
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
