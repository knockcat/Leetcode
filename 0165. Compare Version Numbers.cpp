// 165.✅ Compare Version Numbers

class Solution
{
public:
    int compareVersion(string version1, string version2)
    {

        int i = 0, j = 0, n1 = version1.length(), n2 = version2.length(), num1 = 0, num2 = 0;

        while (i < n1 || j < n2)
        {
            while (i < n1 && version1[i] != '.')
            {
                // converting version1[i] to int for comparison
                num1 = num1 * 10 + (version1[i] - '0');
                ++i;
            }
            while (j < n2 && version2[j] != '.')
            {
                // converting version2[i] to int for comparison
                num2 = num2 * 10 + (version2[j] - '0');
                ++j;
            }

            // acc to ques if version1 > version2 return 1;
            if (num1 > num2)
                return 1;
            // acc to ques if version1 < version2 return 1;
            if (num1 < num2)
                return -1;

            ++i, ++j; // for the case when version[i] == '.' , we will skip that
            // If a version number does not specify a revision at an index,
            // then we have to treat the revision as 0
            num1 = 0, num2 = 0;
        }
        return 0;
    }
};

// correction need to be done stoi()
class Solution
{
public:
    string split(string str)
    {
        string s1;
        for (auto i : str)
        {
            if (i != '.')
                s1.push_back(i);
        }
        return s1;
    }

    int compareVersion(string version1, string version2)
    {

        // spliting string from .
        string s1 = split(version1);
        string s2 = split(version2);

        int mx = max(s1.length(), s2.length());
        for (int i = 0; i < mx; ++i)
        {
            char c1 = s1[i];
            char c2 = s2[i];
            int v1 = i < s1.length() ? stoi(c1) : 0;
            int v2 = i < s2.length() ? stoi(c2) : 0;

            if (v1 > v2)
                return 1;
            else if (v1 < v2)
                return -1;
        }
        return 0;
    }
};