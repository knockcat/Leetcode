// 133.✅ Clone Graph

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        if (node == NULL)
            return NULL;

        // map with integer as 'key' & Node* as 'value'
        unordered_map<int, Node *> visited;

        return clone(node, visited);
    }

    Node *clone(Node *node, unordered_map<int, Node *> &visited)
    {
        Node *new_node = new Node(node->val);

        // after creating the node we mark it as visited
        visited.insert({node->val, new_node});

        // looking for all the neighbors of node which is created
        for (Node *n : node->neighbors)
        {

            // find function return reference/iterator to that node if exist
            //  or return the end iterator (not find)
            auto it = visited.find(n->val);

            // if not visited
            if (it == visited.end())
            {
                // recursive call
                Node *cn = clone(n, visited);
                // insert it in neighbor list of current node
                new_node->neighbors.push_back(cn);
            }
            // if already visited
            else
            {
                new_node->neighbors.push_back(it->second);
            }
        }
        return new_node;
    }
};