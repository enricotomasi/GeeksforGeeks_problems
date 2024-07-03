//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node 
{
    int data;
    struct Node *next;
};

*/


/*

    The idea is to maintain a pointer (prev) 
    to the node which just previous to the block 
    of nodes we are checking for duplicates. 

*/


class Solution 
{
  public:
    Node* removeAllDuplicates(struct Node* head) 
    {
        // code here
        if (!head || !head->next)
        {
            return head;
        }
        
        struct Node *p = NULL;
        struct Node *c = head;
        
        while (c && c->next)
        {
            Node *t = c->next;
            
            if (c->data != t->data)
            {
                p = c;
                c = c->next;
            }
            else
            {
                int d = c->data;
                
                if (c == head)
                {
                    while (head && head->data == d)
                    {
                        head = head->next;
                    }
                    
                    c = head;
                }
                else
                {
                    while (c && c->data == d)
                    {
                        c = c->next;
                    }
                    
                    p->next = c;
                    
                }
            }
        }
        
        
        return head;
        
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends