#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> V1(n), V2(n), V3(n);
        pair<int, int> P[n];

        for (int i = 0; i < n; i++) {
            cin >> V1[i];
        }
        for (int i = 0; i < n; i++) {
            P[i].first = V1[i];
            P[i].second = i;
        }
        sort(P, P + n);

        for (int i = 0; i < n; i++) {
            cin >> V2[i];
        }
        for (int i = 0; i < n; i++) {
            V3[i] = V2[P[i].second];
        }

        for (int i = 0; i < n; i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << i + 1;
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << V3[i];
        }
        cout << endl;
    }

}
