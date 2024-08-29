class Solution {
public:
    void getPartitions(int ind,vector<string> ds, vector<vector<string>> &ans,string s) {
        if(ind == s.length()) {
            ans.push_back(ds);
            return;
        }
        for(int i= ind;i<s.length();i++) {
            if(isPalindrome(i,ind,s)){
                ds.push_back(s.substr(ind,i-ind+1));
                getPartitions(i+1,ds,ans,s);
                ds.pop_back();
            }
        }
    }

bool isPalindrome(int end,int start,string s) {
    while(start <= end) {
       if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        getPartitions(0,ds,ans,s);
        return ans;
    }
};