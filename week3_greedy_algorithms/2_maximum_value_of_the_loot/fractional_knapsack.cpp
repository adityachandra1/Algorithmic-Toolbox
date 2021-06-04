//json_illusion
#include <bits/stdc++.h>
using namespace std;
#define ll long long

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;
    int temp = 1;
    vector<pair<double, double>> val;
    for (int i = 0; i < values.size(); i++) {
        val.push_back(make_pair(values[i] / double(weights[i]), weights[i]));
    }
    sort(val.rbegin(), val.rend());

    for (int i = 0; i < values.size(); i++) {
        while (temp <= capacity && val[i].second > 0) {
            value += val[i].first;
            val[i].second--;
            temp++;
        }
    }

    return value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
