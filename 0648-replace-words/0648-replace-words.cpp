class Node
{
    private:
        Node* child[26] = {nullptr};
        bool isWord = false;
    
    public:
        bool containsKey(char ch)
        {
            return child[ch-'a'] != nullptr;
        }
        
        Node* get(char ch)
        {
            return child[ch-'a'];
        }
    
        void put(char ch, Node* newNode)
        {
            child[ch-'a'] = newNode;
        }
    
        void setEnd()
        {
            isWord = true;
        }
    
        bool isEnd()
        {
            return isWord;
        }
};

class Trie{
    private:
        Node* root;
    
    public:
        Trie()
        {
            root = new Node();
        }
    
        void insert(string& word)
        {
            int n = word.size();
            Node* temp = root;
            
            for(int i = 0; i < n; ++i)
            {
                if(!temp->containsKey(word[i]))
                    temp->put(word[i], new Node());
                temp = temp->get(word[i]);
            }
            temp->setEnd();
        }
    
        string search(string& word)
        {
            int n = word.size();
            Node* temp = root;
            string ans;
            
            for(int i = 0; i < n; ++i)
            {
                if(temp->containsKey(word[i]))
                {
                    ans += word[i];
                }
                else
                    return "-1";
                
                temp = temp->get(word[i]);
                
                if(temp->isEnd())
                    return ans;
            }
            
            return "-1";
        }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        Trie *trie = new Trie();
        
        stringstream ss(sentence);
        string word, ans;
        
        for(auto& str : dictionary)
            trie->insert(str);
        
        while(ss >> word)
        {
            string curr = trie->search(word);
           
            if(curr != "-1")
                ans += curr;
            else
                ans += word;
            ans += " ";
        }
        
        ans.pop_back();
        
        return ans;
    }
};