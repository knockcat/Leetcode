class Solution {
public:
    
    // atmost 2
    int largestInteger(int num) {
        
        int cnt = 0;
        vector<int> v, even, odd;
        
        while(num > 0)
        {
            v.push_back(num%10);
            num /= 10;
        }
        
        for(auto itr : v)
        {
            if(itr & 1)
                odd.push_back(itr);
            else
                even.push_back(itr);
        }
        
        reverse(v.begin(),v.end());
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());
        
        int k = 0, l = 0;
        
        string ans;
        
        for(auto itr : v)
        {
            if(itr & 1)
                ans += to_string(odd[k++]);
            else
                ans += to_string(even[l++]);
        }
        
        // cout<<ans<<endl;
        num = stoi(ans);
        
        return num;
        
    }
};