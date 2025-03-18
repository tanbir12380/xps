class Solution {
public:
  void func(vector<int>& temp, int target, vector<int>& candidates, vector<vector<int>>& result, int start) {
        if(target == 0) {
            result.push_back(temp);
            return;
        }
        for(int j = start; j < candidates.size(); j++) {
            if(target < candidates[j]) continue;
            temp.push_back(candidates[j]);
            func(temp, target - candidates[j], candidates, result, j);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
        vector<int> V;
        func(V, target, candidates, ans, 0); 
        return ans;
    }
};
