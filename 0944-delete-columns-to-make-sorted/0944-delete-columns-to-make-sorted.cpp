class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
     
        int n = strs.size();
        int m = strs[0].size();
        int ans = 0;
        
        for(int i = 0;i<m; ++i)
        {
            string str;
            for(int j = 0; j <n; ++j)
            {
                str += strs[j][i];
            }
            
            string sortedStr = str;
            sort(sortedStr.begin(),sortedStr.end());
            
            if(str != sortedStr)
                ++ans;
        }

        return ans;
    }
};