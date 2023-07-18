class LRUCache {
public:
    
    class Node{
        public:
            int key, val;
            Node *prev, *next;
    
            Node(int k, int v)
            {
                this->key = k;
                this->val = v;
            }
    };
    
    int cap;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    unordered_map<int,Node*>  mp;
    
    void addNode(Node* ptr)
    {
        Node* temp = head->next;
        head->next = ptr;
        ptr->next = temp;
        ptr->prev = head;
        temp->prev = ptr;
    }
    
    void deleteNode(Node* ptr)
    {
        Node *ptrPrev = ptr->prev;
        Node *ptrNext = ptr->next;
        
        ptrNext->prev = ptrPrev;
        ptrPrev->next = ptrNext;
        
        delete(ptr);
    }
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        
        if(mp.find(key) != mp.end())
        {
            Node* existing = mp[key];
            int value = existing->val;
            mp.erase(key);
            deleteNode(existing);
            addNode(new Node(key, value));
            mp[key] = head->next;
            return value;
        }
        
        return -1;
        
    }
    
    void put(int key, int value) {
        
        if(mp.find(key) != mp.end())
        {
            Node* existing = mp[key];
            mp.erase(key);
            deleteNode(existing);
        }
        
        if(cap == mp.size())
        {
            Node* existing = tail->prev;
            mp.erase(existing->key);
            deleteNode(existing);
        }
        
        addNode(new Node(key, value));
        
        mp[key] = head->next;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */