class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        int maxi = *max_element(arr.begin(), arr.end());
        
        if(k >= arr.size()) return maxi;
        
        int cnt = 0;
        
        int winner = arr[0];
        
        for(int i = 1; i < n; ++i)
        {
            if(winner > arr[i])
            {
                ++cnt;   
            }
            else
            {
                winner = arr[i];
                cnt = 1;
            }
            
            if(cnt == k or winner == maxi)
                return winner;
        }
        
        return winner;
        
    }
};