class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
     
        int n = capital.size();
        vector<pair<int,int> > vp;
        for(int i = 0; i < n; ++i)
            vp.push_back({capital[i],profits[i]});
        
        sort(vp.begin(),vp.end());
        
        priority_queue<int> pq;
        
        int j = 0;
        
        for(int i = 0; i < k; ++i)
        {
            while(j < n and vp[j].first <= w)
                pq.push(vp[j++].second);
            
            if(pq.empty())
                break;
            
            w += pq.top();
            pq.pop();
        }
        
        return w;   
    }
};

  