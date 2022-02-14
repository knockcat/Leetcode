// 1700.✅ Number of Students Unable to Eat Lunch

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int flag = 0;

        int k;

        while (1)
        {
            if (students[0] == sandwiches[0])
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                flag = 0;
            }
            if (students[0] != sandwiches[0])
            {
                k = students[0];
                students.erase(students.begin());
                students.push_back(k);
                flag++;
            }
            if (flag == students.size())
                break;
        }

        return flag;
    }
};