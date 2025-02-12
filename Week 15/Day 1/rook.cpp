#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    
    while (t--) {
        string s; 
        cin >> s;
        
        set<string> T;
        
        for (char i = 'a'; i <= 'h'; i++) {
            string p = s;
            p[0] = i;
            T.insert(p);
        }

        for (char i = '1'; i <= '8'; i++) {
            string p = s;
            p[1] = i;
            T.insert(p);
        }

        T.erase(s);

        for (auto it = T.begin(); it != T.end(); it++) {
            cout << *it << endl;
        }
    }
}
