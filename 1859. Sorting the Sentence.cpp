//✅ 1859. Sorting the Sentence

class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> v(10);
        string ans;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] >=48 && s[i] <= 57)     
            {
                v[s[i] - 48] = word + " ";      //for index of vector s[i] - 48
                word = "";
                i++;    //because next one is space
            }
            else
                word += s[i];
        }
        
         for(int i = 0; i<v.size(); i++)       //Iterating the vector
           ans += v[i];
        
        ans.pop_back();         //removing last space
        
        return ans;
    }
};