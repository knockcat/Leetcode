// 744.✅ Find Smallest Letter Greater Than Target

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {

        for (int i = 0; i < letters.size(); ++i)
        {
            if (letters[i] > target)
                return letters[i];
        }

        return letters[0];
    }
};

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int start = 0, end = letters.size() - 1;
        char ans = letters[0];
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (letters[mid] > target)
            {
                ans = letters[mid];
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans;
    }
};