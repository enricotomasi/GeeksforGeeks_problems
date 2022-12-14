//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 

int Search(vector<int> vec, int K) 
{
    //code here
    int s = 0;
    int e = vec.size()-1;
    
    while (s <= e)
    {
        int pivot = s + (e - s)/2;
        if (vec[pivot] == K) return pivot;
        
        if (vec[s] < vec[pivot])
        {
            if (K >= vec[s] && K < vec[pivot]) e = pivot -1;
            else s = pivot +1;
        }
        else
        {
            if (K > vec[pivot] && K <= vec[e]) s = pivot +1;
            else                               e = pivot -1;
        }
        
    }
    
    return -1;
}