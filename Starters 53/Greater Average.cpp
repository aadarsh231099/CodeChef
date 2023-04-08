//https://www.codechef.com/problems/AVGPROBLEM
//Greater Average

#include <bits/stdc++.h>
using namespace std;
void solve(){
  double a,b,c;
  cin>>a>>b>>c;
  if(((a+b)/2)>c)cout<<"yes"<<endl;
  else cout<<"no"<<endl;
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