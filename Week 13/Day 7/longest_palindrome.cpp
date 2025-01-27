#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int u[101] = {0}; 
    vector<string> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    string c = "", l = "", r = "";
    for (int i = 0; i < n; i++) {
        if (u[i]) {
            continue;
        }

        string d = V[i];
        reverse(d.begin(), d.end());

        int j;
        for (j = i + 1; j < n; j++) {
            if (!u[j] && d == V[j]) { 
                u[j] = 1;           
                l += V[i];
                r = V[j] + r;
                break;
            }
        }

        if (j == n && V[i] == d && c.empty()) {
            c = V[i];
        }
    }

    string x = l + c + r;
    cout << x.size() << endl;
    if (!x.empty()) {
        cout << x << endl;
    }

    return 0;
}
