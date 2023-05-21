class Solution {
    
private:
    
    bool possible(string str, int target)
    {
        if(str == "" and target == 0)
            return true;
        
        if(target < 0)
            return false;
        
        for(int i = 0; i < str.size(); ++i)
        {
            string left = str.substr(0, i+1);
            string right = str.substr(i+1);
            
            int leftPart = stoi(left);
            
            if(possible(right, target - leftPart))
                return true;
        }
        
        return false;
    }
    
public:
    
    int punishmentNumber(int n) {
        
        int ans = 0;
        
        for(int i = 1; i <=n; ++i)
        {
            int num = (i*i);
            string str = to_string(num);
            
            if(possible(str , i ))
                ans += num;
        }
        
        return ans;
        
    }
};