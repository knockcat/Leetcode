class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        
        int total = 0;
        
        vector<int> left(n, 1), right(n, 1);
        
        for(int i = 1; i < n; ++i)
        {
            if(ratings[i] > ratings[i-1])
                left[i] = left[i-1] + 1;
        }
        
        for(int i = n-2; i >= 0; --i)
        {
            if(ratings[i] > ratings[i+1])
            {
                right[i] = right[i+1] + 1;
            }
        }
        
        for(int i = 0; i < n; ++i)
            total += max(left[i], right[i]);
        
        return total;
        
    }
};