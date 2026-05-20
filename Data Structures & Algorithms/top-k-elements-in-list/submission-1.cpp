class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      for(int x : nums){
        mp[x]++; //key is the num and val is its frequency
      }
      priority_queue<pair<int, int>> maxheap;

      for(auto pair : mp){
        maxheap.push({pair.second, pair.first});
      }
      vector<int> sol;
      for(int i = 0; i < k; i++){
        sol.push_back(maxheap.top().second);
        maxheap.pop();
      }
      return sol;
    }
};
