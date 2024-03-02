class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> squares;
        
        for(auto& ele : nums)
            squares.push_back(ele * ele);
        
        sort(squares.begin(), squares.end());
        
        return squares;
        
    }
};