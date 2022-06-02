// 117.✅ Populating Next Right Pointers in Each Node II

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == NULL)
            return NULL;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                Node *temp = q.front();
                q.pop();
                if (size)
                    temp->next = q.front();
                else
                    temp->next = NULL;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
        return root;
    }
};