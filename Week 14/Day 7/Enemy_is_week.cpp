#include<bits/stdc++.h>
using namespace std;

int main() {

    const int M = 1e6 + 2;
    long long f[M], n, t, x, res = 0;
    pair<int, int> p[M];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        p[i] = {x, i};
    }

    sort(p, p + n);

    for (int i = 0; i < n; i++) {
        t = 0;
        for (int j = p[i].second; j > 0; j -= j & -j)
            t += f[j];
        res += (p[i].second - t) * (i - t);
        
        for (int j = p[i].second + 1; j < n; j += j & -j)
            f[j]++;
    }

    cout << res;
}
