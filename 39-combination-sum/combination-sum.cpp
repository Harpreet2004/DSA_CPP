class Solution {
public:

    void recursion(int ind,vector<int>& candidates,vector<int>&ds,int target,vector<vector<int>>& ans) {
        if(ind == candidates.size()) {
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        if(candidates[ind] <= target) {
        ds.push_back(candidates[ind]);
        recursion(ind,candidates,ds,target - candidates[ind],ans);
        ds.pop_back();
        }

        recursion(ind+1,candidates,ds,target,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        recursion(0,candidates,ds,target,ans);
        return ans;
    }
};