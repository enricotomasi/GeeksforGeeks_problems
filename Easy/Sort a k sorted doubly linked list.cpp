//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution
{
public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k)
    {
        // code here
        int n = 0;
        
        DLLNode *copia = head;
        
        while (copia != NULL)
        {
            n++;
            copia = copia->next;
        }
        
        for (int i=n-1; i>0; i--)
        {
            DLLNode *copia2 = head;
            for (int j=0; j<i; j++)
            {
                //cout << i << " " << j << endl;
                //cout << copia2->data << "   " << copia2->next->data << endl;
                
                if (copia2->data > copia2->next->data)
                {
                    int temp = copia2->data;
                    
                    copia2->data = copia2->next->data;
                    copia2 = copia2->next;
                    copia2->data = temp;
                }
                else
                {
                    copia2 = copia2->next;
                }
            }
        }
        
        
        return head;
        
    }
};

//{ Driver Code Starts.

// Function to insert a node at the end
// of the Doubly Linked List
void push(DLLNode **tailRef, int new_data)
{
    // allocate node
    DLLNode *newNode = new DLLNode(new_data);

    // since we are adding at the end,
    // next is NULL
    newNode->next = NULL;

    newNode->prev = (*tailRef);

    // change next of tail node to new node
    if ((*tailRef) != NULL)
        (*tailRef)->next = newNode;

    (*tailRef) = newNode;
}

// Function to print nodes in a given doubly linked list
void printList(DLLNode *head)
{
    // if list is empty
    if (head == NULL)
        return;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// Driver
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a;
        cin >> a;
        DLLNode *head = new DLLNode(a);
        DLLNode *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            push(&tail, a);
        }
        Solution obj;
        printList(obj.sortAKSortedDLL(head, k));
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends