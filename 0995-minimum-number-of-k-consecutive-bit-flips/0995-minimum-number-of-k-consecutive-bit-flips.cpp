class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        
        int n = nums.size(), ans = 0;
        
        vector<pair<int,int>> pref(n, {0, 0});
        
        bool flag = true;
        
        for(int i = 0; i < n; ++i)
        {
           pref[i].second = (i-1 >= 0 ? pref[i-1].second : 0);
            
           if(i - k >= 0)
           {
               if(pref[i-k].first)
                   --pref[i].second;
           } 
            
           int moves = pref[i].second; 
            
           int op = (nums[i] % 2 == 0 ? (moves % 2 == 0 ? 1 : 0) : (moves % 2 == 0 ? 0 : 1));
            
           if(op){
               if(i <= n-k)
               {
                pref[i].first = 1;
                ++ans;
               }
               else
                   flag = false;
           }
           
           pref[i].second += op;
        }
        
        return (flag ? ans : -1);
    }
};