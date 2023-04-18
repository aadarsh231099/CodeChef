//https://www.codechef.com/problems/DISTINCTCOL/
//Distinct Colors

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[0]<a[i]) a[0]=a[i];
    }
	    cout<<a[0]<<endl;
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