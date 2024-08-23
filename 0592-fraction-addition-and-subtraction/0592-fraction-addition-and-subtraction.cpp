class Solution {
public:
    string fractionAddition(string expression) {
        
        int num = 0;
        int den = 1;
        
        int i = 0, n = expression.size();
        
        while(i < n)
        {
            int curNum = 0;
            int curDen = 0;
            
            bool isNeg = (expression[i] == '-');
            
            if(expression[i] == '+' or expression[i] == '-')
                ++i;
            
            while(i < n && isdigit(expression[i]))
            {
                int val = expression[i] - '0';
                curNum = (curNum * 10) + val;
                ++i;
            }
            
            ++i;
            if(isNeg) curNum *= -1;
            
            while(i < n && isdigit(expression[i]))
            {
                int val = expression[i] - '0';
                curDen = (curDen * 10) + val;
                ++i;
            }
            
            num = (num * curDen) + (curNum * den);
            den = den * curDen;
        }
        
        int gcd = abs(__gcd(num, den));
        num /= gcd;
        den /= gcd;
        
        return to_string(num) + "/" + to_string(den);
    }
};