// Sieve of Eratosthenes

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 5000001

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  vector<int> is_prime(MAX, 1);
  is_prime[0] = is_prime[1] = 0;

  for(int i=2; i*i <= MAX; i++){
    if(is_prime[i]) {
      for(int j = i*i; j <= MAX; j+=i)
        is_prime[j] = 0;
    } 
  }

  cout << is_prime[70] << "\n";
  cout << is_prime[17] << "\n";
  cout << is_prime[15] << "\n";

  return 0;
}