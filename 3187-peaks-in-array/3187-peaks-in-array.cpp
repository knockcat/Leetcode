template <typename T>
class SEG
{
public:
    vector<T> tree, lazy, arr;
    T N;
    SEG() {}
    SEG(vector<int> v)
    {
        N = v.size();
        arr.resize(N);
        for (int i = 0; i < N; ++i)
            arr[i] = v[i];
        tree.resize(4 * N + 5);
        lazy.resize(4 * N + 5, 0);

        buildTree(0, 0, N - 1);
    }
    
    bool isPeak(int idx)
    {
        if(idx <= 0 or idx >= N-1)
            return false;
        
        return (arr[idx] > arr[idx-1] and arr[idx] > arr[idx+1]);
    }
    
    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            tree[idx] = (isPeak(low) ? 1 : 0);
            return;
        }

        int mid = (low + high) >> 1;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];

        return;
    }

    
    int queryTree(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return 0;

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return tree[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = queryTree(2 * idx + 1, low, mid, l, r);
        int right = queryTree(2 * idx + 2, mid + 1, high, l, r);

        return left + right;
    }

public:
    void updateTree(int idx, int low, int high, int ind, int val)
    {
        if (low == high)
        {
            tree[idx] = (isPeak(low) ? 1 : 0);
            return;
        }
        int mid = (low + high) >> 1;
        if (ind <= mid)
            updateTree(2 * idx + 1, low, mid, ind, val);
        else
            updateTree(2 * idx + 2, mid + 1, high, ind, val);

        tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];
    }

    int query(int l, int r)
    {
        return queryTree(0, 0, N - 1, l, r);
    }

    void update(int ind, int val)
    {
        updateTree(0, 0, N - 1, ind, val);
    }

    void build()
    {
        buildTree(0, 0, N - 1);
    }
};


class Solution {
public:
    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int> ans;
        
        int n = nums.size();
        
        SEG<int> seg(nums);
        
        for(auto& q : queries)
        {
            int type = q[0];
            int x = q[1];
            int y = q[2];
            
            if(type == 1)
            {
                ans.push_back(seg.query(x+1, y-1));
            }
            else
            {
                seg.arr[x] = y;
                seg.update(x, y);
                if(x - 1 > 0)
                    seg.update(x-1, nums[x-1]);
                if(x + 1 < n-1)
                    seg.update(x+1, nums[x+1]);
            }
        }
        
        return ans;
    }
};