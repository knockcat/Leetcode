116. Populating Next Right Pointers in Each Node

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL)
            return root;
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int s = q.size();
            if(s == 0)
                return root;
        
        while(s > 0)
        {
            Node * temp;
            if(s > 1)
            {
                temp = q.front();
                q.pop();
                
                Node *nextAdd = q.front();
                temp -> next = nextAdd;
            }
            else
            {
                temp = q.front();
                q.pop();
            }

            if(temp -> left != NULL)
                q.push(temp -> left);
            if(temp -> right != NULL)
                q.push(temp -> right);
            
            s--;
        }
        }
        return root;
    }
};