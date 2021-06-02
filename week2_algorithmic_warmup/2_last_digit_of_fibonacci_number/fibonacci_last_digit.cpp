//json_illusion
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// (a + b) mod m = ((a mod m) + (b mod m)) mod m
int fibonacci_fast_lastdigit(int n) {
    vector<int> fib(n+1);
    
    fib[0] = 0;
    fib[1] = 1;
    ll m = 4;
    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 1] % m  + fib[i - 2]%m )%m;
    }
        return fib[n]%m;
}
int main() {
    int n;
    std::cin >> n;
    int c = fibonacci_fast_lastdigit(n);
    std::cout << c << '\n';
    }
