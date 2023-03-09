class NumArray {
public:
    
    public:
    void buildTree(int idx, int low, int high)
    {
        if (low == high)
        {
            tree[idx] = arr[low];
            return;
        }

        int mid = (low + high) >> 1;
        buildTree(2 * idx + 1, low, mid);
        buildTree(2 * idx + 2, mid + 1, high);

        // updation part

        // sum
        tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];

        // min
        // tree[idx] = min(tree[2 * idx + 1], tree[2 * idx + 2]);
        return;
    }
    
    public:
    int queryTree(int idx, int low, int high, int l, int r)
    {
        // no overlap
        // l r low high or low high l r
        if (r < low or l > high)
            return 0;
            // return INT_MAX; // min

        // complete overlap
        // [l low high r]
        if (low >= l and high <= r)
            return tree[idx];

        // partial overlap
        int mid = (low + high) / 2;
        int left = queryTree(2 * idx + 1, low, mid, l, r);
        int right = queryTree(2 * idx + 2, mid + 1, high, l, r);

        // updation part
        // sum

        return left + right;

        // min
        // return min(left, right);
    }

public:
    void updateTree(int idx, int low, int high, int ind, int val)
    {
        if (low == high)
        {
            // sum ranges increment tree[idx] by val case
            // tree[idx] += val;

            // min and update single value case
            tree[idx] = val;
            return;
        }
        int mid = (low + high) >> 1;
        if (ind <= mid)
            updateTree(2 * idx + 1, low, mid, ind, val);
        else
            updateTree(2 * idx + 2, mid + 1, high, ind, val);

        // updation Part
        // sum

        tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];

        // min

        // tree[idx] = min(tree[2 * idx + 1], tree[2 * idx + 2]);
    }
    
    void build()
    {
        buildTree(0, 0, N - 1);
    }
    
    int query(int l, int r)
    {
        return queryTree(0, 0, N - 1, l, r);
    }

    void Update(int ind, int val)
    {
        updateTree(0, 0, N - 1, ind, val);
    }
    
    vector<int> tree, arr;
    int N;
    NumArray(vector<int>& nums) {
        N = nums.size();
        arr =  nums;
        tree.resize(N*4 + 5);
        build();
    }
    
    void update(int index, int val) {
        Update(index,val);
    }
    
    int sumRange(int left, int right) {
        return query(left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */