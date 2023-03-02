//https://www.codechef.com/problems/CANDYSTORE
//Candy Store
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x>y)cout<<y<<endl;
    else
    cout<<x+((y-x)*2)<<endl;
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