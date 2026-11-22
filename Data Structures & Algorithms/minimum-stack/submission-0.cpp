class MinStack {
public:

    stack<int> stk;
    stack<int> mstk;
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
        val = min(val, mstk.empty() ? val: mstk.top());
        mstk.push(val);
    }
    
    void pop() {
        stk.pop();
        mstk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mstk.top();
    }
};
