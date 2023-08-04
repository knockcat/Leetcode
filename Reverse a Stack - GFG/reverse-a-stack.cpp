//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
private:
    void insert(stack<int>& St, int ele)
    {
        if(St.empty())
        {
            St.push(ele);
            return;
        }
        
        int cur = St.top();
        St.pop();
        insert(St, ele);
        St.push(cur);
    }
    
public:
    void Reverse(stack<int> &St){
        
        if(St.empty())
            return;
        
        int ele = St.top();
        St.pop();
        Reverse(St);
        insert(St, ele);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends