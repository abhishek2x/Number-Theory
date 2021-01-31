/*

Binary Exponentiation
Calculating a^n
Trick: Square the base 
and reduce the power by 2

This is an important Algorithm**

Example: Find - 2^13

res      base    power
   1  *     2       13 odd      
   2        2       12
   2        4        6 
   2  *    16        3 odd 
  32       16        2
  32  *   256        1 odd
8192      256        0


* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int Power(int base, int power) {
  int res = 1;
  while(power) {
    if(power%2) {
      res = res*base;
      power--;
    }
    else {
      base *= base;
      power /= 2;
    }
  }
  return res;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  // a^n
  int a, n; cin >> a >> n;
  cout << Power(a, n);

  return 0;
}