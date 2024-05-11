class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
         vector<pair<double,int>> v;
        int n=quality.size();
        for(int i=0;i<n;i++){
            double factor=wage[i]/(double)quality[i];
            v.push_back({factor,quality[i]});
        }
        
        sort(v.begin(),v.end());
        
        priority_queue<int> pq; 
        
        double ans=DBL_MAX;
        int q=0;
        for(int i=0;i<n;i++){
            if(pq.size()<k){
                pq.push(v[i].second);
                q += v[i].second;
            }else if(pq.size()==k){
                if(pq.top()>v[i].second){
                    q -= pq.top();
                    pq.pop();
                    
                    pq.push(v[i].second);
                    q += v[i].second;
                }
            }
            if(pq.size()==k){
                double cost = q*v[i].first;
                if(ans > cost) ans=cost;
            }
        }
        return ans;
    }
};