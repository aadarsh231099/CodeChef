//https://www.codechef.com/problems/PARTY2
//Chef gives Party
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,k;
    cin>>n>>x>>k;
    if((k-(x*n))>=0)
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