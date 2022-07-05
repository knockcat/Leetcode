// 1465.✅ Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts

class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {

        int hmax = 0;
        int vmax = 0;

        // horizontalCuts.insert(horizontalCuts.begin(),0);
        // verticalCuts.insert(verticalCuts.begin(),0);

        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);

        verticalCuts.push_back(0);
        verticalCuts.push_back(w);

        //         for(auto x : horizontalCuts)
        //             cout<<x<<" ";
        //         cout<<endl;

        //         for(auto y : verticalCuts)
        //             cout<<y<<" ";
        //         cout<<endl;

        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        for (int i = 1; i < horizontalCuts.size(); ++i)
        {
            hmax = max(hmax, horizontalCuts[i] - horizontalCuts[i - 1]);
        }

        for (int i = 1; i < verticalCuts.size(); ++i)
        {
            vmax = max(vmax, verticalCuts[i] - verticalCuts[i - 1]);
        }

        return (1LL * vmax * hmax) % 1000000007;
    }
};