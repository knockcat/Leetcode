// 1423.✅ Maximum Points You Can Obtain from Cards

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int sum = 0;
        for (int i = 0; i < k; ++i)
            sum += cardPoints[i];

        if (cardPoints.size() == k)
            return sum;

        int j = cardPoints.size() - 1;
        int i = k - 1, currsum = sum;

        while (i >= 0)
        {
            currsum -= cardPoints[i--];
            currsum += cardPoints[j--];
            sum = max(sum, currsum);
        }

        return sum;
    }
};
