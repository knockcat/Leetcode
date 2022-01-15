// 704. Binary Search

class Solution {
public:
    int binary(vector<int>v,int l, int r, int key)
    {
        if(r >= l)
        {
            int mid = (l+r)/2;
            if(key == v[mid])
                return mid;
            else if(key < v[mid])
                return binary(v,l,mid-1,key);
            else
                return binary(v,mid+1,r,key);
        }
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        int result = binary(nums,0,nums.size()-1,target);
        if (result == -1)
            return -1;
        else
            return result;   
    }
};