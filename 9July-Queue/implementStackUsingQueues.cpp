class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // empty q1 into q2
        while(!q1.empty()){
            int el = q1.front();
            q1.pop();

            q2.push(el);
        }

        // push the value x in q1 
        q1.push(x);

        // empty q2 into q1
        while(!q2.empty()){
            int el = q2.front();
            q2.pop();

            q1.push(el);
        }
    }
    
    int pop() {
        int el = q1.front();
        q1.pop();

        return el;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
