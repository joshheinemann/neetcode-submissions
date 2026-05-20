class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int x : nums){
            count[x]++;
        }

        priority_queue<pair<int, int>> maxHeap;

        for(auto& p : count){
            maxHeap.push({p.second, p.first});
        }

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};
