//✅ 2042. Check if Numbers Are Ascending in a Sentence

class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        int i = 0;
        int prev = -1;
        while(i < s.length())
        {
            int temp = 0;
            int flag = 0;
            while(i < s.length() && s[i] >= '0' && s[i] <= '9')
            {
                flag =  1;
                temp = temp * 10 + (s[i] - '0');
                i++;
            }
          
            if(flag)
            {
                if(prev >= temp)
                    return false;
                prev = temp;
            }
        i++;
        }
        return true;
    }
};