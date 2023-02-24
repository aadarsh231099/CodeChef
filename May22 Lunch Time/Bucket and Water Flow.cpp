//https://www.codechef.com/problems/WATERFLOW
//Bucket and Water Flow
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int w,x,y,z;
  cin>>w>>x>>y>>z;
  if((w+(y*z))<x)
  cout<<"unfilled"<<endl;
  else if((w+(y*z))==x)
  cout<<"filled"<<endl;
  else
  cout<<"overflow"<<endl;
  
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