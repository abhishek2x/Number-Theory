// Euclid Algorithm

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(int a, int b) {
  if(b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int n, m; cin >> n >> m;

  cout << gcd(n, m);
  return 0;
}