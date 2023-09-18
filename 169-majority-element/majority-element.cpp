//TC = O(N LOG N) + O(N)
//SC = O(N)

//**BETTER
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        map<int,int> mp;
        int n= nums.size();
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        
        for(auto it:mp) {
            if(it.second > n/2){
                return (it.first);
            }
        }
        return {
            
        };
    }
};


//****OPTIMAL
//TC = O(N) + O(N)
//SC = O(1)

    //***MOORE'S VOTING ALGORITHM 
        //1.take cnt=0, element if cnt =0 intialise element with nums[i]
        //2.if ele = n[i] then ++ the count
        //3.else not similar the decrement
        //4.loop through the array again to find if selected element
        //appears more than n/2 then return that element
        int cnt=0,element;

        for(int i=0;i<nums.size();i++) {
            if(cnt == 0) {
                cnt =1;
                element = nums[i];
            }

            else if(nums[i] == element) {
                cnt++;
            }
            
            else {
                cnt--;
            }
        }

        int cnt1=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == element) {
                cnt1++;
            }
            if(cnt1 > (nums.size()/2)) {
                break;
            }
        }
return element;
