#include <bits/stdc++.h>
using namespace std;

bool ie(int x) {
    stringstream ss;
    ss << x;
    string s = ss.str();
    int l = s.size();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int sz = (1 << 15);
    vector<int> p;

    for (int x = 0; x < sz; x++) {
        if (ie(x)) {
            p.push_back(x);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long r = n;
        vector<int> a(n);
        vector<int> f(sz, 0);
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p.size(); j++) {
                int x = a[i] ^ p[j];
                if (x < sz) {
                    r += f[x];
                }
            }
        }

        cout << r / 2 << endl;
    }

    return 0;
}
