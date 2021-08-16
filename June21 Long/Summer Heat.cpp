//https://www.codechef.com/JUNE21C/problems/COCONUT
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int xa,xb,Xa,Xb;
  cin>>xa>>xb>>Xa>>Xb;
  cout<<(Xa/xa)+(Xb/xb)<<"\n";
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }