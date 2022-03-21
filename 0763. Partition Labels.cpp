// 763.✅ Partition Labels

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        // vector for keeping the track of  last occurence of every character
        vector<int> end_idx(26, 0);

        for (int i = 0; i < s.length(); ++i)
            end_idx[s[i] - 'a'] = i;

        vector<int> res;

        int start = 0, end = 0;
        // scanning string character by character
        for (int i = 0; i < s.length(); ++i)
        {
            // whenever we get an character we check,
            // last index of that character
            end = max(end, end_idx[s[i] - 'a']);

            // when current i.e i == end
            // add it to result
            if (i == end)
            {
                // all the characters of current partition included
                res.push_back(i - start + 1);
                // update the start pointer for fresh start
                start = i + 1;
            }
        }

        return res;
    }
};