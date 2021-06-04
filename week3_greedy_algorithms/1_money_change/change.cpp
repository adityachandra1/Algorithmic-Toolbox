//json_illusion
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int get_change(int m) {
  // simple greedy approach(may not be correct)
  ll coins = 0;
  while (m >= 10) {
      m -= 10;
      coins++;
  }
  while(m>=5){
      m -= 5;
      coins++;
  }
  while(m>=1){
      m -= 1;
      coins++;
  }
  return coins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
