#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> v(n);
        set<int> seen;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            seen.insert(v[i]);
        }

        int mex = 0;
        while (seen.count(mex)) {
            mex++;
        }

        v.push_back(mex);
        k = k % (n + 1);

        deque<int> d(v.begin(), v.end());
        while (k--) {
            d.push_front(d.back());
            d.pop_back();
        }

        for (int i = 0; i < n; i++) {
            cout << d[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
