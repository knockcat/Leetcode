class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> ans;
        
        for(int i = 1; i <=8; ++i)
        {
            int currNum = i;
            for(int j = i+1; j <= 9; ++j)
            {
                currNum = (currNum * 10) + j;
                
                if(currNum >= low and currNum <= high)
                    ans.push_back(currNum);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};