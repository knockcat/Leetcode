class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int n = students.size();
        
        vector<int> freq(2, 0);
        
        for(auto& ele : students)
            ++freq[ele];
        
        int cnt = 0;
        
        for(auto& ele : sandwiches)
        {
            if(freq[ele] > 0)
            {
                ++cnt;
                --freq[ele];
            }
            else
                break;
        }
        
        return n - cnt;
        
    }
};