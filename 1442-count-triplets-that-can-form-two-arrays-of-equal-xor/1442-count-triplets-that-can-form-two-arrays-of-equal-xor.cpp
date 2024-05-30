class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int n = arr.size();
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = i+1; j < n; ++j)
            {
                int curXorF = 0, curXorS = 0;
                
                for(int k = i; k < j; ++k)
                    curXorF ^= arr[k];
                
                for(int k = j; k < n; ++k)
                {
                    curXorS ^= arr[k];
                    if(curXorF == curXorS)
                        ++cnt;
                }
            }
        }
        
        return cnt;
    }
};
