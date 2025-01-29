#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    
    vector<int> V1(200001, 0);
    vector<int> V2(200001, 0);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        V1[l]++;
        if (r + 1 <= 200000) {
            V1[r + 1]--;
        }
    }

    for (int i = 1; i <= 200000; i++) {
        V1[i] += V1[i - 1];
    }

    for (int i = 1; i <= 200000; i++) {
        if (V1[i] >= k) {
            V2[i] = 1;
        }
    }

    for (int i = 1; i <= 200000; i++) {
        V2[i] += V2[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << V2[r] - V2[l - 1] << endl;
    }

    return 0;
}
