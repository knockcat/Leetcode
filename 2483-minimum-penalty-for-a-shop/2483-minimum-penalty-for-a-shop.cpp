class Solution {
public:
    int bestClosingTime(string customers) {
        
        int n = customers.size();
        
        int totPenalty = n;
        int shopClosed = -1;
        
        vector<pair<int,int>> records;
        
        int customerCome = 0, customerNotCome = 0;
        
        for(int i = 0; i < n; ++i)
        {
           if(customers[i] == 'Y')
               ++customerCome;
           else
               ++customerNotCome;
           
           records.push_back({customerCome, customerNotCome});
        }
        
        for(int i = 0; i <= n; ++i)
        {
            int notCameAndOpen = (i > 0 ? records[i-1].second : 0);
            int cameAndClosed = (i == 0 ? records[n-1].first : records[n-1].first - records[i-1].first);               
                                  
            if(notCameAndOpen + cameAndClosed < totPenalty)
            {
                totPenalty = notCameAndOpen + cameAndClosed;
                shopClosed = i;
            }   
        }
        
        return shopClosed;
        
    }
};