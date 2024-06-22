class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k, int day) {
        int cnt = 0;
        int nOb = 0;
        
        for(int i=0;i<bloomDay.size();i++) {
            if(bloomDay[i] <= day) {
                cnt++;
            }
            else {
                nOb += (cnt/k);
                cnt = 0;
            }
        }
        nOb += (cnt/k);
        return nOb >= m; 
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        if((long) m*k > bloomDay.size()) return -1;
 

        for(int i=0;i<bloomDay.size();i++) {
            maxi = max(maxi,bloomDay[i]);
            mini = min(mini,bloomDay[i]);
        }
    
        int low = mini,high = maxi;
        while(low <= high) {
            int mid = (low + high) / 2;
            
            if(possible(bloomDay, m, k, mid)) {
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
    return low;
    }
};