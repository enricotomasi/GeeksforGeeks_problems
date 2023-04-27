//{ Driver Code Starts
#include <iostream>
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


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


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
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
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

Node *mezzo(Node *root)
{
    Node *coda = root;
    Node *testa = root;
    
    while ( coda && coda->next && testa)
    {
        testa = testa->next;
        coda = coda->next->next;
    }

    return testa;
}

Node *rigira(Node *root)
{
    Node *precedente = NULL;
    Node *prossimo = NULL;
    
    Node *attuale = root;

    while (attuale)
    {
        prossimo = attuale->next;
        attuale->next = precedente;
        precedente = attuale;
        attuale = prossimo;
    }
    
    return precedente;
}


Node *inPlace(Node *root)
{
    // your code goes here
    Node *uno = root;
    Node *due = mezzo(uno);
    Node *tre = rigira(due->next);
    
    due->next = NULL;
    
    while (uno && tre)
    {
       Node*temp3 = uno->next;
       uno->next = tre;
    
       Node*temp4 = tre->next;
       tre->next = temp3;
       uno = temp3;
       tre = temp4;
    }

    return root;
}
