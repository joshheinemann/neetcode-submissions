class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> stk;
        for(int i = 0; i < temperatures.size(); i++){
            while(!stk.empty() && temperatures[i] > stk.top().first){
                ans[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({temperatures[i], i});
        }
        return ans;
    }
};
