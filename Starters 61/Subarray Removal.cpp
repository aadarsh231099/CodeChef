//https://www.codechef.com/problems/SUBARRAYREM
//Subarray Removal
#include <bits/stdc++.h>
using namespace std;
void solve(){
        int N,c1=0,c0=0;
        cin>>N;
        int A[N];
        for (int i=0;i<N;i++) {
            cin>>A[i];
            c1+=A[i]==1;
		    c0+=A[i]==0;
	}
	cout<<(min(c1,c0)+max(0,c1-c0)/3)<<endl;
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