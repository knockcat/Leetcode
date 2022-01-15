// 35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid;
    
       //Binary Search Iteratively
        while(l <= r)
        {
            mid =  (l+r)/2;
            if(nums[mid] == target)
                return mid;             //if found return mid 
            else if(nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
       }
       return l;                        //if taget not found than lower index is returned
      
    }
};