//✅ 944. Delete Columns to Make Sorted

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        
        for(int c = 0; c<strs[0].size(); c++)
        {
            for(int r = 1; r <strs.size(); r++)
            {
                if(strs[r-1][c] > strs[r][c])
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};