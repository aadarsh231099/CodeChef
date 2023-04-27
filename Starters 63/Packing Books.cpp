//Packing Books
//https://www.codechef.com/problems/BOOKPACK

#include <bits/stdc++.h>
using namespace std;
void solve(){
        int x,y,z;
	    cin>>x>>y>>z;
	    if(y%z==0){
	        cout<<(y/z)*x<<endl;
	    }
	    else{
	        cout<<((y/z)+1)*x<<endl;
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