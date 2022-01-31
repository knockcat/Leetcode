// 495.✅ Teemo Attacking

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if(n == 0)
            return 0;
        int res = duration;
        
        for(int i = 1; i<timeSeries.size(); ++i)
        {
            res += min(duration,timeSeries[i] - timeSeries[i-1]);
        }
        return res;
    }
};

  