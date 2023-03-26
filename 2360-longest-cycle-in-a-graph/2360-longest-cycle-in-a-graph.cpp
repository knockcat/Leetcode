class Solution {
public:
     int mx=-1;
    void dfs(vector<int> &ed , vector<int> &pvis , vector<int> &vis , int i , int j){
        if(pvis[i]){
            mx = max(mx , j - pvis[i]);
            return;
        }
        if(!vis[i]){
            pvis[i] =j; j++; vis[i]=1;
            if(ed[i]!=-1) dfs(ed , pvis , vis , ed[i],j);
        }
        pvis[i] = 0;
        return;
    }

    int longestCycle(vector<int>& ed) {
        vector<int> vis(ed.size(),0) , pvis(ed.size(),0);
        mx = -1;
        for(int i=0;i<ed.size();i++){
            if(!vis[i]) dfs(ed,pvis,vis,i,1);
        }
        return mx;
    }
};