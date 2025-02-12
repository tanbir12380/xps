#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int T; 
    cin >> T;
    
    while (T--) {
        int n; 
        cin >> n;
        
        vector<pair<int, int>> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i].first >> V[i].second;
        }
        
        sort(V.begin(), V.end());
        pbds<int> P;
        
        for (int i = 0; i < n; i++) {
            P.insert(V[i].second);
        }
        
        long long S = 0;
        for (int i = 0; i < n; i++) {
            P.erase(V[i].second);
            S += P.order_of_key(V[i].second);
        }
        
        cout << S << endl;
    }
}
