class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      //use a stack, push while next element is < current element
      //when element is > curr. pop until stack is empty, track num of elements
      vector<int> ans(temperatures.size(), 0);

      for(int i = 0; i < temperatures.size(); i++){
        int curr = temperatures[i];
        int j = i + 1;
        stack<int> stk;

        while(j < temperatures.size()){
            stk.push(temperatures[j]);
            if(temperatures[j] > curr){
                int numDays = 0;
                while(!stk.empty()){
                    numDays++;
                    stk.pop();
                }
                ans[i] = numDays;
                break;
            }
            j++;
        }
      }
      return ans;  
    }
};
