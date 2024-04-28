//{ Driver Code Starts
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



// } Driver Code Ends
/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution
{
    public:
    Node* deleteMid(Node *head)
    {
        // Your Code Here
        int n = 0;
        Node *copy = head;
        
        while (copy)
        {
            n++;
            copy = copy->next;
        }
        
        int mid = n / 2;
        
        //cout << "n: " << n << " mid: " << mid << endl;
        
        Node *copy2 = head;
        
        for (int i = 0; i < mid - 1; i++)
        {
            copy2 = copy2->next;
        }
        
        //cout << copy2->data << endl;
        
        if (!copy2->next)
        {
            return NULL;
        }
        
        if (copy2->next && !copy2->next->next)
        {
            copy2->next = NULL;
        }
        else if (copy2->next && copy2->next->next)
        {
            copy2->next = copy2->next->next;
        }

        return head;
    }
};

//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends