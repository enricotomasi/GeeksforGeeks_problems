//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution
{

public:
    void rec(Node *root, int &ans, int x)
    {
        if (!root)
        {
            return;
        }
        
        rec(root->left, ans, x);
        
        //cout << root->data << endl;
        
        if (root->data <= x)
        {
            ans = root->data;
        }
        
        rec(root->right, ans, x);
    }
    
    
    int floor(Node* root, int x)
    {
        // Code here
        int ans = 0;
        
        rec(root, ans, x);
        
        if (ans == 0 || ans > x)
        {
            return -1;
        }
        
        return ans;

    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends