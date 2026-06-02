class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // If the size of the array is less than k, we cannot find a subarray of size k, so return 0.
        if(nums.size()<k) return 0;
        // Calculate the sum of the first k elements.
        // Use a fixed size sliding window to calculate the sum of the next k elements and update the maximum average.
        double avgSum=0;
        double avg;
        for(int i=0;i<k;i++){
            avgSum+=nums[i];
        }
        avg=avgSum/k;
        double res=avg;
        for(int i=k;i<nums.size();i++){
            avgSum+=nums[i]-nums[i-k];
            avg=avgSum/k;
            res=max(res,avg);
        }
        return res;
    }
};