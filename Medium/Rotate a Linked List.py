# Your task is to complete this function

'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    
    #Function to rotate a linked list.
    def rotate(self, head, k):
        # code here
        copy = head
        
        for i in range(k):
            copy = copy.next
            #print(copy.data)
        
        if copy == None:
            return head

        copy2 = head            
        for i in range(k - 1):
            copy2 = copy2.next
        
        copy2.next = None
        
        ans = copy 
        
        while copy.next is not None:
            copy = copy.next
        
        copy.next = head
        
        #print(f"copy : {copy.data}")
        #print(f"copy2: {copy2.data}")
        #print(f"head : {head.data}")
        
        return ans



#{ 
 # Driver Code Starts
# driver

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def insert(self,val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

def printList(n):
    while n:
        print(n.data, end=' ')
        n = n.next
    print()

if __name__=="__main__":
    for _ in range(int(input())):
        n = int(input())
        arr = [int(x) for x in input().split()]
        k = int(input())
        
        lis = LinkedList()
        for i in arr:
            lis.insert(i)
        
        head = Solution().rotate(lis.head,k)
        printList(head)
# } Driver Code Ends