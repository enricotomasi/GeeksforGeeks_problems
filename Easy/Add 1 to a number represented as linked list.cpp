//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        stack<int> stac;
        
        while (head != NULL)
        {
            stac.push(head->data);
            head = head->next;
        }
        
        bool ok = false;
        int primo = 0;
        if (stac.top() != 9)
        {
            primo = stac.top()+1;
            ok = true;
        }
        else
        {
            primo = 0;
        }
        
        stac.pop();
        
        stack<int> stac2;
        stac2.push(primo);
        
        while (!stac.empty())
        {
            if (ok)
            {
                stac2.push(stac.top());
            }
            else
            {
                if (stac.top() != 9)
                {
                    stac2.push(stac.top()+1);
                    ok = true;
                }
                else
                {
                    stac2.push(0);
                }
            }
            
            stac.pop();
        }
        
        if (!ok) stac2.push(1);
        
        Node* testa = new Node(stac2.top());
        Node* coda = testa;
        stac2.pop();
        
        while (!stac2.empty())
        {
            coda->next = new Node(stac2.top());
            coda = coda->next;
            stac2.pop();
        }
        
        return testa;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends