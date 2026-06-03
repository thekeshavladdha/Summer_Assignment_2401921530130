class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0,j=0;
        //two pointer approach
        while(i<arr.size()){
            // if the current element is zero, move the pointer to the next position.
                i++;
            }
            // if the current element is non-zero, swap it with the first zero element and move both pointers to the next position.
            else{
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
        }
    }
};