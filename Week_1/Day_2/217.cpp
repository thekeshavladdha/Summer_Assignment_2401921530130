class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Use a set and check if current element is present in the set. If present, return true.
        unordered_set<int> set;
        for(int x: nums){
            if(set.count(x)) return true;
            set.insert(x);
        }
        
        return false;
    }
};