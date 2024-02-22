class Solution {
public:
    
    void generate(int openBracket, int closeBracket, int n, string ds, vector<string>& answer)
    {
        if(openBracket == n and closeBracket == n)
        {
            answer.push_back(ds);
            return;
        }
        
        if(openBracket < n)
            generate(openBracket+1, closeBracket, n, ds + '(', answer);
        if(closeBracket < openBracket)
            generate(openBracket, closeBracket+1, n, ds + ')', answer);
    }
    
    vector<string> generateParenthesis(int n) {
     
        vector<string> answer;
        
        generate(0, 0, n, "", answer);
        
        return answer;
    }
};