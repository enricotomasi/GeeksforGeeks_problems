//{ Driver Code Starts
#include<bits/stdc++.h>
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};


// } Driver Code Ends
/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x)
  {
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
        //Your code here
        
        /*
        
        HINT: 
        
        1. There will be 3 cases in this question:

            Case 1: head_ref is NULL
             In this case, create a node with data x and store its address at head_ref.

            Case 2: data of head node is greater than new node's data
             In this case as well, new node will become head of list and previous head will be second node.

            Case 3: if none of the prev is true
             Locate a node whose data is greater than new data and insert new node right before it.
             In case no such node is found in the list, append new node at the end.
        
        */
       
        
       Node *inizio = head;
       Node *prox = head->next;
       
       Node *temp = new Node(data);
       
       while(prox != head)
       {
           if(data < head->data)
           {
               inizio = prox;
               prox = prox->next;
           }
           else if (prox->data < data)
           {
               inizio = prox;
               prox = prox->next;
           }
           else
           {
                inizio->next = temp;
                temp->next = prox;
                return head;
           }
           
       }

       if(prox->data>data)
       {
           temp->next = prox;
           head = temp;
           inizio->next = temp;
       }
       else
       {
           temp->next = head;
           inizio->next = temp;
           
       }
       
    return head;
    }
};

//{ Driver Code Starts.

/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;

  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("\n");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  
  
    /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
      scanf("%d",&arr);
    
    temp = new Node(arr);
    start=temp;
    r=start;
    }
    for (i = 0; i<n-1; i++)
    {
        scanf("%d",&arr);
        temp = new Node(arr);
        r->next=temp;
        r=r->next;
    }
    
    if(n>0)
    temp->next=start;
 
    scanf("%d",&x);
    Solution ob;
    start = ob.sortedInsert(start,x);
    printList(start);
    r=start;
    while(r!=start->next)
    {

      temp=start;
      start=start->next;
      free(temp);
    }
    free(start);
}
  return 0;
}

// } Driver Code Ends