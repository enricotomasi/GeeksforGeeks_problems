//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution
{
  public:
    int bitMagic(int n, vector<int> &arr)
    {
        // code here
        // Hint: Hint 1: Try to count mismatching pairs and try to nullify them .

        int i = 0;
        int j = n-1;
        
        float coppie = 0;
        while (i < j)
        {
            if (arr[i] != arr[j]) coppie++;
            
            i++;
            j--;
        }
        
        return (int)ceil(coppie / 2.0);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.bitMagic(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends