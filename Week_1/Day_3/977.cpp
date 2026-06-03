class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int> temp;
        // store the elements of the input vector in a temporary vector and count the number of negative elements in the input vector.
        for(int num:nums){
            temp.push_back(num);
            if(num<0) j++;
        }
        int k=0,i=j-1;
        // i=j-1 because the last negative element is at index j-1 and j is the index of the first non-negative element.
        // use two pointer approach to compare the squares of the negative and non-negative elements and store the smaller one in the input vector.
        while(i>=0 && j<n){
            // compare the squares of the negative and non-negative elements and store the smaller one in the input vector.
            if(temp[i]*temp[i]>=temp[j]*temp[j]){
                nums[k]=temp[j]*temp[j];
                k++;
                j++; // move the pointer to the next non-negative element.
            }
            else{
                nums[k]=temp[i]*temp[i];
                k++;
                i--; // move the pointer to the left side of the negative element. Because smaller the negative number, larger the square of the negative number.
            }
        }
        // if there are still negative elements left, store their squares in the input vector.
        while(i>=0){
            nums[k]=temp[i]*temp[i];
            i--;
            k++;
        }
        // if there are still non-negative elements left, store their squares in the input vector.
        while(j<n){
            nums[k]=temp[j]*temp[j];
            j++;
            k++;
        }
        return nums;
    }
};