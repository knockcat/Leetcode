//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int sum){
        // code here
        
         string ans="";
        if( N>1 && sum==0) return "-1";
        
        for(int i=0 ;i<N;i++){
            
            if( sum -9 >= 0 ){
                ans.push_back('9');
                sum-=9;
            }
            else if( sum ==0 ){ 
                ans.push_back('0') ;
            }
            else{ 
                ans += to_string(sum);
                sum=0;
            } 
        }    
        
        if(sum==0) return ans;
        return "-1";
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends