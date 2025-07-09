class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        // empty s1 into s2
        while(!s1.empty()){
            int el = s1.top();
            s1.pop();

            s2.push(el);
        }

        // push el. into s1
        s1.push(x);

        // empty s2 into s1
        while(!s2.empty()){
            int el = s2.top();
            s2.pop();

            s1.push(el);
        }
    }
    
    int pop() {
        // top of stack <-> front of queue
        int el = s1.top();
        s1.pop();

        return el;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
