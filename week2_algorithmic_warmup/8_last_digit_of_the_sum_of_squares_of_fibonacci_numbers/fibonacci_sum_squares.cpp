//json_illusion
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fibl(ll n) {
   
    ll k = n % 60;
    vector<int> fib(k + 1);

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= k; i++) {
        fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
    }
    return fib[k] % 10;
}

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    long long sum = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    ll ans = (fibl(n) * fibl(n + 1)) % 10;
    cout << ans;
}
