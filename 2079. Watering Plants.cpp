// 2079.✅ Watering Plants

class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int c = capacity;
        int res = 0;

        for (int i = 0; i < plants.size(); ++i)
        {
            if (capacity < plants[i])
            {
                res += i * 2;
                capacity = c;
            }
            capacity -= plants[i];
        }
        return res + plants.size();
    }
};
