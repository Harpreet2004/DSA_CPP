class Solution {
public:
    void findSubsets(int idx,vector<int>&ds,vector<vector<int>>&ans,vector<int>& nums) {
        ans.push_back(ds);
        for(int i = idx;i<nums.size();i++) {
            if(i != idx && nums[i] == nums[i-1]) continue;
        ds.push_back(nums[i]);
        findSubsets(i+1,ds,ans,nums);
        ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        findSubsets(0,ds,ans,nums);
        return ans;
    }
};