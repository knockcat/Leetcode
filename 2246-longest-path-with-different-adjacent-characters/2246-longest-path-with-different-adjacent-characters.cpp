class Solution {
public:
    vector<int> child[100001];
    int ans;
    int dfs(string &s, int curr_node)
    {
        if(child[curr_node].empty())return 1;
        int mx1 = 0, mx2 =0;
    // traversing over all the child nodes of the curr_node
        for(auto &child_node : child[curr_node])
        {
        // recursively trying for child nodes
            int len = dfs(s, child_node);
            ans = max(ans , len);
     // rejecting the current node if it's of same character
            if(s[curr_node] == s[child_node])continue;
     // updating the mx1 and mx2 paths that we can take from all the children of the given node
            if(len > mx1)
            {
                mx2 = mx1;
                mx1 = len;
            }
    //seecond max will be updated
            else mx2 = max(mx2 , len);
        }
    // Update the result.
    //Again, max1+mx2+1 means the length of the longest valid path 
    //going through this node in the sub-tree rooted at this node
        ans = max(ans, 1 + mx1 + mx2);
    //Adding 1 for the current node
        return 1 + mx1;
    }
    int longestPath(vector<int>& parent, string s){
        int n = parent.size();
        for(int i=1;i<n;i++)child[parent[i]].push_back(i);
        ans = 1;
        dfs(s,0);
        return ans;
    }
};