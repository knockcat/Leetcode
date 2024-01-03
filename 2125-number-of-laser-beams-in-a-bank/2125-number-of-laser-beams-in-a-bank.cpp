class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int n = bank.size();
        
        int ans = 0, i = 0;
        
        while(i < n)
        {
            int cnt = count(bank[i].begin(), bank[i].end(), '1');
         
            int j = i+1;
            
            while(j < n)
            {
                int cnt2 = count(bank[j].begin(), bank[j].end(), '1');
        
                if(cnt2 >= 1)
                {
                    ans += (cnt * cnt2);
                    break;
                }
                ++j;
            }
            
            i = j++;
        }
        
        return ans;
    }
};