class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
        int n = words.size();

        vector<string> ans;

        string curr = "";

        for(int i = 0; i < n; ++i)
        {
            int j = i+1;
            int currCnt = words[i].size(), wordCount = 1;
            while(j < n and currCnt + words[j].size() < maxWidth)
            {
                currCnt += words[j].size();
                
                // cout<<words[j]<<' ';

                ++currCnt;
                
                ++wordCount;
                ++j;
            }
            
            // cout<<wordCount<<' '<<currCnt<<endl;
            // cout<<endl;

            int remSpaces = maxWidth - currCnt;
            
            int evenlyDivide = (wordCount > 1 ? (remSpaces/ (wordCount-1)) : (remSpaces / wordCount));
            
            int extra = (wordCount > 1 ? (remSpaces% (wordCount-1)) : (remSpaces % wordCount));
            
            // cout<<remSpaces<< ' '<<evenlyDivide<<' '<<extra<<endl;
            
            bool ok = false;
            
            for(int k = i; k < j; ++k)
            {
                curr += words[k]; 
                
                if(extra and j != n)
                {
                    curr += ' ';
                    --extra;
                    --remSpaces;
                }
                
                 if(j != n and k != j- 1)
                 {
                    string need(evenlyDivide + 1, ' ');
                    curr += need;    
                    remSpaces -= evenlyDivide + 1;
                 }
                 
                
                 else if(j == n and k != j-1)
                    curr += ' ';
            }
            
            if(remSpaces > 0)
            {
                string need(remSpaces, ' ');
                curr += need;
            }

            
            // cout<<curr.size()<<endl;
            
            // if(curr.size() > maxWidth)
            //     curr.pop_back();
            
            ans.push_back(curr);
            
            curr.clear();
            
            i = j-1;
        }
        return ans;
    }
};