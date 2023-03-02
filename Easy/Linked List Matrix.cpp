//{ Driver Code Starts
#include <bits/stdc++.h>
#define MAX 20
using namespace std;

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			if(Rp->right)cout << Rp->right->data << " ";
			else cout << "Null ";
			if(Rp->down)cout << Rp->down->data << " ";
			else cout << "Null ";
			Rp = Rp->right;
		}
		
		Dp = Dp->down;
	}
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n);

// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"\n";
    }
	return 0;
}


// } Driver Code Ends


/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x)
	{
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]

Node* ric(int mat[MAX][MAX], int x, int y, int n)
{
    if (x>=n || y>=n) return NULL;
    
    Node * ans = new Node(mat[x][y]);
    ans->right = ric(mat, x, y+1, n);
    ans->down  = ric(mat, x+1, y, n);
    return ans;
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    return ric(mat, 0, 0, n);
}
