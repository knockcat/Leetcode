class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        
        vector<vector<int>> res;
        int step = 1, ctr = 0;
        
        auto isValid = [&]()
        {
            return (rStart >= 0 and rStart < rows and cStart >= 0 and cStart < cols);
        };
        
        while(ctr < rows * cols)
        {
            for(int i = 0; i < step; ++i)
            {
                if(isValid())
                    res.push_back({rStart, cStart}), ++ctr;
                ++cStart;
            }
            
            for(int i = 0; i < step; ++i)
            {
                 if(isValid())
                    res.push_back({rStart, cStart}), ++ctr;
                ++rStart;
            }
            
            ++step;
            
            for(int i = 0; i < step; ++i)
            {
                 if(isValid())
                    res.push_back({rStart, cStart}), ++ctr;
                --cStart;
            }
            
            for(int i = 0; i < step; ++i)
            {
                 if(isValid())
                    res.push_back({rStart, cStart}), ++ctr;
                 --rStart;
            }
            
            ++step;
        }
            
        return res;
    }
};