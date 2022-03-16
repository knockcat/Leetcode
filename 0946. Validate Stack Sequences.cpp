// 946.✅ Validate Stack Sequences

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int i = 0, j = 0;
        for (int x : pushed)
        {
            pushed[i++] = x;
            // check that current pushed element matches with popped sequence
            while (i > 0 && pushed[i - 1] == popped[j])
            {
                --i;
                ++j;
            }
        }
        // as pushed is a permutation of stack so at end it should be empty
        return i == 0;
    }
};

// another approach

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> s;
        int j = 0;
        for (int i = 0; i < pushed.size(); ++i)
        {
            s.push(pushed[i]);

            while (!s.empty() && s.top() == popped[j])
            {
                s.pop();
                ++j;
            }
        }
        return s.empty();
    }
};