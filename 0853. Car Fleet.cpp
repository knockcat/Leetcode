// 853. Car Fleet

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        priority_queue<vector<double>> pq;
        
        for(int i= 0; i<position.size(); i++)
            {
                double time = (double)(target-position[i])/speed[i];
                pq.push({(double)position[i],(double)speed[i],time});
            }
            
            if(pq.size() == 0)
                return 0;
            int fleet = 0;
            while(1)
            {
                if(pq.size() == 1)
                {
                    fleet++;
                    break;
                }
                auto forward = pq.top();
                pq.pop();
                auto backward = pq.top();
                    pq.pop();
                
                if(forward[2] >= backward[2])
                {
                    pq.push(forward);
                }
                else
                {
                    fleet ++;
                    pq.push(backward);
                }
            }
            
            return fleet;
    }
};