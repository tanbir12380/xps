#include <bits/stdc++.h>
using namespace std;
bool check(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()) {
        cout << "No" << endl;
    }
    else {
        bool b = false;
        for(int i = 0; i < s.size(); ++i)
        {
            if(check(s[i]) != check(t[i]))
            {
                b = true;
                break;
            }
        }
        if(b)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
