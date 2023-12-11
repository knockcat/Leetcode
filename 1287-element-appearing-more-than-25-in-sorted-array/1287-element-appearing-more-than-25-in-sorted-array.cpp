class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size(), oneFourth = n/4;
        
        for(int i = 0; i < n - oneFourth; ++i)
        {
           if(arr[i] == arr[i+oneFourth])
              return arr[i];
        }
        
        return -1;
        
    }
};