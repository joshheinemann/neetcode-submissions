class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //to solve this, we will make a prefix product and postfix product
        //the output for each index is the product of all the previous terms times the product of all the next terms
        int n = nums.size();
        vector<int> prefix(n,1);
        vector<int> postfix(n,1);

        for(int i = 0; i < n; i++){
            if(i == 0) continue;
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int i = n-1; i >= 0; i--){
            if(i == (n-1)) continue;
            postfix[i] = postfix[i+1] * nums[i+1];
        }

        vector<int> ans;

        for(int i = 0; i < n; i++){
            ans.push_back(prefix[i] * postfix[i]);
        }
        
        return ans;
    }
};
