class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //BRUTE****
        // int n = nums.size(), i=0;
        // for(;i<n;i++) {
        //     int flag = 0;
        //     for(int j=0;j<n;j++) {
        //         if(nums[j] == i) {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag == 0) {
        //         return i;
        //     }
        // }
        // return i;

        //Better** hash array
       int n = nums.size() + 1;
int *hashh = new int[n](); // Dynamic array allocation and initialization to 0

for (int i = 0; i < n; i++) {
    if (i < nums.size()) {
        hashh[nums[i]]++;
    }
}

int i = 0;
for (; i < n; i++) {
    if (hashh[i] == 0)
        break;
}

delete[] hashh; // Deallocate the dynamic array

return i;


        //OPTIMAL**(1) tc = O(n) sc=o(1)
        // int n= nums.size();
        // int sum1 = (n*(n+1)/2);
        // int sum2 = 0;
        // for(int i=0;i<n;i++) {
        //     sum2+=nums[i];
        // }
        // return (sum1 - sum2);

        //OPTIMAL(2)***tc o(n) tc=o(1)
        // int xor1 = 0,xor2 = 0,n=nums.size();
        // for(int i=0;i<n;i++) {
        //     xor2 = xor2 ^ nums[i];
        //     xor1 = xor1 ^ (i+1);
        // }
        // xor1 = xor1 ^ n;
        // return (xor1 ^ xor2);
    }
};