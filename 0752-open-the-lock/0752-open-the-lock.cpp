class Solution {
public:
    
    string forward(string curr, int idx)
    {
        if(curr[idx] == '9')
            curr[idx] = '0';
        else
            ++curr[idx];
        return curr;
    }
    
    string backward(string curr, int idx)
    {
        if(curr[idx] == '0')
            curr[idx] = '9';
        else
            --curr[idx];
        return curr;
    }
    
    int openLock(vector<string>& deadends, string target) {
        
        set<string> st(deadends.begin(), deadends.end());
        
        set<string> visited;
        
        queue<string> q;
        
        if(!st.count("0000"))
        {
            q.push("0000");
            visited.insert("0000");
        }
        
        int steps = 0;
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0; i < size; ++i)
            {
                string curr = q.front();
                q.pop();
                
                if(curr == target)
                    return steps;
                
                for(int i = 0; i < 4; ++i)
                {
                    string f = forward(curr, i);
                    string s = backward(curr, i);
                    
                    if(!st.count(f) and !visited.count(f))
                    {
                        q.push(f);
                        visited.insert(f);
                    }
                    if(!st.count(s) and !visited.count(s))
                    {
                        q.push(s);
                        visited.insert(s);
                    }
                }
            }
            ++steps;
        }
        
        return -1;
    }
};