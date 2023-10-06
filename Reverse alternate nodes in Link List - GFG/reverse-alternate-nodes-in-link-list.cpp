//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    
    Node* reverse(struct Node* head)
    {
        Node* prev = nullptr;
        
        while(head)
        {
            Node* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        
        return prev;
    }
    
    void rearrange(struct Node *odd)
    {
        //add code here
        
        Node* dummy = new Node(0), *ptr = dummy;
        
        Node* temp = odd, *prev = nullptr;
        
        bool ok = false;
        
        while(temp)
        {
           if(ok)
           {
               prev->next = (temp->next ? temp->next : nullptr);
               ptr ->next = temp;
               ptr = ptr->next;
           }
           
           if(!ok)
            prev = temp;
            
           temp = temp->next;
            
           ok ^= 1;
        }
        
        
        if(ptr->next)
            ptr->next = nullptr;
            
        Node* rev = reverse(dummy->next);
        
       
        prev->next = rev;
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends