#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int n, d, k;
        cin >> n >> d >> k;
        vector<int> V1(n), V2(n);

        for (int i = 0; i < k; i++) 
        {
            int l, r; 
            cin >> l >> r;
            l--; 
            V1[l]++; 
            if (r < n) 
            {
                V2[r]++;
            }
        }

        int c = 0;
        for (int i = 0; i < d; ++i) 
        {
            if (V1[i] == 1) 
            {
                c += V1[i];
            }
        }

        int m = 0, x = 0, a = c, b = c;

        for (int i = 1; i <= n - d; ++i) 
        {
            c += V1[i + d - 1];
            c -= V2[i];
            if (c < a) 
            {
                a = c; 
                m = i; 
            }
            if (c > b) 
            {
                b = c; 
                x = i; 
            }
        }

        cout << x + 1 << " " << m + 1 << endl;
    }
}
