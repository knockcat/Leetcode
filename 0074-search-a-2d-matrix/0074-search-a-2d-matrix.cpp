class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(), m = matrix[0].size();
        
        int start = 0 , end = (n*m)-1;
        
        while(start <= end)
        {
            int mid = (start + end) >> 1;
            
            int val = matrix[mid/m][mid%m];
            
            if(val == target)
                return true;
            else if(val < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        
        return false;
    }
};