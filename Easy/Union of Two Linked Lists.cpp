//{ Driver Code Starts
#include<bits/stdc++.h>
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

struct Node* makeUnion(struct Node* head1, struct Node* head2);

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
        
        printList(makeUnion(first,second));
    }
    return 0;
}

// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int> uniset;

    while (head1 != NULL)
    {
        uniset.insert(head1->data);
        head1 = head1->next;
    }
  
    while (head2)
    {
        uniset.insert(head2->data);
        head2 = head2->next;
    }
    
    vector<int> uni;
    for (auto it: uniset) uni.push_back(it);
    
    int n = uni.size();
    Node *ans = new Node(uni[0]);
    Node *coda = ans;
    
    for (int i=1; i<n; i++)
    {
        coda->next = new Node(uni[i]);
        coda = coda->next;
    }
    
    
    return ans;
}
