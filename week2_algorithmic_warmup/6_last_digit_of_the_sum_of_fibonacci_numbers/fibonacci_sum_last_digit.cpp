//json_illusion
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ezzFib(ll n) {
    vector<int> fib(61);

    if (n <= 1)
        return n;
    ll k = n % 60, sum = 0;

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        if (i < 61) {
            fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
            // }else{
            //     fib[i] = fib[i % 60];
            // }
        }
    }
    for (int i = 0; i <= k; i++){
        sum = (sum % 10 + fib[i] % 10) % 10;
    }
        return sum;
}

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    long long sum = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << ezzFib(n);
}
