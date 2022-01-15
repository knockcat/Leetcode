//✅ 2133. Check if Every Row and Column Contains All Numbers

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int r = matrix.size();           //number of rows in matrix
        int c = matrix[0].size();        //no of colums on row 0
            
        vector<int> row(r+1);            //vector of size r+1 for storing count of element for each row
        vector<int> col(c+1);            //vector of size c+1 for storing count of element for each col
            
        //[i][j] for row    
            
        for(int i = 0; i<r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                row[matrix[i][j]] += 1; //row[matrix[i][j]] = row[matrix[i][j]] + 1 // increment the count by 1
                if(row[matrix[i][j]] > i+1) //if the count  is > than i+1 this means duplicates are there // means an element occur twice in the same row
                    return false;
            }
        }
        
        /*
        for 1st row count of element is 1 , but if the same element occur again count become 2, but for 1st row cnt cannot be greater than 2
        i,e cnt != 2 for i = 1  (as same element in a row shall not be repeated), but cnt == 2 for i = 2 (where i is row2) is valid .
        
        also cnt == 3 for i = 3     //valid
        cnt == 4 for i = 4          //valid
        
        it should not exceed the current ith row    beacause for a row an element should occur once.
        
        i.e cnt < i+1
        
        matrix is valid if every row and every col should have that element once.
        */

        
        //[j][i] for column
        
        for(int i = 0; i<c; i++)
        {
            for(int j = 0; j < r; j++)
            {
                col[matrix[j][i]] += 1; //col[matrix[j][i]] = col[matrix[j][i]] + 1 // increment the count by 1
                
                               
                if(col[matrix[j][i]] > i+1) //if the count  is > than i+1 this means duplicates are there  // means an element occur twice in the same col
                    return false;
            }
        }
        
        /*
        for 1st col count of element is 1 , but if the same element occur again count become 2, but for 1st col cnt cannot be greater than 2
        i,e cnt != 2 for i = 1  (as same element in a col shall not be repeated), but cnt == 2 for i = 2 (where i is col2) is valid .
        
        also cnt == 3 for i = 3     //valid
        cnt == 4 for i = 4          //valid
        
        it should not exceed the current ith col    beacause for a col an element should occur once.
        
        i.e cnt < i+1
        
        matrix is valid if every row and every col should have that element once.
        */
        
        return true;        //valid
    }
};