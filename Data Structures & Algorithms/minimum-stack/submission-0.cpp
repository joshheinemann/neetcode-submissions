class MinStack {
    private:
        stack<int> stk;
        stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        stk.push(val);
        minStack.push(minStack.empty() ? val : min(val, minStack.top()));
    }
    
    void pop() {
        stk.pop();
        minStack.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
