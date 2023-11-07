class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int n = dist.size();
        
        vector<float> vec;
        
        for(int i = 0; i < n; ++i)
        {
            vec.push_back((float)dist[i]/speed[i]);
        }
        
        sort(vec.begin(), vec.end());
        
        int counter = 1, ans = 1;
        
        for(int i = 1; i < n; ++i)
        {
            if(counter < vec[i])
                ++ans;
            else
                break;
            ++counter;
        }
        
        return ans;
    }
};