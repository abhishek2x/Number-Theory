// Fibonacci Finding
// https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem
// Matrix exponentiation - WA

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000001

ll ar[3] = {0};
ll I[3][3] = {0}, T[3][3] = {0};

void mul(ll A[3][3], ll B[3][3], int dim) {
  ll res[dim+1][dim+1] = {0};

  for(int i=1; i<=dim; i++){
    for(int j=1; j<=dim; j++) {
      res[i][j]=0;
      for(int k=1; k<=dim; k++) {
        ll x = (A[i][k] * B[k][j]) % mod;
        res[i][j] = (res[i][j] + x) % mod;
      }
    }
  }

  for(int i=0; i<=dim; i++) {
    for(int j=0; j<=dim; j++) {
      A[i][j] = res[i][j];
    }
  }
}


ll getFib(int n) {
  if(n <= 2) return ar[n];
  
  // Identity matrix
  I[1][1] = I[2][2] = 1;
  I[1][2] = I[2][1] = 0;

  // transition matrix for fibo
  T[1][1] = 0;
  T[1][2] = T[2][1] = T[2][2] = 1;

  n--;

  // Binary Exponentiation 
  while(n) {
    if(n%2) {
      mul(I, T, 2); n--;
    } else {
      mul(T, T, 2); n/=2;
    }
  }

  ll Fn = (ar[1] * I[1][1] + ar[2] * I[2][1]) % mod;
  return Fn;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n;
    cin >> ar[1] >> ar[2] >> n; n++;
    cout << getFib(n) << "\n";
  }

  return 0;
}
