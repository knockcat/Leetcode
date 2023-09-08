class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;

        for(int i = 1; i <= numRows; ++i)
        {
            if(i == 1)
            {
                ans.push_back({1});
            }
            else if(i == 2)
            {
                ans.push_back({1,1});
            }
            else
            {
                vector<int> pref = ans.back();
                vector<int> curr;

                curr.push_back(1);

                for(int j = 1; j < i-1; ++j)    
                {
                    curr.push_back(pref[j] + pref[j-1]);
                }

                curr.push_back(1);

                ans.push_back(curr);
            }
        }
            
        return ans;
        
    }
};