class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //make a hash map storing if given integers are in the arr
        //loop through the list, checking if the next integer is in the hash map
        //once it does not find a match for next sequence, store the length of the sequence
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 1;

        for(int x : nums){
            if(st.find(x-1) == st.end()){
                int curr = 1;
                bool nextfound = true;
                int target = x+1;
                while(nextfound){
                    if(st.count(target)){
                        curr++;
                        target++;
                    }
                    else{
                        nextfound = false;
                    }
                }
                if (curr > ans){
                    ans = curr;
                }
            }    
        }
        return ans;
    }
};
