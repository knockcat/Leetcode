// 1220.✅ Count Vowels Permutation

class Solution
{
    unordered_map<char, vector<int>> mp;
    int mod = 1e9 + 7;

public:
    int helper(int n, int i, char prev, vector<vector<long long>> &t)
    {
        if (i > n)
            return 0;

        if (i == n)
        {
            switch (prev)
            {
            case 'a':
                return 1;
            case 'e':
                return 2;
            case 'i':
                return 4;
            case 'o':
                return 2;
            case 'u':
                return 1;
            default:
                return 5;
            }
        }

        int idx = prev - 'a';
        if (t[i][idx] != -1)
            return t[i][idx];

        long long ans = 0;
        for (auto next : mp[prev])
            ans += (helper(n, i + 1, next, t) % mod);

        return t[i][idx] = ans % mod;
    }

    int countVowelPermutation(int n)
    {

        mp['c'] = {'a', 'e', 'i', 'o', 'u'};
        mp['a'] = {'e'};
        mp['e'] = {'a', 'i'};
        mp['i'] = {'a', 'e', 'o', 'u'};
        mp['o'] = {'i', 'u'};
        mp['u'] = {'a'};

        vector<vector<long long>> t(n + 2, vector<long long>(27, -1));
        return helper(n, 1, 'c', t);
    }
};