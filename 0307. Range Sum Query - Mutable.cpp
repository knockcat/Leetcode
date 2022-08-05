class NumArray
{
public:
    int arr[100005], seg[100005 * 4]; // for segment Tree
    vector<int> ans;

    void build(int ind, int low, int high)
    {
        if (high == low)
        {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid);
        build(2 * ind + 2, mid + 1, high);

        // find max in range
        // seg[ind] = max(seg[2 * ind + 1],seg[2 * ind + 2]);

        // find sum in range
        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }

    int query(int ind, int low, int high, int l, int r)
    {
        if (low >= l && high <= r) // [ 1 - 1 ]
            return seg[ind];

        if (high < l || low > r)
            // return INT_MIN; ( when we doing for max)
            return 0;

        int mid = (low + high) / 2;
        int left = query(2 * ind + 1, low, mid, l, r);
        int right = query(2 * ind + 2, mid + 1, high, l, r);
        // return max(left, right);
        return left + right;
    }

    void updateSeg(int idx, int low, int high, int index, int val)
    {
        // no overlap
        if (index < low || index > high)
            return;

        // total overlap
        if (low == high)
        {
            if (low == index)
                seg[idx] = val;
            return;
        }

        // partial overlap
        int mid = (low + high) / 2;
        updateSeg(2 * idx + 1, low, mid, index, val);      // low child
        updateSeg(2 * idx + 2, mid + 1, high, index, val); // high child
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    NumArray(vector<int> &nums)
    {
        ans = nums;
        for (int i = 0; i < nums.size(); ++i)
            arr[i] = nums[i];
        build(0, 0, nums.size() - 1);
    }

    void update(int index, int val)
    {
        updateSeg(0, 0, ans.size() - 1, index, val);
    }

    int sumRange(int left, int right)
    {
        return query(0, 0, ans.size() - 1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */

//  Another Approach

class NumArray
{
public:
    vector<int> ans;
    int sum = 0;
    NumArray(vector<int> &nums)
    {
        sum = 0;
        ans = nums;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
        }
    }

    void update(int index, int val)
    {
        sum -= ans[index];
        ans[index] = val;
        sum += val;
    }

    int sumRange(int left, int right)
    {
        int res = sum;

        for (int i = 0; i < left; ++i)
        {
            res -= ans[i];
        }
        for (int i = right + 1; i < ans.size(); ++i)
        {
            res -= ans[i];
        }

        return res;
    }
};
