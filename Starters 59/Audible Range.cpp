//https://www.codechef.com/problems/AUDIBLE
//Audible Range
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x>=67 && x<=45000)cout<<"YES"<<endl;
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