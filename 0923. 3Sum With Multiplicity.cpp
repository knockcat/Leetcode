// 923.✅ 3Sum With Multiplicity

class Solution
{
public:
#define MOD 1000000007

    int threeSumMulti(vector<int> &arr, int target)
    {
        int ans = 0;
        int n = arr.size();

        // sort the array first
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            int sum = target - arr[i];

            int l = i + 1;
            int r = n - 1;

            while (l < r)
            {
                if (arr[l] + arr[r] < sum)
                    l++;
                else if (arr[l] + arr[r] > sum)
                    r--;
                else
                {
                    int cnt1 = 0;
                    int cnt2 = 0;

                    int j = l;
                    int k = r;

                    while (j <= r and arr[j] == arr[l])
                    {
                        j++;
                        cnt1++;
                    }

                    if (j > r)
                    {
                        int take = (cnt1 * (cnt1 - 1)) / 2;
                        ans = (ans + take) % MOD;
                    }
                    else
                    {
                        while (k >= j and arr[k] == arr[r])
                        {
                            k--;
                            cnt2++;
                        }

                        ans = (ans + (cnt1 * cnt2) % MOD) % MOD;
                    }

                    l = j;
                    r = k;
                }
            }
        }

        return ans;
    }
};