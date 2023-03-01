//https://www.codechef.com/problems/BETDEAL
//Better Deal
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  if ((100-a)<((100-b)*2))
  cout<<"FIRST"<<endl;
  else if((100-a)>((100-b)*2))
  cout<<"SECOND"<<endl;
  else
  cout<<"BOTH"<<endl;
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