// class Solution {
// public:


//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<int>ds;
//         vector<vector<int>>ans;
//         findCombination(0,ds,target,ans,candidates);
//         return ans;
//     }


//     void findCombination(int idx,vector<int>&ds,int target,vector<vector<int>>&ans,vector<int>& arr) {
//     if(target == 0) {
//         ans.push_back(ds);
//         return;
//     }

//     for(int i=idx;i<arr.size();i++) {
//         if(i > idx && arr[i] == arr[i-1]) continue;

//         if(arr[i] > target) break;

//         ds.push_back(arr[i]);
//         findCombination(idx+1,ds,target-arr[i],ans,arr);
//         ds.pop_back();
//         }
//     }

// };

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector < vector < int >> ans;
        vector < int > ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) continue;
            if (arr[i] > target) break;
            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }
};