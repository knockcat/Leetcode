// 848.✅ Shifting Letters

class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {
        int k = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            k = (k + shifts[i]) % 26;
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
        }

        return s;
    }
};
