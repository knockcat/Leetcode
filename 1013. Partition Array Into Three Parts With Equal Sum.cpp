// 1013.✅ Partition Array Into Three Parts With Equal Sum

class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum % 3 != 0)
            return false;

        int ind = sum / 3, cnt = 0, temp = 0;

        for (int i = 0; i < arr.size(); ++i)
        {
            temp += arr[i];
            if (temp == ind)
            {
                cnt++;
                temp = 0;
            }
        }

        return cnt >= 3 ? true : false;
    }
};