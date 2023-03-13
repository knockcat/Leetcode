#define ll long long int
class Solution {
public:
    
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        vector<int> ans;
        
        for(auto q : queries)
        {
            int k = q[0];
            int trim = q[1];
            
            vector<pair<string,int>> vp; // string, idx
            int need = nums[0].size() - trim;
            
            for(int i = 0; i < n; ++i)
            {
                if(nums[i].size() < trim)
                    break;
                
                vp.push_back({nums[i].substr(need),i});
            }
            
            // debug
            // for(auto itr : vp)
            //     cout<<itr.first<<" "<<itr.second<<endl;
            // cout<<endl;
            
            // comp
            sort(vp.begin(),vp.end(),[&](const pair<string,int>& a, const pair<string,int>& b){
                if(a.first == b.first)
                    return a.second < b.second;
                return a.first < b.first;
            });
            
            ans.push_back(vp[k-1].second);
        }
        
        return ans;
        
    }
};