299. Bulls and Cows

class Solution {
public:
    string getHint(string secret, string guess) {
        string ans;
        int bulls = 0, cows = 0;
        
        for(int i = 0; i<secret.length();i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
                secret[i] = 'o';
                guess[i] = 'o';
            }
        }
        
        for(int i = 0; i<secret.length(); i++)
        {
            if(secret[i] != 'o')
            {
                for(int j = 0; j< guess.length(); j++)
                {
                    if(secret[i] == guess[j] && guess[j] != 'o')
                    {
                        cows++;
                        guess[j] = 'o';
                        break;
                    }
                }
            }
        }
        ans += to_string(bulls) + "A" + to_string(cows) + "B";
        cout<<bulls<<" "<<cows;
        return ans;
    }
};