class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        map<char,int>mp;
        int count = 0;
        
        for(auto ele : tasks)
        {
            mp[ele]++;
            count = max(count, mp[ele]);
        }
        
        int ans = (count-1)*(n+1);
        
        for(auto e : mp)
        {
            if(e.second == count)
                ans++;
        }
        
        return max((int)tasks.size(), ans);
    }
};