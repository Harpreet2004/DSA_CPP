class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //BRUTE****
        // make a new matrix and store the first element of first row to 
        // new matrix's last element of first row
        // and repeat again this will take higher S.C and TC


       //OPTIMAL****

       int n = matrix.size();
       //transpose
    //    TC-> O( N/2 * N/2)
       for(int i = 0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
       }     
        
        //reverse
        // TC -> O(N * N/2)
        for(int i=0;i<n;i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};