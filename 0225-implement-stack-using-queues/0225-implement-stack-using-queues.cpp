class MyStack {
public:
    
    queue<int> q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> q1;
        
        while(q.size() > 1)
        {
            q1.push(q.front());
            q.pop();
        }
        
        int x = q.front();
        q.pop();
        
        swap(q, q1);
        
        return x;
        
    }
    
    int top() {
         queue<int> q1;
        
        while(q.size() > 1)
        {
            q1.push(q.front());
            q.pop();
        }
        
        int x = q.front();
        
        q1.push(x);
        
        swap(q, q1);
        
        return x;
    }
    
    bool empty() {
        return q.empty();
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