//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class MyHashMap 
{
public:

    //Constructor to initialize the data structure
    MyHashMap()
    {
        arr.resize(10001, -1); 
    }

    //Function to put the key-value pair in the hashmap
    void put(int key, int value)
    {
        arr[key] = value;
    }

    //Function to get the value associated with the given key
    int get(int key)
    {
        return arr[key]; 
    }

    //Function to remove the key-value pair from the hashmap
    void remove(int key)
    {
        arr[key] = -1; 
    }

private:
    vector<int> arr; 
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyHashMap obj;
        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
            if (s == "put") {
                int key, val;
                cin >> key >> val;
                obj.put(key, val);
            }
            else if ( s == "remove") {
                int key;
                cin >> key;
                obj.remove(key);
            }
            else {
                int key;
                cin >> key;
                cout << obj.get(key) << endl;
            }
        }
}
    return 0;
}

// } Driver Code Ends