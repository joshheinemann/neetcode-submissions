class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //what we will do to 
        unordered_set<int> elements(nums.begin(), nums.end());

        int longestSequence = 0;
        for(int i = 0; i < nums.size(); i++){
            if (elements.count(nums[i]-1)) continue; //element is not start of a sequence
            int currSequence = 1;
            int j = nums[i];
            while(elements.count(j+1)){
                currSequence++;
                j++;
            }
            longestSequence = std::max(longestSequence, currSequence);
        }
        return longestSequence;
    }
};
