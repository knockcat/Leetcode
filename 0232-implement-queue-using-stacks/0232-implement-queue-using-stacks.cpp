class MyQueue {
public:
    
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        pushHelper(x);
    }
    
    void pushHelper(int x)
    {
        if(s.size() == 0)
        {
            s.push(x);
            return;
        }
        
        int data = s.top();
        s.pop();
        pushHelper(x);
        s.push(data);
        return;
    }
    
    int pop() {
        int a = s.top();
        s.pop();
        return a;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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