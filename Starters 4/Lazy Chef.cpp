//https://www.codechef.com/START4C/problems/LAZYCHF/
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int x,m,d;
     cin>>x>>m>>d;
     cout<<min(x*m,x+d)<<endl;

}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--)
          solve();
     return 0;
}