class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string one, two;
        
        for(auto& itr : s)
        {
            if(itr == '#')
            {
                if(!one.empty())
                    one.pop_back();
            }
            else
                one.push_back(itr);
        }
        
        for(auto& itr : t)
        {
            if(itr == '#')
            {
                if(!two.empty())
                    two.pop_back();
            }
            else
                two.push_back(itr);
        }
        
       return one == two;
        
    }
};