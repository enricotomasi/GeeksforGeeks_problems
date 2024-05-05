//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  
   {
        int data;
        Node *next;
        
        Node(int x)
        {
            data = x;
            next = NULL;
        }
        
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node *head, int num, int K)
{
    // Your Code here
    
    if (num == 1 || num < K)
    {
        return head;
    }

    Node temp = Node(0);
    temp.next = head;
    head = &temp;
    
    int first = K;
    int last = num - K + 1;
    
    
    Node* curr1 = head;
    Node* curr2 = head;
    
    while (first > 1 || last > 1) 
    {
        if (first > 1) 
        {
            curr1 = curr1->next;
            first--;
        } 
        
        if (last > 1) 
        {
            curr2 = curr2->next;
            last--;
        }
    }
    
    swap(curr1->next, curr2->next);
    
    swap(curr1->next->next, curr2->next->next);
    
    return head->next;
    
}