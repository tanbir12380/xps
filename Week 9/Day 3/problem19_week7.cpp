#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        long long x; 
        cin >> x;
        vector<long long> a;
        while (x) 
        { 
            a.push_back(x % 2); 
            x /= 2; 
        }
        bool r = false;
        for (int y = 1; y < a.size(); y++) 
        {
            if (a[y - 1] && a[y]) 
            { 
                a[y - 1] = -1; 
                a[y] = 0; 
                r = true; 
            }
            else if (a[y] && r) 
            { 
                a[y] = 0; 
            }
            else if (a[y]) 
            { 
                continue; 
            }
            else if (r) 
            { 
                a[y] = 1; 
                r = false; 
            }
        }
        if (r) 
        { 
            a.push_back(1); 
        }

        cout << a.size() << endl;
        for (int y = 0; y < a.size(); y++) 
        { 
            cout << a[y] << " "; 
        }
        cout << endl;
    }
}
