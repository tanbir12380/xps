#include<bits/stdc++.h>
using namespace std;

int main() { 
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> V(n + 2, -1);
        queue<int> q;
        int a = 0, b = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                if (q.size()) {
                    b += (q.front() - i);
                    V[a++] = b;
                    q.pop();
                    q.push(i);
                }
                else {
                    V[a++] = 0;
                }
            }
            else {
                q.push(i);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << V[i] << " ";
        }
        cout << endl;
    }
}
