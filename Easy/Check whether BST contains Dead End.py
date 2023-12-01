# Your task is to complete this function
# function should return true/false or 1/0
import sys
class Solution:
    def isDeadEnd(self, root):
        # Code here
        def ric(root, left, right):
            if root is None:
                return False
            
            if root.data - left == 1 and right - root.data == 1:
                return True
            
            return ric(root.left, left, root.data) or ric(root.right, root.data, right)
        
        return ric(root, 0, sys.maxsize)


            
            
            
#{ 
 # Driver Code Starts

class Node:
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None

def insert(root, node):
    if root is None:
        root = node
    else:
        if root.data < node.data:
            if root.right is None:
                root.right = node
            else:
                insert(root.right, node)
        elif root.data == node.data:
            return
        else:
            if root.left is None:
                root.left = node
            else:
                insert(root.left, node)

def traverseInorder(root):
    if root is not None:
        traverseInorder(root.left)
        print(root.data, end=" ")
        traverseInorder(root.right)

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        root = None
        for j in arr:
            if root is None:
                root = Node(j)
            else:
                insert(root, Node(j))
                
        ob = Solution()
        if ob.isDeadEnd(root):
            print(1)
        else:
            print(0)
# Contributed by: Harshit Sidhwa

# } Driver Code Ends
