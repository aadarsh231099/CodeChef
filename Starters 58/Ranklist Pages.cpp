//https://www.codechef.com/problems/RANKLISTPAGE
//Ranklist Pages
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x;
  cin>>x;
  if(x%25!=0)
  cout<<(x/25)+1<<endl;
  else
  cout<<(x/25)<<endl;
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