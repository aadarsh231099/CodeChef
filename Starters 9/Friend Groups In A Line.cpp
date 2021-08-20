//https://www.codechef.com/START9C/problems/FRIENDGR
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k,l=0,a=0;
  cin>>n>>k;
  string s;
  cin>>s;
  for (int i = 0; i < n; i++)
  {
    if(s[i]=='0')
      continue;
    if(i-l<=k+1)
      l=min(i+1,l+k);
    else{
      a++;
      l=i+1;
    }
  }
  cout<<a+1<<endl;
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



