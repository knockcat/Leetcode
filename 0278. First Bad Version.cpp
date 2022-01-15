// 278. First Bad Version

class Solution {
public:
    int firstBadVersion(int n) {
        while(n--)
        {
            bool ans = isBadVersion(n);
            if(!ans)
                break;
        }
        return n+1;
    }
};