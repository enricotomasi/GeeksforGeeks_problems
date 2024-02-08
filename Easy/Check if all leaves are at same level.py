#User function Template for python3

class Solution:
    #Your task is to complete this function
    #function should return True/False or 1/0
    def check(self, root):
        #Code here
        def findLevel(root, level):
            if root is None:
                return -1
            
            if root.left is None and root.right is None:
                #print(f" *** find level: {level}")
                return level
            
            t1 = findLevel(root.left, level + 1)
            t2 = findLevel(root.right, level + 1)
            
            if t1 > 0:
                return t1
            
            return t2
        
        def checkLevel(root, target, level):
            if root is None:
                return True
            
            if root.left is None and root.right is None:
                if target != level:
                    return False
                return True
            
            return checkLevel(root.left, target, level + 1) and checkLevel(root.right, target, level + 1)
        

        target = findLevel(root, 0)
        
        #print(f"Target: {target}")
        
        return checkLevel(root, target, 0)
        
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

from collections import deque
# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None



# Function to Build Tree   
def buildTree(s):
    #Corner Case
    if(len(s)==0 or s[0]=="N"):           
        return None
        
    # Creating list of strings from input 
    # string after spliting by space
    ip=list(map(str,s.split()))
    
    # Create the root of the tree
    root=Node(int(ip[0]))                     
    size=0
    q=deque()
    
    # Push the root to the queue
    q.append(root)                            
    size=size+1 
    
    # Starting from the second element
    i=1                                       
    while(size>0 and i<len(ip)):
        # Get and remove the front of the queue
        currNode=q[0]
        q.popleft()
        size=size-1
        
        # Get the current node's value from the string
        currVal=ip[i]
        
        # If the left child is not null
        if(currVal!="N"):
            
            # Create the left child for the current node
            currNode.left=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.left)
            size=size+1
        # For the right child
        i=i+1
        if(i>=len(ip)):
            break
        currVal=ip[i]
        
        # If the right child is not null
        if(currVal!="N"):
            
            # Create the right child for the current node
            currNode.right=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.right)
            size=size+1
        i=i+1
    return root
    
    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        root=buildTree(s)
        if Solution().check(root):
            print(1)
        else:
            print(0)



# } Driver Code Ends
