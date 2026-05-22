class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> closeToOpen;
        closeToOpen[')'] = '(';
        closeToOpen[']'] = '[';
        closeToOpen['}'] = '{';
        stack<char> stk;

        for(char c : s){
            if (closeToOpen.count(c)){
                if(stk.empty()) return false;
                if(stk.top() != closeToOpen[c]) return false;
                stk.pop();
            }
            else stk.push(c);
        }
        return (stk.empty());
    }
};
