//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
  public:
    /*You are required to complete this method*/
    void ric (Node *root, int livello, vector<int> &livelli)
    {
        if (root == NULL) return;
        
        livello++;
        if (root->left == NULL && root->right == NULL)
        {
            livelli.push_back(livello);   
        }
        
        // Più livello meno cervello (Massimo Zampini)
        
        ric (root->left,  livello, livelli);
        ric (root->right, livello, livelli);
    }
    
    
    int minDepth(Node *root)
    {
        // Your code here
        vector<int> livelli;
        
        ric (root, 0, livelli);
        
        int ans = INT_MAX;
        for (int i=0; i<livelli.size(); i++)
        {
            ans = min(ans, livelli[i]);
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s, ch;
        getline(cin, s);
        Node* root = buildTree(s);
        // getline(cin, ch);
        Solution obj;
        cout << obj.minDepth(root) << endl;
        // cout<<"~"<<endl;
    }
    return 0;
}

// } Driver Code Ends