 
#User function Template for python3

class Solution:
    def longest(self, names, n):
    	# code here
    	massimo = -1;
    	stringaMassima = "";
    	for i in range(n):
    	    if len(names[i]) > massimo:
    	        massimo = len(names[i]);
    	        stringaMassima = names[i];
    	return stringaMassima;

#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
    	n=int(input())
    	names = []
    	for i in range(n):
    		names.append(input())
    	ob = Solution()
    	print(ob.longest(names, n))
    	
    	T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends