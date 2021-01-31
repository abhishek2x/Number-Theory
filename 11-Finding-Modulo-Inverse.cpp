/*!
* Copyright (c) 2020 Abhishek Srivastava

a^(m-1) congruenge 1 mod m
a^(m-2) congruenge a^-1 mod m

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int power(int a, int n, int m) {
  int res=1;
  while(n) {
    if(n%2) {
      res = (res*a) % m;
      // n/=2;
    }
    a = (a*a) % m;
    n /= 2;
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int a, m;
  cin >> a >> m;
  cout << "a^-1: " << power(a, m-2, m); 

  return 0;
}