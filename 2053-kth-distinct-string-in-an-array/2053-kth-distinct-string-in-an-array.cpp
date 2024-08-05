class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        map<string, int> mp;
        vector<string> vec;
        
        for(auto& str : arr)
            ++mp[str];
        
        for(auto& str : arr)
        {
            if(mp[str] == 1)
            {
                vec.push_back(str);
                ++mp[str];
            }
        }
        
        return (vec.size() < k ? "" : vec[k-1]);
        
    }
};