class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> newMat;
        int m = matrix.size(); //row
        int n = matrix[0].size(); //col
        int top = 0;
        int left=0;
        int right = n-1;
        int bottom = m-1;

        if(matrix.empty() || matrix[0].empty()) {
            return newMat;
        }

       while(left <= right && top <= bottom) {
        //right
            for(int i=left;i<=right;i++) {
                newMat.push_back(matrix[top][i]);
            }
        top++;

        //bottom
        for(int i=top;i<=bottom;i++) {
            newMat.push_back(matrix[i][right]);
        }
        right--;

        //left
        if(top <= bottom) {
            for(int i = right;i>=left;i--) {
            newMat.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        //top
        if(left <= right) {
            for(int i=bottom;i>= top;i--) {
            newMat.push_back(matrix[i][left]);
            }
            left++;
        }
       }

    return newMat;
    }
};

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> result;
//         if (matrix.empty() || matrix[0].empty()) {
//             return result;
//         }
        
//         int rows = matrix.size(), cols = matrix[0].size();
//         int left = 0, right = cols-1, top = 0, bottom = rows-1;
        
//         while (left <= right && top <= bottom) {
//             for (int i = left; i <= right; i++) {
//                 result.push_back(matrix[top][i]);
//             }
//             top++;
            
//             for (int i = top; i <= bottom; i++) {
//                 result.push_back(matrix[i][right]);
//             }
//             right--;
            
//             if (top <= bottom) {
//                 for (int i = right; i >= left; i--) {
//                     result.push_back(matrix[bottom][i]);
//                 }
//                 bottom--;
//             }
            
//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--) {
//                     result.push_back(matrix[i][left]);
//                 }
//                 left++;
//             }
//         }
        
//         return result;
//     }
// };