// ✅4. Median of Two Sorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
   
        for(int i = 0; i<nums2.size(); i++)
            nums1.push_back(nums2[i]);                  //merging arr 2 after arr 1 in arr1
        
        sort(nums1.begin(),nums1.end());                //sort arr1
        
        int size = nums1.size();                        //calculating size
        
        if(size %2 != 0)                                //if size happens to be odd , means is the middle most element , therefore median is arr(n/2)  at n/2 index where n is size;
            return (double)nums1[size/2];   
        else
            return (double)(nums1[(size/2) - 1] + nums1[size/2]) / 2; //else sum of 2 middle most terms divide by 2;
        
       
    }
};