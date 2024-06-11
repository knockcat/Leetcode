class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int, int> mp;
        
        for(auto& ele : arr1)
            ++mp[ele];
        
        int j = 0;
        
        for(int i = 0; i < arr2.size(); ++i)
        {
            for(int k = 0; k < mp[arr2[i]]; ++k)
            {
                arr1[j++] = arr2[i];
            }
            mp.erase(arr2[i]);
        }
        
        for(auto&[f, e] : mp)
        {
            for(int k = 0; k < e; ++k)
                arr1[j++] = f;
        }
        
        return arr1;
    }
};