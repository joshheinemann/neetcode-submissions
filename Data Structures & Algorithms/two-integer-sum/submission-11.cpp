class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashset;
        for (int i = 0; i < nums.size(); i++){
            hashset[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(hashset.count(diff) && hashset[diff] != i){
                return {i, hashset[diff]};
            }
        }
        return {};
    }
};
