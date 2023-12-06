class Solution {
public:
    int totalMoney(int n) {
        
       int totMoney = 0;
       int track = 1, day = 0, curr = 1;
        
        
       for(int i = 1; i<=n; ++i)
       {
           totMoney += curr;
           ++curr;
           ++day;
           
           if(day == 7)
           {
               curr = track+1;
               ++track;
               day = 0;
           }
       }
        
       return totMoney;
    }
};