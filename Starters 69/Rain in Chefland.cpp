//https://www.codechef.com/problems/RAINFALL1
//Rain in Chefland
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x<3)cout<<"LIGHT"<<endl;
    else if(x>=3 && x<7)cout<<"MODERATE"<<endl;
    else cout<<"HEAVY"<<endl;
  
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