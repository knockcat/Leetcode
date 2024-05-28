class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        map<int, long long> fact;
        
        for(auto& ele : nums1)
        {
            int num = ele;
            
            for(int i = 1; i * i <= num; ++i)
            {
                if(num % i == 0)
                {
                    ++fact[i];
                    if(num/i != i)
                        ++fact[num/i];
                }
            }
        }
        
        long long ans = 0;
        
        for(auto& ele : nums2)
        {
            long long num = ele * k;
            
            ans += fact[num];
        }
        
        return ans;
        
    }
};