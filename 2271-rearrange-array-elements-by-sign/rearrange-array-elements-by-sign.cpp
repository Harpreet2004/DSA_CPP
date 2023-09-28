class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //BRUTE****
        //TC = O(N) + O(N)
        //SC = O(N)

        // vector<int> pos;
        // vector<int> neg;

        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i] < 0) {
        //         neg.push_back(nums[i]);
        //     }
        //     else{
        //         pos.push_back(nums[i]);
        //     }
        // }

        // for(int i=0;i<nums.size()/2;i++) {
        //     nums[2*i] = pos[i];
        //     nums[2*i+1] = neg[i];
        // }

        // return {nums};

        //OPTIMAL****
        //TC = O(N) SC = O(N)
        int n= nums.size();
        vector<int> ans(n,0);
        
        int posInd = 0,negInd = 1;
        for(int i=0;i<n;i++) {
            if(nums[i] < 0) {
                ans[negInd] = nums[i];
                negInd+=2;
            }
            else {
                ans[posInd] = nums[i];
                posInd+=2;
            }
        }
        return ans;
    }
};
