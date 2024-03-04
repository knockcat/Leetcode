class SEG
{
    public:
        int N;
        
        vector<int> tree, arr;
    
        SEG(vector<int> v)
        {
            N = v.size();
            arr.resize(N);
            
            for(int i = 0; i < N; ++i)
                arr[i] = v[i];
            
            tree.resize(4*N + 5);
            
            buildTree(0, 0, N-1);
        }
        
    public:
        void buildTree(int idx, int low, int high)
        {
            if(low == high)
            {
                tree[idx] = arr[low];
                return;
            }
            
            int mid = (low + high) / 2;
            buildTree(2*idx+1, low, mid);
            buildTree(2*idx+2, mid+1, high);
            
            tree[idx] = tree[2*idx+1] | tree[2*idx+2];
        }
    
        int queryTree(int idx, int low, int high, int l, int r)
        {
            if(r < low or l > high)
                return 0;
            
            if(low >= l and high <= r)
                return tree[idx];
            
            int mid = (low + high) / 2;
            int left = queryTree(2*idx+1, low, mid, l, r);
            int right = queryTree(2*idx+2, mid+1, high, l, r);
            
            return left | right;
        }
    
        int query(int l, int r)
        {
            return queryTree(0, 0, N-1, l, r);
        }
};


class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        SEG seg(nums);
        
        long long res = 0;
        
        for(int i = 0; i < n; ++i)
        {
            long long left = seg.query(0, i-1);
            long long right = seg.query(i+1, n-1);
            
            long long curr = nums[i], j = 0;
            
            while(j < k)
            {
                curr *= 2;
                ++j;
            }
            
            long long ans = curr | left | right;
            
            res = max(res, ans);
        }
        
        return res;
       
    }
};