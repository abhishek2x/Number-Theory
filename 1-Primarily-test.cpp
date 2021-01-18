// check if a number is prime or not

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool testPrime (int n) {
  
  for (int i = 2; i*i < n; i++)
  {
    if(n%i == 0)
      return false;
  }
  return true;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  cout << testPrime(n);
  return 0;
}