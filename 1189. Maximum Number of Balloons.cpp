// 1189.✅ Maximum Number of Balloons

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        map<char, int> m;

        for (int i = 0; i < text.length(); ++i)
            m[text[i]]++;

        return min({m['b'], m['a'], m['l'] / 2, m['o'] / 2, m['n']});
    }
};