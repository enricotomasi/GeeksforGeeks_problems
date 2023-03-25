//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x)
	{
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   //Code here
    Node* a = head;
    
    vector<char> vocali;
    vector<char> consonanti;

    while(a != NULL)
    {
        char c = a->data;
        
        if (c == 'a' || 
            c == 'e' || 
            c == 'i' ||
            c == 'o' ||
            c == 'u')    vocali.push_back(c);
        else             consonanti.push_back(c);

        a = a->next;
    }

    Node* b = head;
    
    for (auto it : vocali)
    {
        b->data = it;
        b = b->next;
    }

    for (auto it : consonanti)
    {
        b->data = it;
        b = b->next;
    }

    return head;
}
