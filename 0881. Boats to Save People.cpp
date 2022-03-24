// 991.✅ Broken Calculator

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {

        // sort vector
        sort(people.begin(), people.end());

        int i = 0, j = people.size() - 1, cnt = 0;

        while (i <= j)
        {
            // lightest person + heaviest person sum <= limit
            // they can go together
            if (people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else
                --j;

            ++cnt; // number of boats
        }

        return cnt;
    }
    // for github repository link go to my profile.
};