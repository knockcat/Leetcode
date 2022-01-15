504. Base 7

class Solution {
public:
    string convertToBase7(int num) {
        int n = num;
        
        if(num<0)
            num *= -1;
    
    
    string s ="";
    
    if(num == 0)
    {
        s += to_string(num);
        return s;
    }
    
    while(num!=0){
        int rem = num%7;
        s += to_string(rem);
        num = num/7;
    }
    
    reverse(s.begin(),s.end());
    if(n<0)
        s = "-" + s;
    
    return s;
    }
};