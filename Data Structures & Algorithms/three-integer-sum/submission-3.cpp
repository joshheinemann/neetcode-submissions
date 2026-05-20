class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       unordered_set<int> startingElements;
       vector<vector<int>> sol;
       sort(nums.begin(), nums.end());
       for(int i = 0; i < nums.size()-2; i++){
            int a = nums[i];
            if(startingElements.count(a)) continue;
            startingElements.insert(a);
            int l = i + 1;
            int r = nums.size()-1;
            while(r > l){
                int left =  nums[l];
                int right = nums[r];
                int currsum = a + left + right;
                if(currsum == 0){
                    sol.push_back({a, left, right});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]) l++; //skip duplicate l values
                }
                else if(currsum > 0) r--;
                else l++;
            }
        }
        return sol; 
    }
};
