//https://www.codechef.com/LTIME98C/problems/REDALERT
#include <bits/stdc++.h>
using namespace std;
void solve(){
 int n,d,h,s=0,flag=0;
 cin>>n>>d>>h;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
  if(a[i]>0)
    s=s+a[i];
  else
  {
    if(s<d)
      s=0;
    else
      s=s-d;
  }
  if(s>h)
    {flag=1;break;}
 }
 if(flag==1)
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
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