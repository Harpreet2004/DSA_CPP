class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>ump;
        int i=0;
        for(;i<nums.size();i++) {
          int a = nums[i]; //
          int rem = target - a; 
          if(ump.find(rem) != ump.end()) {
           return {ump[rem],i};
          }
          ump[a] = i;
        }
        return {};
    }
};