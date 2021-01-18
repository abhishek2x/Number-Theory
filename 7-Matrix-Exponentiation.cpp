// Matrix Exponentiation

/*!
A is a matrix
find A^n

* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
# define N 101

int A[N][N], I[N][N];

void Mul(int A[][N], int B[][N], int n) {
  int res[N][N];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      res[i][j] = 0;
      for (int k = 0; k < n; k++)
        res[i][j] += A[i][k] * B[k][j];
    }
  }
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      A[i][j] = res[i][j];
}

void power(int A[][N], int dim, int n) {
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      if(i == j) I[i][j] = 1;
      else I[i][j] = 0;
    }
  }
  
  // For Native
  // for (int i = 0; i < n; i++)
  //   Mul(I, A, dim);
  
  // Optimised: Binary Exponential Method
  while(n) {
    if(n%2) {
      Mul(I, A, dim); n--;
    }
    Mul(A, A, dim);
    n /= 2;
  } 

  for (int i = 0; i < dim; i++)
    for (int j = 0; j < dim; j++)
      A[i][j] = I[i][j];
} 

void printMat(int A[][N], int dim) {
  for (int i = 0; i < dim; i++)
  {
    for (int j = 0; j < dim; j++)
      cout << A[i][j] << " ";
    cout << "\n";
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int dim; cin >> dim;
  int n; cin >> n;

  for(int i=0; i < dim; i++)
    for(int j=0; j < dim; j++)
      cin >> A[i][j];

  power(A, dim, n);
  printMat(A, dim);


  return 0;
}