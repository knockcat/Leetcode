class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string str;
        
        while(columnNumber > 0)
        {
            char last = 'A' + (columnNumber - 1) % 26;
            
            str = last + str;
            
            columnNumber = (columnNumber - 1) / 26;
        }
        
        return str;
        
    }
};