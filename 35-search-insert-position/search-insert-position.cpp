class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n-1;

        if(target < nums[0]) return 0;
        if(target > nums[n-1]) return n;


        while(l<=h) {
            int mid = (l+h) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            if(target < nums[mid]) {
                if(target > nums[mid-1]) return mid;
                h = mid - 1;
            }

            if(target > nums[mid]) {
                l = mid + 1;
            }
        }
        return l;
    }
};