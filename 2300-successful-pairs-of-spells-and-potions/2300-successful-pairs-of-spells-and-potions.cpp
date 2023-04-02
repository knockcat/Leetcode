#define ll long long int
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        
        int n = spells.size();
        
        sort(potions.begin(),potions.end());
        vector<int> v;
        
        for(int i = 0; i<n; ++i)
        {
            ll start = 0, end = potions.size()-1;
            ll can = potions.size();
            while(start <= end)
            {
                ll mid = start + (end - start)/2;
                
                ll prod = (ll) spells[i]*potions[mid];
                
                if(prod < success)
                    start = mid + 1;
                else
                {
                    can = mid;
                    end = mid-1;
                }
            }
            
            v.push_back(potions.size() - can);
            
        }
        
        return v;
    }
};