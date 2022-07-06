// 135.✅135. Candy Candy

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> left(ratings.size(), 1);
        // vector<int> right(ratings.size(),1);

        for (int i = 1; i < ratings.size(); ++i)
        {
            if (ratings[i] > ratings[i - 1])
                left[i] = left[i - 1] + 1;
        }

        //         for(int i = ratings.size()-2; i >= 0; --i)
        //         {
        //             if(ratings[i] > ratings[i+1])
        //                 right[i] = right[i+1] + 1;
        //         }

        //         vector<int> ans;
        //         for(int i = 0; i < ratings.size(); ++i)
        //             ans.push_back(max(left[i],right[i]));

        int right = 1;
        for (int i = ratings.size() - 2; i >= 0; --i)
        {
            if (ratings[i] > ratings[i + 1])
            {
                ++right;
                left[i] = max(left[i], right);
            }
            else
                right = 1;
        }

        return accumulate(left.begin(), left.end(), 0);
    }
};
