class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;
        int idx1, idx2;
        // Store (target - current element) as key and its index as value in hashmap.
        // If current element already exists as a key, then a valid pair for the target sum is found.
        for (int i = 0; i < nums.size(); i++) {
            
            if (mp.count(nums[i])) {
                idx1 = i;
                idx2 = mp[nums[i]];
                break;
            }
            mp[target - nums[i]]=i;
        }
        return {idx1, idx2};
    }
};
