//https://www.codechef.com/problems/CONN
//Construct N
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1 || n==3 || n==5)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  
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