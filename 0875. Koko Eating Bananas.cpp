875. Koko Eating Bananas

class Solution {
public:
    int k = 0;
    void binary(int l, int r, vector<int> &piles,int h)
    {
        if(l <= r)
        {
            int mid = (l+r)/2;
            int sum = 0;
            int hours = 0;
            for (int i = 0; i<piles.size(); i++)
            {
                sum = round(piles[i]/mid);
                hours += sum;
                if(piles[i] % mid != 0 )
                    hours++;
            }
            if(hours <= h)
            {
                k = min(k,mid);
                binary(l,mid-1,piles,h);
            }
            else
                binary(mid+1,r,piles,h);
        }
        else return;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        k = r;
        binary(l,r,piles,h);
        return k;
    }
};