//https://www.codechef.com/problems/SNAPCHAT/
//Snapchat
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n],b[n],c=0,ans=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>b[i];
  }
  for(int i=0;i<n;i++)
  {
      if(a[i]>0 && b[i]>0)
      {
      c++;
      if(c>ans)
      ans=c;
      }
      else if(a[i]==0 || b[i]==0)c=0;
  }
  cout<<ans<<endl;
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