#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> V(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }  
        map<int, int> M;
        pbds P;
        long long x = 0;
        for (int i = 0; i < n; i++) {
            int y = P.order_of_key(V[i]);
            int z = P.size();
            x += (z - y);
            P.insert(V[i]);
            M[V[i]]++;
        }
        cout << x << endl;
    }
}
