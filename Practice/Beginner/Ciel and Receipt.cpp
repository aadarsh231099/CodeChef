//https://www.codechef.com/problems/CIELRCPT
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int p,val=2048,res=0;
  cin>>p;
  while(p>0)
  {
    res=res+p/val;
    p=p%val;
    val=val/2;
  }
cout<<res<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
