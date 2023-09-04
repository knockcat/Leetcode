class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        vector<int> songFreq(60, 0);
        
        int counter = 0;
        
        for(auto& songTime : time)
        {
            counter += songFreq[(60 - (songTime % 60)) % 60];
            
            ++songFreq[songTime%60];
        }
        
        return counter;
    }
};