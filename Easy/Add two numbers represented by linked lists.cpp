//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    Node* rev(Node *nodo)
    {

        if(nodo==NULL || nodo->next==NULL) return nodo;
        
        Node* att = nodo;
        Node * precedente = NULL;
        
        while(att!=NULL)
        {
            Node *t = att->next;
            att->next = precedente;
            precedente = att;
            att = t;
        }

        nodo = precedente;
        return nodo;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *ans = new Node(0);
        Node *temp = ans;
        int resto = 0;
        
        Node* primo = rev(first);
        Node* secondo = rev(second);

        while(primo != NULL || secondo != NULL || resto)

        {
            int somma = 0;
            if(primo != NULL)
            {
                somma+= primo->data;
                primo = primo->next;
            }

            if(secondo!=NULL)
            {
                somma+= secondo->data;
                secondo = secondo->next;
            }

            somma += resto;
            resto = somma/10;
            Node *tmp = new Node(somma %10);
            temp->next = tmp;
            temp = temp->next;
        }

        return rev(ans->next);  
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends