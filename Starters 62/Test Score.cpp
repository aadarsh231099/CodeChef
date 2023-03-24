//https://www.codechef.com/problems/CHEFSCORE
//Test Score
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    if(n*x>=y && y%x==0)cout<<"YES"<<endl;
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