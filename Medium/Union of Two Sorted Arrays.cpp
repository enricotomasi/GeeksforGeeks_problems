//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> un;
        int j = 0;
        
        for (int i = 0; i < n; i++)
        {
            //cout << endl << i << " " << j << " " << arr1[i] << " " << arr2[j] << endl;
            if (j >= m - 1)
            {
                //cout << "j >= m - 1 - add arr1[i]: " << arr1[i] << endl;
                un.insert(arr1[i]);
            }
            else
            {
                if (arr1[i] == arr2[j])
                {
                    //cout << "arr1[i] == arr2[j] add one: " << arr1[i]<< endl;
                    un.insert(arr1[i]);
                    j++;
                }
                else if (arr1[i] < arr2[j])
                {
                    //cout << "arr1[i] < arr2[j], add arr1[i]: " << arr1[i] << endl; 
                    un.insert(arr1[i]);
                }
                else
                {
                    //cout << "arr1[i] > arr2[j]"  << endl; 
                    while (j < m && arr1[i] > arr2[j])
                    {
                        //cout <<  "add arr2[j]: " << arr2[j] << endl;
                        un.insert(arr2[j]);
                        j++;
                    }
                    
                    un.insert(arr1[i]);
                    
                }
                
            }
        }
        
        for (int i = j; i < m; i++)
        {
            un.insert(arr2[i]);
        }
        
        //cout << endl << " ***** " << endl;
        
        vector<int> ans;
        
        for (auto it : un)
        {
            ans.push_back(it);
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends