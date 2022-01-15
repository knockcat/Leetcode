// 8. String to Integer (atoi)

class Solution {
public:
    int myAtoi(string s) {
       if(s.empty())
           return 0;
        
        int len = s.length(), i = 0, sign = 1;
        
        while(i<len && s[i] == ' ')
            i++;
        
        if(i == len)
            return 0;
        
        if(s[i] == '-'){
            sign = 0;
            i++;
        }
        else if(s[i] == '+')
            i++;
        
        long int out = 0;
        while(s[i] >= '0' && s[i] <= '9'){
            out *= 10;
            if(out<=INT_MIN || out >= INT_MAX)
                break;
            out += (s[i] - '0');
            i++;
        }
        
        if(sign == 0)
            out *= -1;
        if(out <= INT_MIN)
            return INT_MIN;
        if(out >= INT_MAX)
           return INT_MAX;
        
        return (int)out;
            
    }
};