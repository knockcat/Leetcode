//✅ 461. Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        // cout<<bitset<32>(5).to_string() << endl;
       // return bitset<32>(x^y).count();
        int res = x^y;
        int cnt = 0;
        while(res > 0)
        {
            cnt += res & 1;
            res >>= 1;
        }
        return cnt;
        
    }
};