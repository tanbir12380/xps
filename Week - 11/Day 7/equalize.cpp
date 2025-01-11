#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while(t--) {
        int n; 
        cin >> n;
        
        vector<long long> v; 
        set<long long> s;

        for(int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            if(s.count(x)) {
                continue; 
            }
            v.push_back(x); 
            s.insert(x);
        }

        sort(v.begin(), v.end());

        int w = 0; 
        long long x = 0;

        for(int i = 0; i < v.size(); i++) {
            int j = w;
            while(j + 1 < v.size() && v[j + 1] < v[i] + n) { 
                ++j; 
            }
            long long len = j - i + 1;
            x = max(x, len);
            w = j;
            if(w + 1 == v.size()) {
                break; 
            }
        }

        cout << x << endl;
    }

    return 0;
}
