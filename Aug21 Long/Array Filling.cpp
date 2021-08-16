//https://www.codechef.com/AUG21C/problems/ARRFILL
#include <bits/stdc++.h>
using namespace std;
#define ll long long

  bool comp(pair<int,int>x,pair<int,int>y)
  {
    if(x.first!=y.first)
      return x.first>y.first;
    else
      return x.second>y.second;
  }
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    ll n,m,x,y;
    vector<pair<ll,ll>> v;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    
    }
    sort(v.begin(),v.end(),comp);
    ll k=1,p=n;
    ll res=0;
    for(int i=0;i<m&&n>0;i++)
    {
      ll f=v[i].first;
      ll s=v[i].second;
      k=(k*s)/(__gcd(k,s));
      res+=f*(n-p/k);
      n=p/k;

    }
    cout<<res<<endl;
  }
  return 0;
}