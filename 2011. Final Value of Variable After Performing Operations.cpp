// 2011.✅ Final Value of Variable After Performing Operations


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(int i = 0; i<operations.size(); i++)
        {
            if(operations[i] == "X++" || operations[i] == "++X")
                X += 1;
            else
                X -= 1;
        }
        
        return X;
    }
};