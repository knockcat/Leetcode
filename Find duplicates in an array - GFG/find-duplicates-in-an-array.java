//{ Driver Code Starts
import java.io.*;
import java.util.*;
import java.util.Map.Entry;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            Solution g = new Solution();
            ArrayList<Integer> ans = g.duplicates(a, n);
            for (Integer val : ans) System.out.print(val + " ");
            System.out.println();
        }
    }
}

// } Driver Code Ends


class Solution {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        // code here
        
        Map<Integer,Integer> mp = new TreeMap<Integer,Integer>();
        
        for(int i = 0; i < n; ++i)
        {
            if(mp.containsKey(arr[i]))
            {
                mp.put(arr[i], mp.get(arr[i]) + 1);
            }
            else
                mp.put(arr[i], 1);
        }
        
        ArrayList<Integer> ans = new ArrayList<Integer>();
        
        for(Map.Entry<Integer,Integer> ele : mp.entrySet())
        {
            if(ele.getValue() > 1)
                ans.add(ele.getKey());
        }
        
        if(ans.isEmpty())
            ans.add(-1);
        
        return ans;
    }
}
