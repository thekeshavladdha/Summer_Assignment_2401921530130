class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> reshaped(r,vector<int>(c));
        // If the total number of elements in the original matrix does not match the total number of elements in the reshaped matrix, return the original matrix.
        if(r*c!=m*n) return mat;
        // Traverse the original matrix and fill the reshaped matrix.
        int traverse=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // In the reshaped matrix, each row can store only c elements.
                // So after every c elements, we need to move to the next row.
                // traverse / c gives the row index.
                // Example: if c = 4, then indices 0-3 belong to row 0,
                // indices 4-7 belong to row 1, and so on.
                // traverse % c gives the column index inside that row.
                // It cycles from 0 to c-1 repeatedly.
                reshaped[traverse/c][traverse%c]=mat[i][j];
                traverse++;
            }
        }
        return reshaped;
    }
};