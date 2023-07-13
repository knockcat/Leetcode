//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            
            int[] arr = IntArray.input(br, n);
            
            Solution obj = new Solution();
            boolean res = obj.isFrequencyUnique(n, arr);
            
            int _result_val = (res) ? 1 : 0;
            System.out.println(_result_val);
        }
    }
}

// } Driver Code Ends



class Solution {
    public static boolean isFrequencyUnique(int n, int[] arr) {
        // code here
        
        HashMap<Integer,Integer> mp = new HashMap<>();
        HashSet<Integer> st = new HashSet<>();
        
        for(int i = 0; i < n; ++i)
            {
                if(mp.containsKey(arr[i]))
                    {
                        mp.put(arr[i] , mp.get(arr[i]) + 1);
                    }
                else
                    {
                        mp.put(arr[i],1);
                    }
            }
            
        for(int freq : mp.values())
        {
            if(st.contains(freq))
                return false;
            else
                st.add(freq);
        }
        
        return true;
    }
}
        
