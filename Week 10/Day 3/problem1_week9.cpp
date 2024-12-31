#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    vector<long long int> v;
    for (long long int i = 1; i * i <= n; ++i) {
        if (n % i != 0) {
            continue;
        }
        v.push_back(i);
        if (i * i != n) {
            v.push_back(n / i);
        }
    }

    if (k > v.size()) {
        cout << "-1" << endl;
    } else {
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }

    return 0;
}
