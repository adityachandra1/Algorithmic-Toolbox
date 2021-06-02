#include <bits/stdc++.h>
using namespace std;

int MaxPairwiseProduct(const vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = max(max_product,
                              numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

long long GreedyApproach(vector<long long> numbers) {
    sort(numbers.begin(), numbers.end());
    return numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (long long i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // cout << MaxPairwiseProduct(numbers) << "\n";
    cout << GreedyApproach(numbers) << endl;
    return 0;
}
