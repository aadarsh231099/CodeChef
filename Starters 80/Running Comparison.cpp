//https://www.codechef.com/problems/RUNCOMPARE
//Running Comparison
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,c=0;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  cin>>b[i];
  for(int i=0;i<n;i++){
  if(a[i]==b[i] || (!(a[i]>2*b[i]) && !(b[i]>2*a[i])))c++;
  }cout<<c<<endl;
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