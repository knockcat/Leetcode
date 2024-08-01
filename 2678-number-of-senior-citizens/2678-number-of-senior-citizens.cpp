class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int cnt = 0;
        
        for(auto& str : details)
        {
            cnt += (stoi(str.substr(11, 2)) > 60);
        }
        
        return cnt;
    }
};