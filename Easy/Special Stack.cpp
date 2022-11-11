//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends

int m;
bool isFull(stack<int>& s,int n)
{
	// Your code goes here
	if(s.size() == n) return true;
	return false;
}

bool isEmpty(stack<int>& s)
{
	// Your code goes here
	if(s.size() <= 0 ) return true;
	return false;
}

void push(stack<int>& s, int a)
{
        if(s.empty())
        {
            s.push(a);
            m = a;
            return;
        }

        if(a < m)
        {
            int temp = (a * 2) - m;
            s.push(temp);
            m = a;
            return;
        }

        s.push(a);
}

int pop(stack<int>& s)
{
        if(s.empty()) return -1 ;
        
        int el = s.top();

        if(el < m)
        {
            m = (m * 2) - el;
            s.pop();
            return el;
        }

        s.pop();
        return el;
}

int getMin(stack<int>& s)
{
        if(s.empty()) return -1;
        return m;
}

int top()
{
    if(s.top()<m) return m;
    return s.top();
}