//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
Node *buildTree(string str)
{
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
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    
    void ric(Node *root, int temp, int livello, vector<vector<int>> &percorsi)
    {
        if (root == NULL) return;
        livello++;
        
        temp += root->data;
        // cout << root->data << " *** " << temp;
        
        if (root->left == NULL && root->right == NULL)
        {
            percorsi.push_back({livello,  temp});
            // cout << " ---- FOGLIA ----- ";
            temp = 0;
        }
        
        // cout << endl;
        
        ric (root->left,  temp, livello, percorsi);
        ric (root->right, temp, livello, percorsi);
    }
    
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        vector<vector<int>> percorsi;
        
        ric (root, 0, 0, percorsi);
        
        int liv = INT_MIN;
        for (int i=0; i<percorsi.size(); i++)
        {
            liv = max(liv, percorsi[i][0]);
        }
        
        int ans = INT_MIN;
        for (int i=0; i<percorsi.size(); i++)
        {
            if (percorsi[i][0] == liv) ans = max(ans, percorsi[i][1]);
        }
        
        return ans; 
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends