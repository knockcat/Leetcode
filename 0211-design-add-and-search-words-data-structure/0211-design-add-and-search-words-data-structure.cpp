class Node{
    public:
        Node* child[26] = {nullptr};
        bool isWord = false;
    public:
        bool containsKey(char ch)
        {
            return child[ch-'a'] != nullptr;
        }
    
        void put(char ch, Node* node){
            child[ch-'a'] = node;
        }
        
        Node* get(char ch)
        {
            return child[ch - 'a'];
        }    
    
        void setEnd()
        {
            isWord = true;
        }
};

class WordDictionary {
    
    private :
        Node* root;
    
public:
    WordDictionary() {
        root = new Node();
    }
    
    void addWord(string word) {
        Node* temp = root;
        for(auto ch : word)
        {
            if(!temp->containsKey(ch))   
                temp->put(ch,new Node());
            temp = temp->get(ch);
        }
        temp->setEnd();
    }
    
    bool search(string word) {
        Node* temp = root;
        return helper(word, temp);
    }
    
    bool helper(string word, Node* node){
        Node*temp = node;
        for(int i = 0; i<word.size(); ++i)
        {
            char ch = word[i];
            
            if(ch != '.')
            {
                if(!temp->containsKey(ch))
                    return false;
                temp = temp->get(ch);
            }
            else
            {
                bool found = false;
                int j = 0;
                for(;j<26; ++j)
                {
                    if(temp->child[j])
                        found |= helper(word.substr(i+1),temp->child[j]);
                    if(found)
                        return true;
                }
                if(j == 26)
                    return false;
    
            }
            
        }
        return temp->isWord;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */