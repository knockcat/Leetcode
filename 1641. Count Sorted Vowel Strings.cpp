// 1641.✅ Count Sorted Vowel Strings

class Solution
{
public:
    int countVowelStrings(int n)
    {
        vector<int> v(5, 1);

        for (int i = 2; i <= n; ++i)
        {
            for (int i = 3; i >= 0; --i)
            {
                v[i] += v[i + 1];
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};

class Solution
{
public:
    int countVowelStrings(int n)
    {
        int a = 1, e = 1, i = 1, o = 1, u = 1;

        while (--n)
        {
            o += u;
            i += o;
            e += i;
            a += e;
        }

        return a + e + i + o + u;
    }
};

class Solution
{
public:
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};

    int cnt(int len, char last_char)
    {
        if (len == 0)
            return 1;
        int temp = 0;
        for (char i : v)
        {
            if (last_char >= i)
                temp += cnt(len - 1, i);
        }

        return temp;
    }

    int countVowelStrings(int n)
    {

        int ans = 0;
        for (char i : v)
        {
            ans += cnt(n - 1, i);
        }

        return ans;
    }
};