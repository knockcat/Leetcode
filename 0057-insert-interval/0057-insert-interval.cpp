class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         vector<vector<int>>ans;
        for(auto itr:intervals)
        {
            if(itr[1]<newInterval[0])ans.push_back(itr);
   
            else if(newInterval[1]<itr[0]){
                ans.push_back(newInterval);
                newInterval=itr;
            }
  
            else{
                newInterval[0]=min(newInterval[0],itr[0]);
                newInterval[1]=max(newInterval[1],itr[1]);
            }    
        }
 
        ans.push_back(newInterval);
        return ans;
        
    }
};