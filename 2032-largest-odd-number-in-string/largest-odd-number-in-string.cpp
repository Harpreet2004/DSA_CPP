class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        if(num.size() < 0) return ans;
        int ind;

        for(int i=num.size() -1; i>=0; i--) {
            if(num[i] & 1) {
                ind = i;
                break;        
            }
        }

        for(int i=0;i<=ind;i++) {
            ans += num[i];
        }

        return ans;
    }
};