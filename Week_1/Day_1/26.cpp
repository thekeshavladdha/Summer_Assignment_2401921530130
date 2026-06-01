class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,k=1;
        // Use two pointers: j scans the array while i tracks the last unique element.
        // Whenever a new unique element is found, place it next to previous unique elements and increase count.
        while(i<=j && j<nums.size()){
            if(nums[j]==nums[j-1]) j++;
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
                k++;
                
            }

        }
        return k;
    }
};