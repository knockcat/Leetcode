//{ Driver Code Starts
import java.util.*;

class Find_Given_Element_Of_Spiral_Matrix 
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0)
		{
			int n = sc.nextInt();
			int m = sc.nextInt();
			int k = sc.nextInt();
			int arr[][] = new int[1000][1000];
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++ )
				{
					arr[i][j] = sc.nextInt();
				}
			}
			System.out.println(new Solution().findK(arr, n, m, k));
		t--;
		}
	}
}
// } Driver Code Ends


class Solution
{
    /*You are required to complete this method*/
    int findK(int A[][], int n, int m, int k)
    {
	// Your code here	
	    
	    int dir = 0, top = 0, left = 0, right = m-1, bottom = n-1;
	    
	    ArrayList<Integer> v = new ArrayList<>();
	   
	    while(top <= bottom && left <= right)
	    {
	        for(int i = left; i <= right; ++i)
	        {
	            v.add(A[top][i]);
	        }
	        ++top;
	        
	        for(int i = top; i <= bottom; ++i)
	        {
	            v.add(A[i][right]);
	        }
	        --right;
	        
	        for(int i = right; i >= left; --i)
	        {
	            v.add(A[bottom][i]);
	        }
	        --bottom;
	        for(int i = bottom; i >= top; --i)
	        {
	            v.add(A[i][left]);
	        }
	        ++left;
	        
	    }
	    
	   // for(int i = 0; i < v.size(); ++i)
	   //     System.out.println(v.get(i));
	    
	    return v.get(k-1);
    }
}