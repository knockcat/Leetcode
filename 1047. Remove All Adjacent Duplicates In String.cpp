// 1047.✅ Remove All Adjacent Duplicates In String

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(int i = 0; i<s.length(); i++)
        {
            if(ans.size() == 0)             //empty
                ans.push_back(s[i]);
            else if(ans.back() == s[i])    //duplicate     //ans.back() last element of ans string 
                ans.pop_back();
            else
                ans.push_back(s[i]);        
        }
        return ans;
    }
};

