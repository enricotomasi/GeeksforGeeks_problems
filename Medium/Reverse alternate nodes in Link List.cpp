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
    Node* rec(Node* root) 
    {
        Node* prev = NULL;
        Node* next = NULL;
        
        while (root) 
        {
            next = root->next;
            root->next = prev;
            prev = root;
            root = next;
        }
        
        return prev;
    }
    
    
    void rearrange(struct Node *odd)
    {
        //add code here
        Node* head = odd;
        Node* cur = odd->next;
        Node* temp = cur;
        
        while (head->next && head->next->next) 
        {
            head->next = head->next->next;
            head = head->next;
            temp->next = head->next;
            
            if (temp->next)
            {
               temp = temp->next;
            }
        }
        
        head->next = rec(cur);
        
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
