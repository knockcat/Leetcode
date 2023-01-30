class LRUCache {
public:
    
    class Node{
        public:
        int key, val;
        Node* prev, *next;
        Node(int k, int v)
        {
            key = k;
            val = v;
        }
    };
    
    int cap;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    unordered_map<int,Node*> mp;
    
    void addNode(Node* ptr)
    {
        Node* temp = head->next;
        head->next = ptr;
        ptr->prev = head;
        ptr->next = temp;
        temp->prev = ptr;
    }
    
    void deleteNode(Node *ptr)
    {
        Node* ptrPrev = ptr->prev;
        Node* ptrNext = ptr->next;
        ptrPrev->next = ptrNext;
        ptrNext->prev = ptrPrev;
    }
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end())
        {
            Node* resultNode = mp[key];
            int res = resultNode->val;
            mp.erase(key);
            deleteNode(resultNode);
            addNode(resultNode);
            mp[key] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end())
        {
            Node* existingNode = mp[key];
            mp.erase(key);
            deleteNode(existingNode);
        }
        if(mp.size() == cap)
        {
            Node* recentNode = tail->prev;
            mp.erase(recentNode->key);
            deleteNode(recentNode);
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