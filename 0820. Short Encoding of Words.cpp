// 820.✅ Short Encoding of Words

class Solution
{
public:
    int minimumLengthEncoding(vector<string> &words)
    {
        set<string> s(words.begin(), words.end()); // store word in set so that they can remove easily

        // for each word find its suffixes and remove from set s if it present
        for (auto &word : words)
        {
            for (int i = 1; i < word.size(); i++) // erase suffixes of a word
                s.erase(word.substr(i));
        }

        int ans = 0;
        // all the remaining words in s are valid encoding string
        for (auto word : s)
            ans += word.size() + 1;

        return ans;
    }
};