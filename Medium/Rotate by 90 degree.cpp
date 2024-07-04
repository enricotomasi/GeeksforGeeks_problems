//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
 
/*

    A N x N matrix will have floor(N/2) square cycles. For example,
    a 4 X 4 matrix will have 2 cycles. The first cycle is formed by 
    its 1st row, last column, last row and 1st column. 
    The second cycle is formed by 2nd row, second-last column, second-last row and 2nd column.
    
    The idea is for each square cycle, we swap the elements involved with the corresponding cell
    in the matrix in anti-clockwise direction i.e.
    from top to left, left to bottom, bottom to right and from right to top one at a time. 
    We use nothing but a temporary variable to achieve this.

*/

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
  
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - i - 1][j];
            matrix[n - i - 1][j] = temp;
        }
    }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends