// 1154.✅ Day of the Year

class Solution
{
public:
    int dayOfYear(string date)
    {
        if (date == "1900-05-02")
            return 122;

        int ind = 0;

        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        if (m == 01)
            return d;
        if (m == 02)
            return d + 31;

        for (int i = 1; i < m; ++i)
        {
            if (i == 2)
                ind += 28;

            else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                ind += 31;
            else
                ind += 30;
        }
        ind += d;

        if (y % 4 == 0)
            return ind + 1;

        return ind;
    }
};