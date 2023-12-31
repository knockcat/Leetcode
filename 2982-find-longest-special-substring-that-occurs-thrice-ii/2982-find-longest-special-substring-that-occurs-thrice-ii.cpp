class Solution {
public:
    int maximumLength(string str) {
        
        unordered_map<char, int> mp, mp2, mp3;
        
        map<pair<char, int>, int> mp4;
        
        vector<int> freq(26, 0);
        
        int n = str.size();
        
        int ans = -1;
        
        for(int i = 0; i < n; ++i)
        {
            ++mp[str[i]];
            if(mp[str[i]] >= 3)
                ans = 1;
        }
        
        if(ans == -1)
            return ans;

        int cnt = 1;
        mp[str[0]] = 1;
        for(int i = 1; i < n; ++i)
        {
            if(str[i] == str[i-1])
            {
                ++cnt;
                // int al = mp[str[i]];
                mp2[str[i]] = max(mp2[str[i]], cnt);
                int have = mp2[str[i]];
                if(cnt < have)
                {
                    if(cnt == have-1)
                    {
                        mp3[str[i]] = max(mp3[str[i]], cnt);
                    }
                }
                
                ++mp4[{str[i], cnt}];
                if(mp4[{str[i], cnt}] >= 3)
                    freq[str[i]-'a'] = max(freq[str[i]-'a'],cnt);
            }
            else
            {
                cnt = 1;
                mp2[str[i]] = max(mp2[str[i]], cnt);
            }
        }
        for(auto& [f, e] : mp2)
        {
            // cout<<f << ' '<<e<<endl;
            if(e >= 3)
            {
                // cout<<mp3[f]<<endl;
                if(mp3[f] == e-1)
                    ans = max(ans, e-1);
                else
                    ans = max(ans, e-2);
            }
        }
        
        // cout<<mp4.size()<<endl;
        // for(auto& itr : mp4)
        // {
        //     // cout<<itr.first.first << ' '<<itr.first.second<<' '<<itr.second<<endl;
        //     if(itr.second >= 3)
        //     {
        //         ans = max(ans, itr.first.second);
        //     }
        // }
        
        for(auto& itr : freq)
            ans = max(ans, itr);
        
        return ans;
    }
};