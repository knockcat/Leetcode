852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int index;
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }
        return index;
    }
};