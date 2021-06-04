
//json_illusion
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pisano(ll n ,ll m)
{
    ll prev = 0, curr = 1, period = 0;
    for (int i = 0; i < m * m; i++) {
        ll temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            period = i + 1;
    }
    ll k = n % period;

    vector<int> fib(k+1);
    
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= k; i++) {
        fib[i] = (fib[i - 1] % m  + fib[i - 2]%m )%m;
    }
        return fib[k]%m;
}




int main() {
    long long n, m;
    std::cin >> n >> m;
    cout << pisano(n, m);
}
