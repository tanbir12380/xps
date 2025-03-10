class Solution {
public:

    void func(vector<vector<int>> &V1, vector<int> &V2, vector<int> &V3, int a, bool b) {
        if(a == V2.size()) {
            V1.push_back(V3);
        } else {
            func(V1, V2, V3, a + 1, false);
            if(a > 0 && V2[a] == V2[a - 1] && (!b)) {
                return;
            }
            V3.push_back(V2[a]);
            func(V1, V2, V3, a + 1, true);
            V3.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> V1;
        vector<int> V2;
        func(V1, nums, V2, 0, false);
        return V1;
    }
};
