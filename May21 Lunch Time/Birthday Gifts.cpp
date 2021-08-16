//https://www.codechef.com/LTIME96C/problems/TWINGFT
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,k,i=0,c=0,t=0;
  cin>>n>>k;
  long long a[n];
  for(i=0;i<n;i++)
  {
     cin>>a[i];
  }
  sort(a,a+n);
  for( i=0;i<k;i++)
  {
    c=c+a[n-1-(2*i)];
    t=t+a[n-(2*(i+1))];
  }
  t=t+a[n-1-(2*i)];
  cout<<max(c,t);
 }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
     solve();
     cout<<endl;
   }
     return 0;
   }