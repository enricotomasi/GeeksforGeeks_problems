//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void printPostOrder(int in[], int pre[], int n);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int pre[N],in[N];
        for(int i=0;i<N;i++)
            cin>>in[i];
        for(int i=0;i<N;i++)
            cin>>pre[i];
        printPostOrder(in,pre,N);
        cout<<endl;

    }
}

// } Driver Code Ends


/*prints the post order traversal of the 
tree */
struct nodo
{
    int data;
    nodo *left;
    nodo *right;
    nodo (int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void stampa(nodo *root)
{
    if (!root)
    return;

    stampa(root->left);
    stampa(root->right);
    cout << root->data << " ";

}

nodo *stampaPost(int arr[], int startpre, int finePre, int in[], int inizioIn, int fineIn, unordered_map<int,int>mappa)
{   
    if (startpre > finePre || inizioIn > fineIn) return NULL;
    
    nodo *root = new nodo(arr[startpre]);
    int si = mappa[arr[startpre]]; 
    int bigger = si-inizioIn;
    root->left = stampaPost(arr,startpre+1, startpre+bigger, in, inizioIn, si-1, mappa);
    root->right = stampaPost(arr, startpre+ bigger+1, finePre, in, si+1, fineIn, mappa);
    return root;
}



void printPostOrder(int in[], int arr[], int n)
{
    //Your code here
    unordered_map<int,int> mappa;
    for (int i=0; i<n; i++)
    {
        mappa[in[i]] = i;
    }

    nodo *root = stampaPost(arr, 0, n-1, in, 0, n-1, mappa);
    stampa(root);
}

