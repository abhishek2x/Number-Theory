/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000

void letsHanoi(ll x, ll y, ll z, ll a, ll b, ll c) {
  if(a == 0 && b == 0 && c == 0) {
    cout << "Yes";
    return;
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll x, y, z, a, b, c;
  cin >> x >> y >> z >> a >> b >> c;

  letsHanoi(x, y, z, a, b, c);

  return 0;
}