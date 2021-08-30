//https://www.codechef.com/problems/AMR15A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,e=0,o=0;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    if(a[i]%2==0)
      e++;
    else
      o++;
  }
  if(e>o)
    cout<<"READY FOR BATTLE";
  else
    cout<<"NOT READY";
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
