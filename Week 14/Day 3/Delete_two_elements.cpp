#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> V1(n);
        long long a = 0;

        for (long long i = 0; i < n; i++) {
            cin >> V1[i];
            a += V1[i];
        }

        map<long long, long long> M;
        long long b = 0;
        long long c = 2 * a;

        for (long long i = 0; i < n; i++) {
            long long d = c / n - V1[i];
            if (c % n == 0) {
                b += M[d];
            }
            M[V1[i]]++;
        }

        cout << b << endl;
    }
}
