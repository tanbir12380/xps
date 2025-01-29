#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> V1(n + 1), V2(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> V1[i];
    }

    int l, r;
    for (int i = 1; i <= q; ++i) {
        cin >> l >> r;
        V2[l]++;
        if (r + 1 <= n) {
            V2[r + 1]--;
        }
    }

    for (int i = 1; i <= n; ++i) {
        V2[i] += V2[i - 1];
    }

    sort(V1.begin() + 1, V1.end());
    sort(V2.begin() + 1, V2.end());

    long long s = 0;
    for (int i = 1; i <= n; ++i) {
        s += (V1[i]) * V2[i];
    }

    cout << s << "\n";
    return 0;
}
