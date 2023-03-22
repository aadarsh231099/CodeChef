//https://www.codechef.com/problems/CUTPAPER
//Paper Cutting
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>> k;
    int squares_per_row=floor(n / k);
    int max_squares=squares_per_row*squares_per_row;
    cout<<max_squares<<endl;
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