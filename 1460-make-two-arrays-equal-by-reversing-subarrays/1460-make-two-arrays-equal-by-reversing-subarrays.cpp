class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());
        
        return arr == target;
        
    }
};