//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

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

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
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


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        Node *copia = head;
        
        stack<int> prima;
        while (k)
        {
            prima.push(copia->data);
            copia = copia->next;
            k--;
        }
        
        stack<int> seconda;
        while (copia)
        {
            seconda.push(copia->data);
            copia = copia->next;
        }
        
        struct Node *ans = new Node(prima.top());
        struct Node *testa = ans;
        prima.pop();
        
        while (!prima.empty())
        {
            testa->next = new Node(prima.top());
            prima.pop();
            testa = testa->next;
        }
        
        while (!seconda.empty())
        {
            testa->next = new Node(seconda.top());
            seconda.pop();
            testa = testa->next;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends