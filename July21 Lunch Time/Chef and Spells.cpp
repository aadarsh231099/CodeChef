//https://www.codechef.com/LTIME98C/problems/CHFSPL
#include <bits/stdc++.h>
using namespace std;
void solve(){
 int a[3];
 for (int i = 0; i < 3; ++i)
 {cin>>a[i];
 }sort(a,a+3);
 cout<<(a[2]+a[1])<<endl;
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