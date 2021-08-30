//https://www.codechef.com/problems/PPSUM
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int d,n,s=0;
  cin>>d>>n;
  for(int i=0;i<d;i++)
  { s=0;
    for(int j=0;j<=n;j++)
    {
      s=s+j; 
    }
    n=s;
  }
  cout<<s<<endl;
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
