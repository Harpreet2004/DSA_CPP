class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s == t;

        if(s.size() != t.size()) return false;

        unordered_map<char,int> count;

        for(auto i : s) {
            count[i]++;
        }

        for(auto j : t) {
            count[j]--;
        }

        for(auto i : count) {
            if(i.second != 0){
                return false;
            }
        }

        return true;

    }
};