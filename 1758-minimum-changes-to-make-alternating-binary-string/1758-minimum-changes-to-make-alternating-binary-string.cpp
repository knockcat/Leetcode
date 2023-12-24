class Solution {
public:
    int minOperations(string s) {
       
        int zcnt = 0, ocnt = 0;
        for(int i = 0; i<s.size(); ++i)
        {
            if(i % 2 == 0)
            {
                if(s[i] == '1')
                    ++ocnt;
                else
                    ++zcnt;
            }
            else
            {
                if(s[i] == '0')
                    ++ocnt;
                else
                    ++zcnt;
            }
        }
        return min(zcnt,ocnt);
    }
};