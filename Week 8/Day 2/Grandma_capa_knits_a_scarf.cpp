#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        int r = -1;
        for (char c = 'a'; c <= 'z'; c++) 
        {
            int l = 0, m = n - 1, d = 0;
            while (d >= 0 && l < m) 
            {
                if (s[l] == s[m]) 
                {
                    l++; 
                    m--;
                }
                else if (s[l] == c) 
                {
                    l++; 
                    d++;
                }
                else if (s[m] == c) 
                {
                    m--; 
                    d++;
                }
                else 
                {
                    d = -1;
                }
            }

            if (d >= 0) 
            {
                if (r < 0 || d < r)
                {
                 r = d;
                }
            }
        }

        cout << r << endl;
    }

    return 0;
}
