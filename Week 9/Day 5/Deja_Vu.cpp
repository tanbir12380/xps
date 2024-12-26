#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<int> b;
        bool p[30] = {false};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            int c;
            cin >> c;
            if (!p[c]) {
                p[c] = true;
                b.push_back(c);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < b.size(); j++) {
                int d = b[j];
                if (a[i] % (1LL << d) == 0) {
                    a[i] += (1LL << (d - 1));
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
