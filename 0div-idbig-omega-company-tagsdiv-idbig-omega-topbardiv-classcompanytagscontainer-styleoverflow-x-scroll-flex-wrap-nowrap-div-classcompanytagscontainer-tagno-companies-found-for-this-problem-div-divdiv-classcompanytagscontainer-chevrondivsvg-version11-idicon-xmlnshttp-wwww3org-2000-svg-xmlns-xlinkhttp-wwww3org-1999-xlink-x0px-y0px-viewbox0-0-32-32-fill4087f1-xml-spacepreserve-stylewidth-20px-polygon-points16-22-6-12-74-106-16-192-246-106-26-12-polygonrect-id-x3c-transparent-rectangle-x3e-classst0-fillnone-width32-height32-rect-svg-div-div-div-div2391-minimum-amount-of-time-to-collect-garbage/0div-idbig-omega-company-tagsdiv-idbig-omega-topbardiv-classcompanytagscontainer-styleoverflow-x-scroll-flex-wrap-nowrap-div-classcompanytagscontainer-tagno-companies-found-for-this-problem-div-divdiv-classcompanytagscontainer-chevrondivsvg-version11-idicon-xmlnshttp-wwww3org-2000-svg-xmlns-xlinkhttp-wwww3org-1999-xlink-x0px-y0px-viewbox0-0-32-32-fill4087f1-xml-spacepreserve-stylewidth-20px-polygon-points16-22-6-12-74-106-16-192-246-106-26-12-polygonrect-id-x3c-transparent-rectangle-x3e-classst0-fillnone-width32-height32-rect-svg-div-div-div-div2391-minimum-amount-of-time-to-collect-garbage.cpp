class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int n = garbage.size();
        
        int totalTime = 0;
        
        unordered_map<char,int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            for(auto& gar : garbage[i])
                ++mp[gar];
        }
        
        for(int i = 0; i < n; ++i)
        {
            int p = 0, g = 0, m = 0;
            
            for(auto& gar : garbage[i])
            {
                if(gar == 'P')
                    ++p;
                else if(gar == 'G')
                    ++g;
                else
                    ++m;
            }
            
            totalTime += (p+g+m);
            
            if(i-1 >= 0)
            {
                if(mp['P']) totalTime += travel[i-1];
                if(mp['G']) totalTime += travel[i-1];
                if(mp['M']) totalTime += travel[i-1];
            }
            
            mp['P'] -= p;
            mp['M'] -= m;
            mp['G'] -= g;
            
            if(mp['P'] == 0)
                mp.erase('P');
            if(mp['G'] == 0)
                mp.erase('G');
            if(mp['M'] == 0)
                mp.erase('M');

        }
        
        return totalTime;
        
    }
};