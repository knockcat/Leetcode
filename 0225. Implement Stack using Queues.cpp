// 225.✅ Implement Stack using Queues

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
        for (int i = 1; i < q.size(); ++i)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int a = q.front();
        q.pop();
        return a;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};