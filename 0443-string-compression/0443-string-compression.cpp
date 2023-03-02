class Solution {
public:
    int compress(vector<char>& chars) {
        
        int running = 0,n = chars.size();
        int j = 0;
        for(int i = 0; i<n; i++)
        {
            if(running == 0)
            {
                chars[j++] = chars[i];
                ++running;
            }
            else if(i > 0 and chars[i] == chars[i-1])
            {
                ++running;
            }
            else
            {
                if(running > 1)
                {
                    string here = to_string(running);
                    for(auto itr : here)
                        chars[j++] = itr;
                }
                running = 0;
                chars[j++] = chars[i];
                running = 1;
            }
        }
        
        if(running > 1)
        {
            string here = to_string(running);
            for(auto itr : here)
                chars[j++] = itr;
        }
        
        return j;
    }
};