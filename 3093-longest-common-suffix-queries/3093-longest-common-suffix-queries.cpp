class Node{
    public:
        Node* child[26] = {nullptr};
        pair<int,int> p;
        bool isWord;
    
    public:
    
        Node(){
            p.first = 1e9;
            p.second = 1e9;
            isWord = false;
        }
        bool containsKey(char ch)
        {
            return child[ch-'a'] != nullptr;
        }
    
        void put(char ch, Node* node)
        {
            child[ch - 'a'] = node;
        }
    
        Node* get(char ch)
        {
            return child[ch - 'a'];
        }
    
        void setEnd()
        {
            isWord = true;
        }
    
        void updateMin(int idx, int len)
        {
            if(len < p.second)
            {
                p.first = idx;
                p.second = len;
            }
            else if(len == p.second)
                p.first = min(p.first, idx);
        }
    
        int getIdx()
        {
            return p.first;
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

        void insert(string& word, int idx)
        {
            Node* temp = root;

            int n = word.size();

            for(int i = 0; i < n; ++i)
            {
                char ch = word[i];
                temp->updateMin(idx, n);
                if(!temp->containsKey(ch))
                {
                    temp->put(ch, new Node());
                   
                }
                temp = temp->get(ch);
            }
            temp->updateMin(idx, n);
            temp->setEnd();
        }

        int search(string& word)
        {
            Node* temp = root;
            int n = word.size();
            int ansIdx = -1;

            for(int i = 0; i < n; ++i)
            {
                char ch = word[i];
                if(!temp->containsKey(ch))
                {
                    break;
                }
                ansIdx= temp->getIdx();
                temp = temp->get(ch);
            }

            return temp->getIdx();
        }
};

class Solution {
public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        
        Trie *trie = new Trie();
        
        vector<int> ans;
        
        int idx = 0, minLength = 1e9;;
        for(auto& word : wordsContainer)
        {
            string rev = word;
            reverse(rev.begin(), rev.end());
            minLength = min(minLength, (int)rev.size());
            trie->insert(rev, idx);
            ++idx;
        }
        
        for(auto& word : wordsQuery)
        {
            string rev = word;
            reverse(rev.begin(), rev.end());
            int ansIdx = trie->search(rev);
            ans.push_back(ansIdx);
        }
        
        return ans;
    }
};