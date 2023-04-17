//https://www.codechef.com/problems/INDIVISIBLE
//Indivisible

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=2;i<100;i++){
    if(a%i!=0 && b%i!=0 && c%i!=0)
    	{
    		cout<<i<<endl;
    		break;
    	}
    }
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