//https://www.codechef.com/problems/MAKEAP/
//Make AP
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a,c;
  cin>>a>>c;
  if(abs(a-c)%2==0)
  cout<<(a+c)/2<<endl;
  else
  cout<<-1<<endl;
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
