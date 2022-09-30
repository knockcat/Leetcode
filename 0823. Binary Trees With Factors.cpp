// 823.✅ Binary Trees With Factors

class Solution
{
public:
    int numFactoredBinaryTrees(vector<int> &arr)
    {

        int n = arr.size();

        long long int mod = 1e9 + 7;

        map<int, long long int> mp;

        long long int sum = 0;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; ++i)
            mp.insert({arr[i], 1});

        for (int i = 0; i < n; ++i)
        {
            long long int count = 0;

            auto itr1 = mp.find(arr[i]);

            for (int j = 0; j < i; ++j)
            {
                if (arr[i] % arr[j] == 0)
                {
                    if (mp[arr[i] / arr[j]])
                    {
                        count += mp[arr[j]] % mod * mp[arr[i] / arr[j]] % mod;
                    }
                }
            }
            mp[arr[i]] += count;
        }

        for (auto itr : mp)
        {
            sum += itr.second;
        }

        return sum % mod;
    }
};