//https://www.codechef.com/problems/TAXES
//Tax in Chefland
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x>100)cout<<x-10<<endl;
    else
    cout<<x<<endl;
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