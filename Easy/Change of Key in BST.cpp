//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int key;
	struct node *left;
	struct node *right;
	
	node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}


node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    node *root = new node(stoi(ip[0]));

    // Push the root to the queue
    queue<node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// Function to change a key value in Binary Search Tree
struct node *changeKey(struct node *root, int oldVal, int newVal);

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        struct node *root = NULL;
        int n, temp, oldKey, new_key;
        string s;
        getline(cin,s);
        
        
        cin>>oldKey;
        getchar();
        cin>>new_key;
        getchar();
        root = buildTree(s);
        
        root = changeKey(root, oldKey, new_key);
        inorder(root);
        printf("\n");
    }
	return 0;
}



// } Driver Code Ends


/*
Structure of the binary Search Tree is as
struct node
{
	int key;
	struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST

int massimo(node *temp)
{
    while (temp->right) temp = temp->right;

    return temp->key;
}

node* removenode(node *root,int x)
{
    if (!root) return NULL;

    if      (root->key > x) root->left  = removenode(root->left, x);
    else if (root->key < x) root->right = removenode(root->right, x);
    else 
    {
        if (root->left && root->right)
        {
            int newdata = massimo(root->left);
            root->key = newdata;
            root->left = removenode(root->left, newdata);
            return root;
        }
        else if (root->left)  return root->left;
        else if (root->right) return root->right;
  
        return NULL;
    }
    
    return root;
}

node* inserisci(node *root,int x)
{
    if (!root)
    {
        node *temp  = new node(x);
        return temp;
    }
    
    if (root->key >= x) root->left  = inserisci(root->left,x);
    else                root->right = inserisci(root->right,x);
        
    return root;
}


struct node *changeKey(struct node *root, int oldVal, int newVal)
{
	// Code here
	root = removenode(root, oldVal);
	return inserisci(root, newVal);
}