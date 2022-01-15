349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        unordered_map <int,int> m;
        
        for(int i = 0 ; i<nums1.size(); i++)
            m[nums1[i]]++;

        for(int i = 0; i<nums2.size(); i++)
        {
            if(m[nums2[i]] != 0)
                ans.push_back(nums2[i]);
            m[nums2[i]] = 0;    //so that it doesn't print again
        }
      
        return ans;
            
        
    }
};