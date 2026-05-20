class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //create a postfix and prefix array
        //the product of all elements except nums[i] is just the product of postfix and prefix
        //pre and post fix of the first and last elements should be 1
        
        int nums_size = nums.size();
        vector<int> ans;

        int prefix[nums_size];
        int postfix[nums_size];

        for(int i = 0; i < nums_size; i++){
            if(i == 0){
                prefix[0] = 1;
                continue;
            }
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int i = nums_size - 1; i >= 0; i--){
            if(i == nums_size - 1){
                postfix[i] = 1;
                continue;
            }
            postfix[i] = postfix[i+1] * nums[i+1];
        }

        for(int i  = 0; i < nums_size; i++){
            ans.push_back(prefix[i] * postfix[i]);
        }
        return ans;
    }
};
