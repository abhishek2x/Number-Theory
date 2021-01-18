// Prime Factorization
// 100 = 5*5 + 2*2

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void OptimisedSoltution(int n) {
  for(int i=2; i*i <= n; i++) {
    if(n%i == 0) {
      int cnt=0;
      while(n%i == 0){
        cnt++; n/=i;
      }
      cout << i << "^" << cnt << "\n";
    }
  }
  if(n > 1) {
      cout << n << "^" << 1 << "\n";
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
  
  int n; cin >> n;
  OptimisedSoltution(n);

  return 0;
}
