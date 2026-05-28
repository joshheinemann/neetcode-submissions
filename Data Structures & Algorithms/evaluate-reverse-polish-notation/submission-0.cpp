class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans;
        stack<int> stk;
        for(const string& s : tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                if(s == "+"){
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    stk.push(num1 + num2);
                }
                if(s == "-"){
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    stk.push(num2 - num1);
                }
                if(s == "*"){
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    stk.push(num1 * num2);
                }
                if(s == "/"){
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    stk.push(num2 / num1);
                }
            }
            else{
                stk.push(stoi(s));
            }
        }
        return stk.top();
    }
};
