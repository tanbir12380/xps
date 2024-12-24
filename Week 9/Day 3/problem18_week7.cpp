#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        vector<long long> a(n), b(n + 1, 0);
        for (int p = 1; p < n; p++) 
        { 
            cin >> b[p]; 
        }
        for (int p = 0; p < n; p++) 
        { 
            a[p] = b[p] | b[p + 1]; 
        }
        bool q = true;
        for (int p = 1; q && p < n; p++) 
        {
            if ((a[p - 1] & a[p]) != b[p]) 
            { 
                q = false; 
            }
        }

        if (!q) 
        { 
            cout << "-1" << endl; 
            continue; 
        }
        for (int p = 0; p < n; p++) 
        { 
            cout << a[p] << " "; 
        }
        cout << endl;
    }
}
