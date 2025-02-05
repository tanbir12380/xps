#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> V1(n), V2(m), V3;
        for (int i = 0; i < n; i++) {
            cin >> V1[i];
        }
        for (int j = 0; j < m; j++) {
            cin >> V2[j];
        }

        int i = 0, j = 0;
        bool b = true;

        while (i < n && j < m) {
            
            if (V1[i] == 0) {
                V3.push_back(V1[i]);
                k++;
                i++;
            } else if (V2[j] == 0) {
                V3.push_back(V2[j]);
                k++;
                j++;
            } else if (V1[i] <= k) {
                V3.push_back(V1[i]);
                i++;
            } else if (V2[j] <= k) {
                V3.push_back(V2[j]);
                j++;
            } else {
                b = false;
                break;
            }
        }

        if (b) {
            while (i < n) {
                
                if (V1[i] <= k) {
                    V3.push_back(V1[i]);
                    if (V1[i] == 0) {
                        k++;
                    }
                    i++;
                }
                
                else {
                    b = false;
                    break;
                }
            }

            while (j < m) {
                
                if (V2[j] <= k) {
                    V3.push_back(V2[j]);
                    if (V2[j] == 0) {
                        k++;
                    }
                    j++;
                }
                
                else {
                    b = false;
                    break;
                }
            }
        }

        if (!b) {
            cout << -1 << endl;
        } 
        
        else {
            
            for (int i = 0; i < n + m; i++) {
                if (i != 0) {
                    cout << " ";
                }
                cout << V3[i];
            }
            cout << endl;
        }
    }

}
