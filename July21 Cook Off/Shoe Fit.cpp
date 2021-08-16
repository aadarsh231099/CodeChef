//https://www.codechef.com/COOK131C/problems/SHOEFIT
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==0&&b==0&&c==0)
    cout<<0<<endl;
  else if(a==1&&b==1&&c==1)
    cout<<0<<endl;
  else
    cout<<1<<endl;
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