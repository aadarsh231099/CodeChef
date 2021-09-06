//https://www.codechef.com/problems/FLOW011
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  double s,hra,da;
  cin>>s;
  if(s<1500)
    { 
      hra=0.1*s;
      da=0.9*s;
    }
    else
    {
       hra=500;
       da=0.98*s;
    }
    cout<<fixed<<setprecision(2)<<(s+hra+da)<<endl;
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
