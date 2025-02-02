#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector<pair<int, int>> e;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        e.push_back({a, 1}); 
        e.push_back({b, -1}); 
    }

    sort(e.begin(), e.end());

    int c = 0, m = 0;
    for (int i = 0; i < e.size(); i++) {
        c += e[i].second;
        m = max(m, c);
    }

    cout << m << "\n";
    return 0;
}