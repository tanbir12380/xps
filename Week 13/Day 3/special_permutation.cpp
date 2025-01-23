#include <bits/stdc++.h>
using namespace std;

int t, n, a, b;

int main()
{
    cin >> t;

    while (t--) {
        cin >> n >> a >> b;

        if (a - b > 1) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> V1, V2;

        for (int i = 1; i < a; i++)
            V2.push_back(i);

        for (int i = b + 1; i <= n; i++)
            V1.push_back(i);

        if (a < b) {
            V1.push_back(a);
            V2.push_back(b);
        }

        for (int i = a + 1; i < b; i++) {
            if (V1.size() < V2.size())
                V1.push_back(i);
            else 
                V2.push_back(i);
        }

        if (V1.size() != V2.size()) {
            cout << "-1" << endl;
        } else {
            for (int i = 0; i < V1.size(); i++)
                cout << V1[i] << ' ';

            for (int i = 0; i < V2.size(); i++)
                cout << V2[i] << ' ';

            cout << endl;
        }
    }

    return 0;
}
