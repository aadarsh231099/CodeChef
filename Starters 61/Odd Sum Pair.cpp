//https://www.codechef.com/problems/ODDSUMPAIR
//Odd Sum Pair
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)%2==1 || (a+c)%2==1 || (b+c)%2==1)cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  
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