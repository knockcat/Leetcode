class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
        int maxi = 0;
        
        for(auto& itr : left)
        {
            maxi = max(maxi, itr);
        }
        
        for(auto& itr : right)
        {
            maxi = max(maxi, n - itr);
        }
        
        return maxi;
        
    }
};