#define ll long long int

class Solution {
public:
    
    int merge(int start, int mid, int end, vector<int>& nums, vector<int>& temp)
    {
        int i = start, j = mid+1, k = i;
        
        int cnt = 0;
        
        int right = mid+1;
        
        for(int left = start; left <= mid; ++left)
        {
            while(right <= end and nums[left] > (ll) 2 * nums[right])
                ++right;
            
            cnt += (right - (mid + 1));
        }
        
        while(i <= mid and j <= end)
        {
            if(nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else    
                temp[k++] = nums[j++];
        }
        
        while(i <= mid)
            temp[k++] = nums[i++];
        
        while(j <= end)
            temp[k++] = nums[j++];
        
        for(int i = start; i<= end; ++i)
            nums[i] = temp[i];
        
        return cnt;
    }
    
    
    int mergeSort(int i, int j, vector<int>& nums, vector<int>& temp)
    {
        int cnt = 0;
        
        if( i < j)
        {
            int mid = i + (j - i)/2;
            
            cnt += mergeSort(i, mid, nums, temp);
            cnt += mergeSort(mid+1, j, nums, temp);
            cnt += merge(i, mid, j, nums, temp);
        }
        
        return cnt;
    }
    
    
    int reversePairs(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> temp(n);
        
        int ans = mergeSort(0, n-1 , nums, temp);
        
        for(auto itr : nums)
            cout<<itr<<' ';
        cout<<endl;
        
        return ans;
        
    }
};