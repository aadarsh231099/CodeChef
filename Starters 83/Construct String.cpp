//https://www.codechef.com/problems/CONSTR/
//Construct String
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long int n,c=1;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]!=s[i+1]){
	            if(c%2!=0) cout<<s[i];
	            else cout<<s[i]<<s[i];
	            c=1;
	        }
	        else
	            c++;
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