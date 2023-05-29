//{ Driver Code Starts
#include <stdint.h>

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *npx;

    Node(int x) {
        data = x;
        npx = NULL;
    }
};

struct Node *XOR(struct Node *a, struct Node *b) {
    return (struct Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

struct Node *insert(struct Node *head, int data);

vector<int> printList(struct Node *head);

int main() {
    int t;
    cin >> t;
    while (t--) {
        struct Node *head = NULL;
        int n, tmp;
        cin >> n;
        while (n--) {
            cin >> tmp;
            head = insert(head, tmp);
        }
        vector<int> vec = printList(head);
        for (int x : vec) cout << x << " ";
        cout << endl;
        for (int i = vec.size() - 1; i >= 0; i--) {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    return (0);
}

// } Driver Code Ends


/*
Structure of linked list is as
struct Node
{
    int data;
    struct Node* npx;

    Node(int x)
    {
        data = x;
        npx = NULL;
    }
};

Utility function to get XOR of two Struct Node pointer
use this function to get XOR of two pointers
struct Node* XOR (struct Node *a, struct Node *b)
{
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}
*/

/*
    Hint:
    At each node store ( address of previous node xor address of current node xor address of next node.
    While traversing the nodes try to use a value of (previous node address xor current node address )
    to get the next node address. 
*/

// function should insert the data to the front of the list
struct Node *insert(struct Node *head, int data)
{
    // Code here
    struct Node *nuovo = new Node(data);

    nuovo->npx = head;
    
    if (head != NULL)
    {
        head->npx = XOR(nuovo, head->npx);
    }
        
    head = nuovo;
    
}

vector<int> printList(struct Node *head)
{
    // Code here
    vector<int> ans;
    
    Node *attuale = head;
    Node *precedente = NULL;
    Node *prossimo;
    
    while (attuale)
    {
        ans.push_back(attuale->data);
        prossimo = XOR(precedente, attuale->npx);
        
        precedente = attuale;
        attuale = prossimo;
    }
    
    
    
    return ans;
}
