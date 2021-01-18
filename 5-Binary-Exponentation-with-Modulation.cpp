// 5-Binary-Exponentation-with-Modulation
// a^n%p
/*
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int Power(int base, int power, int mod) {
  int res = 1;
  while(power) {
    if(power%2) {
      res = (res*base)%mod;
      power--;
    }
    else {
      base = (base*base)%mod;
      power /= 2;
    }
  }
  return res;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  // a^n%p
  int a, n, p; cin >> a >> n >> p;
  cout << Power(a, n, p);

  return 0;
}