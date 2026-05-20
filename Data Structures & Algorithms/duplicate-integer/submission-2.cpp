class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> map;
        for(int i = 0; i < nums.size(); i++){
            auto it = map.find(nums[i]);
            if(it != map.end()){
                return true;
            }
            else{
                map.insert(nums[i]);
            }
        }
        return false;
    }
};