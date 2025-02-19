#include <bits/stdc++.h>
using namespace std;

long long T;

int main() {

    cin >> T;

    while (T--) {
        long long n, m, q;
        cin >> n >> m >> q;

        string s;
        cin >> s;
        s = " " + s; 

        vector<long long> V1(m + 1), V2(m + 1), V3(m + 1);
        long long e = n;

        for (long long i = 1; i <= m; i++) {
            cin >> V1[i] >> V2[i];
            V3[i] = e - V1[i] + 1;
            e += V2[i] - V1[i] + 1;
        }

        while (q--) {
            long long k;
            cin >> k;
            for (long long i = m; i > 0; i--) {
                if (k >= V3[i] + V1[i] && k <= V3[i] + V2[i]) {
                    k -= V3[i];
                }
            }
            cout << s[k] << endl;
        }
    }

}      