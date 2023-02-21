//https://www.codechef.com/problems/PRESENTS
//Presents for Cheffina
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
  ll n;
  cin>>n;
  if(n<5)
  cout<<n<<endl;
  else
  cout<<(n-(n/5))<<endl;
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