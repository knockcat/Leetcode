class AuthenticationManager {
public:
    
    int timeToLive;
    
    map<string,int> mp;
    
    AuthenticationManager(int timeToLive) {
        this->timeToLive = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId] = currentTime + timeToLive;
    }
    
    void renew(string tokenId, int currentTime) {
        
        if(mp[tokenId] > currentTime)
            mp[tokenId] = currentTime + timeToLive;
        
    }
    
    int countUnexpiredTokens(int currentTime) {
        
        int counter = 0;
        
        for(auto& itr: mp)
        {
            if(itr.second > currentTime)
                ++counter;
        }
        
        return counter;   
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */