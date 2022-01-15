551. Student Attendance Record I

class Solution {
public:
    bool checkRecord(string s) {
        
        int cnt = 0, flag = 1;
        
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'A')
                cnt++;
            if((s[i] == 'L')  && (s[i+1] == 'L') && (s[i+2] == 'L'))
                flag = 0;
        }
        
        if(flag == 1 && cnt<2)
            return true;
        
        return false;
    }
};