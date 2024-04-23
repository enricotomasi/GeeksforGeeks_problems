//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void rec(int arr[], int n, int pos, vector<string> &ans, unordered_map<int, vector<char>> keypad, string temp)
    {
        if (pos >= n)
        {
            ans.push_back(temp);
            return;
        }
        
        for (auto it : keypad[arr[pos]])
        {
            rec(arr, n, pos + 1, ans, keypad, temp + it);
        }
        
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int, vector<char>> keypad;
        keypad[1] = { ' ' };
        keypad[2] = { 'a', 'b', 'c' };
        keypad[3] = { 'd', 'e', 'f' };
        keypad[4] = { 'g', 'h', 'i' };
        keypad[5] = { 'j', 'k', 'l' };
        keypad[6] = { 'm', 'n', 'o' };
        keypad[7] = { 'p', 'q', 'r', 's' };
        keypad[8] = { 't', 'u', 'v' };
        keypad[9] = { 'w', 'x', 'y', 'z' };

        vector<string> ans;
        
        rec(a, N, 0, ans, keypad, "");
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends
