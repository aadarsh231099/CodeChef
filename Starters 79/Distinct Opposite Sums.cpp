//https://www.codechef.com/problems/DISTOPPSUMS
//Distinct Opposite Sums
#include <bits/stdc++.h>
using namespace std;

vector<int> generatePermutation(int n) {
    vector<int> perm(n);
    for (int i = 0; i < n/2; i++) {
        perm[i] = i*2 + 2;
        perm[n-i-1] = i*2 + 1;
    }
    return perm;
}

void printPermutation(vector<int> perm) {
    for (int i = 0; i < perm.size(); i++) {
        cout << perm[i] << " ";
    }
    cout << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<int> perm = generatePermutation(n);
    printPermutation(perm);
  }
  return 0;
}