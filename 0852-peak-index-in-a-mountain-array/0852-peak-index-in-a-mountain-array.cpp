class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        while(start <= end)
        {
            int mid = (start + end) >> 1;
            
            if(arr[mid] < arr[mid+1])
                start = mid+1;
            else
                end = mid-1;
        }
        
        return start;
        
    }
};