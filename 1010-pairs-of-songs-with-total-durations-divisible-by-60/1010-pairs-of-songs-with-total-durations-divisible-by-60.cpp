class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        vector<int> songFreq(60, 0);
        
        for(auto& songTime : time)
        {
            ++songFreq[songTime%60];
        }
        
        long long counter = 0;
        
        for(int i = 1; i < 30; ++i)
        {
            counter += (songFreq[i] * 1LL * songFreq[60 - i]);
        }
        
        counter += ((songFreq[0] * 1LL * (songFreq[0]-1))/2) +  ((songFreq[30] * 1LL *(songFreq[30]-1)/2));
        
        return (int) counter;
    }
};