class Node
{

public:
    Node *child[26] = {nullptr};
    bool isWord = false;
    int cntEndWith = 0;
    int cntPrefix = 0;

    bool containsKey(char ch)
    {
        return (child[ch - 'a'] != nullptr);
    }

    void put(char ch, Node *node)
    {
        child[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return child[ch - 'a'];
    }

    void setEnd()
    {
        isWord = true;
    }

    bool isEnd()
    {
        return isWord;
    }

    void increaseEnd()
    {
        ++cntEndWith;
    }

    void increasePrefix()
    {
        ++cntPrefix;
    }

    void deleteEnd()
    {
        --cntEndWith;
    }

    void reducePrefix()
    {
        --cntPrefix;
    }

    int getEnd()
    {
        return cntEndWith;
    }

    int getPrefix()
    {
        return cntPrefix;
    }
};


class Trie {
public:
    private:
        Node* root;
    public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *temp = root;
        for (int i = 0; i < word.size(); ++i)
        {
            if (!temp->containsKey(word[i]))
                temp->put(word[i], new Node());
            temp = temp->get(word[i]);
            temp->increasePrefix();
        }
        temp->increaseEnd();
        temp->setEnd();
    }
    
    bool search(string word) {
        Node *temp = root;
        for(int i = 0; i<word.size(); ++i)
        {
            if(!temp->containsKey(word[i]))
                return false;
            temp = temp->get(word[i]);
        }
        return temp->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node *temp = root;
        for(int i = 0; i<prefix.size(); ++i)
        {
            if(!temp->containsKey(prefix[i]))
                return false;
            temp = temp->get(prefix[i]);
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