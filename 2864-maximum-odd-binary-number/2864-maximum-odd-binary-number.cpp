class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n = s.size();
        int start = 0, end = n-1;
        
        while(start <= end)
        {
            if(s[start] == '1')
                ++start;
            else if(s[end] == '1')
            {
                swap(s[start], s[end]);
                --end;
                ++start;
            }
            else
                --end;
        }
        swap(s[start-1], s[n-1]);
        
        return s;
        
    }
};