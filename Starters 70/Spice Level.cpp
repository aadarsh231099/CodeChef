//https://www.codechef.com/problems/KITCHENSPICE
//Spice Level
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x;
  cin>>x;
  if(x<4)cout<<"MILD"<<endl;
  else if(x>=4 && x<7)cout<<"MEDIUM"<<endl;
  else cout<<"HOT"<<endl;
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