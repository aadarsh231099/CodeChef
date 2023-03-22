//https://www.codechef.com/problems/EXPERT
//Expert Setter
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(((100*y)/x)>=50)cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  
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