#include <bits/stdc++.h>
using namespace std;

int F(int x) {
  int r = 0;
  while (x) {
    r += x % 10;
    x /= 10;
  }
  return r;
}

int main() {

  int T;
  cin >> T;
  
  while (T--) {
    int n, q;
    cin >> n >> q;
    
    vector<int> V1(n);
    for (int i = 0; i < n; i++) {
      cin >> V1[i];
    }
    
    set<int> S;
    for (int i = 0; i < n; i++) {
      if (V1[i] >= 10) {
        S.insert(i);
      }
    }
    
    while (q--) {
      int t;
      cin >> t;
      
      if (t == 1) 
      {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        
        vector<int> V2;
        while (true) 
        {
          set<int>::iterator it = S.lower_bound(l);
          if (it != S.end() && *it <= r) 
          {
            int x = *it;
            S.erase(it);
            V1[x] = F(V1[x]);
            if (V1[x] >= 10) {
              V2.push_back(x);
            }
          }
          else 
          {
            break;
          }
        }
        
        for (int i = 0; i < V2.size(); i++) {
          S.insert(V2[i]);
        }
        
      } else {
        int y;
        cin >> y;
        y--;
        cout << V1[y] << endl;
      }
    }
  }
}
