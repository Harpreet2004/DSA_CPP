class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      //BRUTE**
      //IS BRUTE WE CAN ADD FOR LOOP K WHICH WILL RUN FROM I TO J AND PRINT THE SUM
      
      //BETTER****
        // int maxi =0;
        // int sum=0,i=0;
        // if(nums.size() <= 1 ) return nums[i];
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size()-1;j++) {
        //         sum+=nums[j];
        //         if(sum > maxi){
        //         maxi = max(sum,j-i+1);
        //         }
        //     }
        // }
        // return maxi;

        //OPTIMAL****
        int maxi =INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++) 
        {
          sum+=nums[i];
          if(sum > maxi)
            maxi = sum;
          
          if(sum < 0)
            sum =0;
        }
        return maxi;
    }
};