#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        vector<int> V1(a), V2(b);
        for (int i = 0; i < a; i++) {
            cin >> V1[i];
        }
        for (int i = 0; i < b; i++) {
            cin >> V2[i];
        }

        sort(V1.begin(), V1.end());
        sort(V2.begin(), V2.end());

        if (V1[0] < V2[b - 1]) {
            swap(V1[0], V2[b - 1]);
        }

        long long x = 0;
        for (int i = 0; i < a; i++) {
            x += V1[i];
        }

        if (c % 2 == 1) {
            cout << x << endl;
        } else {
            int y = *max_element(V1.begin(), V1.end());
            int z = *min_element(V2.begin(), V2.end());
            cout << x - y + z << endl;
        }
    }
}
