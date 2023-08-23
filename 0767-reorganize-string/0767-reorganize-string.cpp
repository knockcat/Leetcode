class Solution {
public:
    string reorganizeString(string s) {
     
        priority_queue<pair<int,char> > pq;
        
        unordered_map<char, int> mp;
        
        string ans;
        
        for(auto& itr : s)
            ++mp[itr];
        
        for(auto itr : mp)
            pq.push({itr.second, itr.first});
        
        while(!pq.empty())
        { 
            pair<int, char> curr1 = {-1, ' '}, curr2 = {-1, ' '};
            
            if(!pq.empty())
            {
                curr1 = pq.top();
                pq.pop();
            }
            
            if(!pq.empty())
            {
                curr2 = pq.top();
                pq.pop();
            }
            
            if(curr2.first == -1 and curr1.first > 1)
                return "";
            
            ans += curr1.second;
            
            if(curr2.first != -1)
                ans += curr2.second;
            
            --curr2.first;
            --curr1.first;
            
            if(curr1.first > 0)
                pq.push(curr1);
            
            if(curr2.first > 0)
                pq.push(curr2);
        }
        
        return ans;
    }
};