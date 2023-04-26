class Solution {
public:
    int addDigits(int num) {
        
        string str = to_string(num);
        
        while(true)
        {
            string curr;
            int sum = 0;
            
            for(auto itr : str)
            {
                sum += itr-'0';
            }

            curr = to_string(sum);
            
            if(curr.size() == 1)
                return stoi(curr);
            
            str = curr;
        }
        
        return 0;
    }
};