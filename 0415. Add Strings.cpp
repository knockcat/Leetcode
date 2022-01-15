415. Add Strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        string s="";
        int carry=0;
        int l=num1.length()-1;
         int k=num2.length()-1;
        
        while(l>=0 && k>=0)
        {
            int sum=num1[l]+num2[k]+carry-2*'0';
            if(sum>9)
            {
                carry=1;
            }else carry=0;
            s.push_back(sum%10+'0');
            l--;
            k--;
        }
        while(l>=0)
        {
              int sum=num1[l]+carry-'0';
            if(sum>9)
            {
                carry=1;
            }else carry=0;
            s.push_back(sum%10+'0');
            l--;
        }
        while(k>=0)
        {
              int sum=num2[k]+carry-'0';
            if(sum>9)
            {
                carry=1;
            }else carry=0;
            s.push_back(sum%10+'0');
            k--;
        }
        if(carry)s+="1";
        reverse(s.begin(),s.end());
        return s;
    }
};