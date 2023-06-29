class Solution {
public:
    int shortestPathAllKeys(vector<string>& grid) {
    
    int m=grid.size(), n=m?grid[0].size():0;
    
    if(!m || !n) return 0;
    
    int path=0, K=0;
    
    
    vector<int> dirs={0,-1,0,1,0};
    
    vector<vector<vector<bool>>> visited(m,vector<vector<bool>>(n,vector<bool>(64,0))); 
    
    queue<pair<int,int>> q;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='@')
            {
                q.push({i*n+j,0});
                
                visited[i][j][0]=1;                    
            }
            
            if(grid[i][j]>='A' && grid[i][j]<='F') K++; //total alpha number
        }
    }
    while(!q.empty())
    {
        int size=q.size();
        
        for(int i=0;i<size;i++)
        {
            int a=q.front().first/n, b=q.front().first%n;
            
            int carry=q.front().second;
            
            q.pop();        
            
            if(carry==((1<<K)-1)) return path;
            
            for(int j=0;j<4;j++){
                
                int x=a+dirs[j], y=b+dirs[j+1], k=carry;
                
                if(x<0 || x>=m || y<0 || y>=n || grid[x][y]=='#') continue;
                
                if(grid[x][y]>='a' && grid[x][y]<='f'){
                    
                    k=carry|(1<<(grid[x][y]-'a'));
                }
                else if(grid[x][y]>='A' && grid[x][y]<='F'){
                    
                    if(!(carry & (1<<(grid[x][y]-'A')))) continue;
                }
                if(!visited[x][y][k]){
                    visited[x][y][k]=1;
                    q.push({x*n+y,k});
               }                
            }
        }
        path++;
    }
    return -1;
}
};