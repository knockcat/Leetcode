using ll = long long;

class Solution {
public:
    
    ll palindrome(ll firstHalf, bool isEven)
    {
        ll resultNum = firstHalf;
        
        if(!isEven)
            firstHalf /= 10;
        
        while(firstHalf > 0)
        {
            resultNum = (resultNum * 10) + (firstHalf%10);
            firstHalf /= 10;
        }
        
        return resultNum;
    }
    
    string nearestPalindromic(string n) {
        
        int sz = n.size();
        int mid = sz/2;
        
        ll firstHalfLen = (sz % 2 == 0 ? mid : mid+1);
        
        ll firstHalf = stoll(n.substr(0, firstHalfLen));
        
        vector<ll> pos;
        
        pos.push_back(palindrome(firstHalf, sz % 2 == 0));
        pos.push_back(palindrome(firstHalf+1, sz % 2 == 0));
        pos.push_back(palindrome(firstHalf-1, sz % 2 == 0));
        pos.push_back(pow(10, sz-1) - 1);
        pos.push_back(pow(10, sz) + 1);
        
        ll diff = LONG_MAX;
        ll res = LONG_MAX;
        ll orgNum = stoll(n);
        
        for(auto& num : pos)
        {
            if(num == orgNum) continue;
            
            if(abs(num - orgNum) < diff)
            {
                diff = abs(num - orgNum);
                res = num;
            }
            else if(abs(num - orgNum) == diff)
            {
                res = min(res, num);
            }
        }
        
        return to_string(res);
        
    }
};