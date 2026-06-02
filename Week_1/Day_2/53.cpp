class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's algorithm
        int ans=nums[0];
        int mx=nums[0];
        // Iterate through the array and update the maximum sum of subarray ending at current index and the overall maximum sum.
        for(int i=1;i<nums.size();i++){
            mx=max(mx+nums[i],nums[i]);
            ans=max(mx,ans);
        }
        return ans;
    }
};