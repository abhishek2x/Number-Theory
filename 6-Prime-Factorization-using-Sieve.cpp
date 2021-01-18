// Prime Factorization using Sieve

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/
// Don't know: L05

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000001

void generatePrimeFactors(vector<int> v, int n){
  int index = n;
  while(n > 1) { 
    cout << v[n] << " ";
    n/=2; 
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  vector<int> v(MAX, -1);
  v[0] = v[1] = 0;

  for(ll i=2; i*i <= MAX; i++) {
    if(v[i] = -1){
      v[i] = 1;
      for(ll j = i+i; j <= MAX; j+=i){
        if(v[j] == -1)
          v[j] = i;
      }
    }
  }

  // int n; cin >> n;
  // cout << v[n] << "\n";
  for (int i = 0; i < 100; i++)
  {
    cout << v[i] << "\n";
  }
  
  // generatePrimeFactors(v, n);

  return 0;
}