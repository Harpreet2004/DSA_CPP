class Solution {
public:

    void recursion(vector<int>&nums,int ind,vector<int>&path,vector<vector<int>>&result) {
      
            result.push_back(path);
      
        for(int i=ind;i<nums.size();i++) {
            path.push_back(nums[i]);
            recursion(nums,i+1,path,result);
            path.pop_back();
        }
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>path;
        recursion(nums,0,path,result);
        return result;
    }
};