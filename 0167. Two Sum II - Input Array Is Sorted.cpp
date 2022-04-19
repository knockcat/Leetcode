// 167. Two Sum II - Input Array Is Sorted

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> v;
        int l = 0, r = numbers.size() - 1;
        while (l < r)
        {
            if (numbers[l] + numbers[r] == target)
            {
                v.push_back(l + 1);
                v.push_back(r + 1);
                break;
            }
            else if (numbers[l] + numbers[r] < target)
            {
                l++;
            }
            else
                r--;
        }
        return v;
    }
};

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        for (int i = 0; i < numbers.size() - 1; ++i)
        {
            int start = i + 1, end = numbers.size();
            while (start < end)
            {
                int t = target - numbers[i];
                int mid = start + (end - start) / 2;
                if (numbers[mid] == t)
                    return {i + 1, mid + 1};
                else if (numbers[mid] >= t)
                    end = mid;
                else
                    start = mid + 1;
            }
        }
        return {};
    }
};