//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends

/*
    calculate the sum of new rotation from the previous rotations. 
    This brings up a similarity where only the multipliers of first and last element change drastically 
    and the multiplier of every other element increases or decreases by 1. 
    So in this way, the sum of the next rotation can be calculated from the sum of present rotation.
*/


/*You are required to complete this method*/
int max_sum(int A[], int N)
{
    //Your code here
    int ans = 0;
    int temp = 0;
    int temp2 = 0;
    
    for (int i = 0; i < N; i++)
    {
        temp += (i * A[i]);
        temp2 += A[i];
    }
    
    for (int i = N - 1; i >= 0; i--)
    {
        temp += (temp2 - A[i]) - (N - 1) * A[i];
        ans = max(ans, temp);
    }
    
    return ans;
    
    
}
