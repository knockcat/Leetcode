// 2105.✅ Watering Plants II

class Solution
{
public:
    int minimumRefill(vector<int> &plants, int capacityA, int capacityB)
    {
        int cnt = 0;
        int cb = capacityB;
        int ca = capacityA;
        int l = 0;
        int r = plants.size() - 1;

        while (l < r)
        {
            if (ca < plants[l])
            {
                ca = capacityA;
                ++cnt;
            }
            ca -= plants[l];
            ++l;
            if (cb < plants[r])
            {
                cb = capacityB;
                ++cnt;
            }
            cb -= plants[r];
            r--;

            if (l == r) // size is odd ==> both want to water the middle plant
            {
                cnt += (ca >= cb) ? (ca < plants[l]) : (cb < plants[r]); // if ca>=cb => ca should water the plant
            }
        }
        return cnt;
    }
};