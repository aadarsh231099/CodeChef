https://www.codechef.com/START4C/problems/QUIZPLAG/
#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n,m,k,c=1,z=0;
   cin>>n>>m>>k;
   int a[k],b[k];
   for (int i = 0; i < k; ++i)
   {
     cin>>a[i];
   }
   sort(a,a+k);
   for (int i = 0; i < k; ++i)
   {
     if(a[i]>n)break;
     if(a[i]==a[i+1]&&b[z-1]!=a[i]){
      b[z++]=a[i];
     }
   }  
   cout<<z<<" ";
   for (int i = 0; i < z; ++i)
   {
     cout<<b[i]<<" ";
   }
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
     solve();cout<<"\n";}
     return 0;}