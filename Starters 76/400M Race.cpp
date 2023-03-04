//https://www.codechef.com/problems/RACE400M
//400M Race
#include <bits/stdc++.h>
using namespace std;
void solve(){
        int a,b,c; 
        cin>>a>>b>>c; 
       
        if(a<b && a<c) 
        cout<<"ALICE"<<endl; 
        else if(b<a && b<c) 
        cout<<"BOB"<<endl; 
        else 
        cout<<"CHARLIE"<<endl; 
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