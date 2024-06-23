#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countPartitions(vector<int>& nums, int sum) {
        long long subarrsum = 0;
        int n = nums.size();
        int partitions = 1;
        for(int i=0;i<n;i++) {
            if(subarrsum + nums[i] <= sum) {
                subarrsum += nums[i];
            }
            else{
                partitions++;
                subarrsum = nums[i];
            }
        }
        return partitions;
    }


    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high) {
            int mid = (low+high) /2;
            int partitions = countPartitions(nums,mid);
            if(partitions > k) {
                low = mid +1;
            }
            else {
                high = mid -1;
            }
        }
        return low;
    }
};