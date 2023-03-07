class NumArray {
public:
    
    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            seg[idx] = v[low];
            return;
        }

        int mid = (low + high) / 2;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        // update
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    int query(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return 0;

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return seg[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        // update
        return left + right;
    }

    void update(int idx, int low, int high, int ind, int val)
    {
        if (low == high)
        {
            seg[idx] = val;
            return;
        }

        int mid = (low + high) / 2;
        if (ind <= mid)
            update(2 * idx + 1, low, mid, ind, val);
        else
            update(2 * idx + 2, mid + 1, high, ind, val);

        // update
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }
    
    vector<int> seg;
    vector<int> v;
    
    NumArray(vector<int>& nums) {
        int n = nums.size();
        seg.resize(n * 4 + 5);
        v = nums;
        buildTree(0,0,n-1);
    }
    
    void update(int index, int val) {
        update(0,0,v.size()-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0,0,v.size()-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */