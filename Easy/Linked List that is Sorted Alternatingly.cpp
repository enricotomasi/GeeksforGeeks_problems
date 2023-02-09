//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};

void sort(Node **head);


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends


/*Structure of Node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x)
	{
	    data =x;
	    next = NULL;
	}
};
*/
// your task is to complete this function
void sort(Node **head)
{
    // Code here
    Node* list1 = *head; 
    Node* list2 = (*head)->next; 
    
    while (list2 != NULL || list1->next != NULL)
    {
        if (list1->data > list2->data)
        { 
            int scambio = list1->data;  
            list1->data = list2->data; 
            list2->data = scambio;
        }
        
        list2 = list2->next;
        
        if (list2 == NULL)
        { 
            list1 = list1->next;
            list2 = list1->next;
        }
    }
    
}