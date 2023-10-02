class Solution {

private:
    // int number;
        bool lins(vector<int>&nums,int number) {
            for(int i=0;i<nums.size();i++) {
                if(nums[i] == number) return true;
            }
            return false;
        }
public:
    int longestConsecutive(vector<int>& nums) {
        //BRUTE**
        //TC = O(N^2)
        //SC = O(1)

        // int cnt=0,len=0;
        

        // for(int i=0;i<nums.size();i++) {
        //     int x = nums[i];
        //     cnt = 1;
        //     while(lins(nums,x+1) == true) {
        //         x= x+1;
        //         cnt+=1;
        //     }
        //     len = max(cnt,len);
        // }
        // return len;
        

        //BETTER**
        // if(nums.size() == 0) return 0;    
        // int cnt=0,len=1;
        // int lastSmallest= INT_MIN;
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++) {
        //     if(nums[i] -1 == lastSmallest) {
        //         cnt+=1;
        //         lastSmallest = nums[i];
        //     }
        //     else if(lastSmallest != nums[i]) {
        //         cnt=1;
        //         lastSmallest = nums[i];
        //     }
        //     len = max(cnt,len);
        // }
        // return len;


    //OPTIMAL**
    int len=0;
    if(nums.size() == 0) return 0;
    unordered_set<int> st;
    for(int i=0;i<nums.size();i++) {
        st.insert(nums[i]);
    }

    for(auto it :st) {
        if(st.find(it-1) == st.end()) {
            int cnt=1;
            int x = it;
            while(st.find(x+1) != st.end()) {
                x=x+1;
                cnt+=1;
            }
            len = max(len,cnt);
        }
    
    }
    return len;
    

    }
};