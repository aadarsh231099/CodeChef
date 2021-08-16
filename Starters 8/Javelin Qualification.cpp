//https://www.codechef.com/START8C/problems/JAVELIN
#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,m,x;
cin>>n>>m>>x;
vector<pair<int,int>> v;
int d;
for(int i=0;i<n;i++)
{
  cin>>d;
  v.push_back(make_pair(d,i+1));
}
sort(v.rbegin(),v.rend());
vector<int>res;
for(int i=0;i<n;i++)
{
if(v[i].first>=m||res.size()<x)
  res.push_back(v[i].second);
}
sort(res.begin(),res.end());
cout<<res.size()<<" ";
for(int i=0;i<res.size();i++)
{
  cout<<res[i]<<" ";

}
cout<<endl;
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