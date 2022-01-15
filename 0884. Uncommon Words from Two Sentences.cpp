884. Uncommon Words from Two Sentences

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        vector <string> v;
        vector <string> v1;
        map<string,int> m;
        stringstream check1(s1);
        stringstream check2(s2);
        
        string t1;
        string t2;
        
        while(getline(check1,t1,' '))
        {
            v.push_back(t1);
        }
        while(getline(check2,t2,' '))
        {
            v.push_back(t2);
        }            
        
        for(int i = 0; i<v.size(); i++)
            m[v[i]]++;
        
        map<string,int> :: iterator it = m.begin();
        for(it = m.begin(); it!= m.end(); it++)
        {
            if(it->second == 1)
                v1.push_back(it->first);
        }
        return v1;
      
    }
};