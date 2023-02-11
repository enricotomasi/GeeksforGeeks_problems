//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
 

// } Driver Code Ends
/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;
    
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
    Node *zigZag(Node* head)
    {
        // your code goes here
        
        /*
            If next element is expected to be greater, but is smaller, swap current with next.
            Similarly if next element is expected to be smaller, but is larger, swap current with next. 
            This swapping wont affect the sorted sequence before the current node.
        */
        
        auto ans = head;
        bool piccolo = true;
        
         
        while (head)
        {
            if (head->next != NULL && ((piccolo && head->data > head->next->data) || (!piccolo && head->data < head->next->data)))
            {
                int temp = head->next->data;
                head->next->data = head->data;
                head->data = temp;
            }
            
            head = head->next;
            piccolo = !piccolo;
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.


int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Solution ob;
		Node *ans = ob.zigZag(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends