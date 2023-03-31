//https://www.codechef.com/problems/PERFECTTRIO
//Perfect Trio
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b==c) || (b+c==a) || (a+c==b))cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  
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