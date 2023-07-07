class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int i = 0, j = 0, n = answerKey.size();
        
        int t = 0, f = 0, ans = 0;
        
        while(j < n)
        {
            if(answerKey[j] == 'T')
                ++t;
            if(answerKey[j] == 'F')
                ++f;
            
            while(t > k and f > k)
            {
                if(answerKey[i] == 'T')
                    --t;
                else
                    --f;
                ++i;
            }
            
            ans = max(ans, j - i + 1);
            
            ++j;
        }
        
        return ans;
        
    }
};