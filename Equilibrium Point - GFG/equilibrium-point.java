//{ Driver Code Starts
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while (t-- > 0) {
            
            //taking input n
            int n = Integer.parseInt(br.readLine().trim());
            long arr[] = new long[n];
            String inputLine[] = br.readLine().trim().split(" ");
            
            //adding elements to the array
            for (int i = 0; i < n; i++) {
                arr[i] = Long.parseLong(inputLine[i]);
            }

            Solution ob = new Solution();
            
            //calling equilibriumPoint() function
            System.out.println(ob.equilibriumPoint(arr, n));
        }
    }
}
// } Driver Code Ends


class Solution {

    
    // a: input array
    // n: size of array
    // Function to find equilibrium point in the array.
    public static int equilibriumPoint(long arr[], int n) {

        // Your code here
        
        int totalSum = 0 ;
        
        for(int i = 0; i < n; ++i)
            totalSum += arr[i];
            
        int currSum = 0 ;    
            
        for(int i = 0; i < n; ++i)
        {
            currSum += arr[i];
            
            long left = (i == 0 ? 0 : currSum - arr[i]);
            long right = (i == n-1 ? 0 : totalSum - currSum);
            
            // System.out.println(left + " " + right);
            
            if(left == right)
                return i+1;
        }
        
        return -1;
    }
}
