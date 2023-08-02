//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N, M, x, y;
            String S[] = read.readLine().split(" ");
            N = Integer.parseInt(S[0]);
            M = Integer.parseInt(S[1]);
            int a[][] = new int[N][M];
            for (int i = 0; i < N; i++) {
                String s[] = read.readLine().split(" ");
                for (int j = 0; j < M; j++) a[i][j] = Integer.parseInt(s[j]);
            }
            String s1[] = read.readLine().split(" ");
            x = Integer.parseInt(s1[0]);
            y = Integer.parseInt(s1[1]);
            Solution ob = new Solution();
            System.out.println(ob.shortestDistance(N, M, a, x, y));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int shortestDistance(int N, int M, int A[][], int X, int Y) {
        // code here
        
        boolean[][] visited = new boolean[N][M];
        
        Queue<int[]> q = new LinkedList<>();
        
        q.add(new int[]{0, 0, 0});
        
        visited[0][0] = true;
        
        int[] dx = {-1, 0, 0, +1};
        int[] dy = {0, -1, +1, 0};
        
        while(!q.isEmpty())
        {
            int curr[] = q.poll();
            
            int step = curr[0];
            int x = curr[1];
            int y = curr[2];
            
            // System.out.println(x + " " + step + " " + y);
            
            if(X == x && Y == y)
                return step;
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(newx >= 0 && newy >= 0 && newx < N && newy < M && !visited[newx][newy] && A[newx][newy] == 1)
                {
                    // System.out.println(newx + " " + newy);
                    visited[newx][newy] = true;
                    q.add(new int[]{step+1, newx, newy});
                }
            }
            
        }
        return -1;
    }
};