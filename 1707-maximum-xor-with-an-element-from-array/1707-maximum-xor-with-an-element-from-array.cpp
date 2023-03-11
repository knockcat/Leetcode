class Node{
    public:
      Node *child[2] = {nullptr};

      bool containsKey(int bit)
      {
          return (child[bit] != nullptr);
      }

      Node *get(int bit)
       {
        return child[bit];
        }

    void put(int bit , Node* node)
    {
        child[bit] = node;
    }
};

class Trie{

    private:
    Node *root;
    public:
    Trie(){
        root = new Node();
    }
    public:
    void insert(int num)
    {
        Node*temp = root;

        for(int i = 31; i>=0; --i)
        {
            int bit = (num >> i) & 1;
            if(!temp->containsKey(bit))
            {
                temp->put(bit,new Node());
            }
            temp = temp->get(bit);
        }
    }
    public:
    int getMax(int num){
        Node* temp = root;
        int maxNum = 0;
        for(int i = 31; i>=0; --i)
        {
            int bit = (num >> i) & 1;
            if(temp->containsKey(1-bit)) // opposite
            {
                maxNum = maxNum  | (1 << i);
                temp = temp->get(1-bit);
            }
            else{
                temp = temp->get(bit);
            }
        }

        return maxNum;
    }
};


class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<pair<int,pair<int,int>>> vec;
        int n = queries.size();
        
        for(int i = 0; i<n; ++i)
            vec.push_back({queries[i][1],{queries[i][0],i}});
        
        sort(vec.begin(),vec.end());
        
        sort(nums.begin(),nums.end());
        
        int m = nums.size();
        
        Trie *obj = new Trie();
        
        int k = 0;
        vector<int> ans(n);
        
        for(int i = 0; i < n; ++i)
        {
            int mi = vec[i].first;
            int xi = vec[i].second.first;
            int idx = vec[i].second.second;
            
            for(int i = k; i < m; ++i)
            {
                if(nums[k] <= mi)
                    obj->insert(nums[k++]);
                else
                    break;
            }
            
            if(k == 0)
                ans[idx] = -1;
            else
                ans[idx] = obj->getMax(xi);
        }
        
        return ans;
        
    }
};