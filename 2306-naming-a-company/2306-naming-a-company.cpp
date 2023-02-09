#define ll long long int
class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> count[26];
        
        for(auto& itr : ideas)
            count[itr[0] - 'a'].insert(itr.substr(1));
        
        ll res = 0;
        for(int i = 0; i < 26; ++i)
        {
            for(int j = i+1; j < 26; ++j)
            {
                ll c1 = 0, c2 = 0;
                for(auto& c : count[i])
                    if(!count[j].count(c)) ++c1;
                for(auto& c : count[j])
                    if(!count[i].count(c)) ++c2;
                
                res += c1 * c2;
            }
        }
        return res * 2;
    }
};
