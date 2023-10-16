class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> v(rowIndex);
        
        if(rowIndex == 0)
            return {1};
        else if(rowIndex == 1)
            return {1, 1};
        else
        {
            v.push_back({1});
            v.push_back({1, 1});
            
            for(int i = 2; i <= rowIndex; ++i)
            {
                vector<int> curr;
                curr.push_back(1);
                
                for(int j =1; j < v.back().size(); ++j)
                {
                    curr.push_back(v.back()[j] + v.back()[j-1]);
                }
                
                curr.push_back(1);
                
                v.push_back(curr);
            }
            return v.back();
        }
        
    }
};