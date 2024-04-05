//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution
{
  public:
    //Function to sort the given linked list using Merge Sort.
    struct Node* mid(Node* node)
    {
        Node *first = node;
        Node *second = node;
        
        while (first->next && first->next->next)
        {
            first = first->next->next;
            second = second->next;
        }
        
        return second;
    }
    
    struct Node* Merge(Node* l, Node* r)
    {
        
        if (l == NULL)
        {
            return r;
        }
        
        if (r == NULL)
        {
            return l;
        }
        
        Node *temp1 = nullptr;
        Node *ans = nullptr;
        
        if (l->data > r->data)
        {
            ans = temp1 = r;
            r = r->next;
        }
        
        else if (l -> data <= r->data)
        {
            ans = temp1 = l;
            l = l->next;
        }
        
        while (l && r)
        {
            if (l->data <= r->data)
            {
                temp1->next = l;
                temp1 = temp1->next;
                l = l->next;
            }
            else if (l->data > r->data)
            {
                temp1 -> next = r;
                temp1 = temp1->next;
                r = r->next;
            }
        }
        
        if (l)
        {
            temp1->next = l;
        }
        if (r)
        {
            temp1->next = r;
        }
        
        return ans;
    }
    
    
    Node* mergeSort(Node* head)
    {
        // your code here
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        
        Node* m = mid(head);
        
        Node* l = head;
        Node* r = m->next;
        
        m->next = NULL;
        
        l = mergeSort(l);
        r = mergeSort(r);
        
        return Merge(l, r);
        
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends
