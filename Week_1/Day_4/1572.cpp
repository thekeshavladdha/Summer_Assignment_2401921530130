class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // If there is only one element, return that element.
        if(mat.size()==1) return mat[0][0];
        // Calculate the sum of the primary and secondary diagonals.
        int n=mat.size();
        int sum=0;
    
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            // If n is odd, skip the middle element of the secondary diagonal to avoid counting it two times.
            if(n%2!=0 && i==n/2) continue;
            sum+=mat[i][n-i-1];
        }
        return sum;
    }
};