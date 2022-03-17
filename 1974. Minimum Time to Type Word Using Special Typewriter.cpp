// 1974.✅ Minimum Time to Type Word Using Special Typewriter

class Solution
{
public:
    int minTimeToType(string word)
    {
        int res = word.size(), pointer = 'a';

        for (auto ch : word)
        {
            // first check in clockwise then in anticlockwise and,
            // take minimum of that
            res += min(abs(ch - pointer), 26 - abs(pointer - ch));
            pointer = ch;
        }

        return res;
    }
};