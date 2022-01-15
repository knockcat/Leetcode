1417. Reformat The String

class Solution {
public:
    string reformat(string s) {
        string alpha, num;
        
        for(int i = 0; i<(int)s.size();i++){
        if(s[i]>=97 && s[i] <=122){
            alpha.push_back(s[i]);
        }
            else
                num.push_back(s[i]);    
        
        }
        
        int na = alpha.size();
        int nn = num.size();
        
        if(abs(na - nn)>1)  //absolute differnece
            return "";
        
        if(alpha.size() > num.size()){
            alpha.swap(num);
        }
        string ans = "";
        
        for(int i = 0; i<(int)s.size();i++){
            if(i%2 == 0)
                ans.push_back(num[i/2]);
            else
                ans.push_back(alpha[i/2]);
        }
        return ans;
    }
    
};