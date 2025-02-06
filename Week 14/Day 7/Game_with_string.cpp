#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> V1;
    int c = 0;

    for (int i = 0; i < s.size(); i++) {
        if (V1.empty()) {
            V1.push_back(s[i]);
        } else if (V1.back() == s[i]) {
            c++;
            V1.pop_back();
        } else {
            V1.push_back(s[i]);
        }
    }

    if (c % 2 == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}