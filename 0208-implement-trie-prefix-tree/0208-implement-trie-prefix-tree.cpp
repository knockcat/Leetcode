class Trie {
public:
    
    struct Node{
        Node *Child[26] = {nullptr};
        bool isWord = false;
    };
    
    Node* root = new Node();
    
    Trie() {
        
    }
    
    void insert(string word) {
        Node * temp = root;
        for(int i= 0; i<word.size();++i)
        {
            if(!temp->Child[word[i]-'a'])
                temp->Child[word[i]-'a'] = new Node();
            temp = temp->Child[word[i]-'a'];
        }
        temp->isWord = true;
    }
    
    bool search(string word) {
        Node *temp = root;
        for(int i = 0; i < word.size(); ++i)
        {
            if(!temp->Child[word[i]-'a'])
                return false;
            temp = temp->Child[word[i]-'a'];
        }
        return temp->isWord;
    }
    
    bool startsWith(string prefix) {
        Node *temp = root;
        for(int i = 0; i<prefix.size(); ++i)
        {
            if(!temp->Child[prefix[i] - 'a'])
                return false;
            temp = temp->Child[prefix[i] - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */