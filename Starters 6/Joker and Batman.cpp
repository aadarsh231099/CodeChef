//https://www.codechef.com/START6C/problems/JOKRBTMN
#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,m,l;
cin>>n>>m>>l;
int a[n+1];
for (int i = 1; i <=m; i++)
 {
   int k; cin>>k;
  for(int j=1;j<=k;j++)
    { int x; cin>>x;
    a[x]=i;
  }
 }
 int temp=0,res=0;
 for (int i = 1; i <=l; i++)
  {
    int y; cin>>y;
    if(a[y]!=temp)
      res++;
    temp=a[y];
  } 
  cout<<res<<endl;
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
