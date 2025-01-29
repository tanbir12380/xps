#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, -1});
        v.push_back({y, 1});
    }
    sort(v.begin(), v.end());
    int b = 0;
    for (int i = 0; i < 2 * n; i++){
        b -= v[i].second;
        if (b > 2) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
