// https://www.codechef.com/problems/GCDQ

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100005

int GCD(int a, int b) {
  if(b == 0) 
    return a;
  return GCD(b, a%b);
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int ar[MAX], pre[MAX], suff[MAX];


  int t; cin >> t;
  while(t--) {
    int n, q; cin >> n >> q;
    pre[0] = suff[n+1] = 0;
    for (int i = 1; i <= n; i++)
      cin >> ar[i];

    for (int i = 1; i <= n; i++)
      pre[i] = GCD(ar[i], pre[i-1]);

    for (int i = n; i >= 1; i--)
      suff[i] = GCD(ar[i], suff[i+1]);
    
    while(q--) {
      int l, r; cin >> l >> r;
      cout << GCD(pre[l-1], suff[r+1]) << "\n";
    }
  }
  return 0;
}