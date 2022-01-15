2114. Maximum Number of Words Found in Sentences

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0, ind;
        char *ptr;
        for(int i = 0; i<sentences.size(); i++)
        {
           ind = 1;
            ptr = &sentences[i][0];
            while(*ptr != '\0')
            {
                if(*ptr == ' ')
                    ind++;
                ptr++;
            }
            if(max < ind)
                max = ind;
        }
       return max;
    }
    
};