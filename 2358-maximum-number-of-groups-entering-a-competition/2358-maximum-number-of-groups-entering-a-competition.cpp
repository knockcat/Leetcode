class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int n = grades.size();
        sort(grades.begin(),grades.end());
        
        int curr = 0, prev = 0, currSum = 0, prevSum = 0, res = 0;
        
        for(auto itr : grades)
        {
            currSum += itr;
            ++curr;
            
            if(currSum > prevSum and curr > prev)
            {
                ++res;
                prevSum = currSum, prev = curr;
                currSum = 0, curr = 0;
            }
        }
        
        return res;
    }
};