class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        map<string,int> pos, neg;
        int n = student_id.size();
        
        for(auto itr : positive_feedback)
            ++pos[itr];
        for(auto itr : negative_feedback)
            ++neg[itr];
        
        vector<int> topK;
        vector<pair<int,int>> vp;
        
        for(int i = 0; i<n; ++i)
        {
            string str = report[i];
            string curr;
            vector<string> current;
            int score = 0;
            int j = 0;
            while(str[j] != '\0')
            {
                if(str[j] == ' ')
                {
                    current.push_back(curr);
                    curr.clear();
                    ++j;
                }
                else
                {
                    curr += str[j];
                    ++j;
                }
            }
            if(!curr.empty())
                current.push_back(curr);
            
            for(auto itr : current)
            {
                if(pos[itr])
                    score += 3;
                if(neg[itr])
                    score -= 1;
            }
            
            vp.push_back({score,student_id[i]});
        }
        
        sort(vp.begin(),vp.end(),[&](const auto &a, const auto &b){
            if(a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        });
        
        for(int i =0 ; i<k; ++i)
            topK.push_back(vp[i].second);
        
        return topK;
    }
};