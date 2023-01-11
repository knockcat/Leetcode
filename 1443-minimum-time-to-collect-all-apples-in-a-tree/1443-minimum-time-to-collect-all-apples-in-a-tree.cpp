class Solution {
public:
    vector<vector<int>> adjList;
    int dfs(vector<bool>& hasApple,int node,int d,int prev)
    {
        int result=0,temp;
        for(int &i:adjList[node])
	    if(i!=prev)
	    {
	        temp=dfs(hasApple,i,d+1,node);
	        if(temp)			//If child has apples it'll return a non zero result which is the distance traveled upto that node.
		    result+=temp-d;
	    }
        return result||hasApple[node]?result+d:0;  //If nothing is added to result and current node doesnt have apple return 0 else return distances of children + current distance from root.
        
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    {
        adjList.resize(n);
        for(vector<int> &e:edges)
            adjList[e[0]].push_back(e[1]),adjList[e[1]].push_back(e[0]);
        return dfs(hasApple,0,0,-1)*2;     //Result is doubled the distance travelled as per our observation.
    }
};