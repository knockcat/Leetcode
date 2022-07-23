// 2347.✅ Best Poker Hand

class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        map<int, int> r;
        map<char, int> s;

        for (auto itr : ranks)
            ++r[itr];
        for (auto itr : suits)
            ++s[itr];

        if (s.size() == 1)
            return "Flush";
        int mr = 1;
        for (auto itr : r)
        {
            if (itr.second > mr)
                mr = itr.second;
        }
        // cout<< mr<<endl;
        if (mr >= 3 && mr < 5)
            return "Three of a Kind";
        else if (mr == 2)
            return "Pair";

        return "High Card";
    }
};