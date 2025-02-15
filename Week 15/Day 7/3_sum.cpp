#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
         cin >> v[i];
        }
        
        map<int, int> m;
        for (auto it : v)
        {
            it %= 10;
            m[it]++;
        }
        
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    if (((i + j + k) % 10 == 3))
                    {
                        if (i == j && j == k)
                        {   
                            if (m[i] >= 3)
                            {
                                cout << "YES" << endl;
                                found = true;
                                break;
                            }
                        }
                        else if (i == j)
                        {
                            if (m[i] >= 2 && m[k])
                            {
                                cout << "YES" << endl;
                                found = true;
                                break;
                            }
                        }
                        else if (j == k)
                        {
                            if (m[j] >= 2 && m[i])
                            {
                                cout << "YES" << endl;
                                found = true;
                                break;
                            }
                        }
                        else if (i == k)
                        {
                            if (m[i] >= 2 && m[j])
                            {
                                cout << "YES" << endl;
                                found = true;
                                break;
                            }
                        }
                        else if (m[i] && m[j] && m[k])
                        {
                            cout << "YES" << endl;
                            found = true;
                            break;
                        }
                    }
                }
                if (found) 
                {
                    break;
                }
            }
            if (found) 
            {
                break;
            }
        }
        
        if (!found) 
        {
            cout << "NO" << endl;
        }
    }
}
