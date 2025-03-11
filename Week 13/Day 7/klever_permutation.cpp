#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> V(n, 0);
        int a = 1;
        for (int i = 0; i < k; i++) {
            if (i % 2 == 0) {
                int j = i;
                while (j < n) {
                    V[j] = a;
                    a++;
                    j += k;
                }
            } else {
                int j = i;
                while (j + k < n) {
                    j += k;
                }
                while (j >= i) {
                    V[j] = a;
                    a++;
                    j -= k;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << V[i] << " ";
        }
        cout << endl;
    }
}
