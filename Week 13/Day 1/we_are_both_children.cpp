#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    while (a--) {
        long long b, c, d = -1;
        cin >> b;
        vector<long long> V1(b + 1, 0);
        vector<long long> V2(b + 1, 0);

        for (int i = 0; i < b; i++) {
            cin >> c;
            if (c <= b) {
                V1[c]++;
            }
        }

        for (int i = 1; i <= b; i++) {
            for (int j = 0; j <= b; j += i) {
                V2[j] += V1[i];
            }
        }

        for (int i = 1; i <= b; i++) {
            d = max(V2[i], d);
        }

        cout << d << endl;
    }
}
