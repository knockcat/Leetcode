class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        
        long long n = arr.size(), ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            vector<int> cycles;
            
            for(int j = i; arr[j] != 0 ; j = (j+k)%n)
            {
                cycles.push_back(arr[j]);
                arr[j] = 0;
            }
            
            nth_element(cycles.begin(),cycles.begin()+cycles.size()/2,cycles.end());
            
            for(int i = 0; i < cycles.size(); ++i)
            {
                ans += abs(cycles[i] - cycles[cycles.size()/2]);
            }
                
        }
        
        return ans;
    }
};