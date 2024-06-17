class Solution {
public:
    int maximu(vector<int>& piles) {
        int maxi = INT_MIN;

        for(int i=0;i<piles.size();i++) {
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }

    long long findTotalHours(vector<int>& piles,int hourly) {
        int n = piles.size();
        long long totalhours = 0;
        for(int i=0;i<n;i++) {
            totalhours += ceil((double)(piles[i]) / (double)(hourly));
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = maximu(piles);

        while(lo<=hi) {
            int mid = (lo+hi) / 2;

            long long totalH = findTotalHours(piles,mid);

            if(totalH <= h) {
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return lo;
    }
};