1592. Rearrange Spaces Between Words

class Solution {
public:
    string reorderSpaces(string text) {
       int spaces = 0;
        int i = 0;
        
        vector <string> words;
        
        while(i < text.length())
        {
            if(text[i] == ' ')
            {
                spaces ++;  //for spaces
                i++; 
            }
            
            else
            {
                string s;
                while(i < text.length() && text[i] != ' ')
                {
                    s += text[i];
                    i++;
                }
                words.push_back(s); //pushing word to the vecotor
            }
        }
        
        string ans;
        int rem_spaces = 0;   // calc remaning spaces which need to be add at end of string
        
        if(words.size() > 1){
            rem_spaces = spaces % (words.size() - 1);
            int btwn = spaces / (words.size() - 1);    //for calc  equal spaces  b/w words
            
            for(int i = 0; i<words.size()-1; i++){
                ans += words[i]; //adding whole word to ans string
                int j = 0;
                while(j < btwn) // for spaces after word[i]
                {
                    ans += ' ';
                    j++;
                }
            }
        }
            
         else {
             rem_spaces = spaces;
         }   
        
        ans += words[words.size() - 1]; //adding last word to ans
        while(rem_spaces > 0)
        {
            ans += ' ';
            rem_spaces --;
        }
        return ans;
    }
};