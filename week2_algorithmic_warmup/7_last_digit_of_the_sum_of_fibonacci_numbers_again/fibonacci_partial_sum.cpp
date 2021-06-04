//json_illusion
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ezzFib(ll n) {
    vector<int> fib(61);

    if(n == -1){
        return 0;
    }

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


long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    ll ans = (ezzFib(to) % 10 - ezzFib(from - 1) % 10) % 10;
    ans < 0 ? cout << 10 + ans : cout << ans;
}
