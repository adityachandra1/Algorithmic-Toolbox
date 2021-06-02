//json_illusion
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
