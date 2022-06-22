// 1268.✅ Search Suggestions System

class Solution
{
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        string current = "";
        vector<string> temp;
        vector<vector<string>> ans;

        sort(products.begin(), products.end());

        for (auto s : searchWord)
        {
            current += s;
            temp.clear();

            auto itr = lower_bound(products.begin(), products.end(), current);
            // auto curr  = products.begin();

            for (int i = 0; i < 3 and itr + i != products.end(); ++i)
            {
                string now = *(itr + i);
                if (now.find(current))
                    break;
                temp.push_back(now);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};