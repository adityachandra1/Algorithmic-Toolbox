//json_illusion
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// LCM*GCD = product;
ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << (a*b)/gcd(a, b) << std::endl;
  return 0;
}
