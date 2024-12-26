#include <iostream>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        string s; cin >> s;

        int x = 0, y = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            if      (s[i] == 'N') y++;
            else if (s[i] == 'S') y--;
            else if (s[i] == 'E') x++;
            else if (s[i] == 'W') x--;
        }

        if (x % 2 || y % 2) 
        {
            cout << "NO" << endl; 
            continue; 
        }
        int h = x / 2, j = y / 2; 
        bool a = false, b = false;

        int c = 0, d = 0; 
        string r = s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'N') 
            {
                if (!a || d < j) 
                {
                    d++; r[i] = 'H'; a = true; 
                }
                else 
                {
                    r[i] = 'R'; b = true; 
                }
            }
            else if (s[i] == 'S') 
            {
                if (!a || d > j) 
                { 
                    d--; r[i] = 'H'; a = true; 
                }
                else 
                { 
                    r[i] = 'R'; b = true; 
                }
            }
            else if (s[i] == 'E')
            {
                if (!a || c < h) 
                {
                    c++; r[i] = 'H'; a = true; 
                }
                else 
                { 
                    r[i] = 'R'; b = true; 
                }
            }
            else if (s[i] == 'W') 
            {
                if (!a || c > h) 
                {
                    c--; r[i] = 'H'; a = true; 
                }
                else 
                { 
                    r[i] = 'R'; b = true; 
                }
            }
        }

        if (a && b) 
        {
            cout << r << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

}