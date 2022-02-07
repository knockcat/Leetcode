// 925.✅ Long Pressed Name

class Solution
{
public:
    bool isLongPressedName(string name, string typed)
    {
        int i = 0, j = 0;
        while (i < name.size() || j < typed.size())
        {
            char c = name[i];
            if (name[i] != typed[j])
                return false;
            i++;
            j++;
            if (name[i] != typed[j])
            {
                while (c == typed[j])
                    j++;
            }
        }
        return true;
    }
};
